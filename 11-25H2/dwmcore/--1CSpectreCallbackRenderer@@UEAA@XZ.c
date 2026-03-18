/*
 * XREFs of ??1CSpectreCallbackRenderer@@UEAA@XZ @ 0x180291088
 * Callers:
 *     ??_GCSpectreCallbackRenderer@@UEAAPEAXI@Z @ 0x1802910C0 (--_GCSpectreCallbackRenderer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x1800C1200 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CSpectreCallbackRenderer::~CSpectreCallbackRenderer(CSpectreCallbackRenderer *this)
{
  std::vector<CDataSourceReader *>::_Tidy((__int64)this + 120);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
}
