/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x180012090
 * Callers:
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180010FF0 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800125B0 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::reserve_region(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r10
  __int64 v20; // r9
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  const void *v28; // rax
  __int64 v29; // rcx
  void *v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  _QWORD *v33; // r14
  unsigned __int64 v34; // r10
  void *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v36; // [rsp+60h] [rbp+8h]

  v4 = 1LL;
  v5 = *a1;
  v6 = 0LL;
  v8 = v5 & 3;
  if ( v8 == 1 )
  {
    v10 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
    v11 = *(_QWORD *)(v10 - 16);
    v12 = *(_QWORD *)(v10 - 8);
    v13 = v11;
    goto LABEL_3;
  }
  if ( (v5 & 3) == 0 )
  {
    v13 = 1LL;
    v11 = 1LL;
LABEL_26:
    v12 = 1LL;
    goto LABEL_3;
  }
  if ( v8 != 2 && v8 != 3 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v11 = 0LL;
  v13 = 0LL;
  v32 = v8 - 2;
  if ( v32 )
  {
    if ( v32 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_26;
  }
  v12 = 0LL;
LABEL_3:
  if ( v12 - v13 >= a3 )
    goto LABEL_7;
  v14 = v13 + a3;
  if ( v13 + a3 >= v13 )
  {
    if ( v14 == 1 )
    {
      *a1 = 3LL;
      goto LABEL_7;
    }
    v36 = operator new[](8 * v14 + 16);
    *v36 = 0LL;
    v36[1] = 0LL;
    v28 = (const void *)detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
    v29 = (__int64)(8 * v13) >> 3;
    if ( v29 < 0 || v29 > 0 && v11 < v29 )
      goto LABEL_23;
    memmove_0(v36 + 2, v28, 8 * v13);
    if ( (*a1 & 3) != 0 )
    {
      if ( (*a1 & 3) == 1 )
      {
        v30 = (void *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 16);
        goto LABEL_46;
      }
      if ( (*a1 & 3) - 2 >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v30 = 0LL;
LABEL_46:
    *a1 = (unsigned __int64)(v36 + 2) | 1;
    operator delete(v30);
    *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 16) = v13;
    *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 8) = v14;
LABEL_7:
    v15 = *a1;
    v16 = *a1 & 3;
    if ( v16 == 1 )
    {
      v17 = (8LL * *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFCuLL) - 16)) >> 3;
      v18 = v17 - a2;
      v6 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
      v19 = (v15 & 0xFFFFFFFFFFFFFFFCuLL) + 8LL * *(_QWORD *)((v15 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
LABEL_9:
      v20 = 8 * v17;
      v21 = 8 * v17 + v6;
      if ( !a3 )
        goto LABEL_12;
      if ( !v21 )
        goto LABEL_23;
      if ( (a3 & 0x8000000000000000uLL) == 0LL )
        goto LABEL_12;
      goto LABEL_61;
    }
    if ( v16 == 2 )
    {
      v26 = 0LL;
    }
    else
    {
      v26 = (__int64)a1;
      if ( !v16 )
        goto LABEL_32;
    }
    v4 = 0LL;
    if ( v16 == 2 )
    {
      v17 = v26 >> 3;
      v18 = v17 - a2;
      v19 = 0LL;
      goto LABEL_50;
    }
LABEL_32:
    v17 = (8 * v4 - (__int64)a1 + v26) >> 3;
    v18 = v17 - a2;
    v19 = (unsigned __int64)a1;
    if ( !v16 )
    {
      v19 = (unsigned __int64)(a1 + 1);
LABEL_34:
      v6 = (unsigned __int64)a1;
      goto LABEL_9;
    }
LABEL_50:
    v31 = v16 - 2;
    if ( !v31 )
      goto LABEL_9;
    if ( v31 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_34;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_61:
  if ( a3 )
    goto LABEL_23;
LABEL_12:
  v22 = v18;
  if ( a3 < v18 )
    v22 = a3;
  v23 = (_QWORD *)(v19 - 8 * v22);
  if ( (_QWORD *)v19 != v23 )
  {
    v33 = (_QWORD *)(v19 - 8);
    v34 = a3;
    if ( v21 )
    {
      while ( v34 )
      {
        if ( --v34 >= a3 )
          break;
        *(_QWORD *)(v21 + 8 * v34) = *v33;
        if ( v33 == v23 )
          goto LABEL_15;
        --v33;
      }
    }
    goto LABEL_23;
  }
LABEL_15:
  if ( v18 <= a3 )
    goto LABEL_16;
  if ( v17 && (!v6 || v17 < 0) )
LABEL_23:
    _invalid_parameter_noinfo_noreturn();
  if ( (__int64)(v20 - 8 * a3 - 8 * a2) >> 3 > 0 )
  {
    if ( v17 >= (unsigned __int64)((__int64)(v20 - 8 * a3 - 8 * a2) >> 3) )
      goto LABEL_40;
    goto LABEL_23;
  }
  if ( (__int64)(v20 - 8 * a3 - 8 * a2) >> 3 < 0 )
    goto LABEL_23;
LABEL_40:
  memmove_0((void *)(v6 + 8 * a2 - -8LL * a3), (const void *)(v6 + 8 * a2), v20 - 8 * a3 - 8 * a2);
LABEL_16:
  if ( a3 )
  {
    v24 = *a1 & 3;
    if ( v24 == 1 )
    {
      *(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFFCuLL) - 16) += a3;
    }
    else
    {
      if ( !v24 )
        goto LABEL_39;
      v27 = v24 - 2;
      if ( v27 )
      {
        if ( v27 != 1 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
        if ( a3 != 1 )
LABEL_39:
          *a1 = 2LL;
      }
    }
  }
  return v6 + 8 * a2;
}
