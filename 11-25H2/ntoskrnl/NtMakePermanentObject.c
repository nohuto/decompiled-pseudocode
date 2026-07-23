/*
 * XREFs of NtMakePermanentObject @ 0x140A7D110
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtMakePermanentObject(HANDLE Handle)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  NTSTATUS v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rbx
  char *v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rdi
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
    v8 = KeAbPreAcquire((__int64)v7, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v8, (__int64)v6);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
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
