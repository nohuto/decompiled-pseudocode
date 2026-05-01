/*
 * XREFs of ?_com_issue_error@@YAXJ@Z @ 0x1802DDDA4
 * Callers:
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180165764 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180165B24 (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180165DFC (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x180165E50 (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801CCE24 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x1801CD024 (--1_variant_t@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x1801F0454 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x180232928 (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ??4_variant_t@@QEAAAEAV0@AEBV0@@Z @ 0x1802C7880 (--4_variant_t@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x1802CF050 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x180676F98 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn _com_issue_error(char *a1)
{
  int v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x29,
    (int)"pcshell\\twinui\\dll\\twinui.cpp",
    (const char *)(unsigned int)a1,
    v1);
}
