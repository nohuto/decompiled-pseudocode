/*
 * XREFs of memcpy_s_3 @ 0x1802DFCA8
 * Callers:
 *     _dynamic_initializer_for__c_bootModeTypeQueryParam__ @ 0x180012B30 (_dynamic_initializer_for__c_bootModeTypeQueryParam__.c)
 *     ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x18005332C (-to_hstring@winrt@@YA-AUhstring@1@AEBUguid@1@@Z.c)
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800534A0 (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x180053D00 (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800546F0 (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180054754 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800547B8 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::_dynamic_initializer_for__c_snapWindowId__ @ 0x180054C60 (winrt--Windows--Internal--Shell--implementation--_dynamic_initializer_for__c_snapWindowId__.c)
 *     ??$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_tag@1@@Z @ 0x1800DD154 (--$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_.c)
 *     ??$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uansistring_tag@1@@Z @ 0x1800DD2F4 (--$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uans.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DD450 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DD540 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@@Z @ 0x1800DD670 (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@A.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DD708 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DD78C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800DDAE4 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DE248 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800DE5DC (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DEA48 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x180178A84 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x180182DEC (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1802D24B6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_3(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v8; // rax
  errno_t v9; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_4;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_4:
    v8 = (errno_t *)_o__errno(Destination, DestinationSize);
    v9 = 22;
LABEL_5:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = (errno_t *)_o__errno(Destination, DestinationSize);
    v9 = 34;
    goto LABEL_5;
  }
  return 22;
}
