/*
 * XREFs of ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180033280
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180032D1C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 *     ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18009F978 (-clear@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CVisualTreeData::Initialize(CVisualTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  void *v6; // rcx
  __int64 v7; // rbx

  *((_QWORD *)this + 48) = a2;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 31) = a3;
  *((_WORD *)this + 6) = 257;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 34) = 16843008;
  detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear(
    (char *)this + 176,
    a2);
  v4 = *((_QWORD *)this + 18);
  v5 = (*((_QWORD *)this + 19) - v4) >> 3;
  if ( v5 )
  {
    v7 = 8 * v5;
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
      v4,
      v7 + v4);
    *((_QWORD *)this + 19) -= v7;
  }
  v6 = (void *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v6 )
    operator delete(v6, 0x10uLL);
  (*(void (__fastcall **)(CVisualTreeData *))(*(_QWORD *)this + 32LL))(this);
}
