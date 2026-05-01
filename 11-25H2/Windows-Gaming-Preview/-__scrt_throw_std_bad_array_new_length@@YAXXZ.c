/*
 * XREFs of ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180010E90
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180002240 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000C6D4 (--$_Emplace_reallocate@AEBV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ??$_Reallocate@$0A@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXAEA_K@Z @ 0x180013D48 (--$_Reallocate@$0A@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180013E5C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180002E20 (_CxxThrowException_0.c)
 *     ??0bad_array_new_length@std@@QEAA@XZ @ 0x18000D138 (--0bad_array_new_length@std@@QEAA@XZ.c)
 */

void __noreturn __scrt_throw_std_bad_array_new_length(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_array_new_length::bad_array_new_length((std::bad_array_new_length *)pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}
