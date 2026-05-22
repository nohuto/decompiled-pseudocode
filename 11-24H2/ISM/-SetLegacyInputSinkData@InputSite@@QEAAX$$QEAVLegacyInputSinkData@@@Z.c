/*
 * XREFs of ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x180051F60
 * Callers:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18001B830 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 * Callees:
 *     ??0LegacyInputSinkData@@QEAA@$$QEAV0@@Z @ 0x180051FF4 (--0LegacyInputSinkData@@QEAA@$$QEAV0@@Z.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180052188 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ?GetHwndAsInputSiteId@LegacyInputSinkData@@QEBA_KXZ @ 0x1800521F0 (-GetHwndAsInputSiteId@LegacyInputSinkData@@QEBA_KXZ.c)
 *     ?reset@?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ @ 0x1800523A8 (-reset@-$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ.c)
 *     ?GetProcessId@LegacyInputSinkData@@QEBAIXZ @ 0x1800523D4 (-GetProcessId@LegacyInputSinkData@@QEBAIXZ.c)
 *     ?SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z @ 0x1800525B4 (-SetIdForNamespace@InputSite@@AEAAXW4InputSiteIdNamespace@@_K@Z.c)
 */

__int64 __fastcall InputSite::SetLegacyInputSinkData(__int64 a1, LegacyInputSinkData *a2)
{
  unsigned __int64 HwndAsInputSiteId; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h]

  v6 = (__int64)*LegacyInputSinkData::GetLuid(a2);
  InputSite::SetIdForNamespace(a1, 0LL, v6);
  HwndAsInputSiteId = LegacyInputSinkData::GetHwndAsInputSiteId(a2);
  if ( HwndAsInputSiteId )
    InputSite::SetIdForNamespace(a1, 1LL, HwndAsInputSiteId);
  if ( !*(_DWORD *)(a1 + 40) )
    *(_DWORD *)(a1 + 40) = LegacyInputSinkData::GetProcessId(a2);
  std::_Optional_destruct_base<LegacyInputSinkData,0>::reset(a1 + 48);
  result = LegacyInputSinkData::LegacyInputSinkData(a1 + 48, a2);
  *(_BYTE *)(a1 + 480) = 1;
  return result;
}
