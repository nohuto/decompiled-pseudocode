/*
 * XREFs of MiDeleteAllHardwareEnclaves @ 0x140B634EC
 * Callers:
 *     ExRebootSystemForRecovery @ 0x14065396C (ExRebootSystemForRecovery.c)
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KeRemoveEnclavePage @ 0x1403D1AF0 (KeRemoveEnclavePage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiDeleteEnclavePages @ 0x140B6E178 (MiDeleteEnclavePages.c)
 */

_QWORD *MiDeleteAllHardwareEnclaves()
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  _KPROCESS *v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  void *v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  _QWORD *result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v18[3]; // [rsp+28h] [rbp-50h] BYREF

  memset(v18, 0, sizeof(v18));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease(&stru_140E374F8);
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140E374F0, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E374F0, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140E374F0, (__int64)v1, (__int64)&qword_140E374F0);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  while ( 1 )
  {
    v4 = qword_140E374E0;
    if ( (__int64 *)qword_140E374E0 == &qword_140E374E0 )
      break;
    v5 = *(_KPROCESS **)(qword_140E374E0 - 8);
    ObfReferenceObjectWithTag(v5, 0x6D566D4Du);
    v6 = (*(unsigned int *)(v4 - 104) | ((unsigned __int64)*(unsigned __int8 *)(v4 - 96) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E374F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E374F0);
    KeAbPostRelease((ULONG_PTR)&qword_140E374F0);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v8, v7);
    KiStackAttachProcess(v5, 0, (__int64)v18);
    v10 = MiObtainReferencedVadEx(v6, 0LL, &v17);
    v11 = (void *)v10;
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 48) & 0xC200000) == 0x8200000 && (*(_DWORD *)(v10 + 64) & 1) != 0 )
        MiDeleteEnclavePages(v5, v10);
      MiUnlockAndDereferenceVad(v11);
    }
    KiUnstackDetachProcess((__int64)v18, 0);
    ObfDereferenceObjectWithTag(v5, 0x6D566D4Du);
    --CurrentThread->SpecialApcDisable;
    v12 = KeAbPreAcquire((__int64)&qword_140E374F0, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E374F0, 0LL);
    v13 = v12;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(&qword_140E374F0, (__int64)v12, (__int64)&qword_140E374F0);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E374F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E374F0);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&qword_140E374F0);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery(v16, v15);
  }
  if ( qword_140E374C0 )
    return (_QWORD *)KeRemoveEnclavePage(qword_140E374C0);
  return result;
}
