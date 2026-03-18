/*
 * XREFs of ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802BB5B4
 * Callers:
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x18004554C (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     ?ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18005B770 (-ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 * Callees:
 *     McTemplateU0qq_EventWriteTransfer @ 0x180040084 (McTemplateU0qq_EventWriteTransfer.c)
 */

void __fastcall CD2DContext::AddHwProtectedResource(CD2DContext *this)
{
  int v1; // r8d

  v1 = *((_DWORD *)this + 108);
  *((_DWORD *)this + 108) = v1 + 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE,
      v1,
      v1 + 1);
}
