/*
 * XREFs of ?AreValidUris@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x180622808
 * Callers:
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18010EB48 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x180634878 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 */

bool __fastcall CopilotHotkeyManager::AreValidUris(
        CopilotHotkeyManager *this,
        const struct TargetAppExtensionDetails *a2)
{
  _WORD *v2; // r8
  _QWORD *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rdx
  CopilotHotkeyManager *v6; // rcx
  const struct TargetAppExtensionDetails *v7; // r10

  v2 = (_WORD *)((char *)a2 + 144);
  v3 = (_QWORD *)((char *)a2 + 104);
  v4 = *((_QWORD *)a2 + 20);
  if ( *((_QWORD *)a2 + 21) > 7uLL )
    v2 = *(_WORD **)v2;
  v5 = *((_QWORD *)a2 + 15);
  if ( v3[3] > 7uLL )
    v3 = (_QWORD *)*v3;
  return !std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v3, v5, v2, v4)
      && *((_QWORD *)v7 + 15)
      && *((_QWORD *)v7 + 20)
      && CopilotHotkeyManager::SchemaNameAreRegisteredProtocol(v6, v7);
}
