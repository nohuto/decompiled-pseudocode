/*
 * XREFs of ?clear_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E34F8
 * Callers:
 *     ?erase@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@QEAVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x1801E34A4 (-erase@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo.c)
 * Callees:
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v7; // r10
  __int64 v8; // r9
  bool v10; // zf
  __int64 v11; // r8
  _QWORD *v12; // rdx
  const void *v13; // rdx
  signed __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 result; // rax

  v3 = *a1;
  v4 = a1 + 1;
  v5 = a2 + a3;
  v7 = (a1[1] - *a1) >> 3;
  v8 = a2;
  v10 = a2 + a3 == v7;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_7;
  }
  v11 = v3 + 8 * v7;
  v12 = a1 + 1;
  if ( v10 )
    goto LABEL_12;
  if ( v8 )
  {
    if ( !v3 )
      goto LABEL_5;
LABEL_7:
    if ( v8 < 0 || v8 > 0 && v7 < v8 )
LABEL_5:
      _invalid_parameter_noinfo_noreturn();
  }
  v13 = (const void *)(v3 + 8 * v5);
  v14 = v11 - (_QWORD)v13;
  v15 = v14 >> 3;
  if ( v14 >> 3 >= 0 )
  {
    if ( v14 >> 3 > 0 && v7 - v8 < v15 )
      goto LABEL_5;
  }
  else if ( v8 < (unsigned __int64)-(__int64)v15 )
  {
    goto LABEL_5;
  }
  memmove_0((void *)(v3 + 8 * v8), v13, v14);
  v12 = a1 + 1;
LABEL_12:
  result = 8 * a3;
  *v12 = *v4 - 8 * a3;
  return result;
}
