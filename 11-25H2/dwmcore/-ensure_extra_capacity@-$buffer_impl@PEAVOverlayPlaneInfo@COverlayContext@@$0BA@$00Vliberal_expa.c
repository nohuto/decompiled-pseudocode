/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801E7B20
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1801E79D8 (-reserve_region@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlay.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  void *v2; // rbp
  void *v3; // r14
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  signed __int64 v10; // r8
  void *v11; // rcx
  bool v12; // zf
  const void *v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax

  v5 = *(_QWORD *)(a1 + 8);
  result = (*(_QWORD *)(a1 + 16) - v5) >> 3;
  if ( result < a2 )
  {
    v7 = (v5 - *(_QWORD *)a1) >> 3;
    v8 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    v9 = v7 + a2;
    if ( v7 + a2 >= v7 )
    {
      v14 = v8 >> 1;
      if ( v8 <= ~(v8 >> 1) && v14 + v8 >= v9 )
        v9 = v14 + v8;
      v2 = operator new[](saturated_mul(v9, 8uLL));
      v10 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
      v3 = 0LL;
      v15 = v10 >> 3;
      if ( v10 >> 3 < 0 || v15 > 0 && v7 < v15 )
        _invalid_parameter_noinfo_noreturn();
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    memmove_0(v2, *(const void **)a1, v10);
    v11 = *(void **)a1;
    v12 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v2;
    if ( v12 )
      v11 = v3;
    operator delete(v11);
    v13 = *(const void **)a1;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1 + 8 * v7;
    result = (unsigned __int64)v13 + 8 * v9;
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
