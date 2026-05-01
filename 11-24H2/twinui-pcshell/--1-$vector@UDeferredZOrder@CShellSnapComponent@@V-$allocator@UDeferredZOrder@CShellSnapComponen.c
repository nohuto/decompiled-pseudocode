/*
 * XREFs of ??1?$vector@UDeferredZOrder@CShellSnapComponent@@V?$allocator@UDeferredZOrder@CShellSnapComponent@@@std@@@std@@QEAA@XZ @ 0x18059CDC8
 * Callers:
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$26 @ 0x1806F6779 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$26.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CShellSnapComponent::DeferredZOrder>::~vector<CShellSnapComponent::DeferredZOrder>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
