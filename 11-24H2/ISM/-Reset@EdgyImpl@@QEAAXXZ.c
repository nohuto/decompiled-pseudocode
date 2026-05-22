/*
 * XREFs of ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801AC820
 * Callers:
 *     ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801A88F0 (-OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AB4A4 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1801ABBF0 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 *     ?StaticCallback@InteractionContext@EdgyProcessorTarget@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801ABFF0 (-StaticCallback@InteractionContext@EdgyProcessorTarget@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@.c)
 *     ??1EdgyImpl@@QEAA@XZ @ 0x1801AC2B0 (--1EdgyImpl@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801A8DD8 (--$_Destroy_range@V-$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@A.c)
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801A9644 (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

void __fastcall EdgyImpl::Reset(EdgyImpl *this)
{
  CandidateIdentity *v2; // rcx
  __int64 v3; // rdi

  v2 = (CandidateIdentity *)*((_QWORD *)this + 1);
  if ( v2 )
    CandidateIdentity::`scalar deleting destructor'(v2, 1);
  *((_QWORD *)this + 1) = 0LL;
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( *(_QWORD *)v3 )
    {
      std::_Destroy_range<std::allocator<CandidateIdentity>>(*(CandidateIdentity **)v3, *(CandidateIdentity **)(v3 + 8));
      std::_Deallocate<16,0>(
        *(char **)v3,
        (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(v3 + 16) - *(_QWORD *)v3) >> 3)));
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
    }
    operator delete((void *)v3, (const struct std::nothrow_t *)0x18);
    *(_QWORD *)this = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 4) = 0;
}
