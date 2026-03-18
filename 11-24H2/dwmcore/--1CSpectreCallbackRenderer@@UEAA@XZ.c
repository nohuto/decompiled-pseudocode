/*
 * XREFs of ??1CSpectreCallbackRenderer@@UEAA@XZ @ 0x180285AE8
 * Callers:
 *     ??_GCSpectreCallbackRenderer@@UEAAPEAXI@Z @ 0x180285B20 (--_GCSpectreCallbackRenderer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x18018C0B8 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CSpectreCallbackRenderer::~CSpectreCallbackRenderer(CSpectreCallbackRenderer *this)
{
  std::vector<CDataSourceReader *>::_Tidy((__int64)this + 120);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
}
