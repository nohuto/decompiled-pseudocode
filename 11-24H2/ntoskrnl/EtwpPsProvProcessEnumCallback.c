/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x140A56950
 * Callers:
 *     EtwpPsProvCaptureState @ 0x1407B1A14 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpIsProcessZombie @ 0x1408EF5F4 (EtwpIsProcessZombie.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408EFE7C (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1408F01B4 (EtwpQueryProcessOtherInfo.c)
 *     EtwpPsProvTraceProcess @ 0x1408F1570 (EtwpPsProvTraceProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x1408F3B80 (PsSetProcessTelemetryAppState.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(_KPROCESS *BugCheckParameter1, _BYTE *a2)
{
  char v4; // si
  struct _EX_RUNDOWN_REF *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v9; // zf
  void *v10; // r14
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v13[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int PackageSize[168]; // [rsp+70h] [rbp-90h] BYREF

  v12 = 0LL;
  v4 = 0;
  memset(v13, 0, sizeof(v13));
  memset_0(PackageSize, 0, sizeof(PackageSize));
  if ( !EtwpIsProcessZombie((__int64)BugCheckParameter1) )
  {
    if ( a2[9] )
    {
      if ( (*a2 & 1) != 0
        && BugCheckParameter1 != PsIdleProcess
        && (BugCheckParameter1[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
      {
        PsSetProcessTelemetryAppState(v5, 5);
      }
    }
    else
    {
      v9 = BugCheckParameter1 == PsIdleProcess;
      a2[8] = 0;
      if ( !v9
        && KeGetCurrentThread()->ApcState.Process != BugCheckParameter1
        && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink) )
      {
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v13);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v11 = 0;
        v10 = (void *)PsReferencePrimaryTokenWithTag((__int64)BugCheckParameter1, 0x746C6644u);
        EtwpQueryTokenPackageInfo(v10, (WCHAR *)PackageSize, &v11);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)BugCheckParameter1, (__int64)&v12);
        ObFastDereferenceObject((__int64 *)&BugCheckParameter1[1].ActiveProcessors, (ULONG_PTR)v10, 0x746C6644u);
        EtwpPsProvTraceProcess((__int64)BugCheckParameter1, v11, PackageSize, (int *)&v12, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess((__int64)v13, 0, v6, v7);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
