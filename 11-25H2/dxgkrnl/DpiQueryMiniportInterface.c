/*
 * XREFs of DpiQueryMiniportInterface @ 0x140188CC4
 * Callers:
 *     DpiFdoInitializeMipiDsi @ 0x140061900 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoInitializeDP @ 0x14007CEF0 (DpiFdoInitializeDP.c)
 *     DpiFdoInitializeDisplayDiagnostics @ 0x14007CFE8 (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiFdoInitializeFdo @ 0x14023C19C (DpiFdoInitializeFdo.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x140246914 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x140246BA0 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x140246CEC (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFeatureStartDevice @ 0x1402470C8 (DpiFeatureStartDevice.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1402479E0 (DpiFdoHandleQueryThermalInterface.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x140404394 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     DpiDxgkDdiQueryInterface @ 0x1402BEA3C (DpiDxgkDdiQueryInterface.c)
 */

__int64 __fastcall DpiQueryMiniportInterface(__int64 a1, __int64 a2, __int16 a3, __int16 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+28h] [rbp-30h]
  __int16 v12; // [rsp+2Ah] [rbp-2Eh]
  int v13; // [rsp+2Ch] [rbp-2Ch]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]
  int v17; // [rsp+44h] [rbp-14h]

  v13 = 0;
  v6 = -1073741637;
  v17 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL) )
  {
    v15 = 0LL;
    v11 = a3;
    v14 = a6;
    v10 = a2;
    v12 = a4;
    v16 = -1;
    v8 = DpiDxgkDdiQueryInterface(*(_QWORD *)(v7 + 40), *(_QWORD *)(v7 + 48), &v10);
    v6 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(4LL, v8);
      WdLogGlobalForLineNumber = 2528;
    }
  }
  return v6;
}
