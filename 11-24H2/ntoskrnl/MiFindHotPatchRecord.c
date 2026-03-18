/*
 * XREFs of MiFindHotPatchRecord @ 0x140A570A8
 * Callers:
 *     MiApplyRequiredDriverHotPatches @ 0x1406FBC44 (MiApplyRequiredDriverHotPatches.c)
 *     MmInsertSecureImageActivePatch @ 0x1407F6080 (MmInsertSecureImageActivePatch.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A326F0 (MiFindProcessImageHotPatchRecord.c)
 *     MmRegisterHotPatches @ 0x140C56C7C (MmRegisterHotPatches.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MiCompareHotPatchNodes @ 0x1407F2484 (MiCompareHotPatchNodes.c)
 *     RtlIsPatchMachineApplicable @ 0x14082F36C (RtlIsPatchMachineApplicable.c)
 *     RtlDuplicateUnicodeString @ 0x140926680 (RtlDuplicateUnicodeString.c)
 */

__int64 __fastcall MiFindHotPatchRecord(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        unsigned __int16 a5,
        _DWORD *a6,
        PUNICODE_STRING StringOut)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // rbx
  int v11; // eax
  NTSTATUS v12; // edi
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  __int128 v18; // [rsp+28h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  int v20; // [rsp+40h] [rbp-38h]
  int v21; // [rsp+44h] [rbp-34h]
  __int128 v22; // [rsp+48h] [rbp-30h]
  __int64 v23; // [rsp+58h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  v18 = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v20 = a3;
  v21 = a4;
  if ( !a2 )
  {
    --CurrentThread->SpecialApcDisable;
    v14 = KeAbPreAcquire((__int64)&qword_140E37490, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37490, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E37490, 0, v14, (__int64)&qword_140E37490);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
  }
  v10 = *a1;
  while ( v10 )
  {
    v11 = MiCompareHotPatchNodes((__int64)&v18, v10);
    if ( v11 >= 0 )
    {
      if ( v11 <= 0 )
        break;
      v10 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v10;
    }
  }
  if ( v10 && (!a5 || RtlIsPatchMachineApplicable(a5, *(_DWORD *)(v10 + 36))) )
  {
    if ( !StringOut || (v12 = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(v10 + 40), StringOut), v12 >= 0) )
    {
      if ( a6 )
        *a6 = *(_DWORD *)(v10 + 32);
      v12 = 0;
    }
  }
  else
  {
    v12 = -1073741275;
  }
  if ( !a2 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37490, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E37490);
    KeAbPostRelease((ULONG_PTR)&qword_140E37490);
    v17 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v17 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v16, v15);
  }
  return (unsigned int)v12;
}
