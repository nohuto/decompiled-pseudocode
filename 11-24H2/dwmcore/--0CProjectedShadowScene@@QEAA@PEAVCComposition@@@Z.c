/*
 * XREFs of ??0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z @ 0x18022BA80
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAA@XZ @ 0x18024CB04 (--0-$list@UReceiverEntry@CProjectedShadowScene@@V-$allocator@UReceiverEntry@CProjectedShadowScen.c)
 *     ??0?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAA@XZ @ 0x18024CB3C (--0-$list@UCasterEntry@CProjectedShadowScene@@V-$allocator@UCasterEntry@CProjectedShadowScene@@@.c)
 */

CProjectedShadowScene *__fastcall CProjectedShadowScene::CProjectedShadowScene(
        CProjectedShadowScene *this,
        struct CComposition *a2)
{
  CProjectedShadowScene *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  std::list<CProjectedShadowScene::CasterEntry>::list<CProjectedShadowScene::CasterEntry>((char *)this + 72);
  std::list<CProjectedShadowScene::ReceiverEntry>::list<CProjectedShadowScene::ReceiverEntry>((char *)this + 88);
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 33) = 1065353216;
  result = this;
  *((_DWORD *)this + 30) = 2139095039;
  *((_DWORD *)this + 35) = -1082130432;
  return result;
}
