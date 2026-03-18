/*
 * XREFs of MiDeleteAllHardwareEnclaves @ 0x140B5339C
 * Callers:
 *     ExRebootSystemForRecovery @ 0x140647A6C (ExRebootSystemForRecovery.c)
 *     MiShutdownSystem @ 0x140B52044 (MiShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeRemoveEnclavePage @ 0x1403FC880 (KeRemoveEnclavePage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiDeleteEnclavePages @ 0x140B5F0CC (MiDeleteEnclavePages.c)
 */

_QWORD *MiDeleteAllHardwareEnclaves()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rbx
  __int64 v4; // rsi
  _KPROCESS *v5; // r15
  unsigned __int64 v6; // r14
  bool v7; // zf
  __int64 v8; // rax
  char *v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // rsi
  _QWORD *result; // rax
  int v13; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v14[3]; // [rsp+28h] [rbp-50h] BYREF

  memset(v14, 0, sizeof(v14));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease(&stru_140E372B8);
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140E372B0, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E372B0, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140E372B0, v1, (__int64)&qword_140E372B0);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  while ( 1 )
  {
    v4 = qword_140E372A0;
    if ( (__int64 *)qword_140E372A0 == &qword_140E372A0 )
      break;
    v5 = *(_KPROCESS **)(qword_140E372A0 - 8);
    ObfReferenceObjectWithTag(v5, 0x6D566D4Du);
    v6 = (*(unsigned int *)(v4 - 104) | ((unsigned __int64)*(unsigned __int8 *)(v4 - 96) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E372B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E372B0);
    KeAbPostRelease((ULONG_PTR)&qword_140E372B0);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KiStackAttachProcess(v5, 0, (__int64)v14);
    v8 = MiObtainReferencedVadEx(v6, 0, &v13);
    v9 = (char *)v8;
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 48) & 0xC200000) == 0x8200000 && (*(_DWORD *)(v8 + 64) & 1) != 0 )
        MiDeleteEnclavePages(v5, v8);
      MiUnlockAndDereferenceVad(v9);
    }
    KiUnstackDetachProcess((__int64)v14, 0LL);
    ObfDereferenceObjectWithTag(v5, 0x6D566D4Du);
    --CurrentThread->SpecialApcDisable;
    v10 = KeAbPreAcquire((__int64)&qword_140E372B0, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E372B0, 0LL);
    v11 = v10;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(&qword_140E372B0, v10, (__int64)&qword_140E372B0);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E372B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E372B0);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&qword_140E372B0);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery();
  }
  if ( qword_140E37280 )
    return (_QWORD *)KeRemoveEnclavePage(qword_140E37280);
  return result;
}
