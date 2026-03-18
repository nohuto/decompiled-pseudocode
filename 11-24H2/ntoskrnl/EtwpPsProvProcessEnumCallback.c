/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x14093A830
 * Callers:
 *     EtwpPsProvCaptureState @ 0x1407B15C4 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PsSetProcessTelemetryAppState @ 0x1409394B0 (PsSetProcessTelemetryAppState.c)
 *     EtwpIsProcessZombie @ 0x14094B084 (EtwpIsProcessZombie.c)
 *     EtwpQueryTokenPackageInfo @ 0x14094B90C (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14094BC44 (EtwpQueryProcessOtherInfo.c)
 *     EtwpPsProvTraceProcess @ 0x14094D000 (EtwpPsProvTraceProcess.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(_KPROCESS *BugCheckParameter1, _BYTE *a2)
{
  char v4; // si
  struct _KPROCESS *v5; // rcx
  bool v7; // zf
  ULONG_PTR v8; // r14
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v11[3]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[672]; // [rsp+70h] [rbp-90h] BYREF

  v10 = 0LL;
  v4 = 0;
  memset(v11, 0, sizeof(v11));
  memset_0(v12, 0, sizeof(v12));
  if ( !(unsigned int)EtwpIsProcessZombie(BugCheckParameter1) )
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
      v7 = BugCheckParameter1 == PsIdleProcess;
      a2[8] = 0;
      if ( !v7
        && KeGetCurrentThread()->ApcState.Process != BugCheckParameter1
        && ExAcquireRundownProtection((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink) )
      {
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v11);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v9 = 0;
        v8 = PsReferencePrimaryTokenWithTag((__int64)BugCheckParameter1, 0x746C6644u);
        EtwpQueryTokenPackageInfo(v8, v12, &v9);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo(BugCheckParameter1, &v10);
        ObFastDereferenceObject((__int64 *)&BugCheckParameter1[1].ActiveProcessors, v8, 0x746C6644u);
        EtwpPsProvTraceProcess((_DWORD)BugCheckParameter1, v9, (unsigned int)v12, (unsigned int)&v10, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess((__int64)v11, 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&BugCheckParameter1[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
