/*
 * XREFs of NtChangeProcessState @ 0x140765BE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PsFreezeProcess @ 0x140AC7BE0 (PsFreezeProcess.c)
 */

NTSTATUS __cdecl NtChangeProcessState(
        HANDLE ProcessStateChangeHandle,
        HANDLE ProcessHandle,
        PROCESS_STATE_CHANGE_TYPE StateChangeType,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 Reserved)
{
  NTSTATUS v8; // edi
  int v9; // eax
  PVOID v10; // rcx
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v12; // r14
  char *v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rdi
  _DWORD *v16; // rdi
  _DWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v23; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v23 = 0LL;
  if ( (unsigned int)StateChangeType >= ProcessStateChangeMax )
    return -1073741821;
  if ( (_DWORD)ExtendedInformationLength )
    return -1073741820;
  if ( ExtendedInformation || (_DWORD)Reserved )
    return -1073741811;
  v8 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessStateChangeHandle, 0x63507350u, (__int64)&v23, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v9 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x63507350u, (__int64)&Object, 0LL, 0LL);
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
      ExfAcquirePushLockExclusiveEx(v12, v14, (__int64)v12);
    if ( v15 )
      *((_BYTE *)v15 + 10) = 1;
    if ( StateChangeType )
    {
      if ( StateChangeType == ProcessStateChangeResume )
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
  return v8;
}
