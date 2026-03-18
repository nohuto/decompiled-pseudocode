/*
 * XREFs of FxDriverGlobalsInitializeDebugExtension @ 0x140095E2C
 * Callers:
 *     FxRegistrySettingsInitialize @ 0x14006C094 (FxRegistrySettingsInitialize.c)
 * Callees:
 *     FxVerifierQueryStateSeparationDetection @ 0x1400964A8 (FxVerifierQueryStateSeparationDetection.c)
 *     FxVerifierQueryTrackPower @ 0x140096550 (FxVerifierQueryTrackPower.c)
 *     FxVerifierReadObjectDebugInfo @ 0x1400965E4 (FxVerifierReadObjectDebugInfo.c)
 */

void __fastcall FxDriverGlobalsInitializeDebugExtension(_FX_DRIVER_GLOBALS *FxDriverGlobals, void *Key)
{
  __int64 Pool2; // rax
  const wchar_t *v5; // r9
  _QWORD *v6; // rbx
  FxStateSeparationDetectionOption *v7; // r15
  FxTrackPowerOption *v8; // r14
  FxObjectDebugInfo *v9; // rax
  FxObjectDebugInfoFlags v10; // [rsp+20h] [rbp-28h]
  const wchar_t *v11; // [rsp+28h] [rbp-20h]
  FxObjectDebugInfo *Info; // [rsp+50h] [rbp+8h] BYREF

  Pool2 = ExAllocatePool2(64LL, 456LL, FxDriverGlobals->Tag);
  v6 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 440) = 0LL;
    *(_BYTE *)(Pool2 + 432) = 1;
    v7 = (FxStateSeparationDetectionOption *)(Pool2 + 452);
    *(_QWORD *)(Pool2 + 424) = Pool2 + 416;
    v8 = (FxTrackPowerOption *)(Pool2 + 448);
    *(_QWORD *)(Pool2 + 416) = Pool2 + 416;
    *(_DWORD *)(Pool2 + 452) = 0;
    *(_BYTE *)(Pool2 + 448) = 0;
    FxDriverGlobals->DebugExtension = (FxDriverGlobalsDebugExtension *)Pool2;
    if ( Key )
    {
      Info = 0LL;
      FxVerifierReadObjectDebugInfo(Key, FxDriverGlobals, &Info, v5, v10, v11);
      v9 = Info;
      if ( Info )
        FxDriverGlobals->FxVerifyTagTrackingEnabled = 1;
      *v6 = v9;
      FxVerifierQueryTrackPower(Key, v8);
      FxVerifierQueryStateSeparationDetection(Key, v7);
    }
    v6[51] = 0LL;
  }
}
