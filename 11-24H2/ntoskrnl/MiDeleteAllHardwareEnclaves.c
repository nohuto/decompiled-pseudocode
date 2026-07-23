/*
 * XREFs of MiDeleteAllHardwareEnclaves @ 0x140B655BC
 * Callers:
 *     ExRebootSystemForRecovery @ 0x1406520CC (ExRebootSystemForRecovery.c)
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeRemoveEnclavePage @ 0x14046D340 (KeRemoveEnclavePage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiDeleteEnclavePages @ 0x140B6FC18 (MiDeleteEnclavePages.c)
 */

_QWORD *MiDeleteAllHardwareEnclaves()
{
  struct _KTHREAD *CurrentThread; // rdi
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rbx
  __int64 v4; // rsi
  _KPROCESS *v5; // r15
  unsigned __int64 v6; // r14
  bool v7; // zf
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rsi
  char *v13; // rax
  char *v14; // rsi
  _QWORD *result; // rax
  int v16; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v17[3]; // [rsp+28h] [rbp-50h] BYREF

  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease(&stru_140E37638);
  --CurrentThread->SpecialApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&qword_140E37630, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37630, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140E37630, v1, (__int64)&qword_140E37630);
  if ( v3 )
    v3[10] = 1;
  while ( 1 )
  {
    v4 = qword_140E37620;
    if ( (__int64 *)qword_140E37620 == &qword_140E37620 )
      break;
    v5 = *(_KPROCESS **)(qword_140E37620 - 8);
    ObfReferenceObjectWithTag(v5, 0x6D566D4Du);
    v6 = (*(unsigned int *)(v4 - 104) | ((unsigned __int64)*(unsigned __int8 *)(v4 - 96) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37630, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37630);
    KeAbPostRelease((ULONG_PTR)&qword_140E37630);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KiStackAttachProcess(v5, 0, (__int64)v17);
    v9 = MiObtainReferencedVadEx(v6, 0LL, &v16, v8);
    v12 = (void *)v9;
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 48) & 0xC200000) == 0x8200000 && (*(_DWORD *)(v9 + 64) & 1) != 0 )
        MiDeleteEnclavePages(v5, v9);
      MiUnlockAndDereferenceVad(v12);
    }
    KiUnstackDetachProcess((__int64)v17, 0, v10, v11);
    ObfDereferenceObjectWithTag(v5, 0x6D566D4Du);
    --CurrentThread->SpecialApcDisable;
    v13 = (char *)KeAbPreAcquire((__int64)&qword_140E37630, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37630, 0LL);
    v14 = v13;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(&qword_140E37630, v13, (__int64)&qword_140E37630);
    if ( v14 )
      v14[10] = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37630, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37630);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&qword_140E37630);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery();
  }
  if ( qword_140E37600 )
    return (_QWORD *)KeRemoveEnclavePage(qword_140E37600);
  return result;
}
