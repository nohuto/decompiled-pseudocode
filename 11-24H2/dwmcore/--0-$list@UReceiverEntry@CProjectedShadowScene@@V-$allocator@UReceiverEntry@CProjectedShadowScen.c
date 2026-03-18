/*
 * XREFs of ??0?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAA@XZ @ 0x18024CB04
 * Callers:
 *     ??0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z @ 0x18022BA80 (--0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<CProjectedShadowScene::ReceiverEntry>::list<CProjectedShadowScene::ReceiverEntry>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x78uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
