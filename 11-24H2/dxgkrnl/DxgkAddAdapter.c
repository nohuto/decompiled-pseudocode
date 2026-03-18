/*
 * XREFs of DxgkAddAdapter @ 0x1404055E4
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 */

__int64 __fastcall DxgkAddAdapter(PDEVICE_OBJECT DeviceObject, void *a2, struct _DXGK_ADAPTER_CAPS *a3, _DWORD *a4)
{
  DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // [rsp+28h] [rbp-30h]
  struct DXGADAPTER *v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !DeviceObject || !a2 || !a3 || !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 165;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pDeviceObject != nullptr) && (PnPTransitionToken != nullptr) && (pAdapterCaps != nullptr) && (pAdapterDisplayCaps != nullptr)",
      165LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  result = DXGGLOBAL::CreateAdapter(Global, DeviceObject, &v12, a2, a3, v11);
  if ( (int)result >= 0 )
  {
    v10 = *((_QWORD *)v12 + 390);
    if ( v10 )
      *a4 = *(_DWORD *)(v10 + 24);
  }
  return result;
}
