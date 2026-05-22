/*
 * XREFs of ?Create@EdgyProcessor@@SA?AV?$ComPtr@VEdgyProcessor@@@WRL@Microsoft@@AEBV?$ComPtr@UISystemInputRouterHitTest@@@34@@Z @ 0x180151918
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0EdgyProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x18015100C (--0EdgyProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall EdgyProcessor::Create(__int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  __int64 v5; // rcx

  v4 = RefCountedObject::operator new(0x228uLL);
  if ( v4 )
    v5 = EdgyProcessor::EdgyProcessor((__int64)v4, a2);
  else
    v5 = 0LL;
  *a1 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return a1;
}
