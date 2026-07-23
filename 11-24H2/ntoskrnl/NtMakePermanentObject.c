/*
 * XREFs of NtMakePermanentObject @ 0x140A7B1D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtMakePermanentObject(HANDLE Handle)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  NTSTATUS v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rbx
  char *v7; // rcx
  char *v8; // rax
  char *v9; // rdi
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  unsigned __int64 v12; // rtt
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    return -1073741727;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, &Object, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (unsigned __int64 *)((char *)Object - 32);
    v7 = (char *)Object - 32;
    --CurrentThread->KernelApcDisable;
    v8 = (char *)KeAbPreAcquire((__int64)v7, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v8, (__int64)v6);
    if ( v9 )
      v9[10] = 1;
    *((char *)Object - 21) |= 0x10u;
    _m_prefetchw(v6);
    v10 = *v6;
    v11 = *v6 - 16;
    if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v11 = 0LL;
    if ( (v10 & 2) != 0 || (v12 = *v6, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v11, v10)) )
      ExfReleasePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
