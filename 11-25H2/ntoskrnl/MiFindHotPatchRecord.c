/*
 * XREFs of MiFindHotPatchRecord @ 0x140A5618C
 * Callers:
 *     MiApplyRequiredDriverHotPatches @ 0x1406EFDD4 (MiApplyRequiredDriverHotPatches.c)
 *     MmInsertSecureImageActivePatch @ 0x1407E61F0 (MmInsertSecureImageActivePatch.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A1DD10 (MiFindProcessImageHotPatchRecord.c)
 *     MmRegisterHotPatches @ 0x140C4599C (MmRegisterHotPatches.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiCompareHotPatchNodes @ 0x1407E25E4 (MiCompareHotPatchNodes.c)
 *     RtlIsPatchMachineApplicable @ 0x14081F62C (RtlIsPatchMachineApplicable.c)
 *     RtlDuplicateUnicodeString @ 0x140932190 (RtlDuplicateUnicodeString.c)
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
  __int64 *v14; // rbx
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
    v14 = KeAbPreAcquire((__int64)&qword_140E37250, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37250, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E37250, 0, v14, (unsigned __int64)&qword_140E37250);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37250, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E37250);
    KeAbPostRelease((ULONG_PTR)&qword_140E37250);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v12;
}
