/*
 * XREFs of MiFindHotPatchRecord @ 0x140A4EF38
 * Callers:
 *     MiApplyRequiredDriverHotPatches @ 0x1406F9884 (MiApplyRequiredDriverHotPatches.c)
 *     MmInsertSecureImageActivePatch @ 0x1407F67F4 (MmInsertSecureImageActivePatch.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A26708 (MiFindProcessImageHotPatchRecord.c)
 *     MmRegisterHotPatches @ 0x140C58E0C (MmRegisterHotPatches.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiCompareHotPatchNodes @ 0x1407F2A54 (MiCompareHotPatchNodes.c)
 *     RtlIsPatchMachineApplicable @ 0x14082FB64 (RtlIsPatchMachineApplicable.c)
 *     RtlDuplicateUnicodeString @ 0x1409287C0 (RtlDuplicateUnicodeString.c)
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
  char *v14; // rbx
  bool v15; // zf
  __int128 v16; // [rsp+28h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  int v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+44h] [rbp-34h]
  __int128 v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  v17 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v18 = a3;
  v19 = a4;
  if ( !a2 )
  {
    --CurrentThread->SpecialApcDisable;
    v14 = (char *)KeAbPreAcquire((__int64)&qword_140E375D0, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E375D0, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E375D0, 0, v14, (__int64)&qword_140E375D0);
    if ( v14 )
      v14[10] = 1;
  }
  v10 = *a1;
  while ( v10 )
  {
    v11 = MiCompareHotPatchNodes((__int64)&v16, v10);
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E375D0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E375D0);
    KeAbPostRelease((ULONG_PTR)&qword_140E375D0);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v12;
}
