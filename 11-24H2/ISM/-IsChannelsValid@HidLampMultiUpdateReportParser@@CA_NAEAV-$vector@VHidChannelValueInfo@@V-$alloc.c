/*
 * XREFs of ?IsChannelsValid@HidLampMultiUpdateReportParser@@CA_NAEAV?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@_J1PEAH@Z @ 0x1800999D0
 * Callers:
 *     ?IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z @ 0x1800EDBE0 (-IsParserValid@HidLampMultiUpdateReportParser@@CA_NPEBGAEBUHardwareAttributes@@PEAV1@@Z.c)
 * Callees:
 *     ?IsValid@HidChannelValueInfo@@QEBA_N_J0@Z @ 0x1800EEDF0 (-IsValid@HidChannelValueInfo@@QEBA_N_J0@Z.c)
 */

char __fastcall HidLampMultiUpdateReportParser::IsChannelsValid(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // r10

  *a4 = 0;
  v4 = 0LL;
  v5 = *a1;
  v7 = 0x8E38E38E38E38E39uLL * ((a1[1] - *a1) >> 3);
  v8 = *a1 + 12;
  while ( v4 < v7 )
  {
    if ( !HidChannelValueInfo::IsValid((HidChannelValueInfo *)(v8 - 12), v7, a3) )
      return 0;
    v4 = v10 + 1;
    v8 = v9 + 72;
  }
  if ( v7 )
    *a4 = *(_DWORD *)(v5 + 32);
  return 1;
}
