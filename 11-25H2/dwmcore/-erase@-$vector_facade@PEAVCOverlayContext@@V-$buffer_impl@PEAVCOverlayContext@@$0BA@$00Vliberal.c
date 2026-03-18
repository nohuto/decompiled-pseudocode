/*
 * XREFs of ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18013E3F0
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18013DBE0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x1800C33AC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

_QWORD *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  bool v9; // zf
  const void *v10; // rbx
  signed __int64 v11; // rbp
  void *v12; // rax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a1;
  v6 = (*a3 - v4) >> 3;
  v7 = (a1[1] - v4) >> 3;
  v8 = v6 + 1;
  v9 = v6 + 1 == v7;
  if ( v6 + 1 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  if ( !v9 )
  {
    if ( v6 && (!v4 || v6 < 0 || v7 < v6) )
      _invalid_parameter_noinfo_noreturn();
    v10 = (const void *)(v4 + 8 * v8);
    v14[0] = v4;
    v11 = 8 * v7 - 8 * v8;
    v14[1] = v7;
    v14[2] = v6;
    v12 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
                    v14,
                    v11 >> 3);
    memmove_0(v12, v10, v11);
  }
  a1[1] -= 8LL;
  *a2 = *a1 + 8 * v6;
  return a2;
}
