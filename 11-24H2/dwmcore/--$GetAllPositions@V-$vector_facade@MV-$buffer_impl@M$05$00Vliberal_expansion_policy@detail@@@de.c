/*
 * XREFs of ??$GetAllPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@2@MMM@Z @ 0x1800B8200
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800B70A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ?push_back@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBM@Z @ 0x1800B6EA0 (-push_back@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@de.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAW4Type@IRenderTarget@@@std@@V?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@V?$move_iterator@PEAW4Type@IRenderTarget@@@0@0V12@@Z @ 0x1802472A4 (--$move@V-$move_iterator@PEAW4Type@IRenderTarget@@@std@@V-$checked_array_iterator@PEAW4Type@IRen.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x180247334 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall CoordMap::GetAllPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        float *a1,
        float **a2,
        detail::liberal_expansion_policy *a3,
        float a4,
        float a5,
        float a6)
{
  float *v6; // rdi
  __int64 v8; // r8
  __int64 v10; // r9
  unsigned int *v11; // r15
  __int64 v12; // rax
  float *v13; // rcx
  float v14; // xmm6_4
  __int64 result; // rax
  float v16; // xmm10_4
  __int64 v17; // rdx
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned int *v22; // r10
  __int64 v23; // rax
  __int64 v24; // r8
  float *v25; // rax
  float v26; // xmm0_4
  unsigned int *v27; // r8
  unsigned int *v28; // r12
  unsigned __int64 v29; // r15
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  unsigned int *v32; // r10
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r11
  unsigned int *i; // rax
  char v36; // al
  __int64 v37; // r8
  unsigned int *v38; // r15
  unsigned __int64 v39; // rsi
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned int *v42; // r10
  unsigned __int64 v43; // rax
  unsigned int *v44; // r9
  signed __int64 v45; // rsi
  __int64 v46; // rax
  signed __int64 v47; // rdi
  __int64 v48; // rax
  signed __int64 v49; // rdi
  __int64 v50; // rax
  unsigned int *v51; // r8
  unsigned __int64 v52; // r13
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdi
  void *v55; // rax
  __int64 v56; // r8
  unsigned int *v57; // rdx
  void *v58; // rbx
  unsigned int *v59; // rcx
  bool v60; // zf
  __int64 v61; // rax
  unsigned __int64 v62; // rsi
  void *v63; // rax
  __int64 v64; // r8
  unsigned int *v65; // rdx
  void *v66; // rbx
  unsigned int *v67; // rcx
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rdi
  void *v71; // rax
  __int64 v72; // r8
  unsigned int *v73; // rdx
  void *v74; // rbx
  unsigned int *v75; // rcx
  __int64 v76; // rax
  __int128 v77; // [rsp+28h] [rbp-69h] BYREF
  __int64 v78; // [rsp+38h] [rbp-59h]
  __int128 v79; // [rsp+48h] [rbp-49h] BYREF
  __int64 v80; // [rsp+58h] [rbp-39h]

  v8 = *((_QWORD *)a3 + 1);
  v10 = v8;
  v11 = *(unsigned int **)a3;
  v12 = (v8 - *(_QWORD *)a3) >> 2;
  if ( v12 )
  {
    v8 -= 4 * v12;
    *((_QWORD *)a3 + 1) = v8;
    v10 = v8;
  }
  v13 = *a2;
  v14 = fmaxf(a4, **a2);
  result = ((char *)a2[1] - (char *)*a2) & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = fminf(a5, *(float *)((char *)*a2 + result - 16));
  if ( (float)(v16 - v14) > a6 )
  {
    v17 = *((_QWORD *)a3 + 2);
    v18 = 0LL;
    v19 = (v8 - (__int64)v11) >> 2;
    if ( !((v17 - v8) >> 2) )
    {
      if ( v19 + 1 < v19 )
        goto LABEL_51;
      v53 = detail::liberal_expansion_policy::expand(
              (detail::liberal_expansion_policy *)v13,
              (v17 - (__int64)v11) >> 2,
              v19 + 1);
      v54 = v53;
      v55 = operator new[](saturated_mul(v53, 4uLL));
      v56 = *((_QWORD *)a3 + 1);
      v57 = *(unsigned int **)a3;
      *(_QWORD *)&v77 = v55;
      v58 = v55;
      *((_QWORD *)&v77 + 1) = v19;
      v78 = 0LL;
      v79 = v77;
      v80 = 0LL;
      ((void (__fastcall *)(__int128 *, unsigned int *, __int64, __int128 *))std::move<std::move_iterator<enum IRenderTarget::Type *>,stdext::checked_array_iterator<enum IRenderTarget::Type *>>)(
        &v77,
        v57,
        v56,
        &v79);
      v59 = *(unsigned int **)a3;
      v60 = *(_QWORD *)a3 == (_QWORD)a3 + 24;
      *(_QWORD *)a3 = v58;
      if ( v60 )
        v59 = 0LL;
      operator delete(v59);
      v11 = *(unsigned int **)a3;
      v10 = *(_QWORD *)a3 + 4 * v19;
      v61 = *(_QWORD *)a3 + 4 * v54;
      *((_QWORD *)a3 + 1) = v10;
      *((_QWORD *)a3 + 2) = v61;
    }
    v20 = (v10 - (__int64)v11) >> 2;
    v21 = v20 - v19;
    v22 = &v11[v20];
    if ( !v22 )
      goto LABEL_18;
    v18 = 1LL;
    v23 = ((v10 - (__int64)v11) >> 2) - v19;
    if ( v21 > 1 )
      v23 = 1LL;
    v24 = v10 - 4 * v23;
    if ( v10 != v24 )
    {
      *v22 = *(_DWORD *)(v10 - 4);
      if ( v10 - 4 != v24 )
        goto LABEL_18;
    }
    if ( v21 > 1 )
    {
      if ( v20 && (!v11 || v20 < 0) )
        goto LABEL_18;
      *((_QWORD *)&v77 + 1) = (v10 - (__int64)v11) >> 2;
      v78 = *((_QWORD *)&v77 + 1);
      *(_QWORD *)&v77 = v11;
      v47 = 4 * v20 - 4 * v19 - 4;
      v48 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
              &v77,
              -(v47 >> 2));
      memmove_0((void *)(v48 - v47), &v11[v19], v47);
    }
    *((_QWORD *)a3 + 1) += 4LL;
    *(float *)&v11[v19] = v14;
    LOBYTE(v20) = 0;
    v25 = a2[1];
    v6 = *a2;
    a1 = v25;
    while ( 1 )
    {
      if ( v6 == v25 )
        goto LABEL_30;
      v26 = *v6;
      if ( (float)(v14 + a6) >= *v6 )
        goto LABEL_29;
      if ( v26 >= (float)(v16 - a6) )
      {
LABEL_30:
        v37 = *((_QWORD *)a3 + 1);
        v38 = *(unsigned int **)a3;
        v39 = (v37 - *(_QWORD *)a3) >> 2;
        if ( (*((_QWORD *)a3 + 2) - v37) >> 2 >= v18 )
          goto LABEL_31;
        if ( v39 + 1 >= v39 )
        {
          v69 = detail::liberal_expansion_policy::expand(
                  (detail::liberal_expansion_policy *)v20,
                  (__int64)(*((_QWORD *)a3 + 2) - (_QWORD)v38) >> 2,
                  v39 + 1);
          v70 = v69;
          v71 = operator new[](saturated_mul(v69, 4uLL));
          v72 = *((_QWORD *)a3 + 1);
          v73 = *(unsigned int **)a3;
          *(_QWORD *)&v77 = v71;
          *((_QWORD *)&v77 + 1) = v39;
          v74 = v71;
          v78 = 0LL;
          v79 = v77;
          v80 = 0LL;
          ((void (__fastcall *)(__int128 *, unsigned int *, __int64, __int128 *))std::move<std::move_iterator<enum IRenderTarget::Type *>,stdext::checked_array_iterator<enum IRenderTarget::Type *>>)(
            &v77,
            v73,
            v72,
            &v79);
          v75 = *(unsigned int **)a3;
          v60 = *(_QWORD *)a3 == (_QWORD)a3 + 24;
          *(_QWORD *)a3 = v74;
          if ( v60 )
            v75 = 0LL;
          operator delete(v75);
          v38 = *(unsigned int **)a3;
          v37 = *(_QWORD *)a3 + 4 * v39;
          v76 = *(_QWORD *)a3 + 4 * v70;
          *((_QWORD *)a3 + 1) = v37;
          *((_QWORD *)a3 + 2) = v76;
LABEL_31:
          v40 = (v37 - (__int64)v38) >> 2;
          v41 = v40 - v39;
          v42 = &v38[v40];
          if ( v42 )
          {
            v43 = ((v37 - (__int64)v38) >> 2) - v39;
            if ( v41 > v18 )
              v43 = v18;
            result = 4 * v43;
            v44 = (unsigned int *)(v37 - result);
            if ( v37 != v37 - result )
            {
              v51 = (unsigned int *)(v37 - 4);
              v52 = v18 - 1;
              while ( 1 )
              {
                result = *v51;
                v42[v52] = result;
                if ( v51 == v44 )
                  break;
                --v51;
                if ( v52 )
                {
                  if ( !--v52 )
                    continue;
                }
                goto LABEL_18;
              }
            }
            if ( v41 <= 1 )
            {
LABEL_36:
              *((_QWORD *)a3 + 1) += 4LL;
              *(float *)&v38[v39] = v16;
              return result;
            }
            if ( !v40 || v38 && v40 >= 0 )
            {
              *((_QWORD *)&v77 + 1) = v40;
              v78 = v40;
              *(_QWORD *)&v77 = v38;
              v49 = 4 * v40 - 4 * v39 - 4;
              v50 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
                      &v77,
                      -(v49 >> 2));
              result = (__int64)memmove_0((void *)(v50 - v49), &v38[v39], v49);
              goto LABEL_36;
            }
          }
LABEL_18:
          _invalid_parameter_noinfo_noreturn();
        }
      }
      else
      {
        v27 = (unsigned int *)*((_QWORD *)a3 + 1);
        v28 = *(unsigned int **)a3;
        if ( v27 != *(unsigned int **)a3 && a6 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - *((float *)v27 - 1)) & _xmm) )
          goto LABEL_24;
        v29 = v27 - v28;
        if ( (__int64)(*((_QWORD *)a3 + 2) - (_QWORD)v27) >> 2 >= v18 )
          goto LABEL_17;
        if ( v29 + 1 >= v29 )
        {
          v62 = detail::liberal_expansion_policy::expand(
                  (detail::liberal_expansion_policy *)v20,
                  (__int64)(*((_QWORD *)a3 + 2) - (_QWORD)v28) >> 2,
                  v29 + 1);
          v63 = operator new[](saturated_mul(v62, 4uLL));
          v64 = *((_QWORD *)a3 + 1);
          v65 = *(unsigned int **)a3;
          *(_QWORD *)&v77 = v63;
          *((_QWORD *)&v77 + 1) = v29;
          v66 = v63;
          v78 = 0LL;
          v79 = v77;
          v80 = 0LL;
          ((void (__fastcall *)(__int128 *, unsigned int *, __int64, __int128 *))std::move<std::move_iterator<enum IRenderTarget::Type *>,stdext::checked_array_iterator<enum IRenderTarget::Type *>>)(
            &v77,
            v65,
            v64,
            &v79);
          v67 = *(unsigned int **)a3;
          v60 = *(_QWORD *)a3 == (_QWORD)a3 + 24;
          *(_QWORD *)a3 = v66;
          if ( v60 )
            v67 = 0LL;
          operator delete(v67);
          v28 = *(unsigned int **)a3;
          v27 = (unsigned int *)(*(_QWORD *)a3 + 4 * v29);
          v68 = *(_QWORD *)a3 + 4 * v62;
          *((_QWORD *)a3 + 1) = v27;
          *((_QWORD *)a3 + 2) = v68;
LABEL_17:
          v30 = v27 - v28;
          v31 = v30 - v29;
          v32 = &v28[v30];
          if ( !v32 )
            goto LABEL_18;
          v33 = v27 - v28 - v29;
          v34 = v18;
          if ( v31 > v18 )
            v33 = v18;
          v20 = 4 * v33;
          for ( i = (unsigned int *)((char *)v27 - v20); v27 != i; v32[v34] = v20 )
          {
            --v27;
            if ( !v34 )
              goto LABEL_18;
            if ( --v34 >= v18 )
              goto LABEL_18;
            v20 = *v27;
          }
          if ( v31 > v18 )
          {
            if ( v30 && (!v28 || v30 < 0) )
              goto LABEL_18;
            *((_QWORD *)&v77 + 1) = v30;
            v78 = v30;
            *(_QWORD *)&v77 = v28;
            v45 = 4 * v30 - 4 * v29 - 4;
            v46 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
                    &v77,
                    -(v45 >> 2));
            memmove_0((void *)(v46 - v45), &v28[v29], v45);
          }
          *((_QWORD *)a3 + 1) += 4LL;
          LOBYTE(v20) = 0;
          v28[v29] = *(_DWORD *)v6;
LABEL_24:
          if ( v6[1] == v6[2] )
            v36 = 0;
          else
            v36 = v18;
          if ( (_BYTE)v20 || !v36 )
            goto LABEL_28;
          goto LABEL_52;
        }
      }
LABEL_51:
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_52:
      if ( (__int64)(*((_QWORD *)a3 + 1) - *(_QWORD *)a3) >> 2 > v18 )
      {
        detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
          a3,
          (unsigned int *)v6);
        v20 = (unsigned __int8)v18;
      }
LABEL_28:
      v25 = a1;
LABEL_29:
      v6 += 4;
    }
  }
  return result;
}
