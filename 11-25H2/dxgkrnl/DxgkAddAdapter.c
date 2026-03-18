/*
 * XREFs of DxgkAddAdapter @ 0x14040C750
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14040C830 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
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
      262146,
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
