/*
 * XREFs of ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x1800899C8
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180089600 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180089D90 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004AB48 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x180087E10 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::GetFileNameForRule(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  std::wstring::wstring((__int64)a2, a3);
  std::wstring::append(a2, L".xml");
  return a2;
}
