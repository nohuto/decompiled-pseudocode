/*
 * XREFs of ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800468FC
 * Callers:
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x180046858 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x18022BF8C (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@_J@Z @ 0x180046ADC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragm.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 result; // rax
  const void *v8; // rbx
  signed __int64 v9; // rbp
  void *v10; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - v4) >> 2);
  if ( a3 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x1800469ADLL);
  }
  v6 = 12 * a3;
  result = (a1[1] - v4) >> 2;
  if ( a3 != v5 )
  {
    v11[2] = 0LL;
    v8 = (const void *)(v6 + v4);
    v11[1] = v5;
    v9 = 12 * v5 - v6;
    v11[0] = v4;
    v10 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *> &,__int64>(
                    v11,
                    0xAAAAAAAAAAAAAAABuLL * (v9 >> 2));
    result = (__int64)memmove_0(v10, v8, v9);
  }
  a1[1] -= v6;
  return result;
}
