/*
 * XREFs of ??0CHolographicExclusiveView@@AEAA@PEAVCComposition@@@Z @ 0x1802DACA4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CHolographicExclusiveView *__fastcall CHolographicExclusiveView::CHolographicExclusiveView(
        CHolographicExclusiveView *this,
        struct CComposition *a2)
{
  CHolographicExclusiveView *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *(_QWORD *)this = &CHolographicExclusiveView::`vftable';
  InitializeSRWLock((PSRWLOCK)this + 52);
  result = this;
  *((_QWORD *)this + 9) = *(_QWORD *)(*((_QWORD *)this + 3) + 664LL);
  return result;
}
