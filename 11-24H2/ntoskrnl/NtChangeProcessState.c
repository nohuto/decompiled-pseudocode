/*
 * XREFs of NtChangeProcessState @ 0x1407755B0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsThawMultiProcess @ 0x1404EEE60 (PsThawMultiProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsFreezeProcess @ 0x14093A750 (PsFreezeProcess.c)
 */

__int64 __fastcall NtChangeProcessState(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v8; // edi
  int v9; // eax
  PVOID v10; // rcx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v12; // r14
  char *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  _DWORD *v16; // rdi
  _DWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v23; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v23 = 0LL;
  if ( a3 >= 2 )
    return (unsigned int)-1073741821;
  if ( a5 )
    return (unsigned int)-1073741820;
  if ( a4 || a6 )
    return (unsigned int)-1073741811;
  v8 = ObpReferenceObjectByHandleWithTag(a1, 0x63507350u, (__int64)&v23, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v9 = ObpReferenceObjectByHandleWithTag(a2, 0x63507350u, (__int64)&Object, 0LL, 0LL);
    v10 = Object;
    v8 = v9;
    if ( v9 < 0 )
      goto LABEL_30;
    if ( *(PVOID *)v23 != Object )
    {
      v8 = -1073741811;
LABEL_30:
      if ( v10 )
        ObfDereferenceObjectWithTag(v10, 0x63507350u);
      goto LABEL_32;
    }
    CurrentThread = KeGetCurrentThread();
    v12 = (unsigned __int64 *)((char *)v23 + 8);
    v13 = (char *)v23 + 8;
    --CurrentThread->KernelApcDisable;
    v14 = KeAbPreAcquire((__int64)v13, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12, (__int64)v14, (__int64)v12);
    if ( v15 )
      *((_BYTE *)v15 + 10) = 1;
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v16 = v23;
        if ( !*((_DWORD *)v23 + 4) )
        {
          v8 = -1073741811;
LABEL_27:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v12);
          KeAbPostRelease((ULONG_PTR)v12);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v18, v19, v20);
          v10 = Object;
          goto LABEL_30;
        }
        PsThawMultiProcess((__int64)Object, 0, 1u);
        --v16[4];
      }
    }
    else
    {
      v17 = v23;
      if ( *((_DWORD *)v23 + 4) == -1 )
      {
        v8 = -1073741750;
        goto LABEL_27;
      }
      if ( !(unsigned __int8)PsFreezeProcess(Object, 0LL) )
      {
        v8 = -1073741558;
        goto LABEL_27;
      }
      ++v17[4];
    }
    v8 = 0;
    goto LABEL_27;
  }
LABEL_32:
  if ( v23 )
    ObfDereferenceObjectWithTag(v23, 0x63507350u);
  return (unsigned int)v8;
}
