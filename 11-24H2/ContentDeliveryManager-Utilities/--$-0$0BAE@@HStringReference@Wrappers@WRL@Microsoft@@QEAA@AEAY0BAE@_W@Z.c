/*
 * XREFs of ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x180088D4C
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180089A30 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18008A1C0 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180094628 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@@Z @ 0x18009789C (-SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@Applicat.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D44C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180036FEC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        unsigned int a3)
{
  unsigned __int64 v5; // rbx
  UINT32 v6; // eax

  v5 = -1LL;
  do
    ++v5;
  while ( sourceString[v5] );
  if ( v5 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    JUMPOUT(0x180088DAFLL);
  }
  v6 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v5, (int)sourceString, a3);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(hstringHeader, sourceString, v6, v5);
  return hstringHeader;
}
