/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008D21C
 * Callers:
 *     ?FinalRelease@CVisualTree@@MEAAXXZ @ 0x18008CD20 (-FinalRelease@CVisualTree@@MEAAXXZ.c)
 *     ?erase_unchecked@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCVisualTree@@@2@V?$basic_iterator@QEAVCVisualTree@@@2@0@Z @ 0x18008CE1C (-erase_unchecked@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliber.c)
 *     ?RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z @ 0x18008D168 (-RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ??1?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18022267C (--1-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_p.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x180069194 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r8
  const void *v8; // rbx
  signed __int64 v9; // rbp
  void *v10; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *a1;
  v6 = a2 + a3;
  v7 = (a1[1] - v5) >> 3;
  if ( v6 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x18008D2EELL);
  }
  if ( v6 != v7 )
  {
    if ( a2 && (!v5 || a2 < 0 || v7 < a2) )
      _invalid_parameter_noinfo_noreturn();
    v8 = (const void *)(v5 + 8 * v6);
    v11[2] = a2;
    v11[0] = v5;
    v9 = 8 * v7 - 8 * v6;
    v11[1] = v7;
    v10 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
                    v11,
                    v9 >> 3);
    memmove_0(v10, v8, v9);
  }
  a1[1] += -8 * a3;
}
