/*
 * XREFs of NtChangeProcessState @ 0x1407757D0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsFreezeProcess @ 0x140ACF964 (PsFreezeProcess.c)
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
  char *v14; // rax
  char *v15; // rdi
  _DWORD *v16; // rdi
  _DWORD *v17; // rdi
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v20; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v20 = 0LL;
  if ( (unsigned int)StateChangeType >= ProcessStateChangeMax )
    return -1073741821;
  if ( (_DWORD)ExtendedInformationLength )
    return -1073741820;
  if ( ExtendedInformation || (_DWORD)Reserved )
    return -1073741811;
  v8 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessStateChangeHandle, 0x63507350u, (__int64)&v20, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v9 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x63507350u, (__int64)&Object, 0LL, 0LL);
    v10 = Object;
    v8 = v9;
    if ( v9 < 0 )
      goto LABEL_30;
    if ( *(PVOID *)v20 != Object )
    {
      v8 = -1073741811;
LABEL_30:
      if ( v10 )
        ObfDereferenceObjectWithTag(v10, 0x63507350u);
      goto LABEL_32;
    }
    CurrentThread = KeGetCurrentThread();
    v12 = (unsigned __int64 *)((char *)v20 + 8);
    v13 = (char *)v20 + 8;
    --CurrentThread->KernelApcDisable;
    v14 = (char *)KeAbPreAcquire((__int64)v13, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12, v14, (__int64)v12);
    if ( v15 )
      v15[10] = 1;
    if ( StateChangeType )
    {
      if ( StateChangeType == ProcessStateChangeResume )
      {
        v16 = v20;
        if ( !*((_DWORD *)v20 + 4) )
        {
          v8 = -1073741811;
LABEL_27:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v12);
          KeAbPostRelease((ULONG_PTR)v12);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          v10 = Object;
          goto LABEL_30;
        }
        PsThawMultiProcess((__int64)Object, 0, 1u);
        --v16[4];
      }
    }
    else
    {
      v17 = v20;
      if ( *((_DWORD *)v20 + 4) == -1 )
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
  if ( v20 )
    ObfDereferenceObjectWithTag(v20, 0x63507350u);
  return v8;
}
