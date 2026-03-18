/*
 * XREFs of ??$emplace_back@UEffectInput@@@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUEffectInput@@@Z @ 0x18013898C
 * Callers:
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x1801375DC (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x1801382B0 (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x18004BBCC (--$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z @ 0x1801371EC (--$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802DF370 (--$move_backward@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffectInp.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802DF424 (--$uninitialized_move@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::emplace_back<EffectInput>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  CDrawListBitmap *v3; // rbx
  __int64 v4; // rdi
  CMILRefCountImpl *v5; // r14
  __int64 v6; // r9
  __int64 (__fastcall *v9)(CMILRefCountImpl *); // rax
  __int64 v10; // r12
  char v11; // cl
  __m128i v12; // xmm10
  __int128 v13; // xmm6
  __int128 v14; // xmm7
  __int128 v15; // xmm8
  __int128 v16; // xmm9
  __int64 v17; // r10
  unsigned __int64 v18; // r15
  char *v19; // rdx
  __int64 v20; // rdi
  unsigned __int64 v21; // rcx
  CDrawListBitmap *v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // r8
  CDrawListBitmap *v26; // rdi
  CDrawListBitmap *i; // r13
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(CMILRefCountImpl *); // rax
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned __int64 v32; // rdi
  LPVOID v33; // rax
  __int64 v34; // r8
  __int64 v35; // rbx
  CDrawListBitmap *v36; // rdx
  CDrawListBitmap *v37; // rcx
  char *v38; // rdx
  __int128 v39; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v40; // [rsp+30h] [rbp-D0h]
  int v41; // [rsp+40h] [rbp-C0h]
  char *v42; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h]
  char *v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  unsigned __int64 v47; // [rsp+90h] [rbp-70h]
  _BYTE v48[16]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-58h]
  _QWORD v50[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v51; // [rsp+C0h] [rbp-40h]
  __m128i v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+D8h] [rbp-28h]
  char v54; // [rsp+DCh] [rbp-24h]
  char v55; // [rsp+DDh] [rbp-23h]
  __int128 v56; // [rsp+E0h] [rbp-20h]
  __int128 v57; // [rsp+F0h] [rbp-10h]
  __int128 v58; // [rsp+100h] [rbp+0h]
  __int128 v59; // [rsp+110h] [rbp+10h]
  char v61; // [rsp+1C8h] [rbp+C8h]
  char v62; // [rsp+1D0h] [rbp+D0h]
  char v63; // [rsp+1D8h] [rbp+D8h]

  v5 = *(CMILRefCountImpl **)a2;
  v6 = 0LL;
  v50[0] = v5;
  if ( v5 )
  {
    v9 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v5 + 8LL);
    if ( v9 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v5);
    else
      ((void (__fastcall *)(CMILRefCountImpl *, __int64, __int64, _QWORD))v9)(v5, a2, a3, 0LL);
    v6 = 0LL;
  }
  v10 = *(_QWORD *)(a2 + 8);
  v50[1] = v10;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 8LL))(v10, a2, a3, 0LL);
    v6 = 0LL;
  }
  v11 = *(_BYTE *)(a2 + 45);
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  v61 = *(_BYTE *)(a2 + 16);
  v13 = *(_OWORD *)(a2 + 48);
  v51 = v61;
  v41 = *(_DWORD *)(a2 + 40);
  v53 = v41;
  v62 = *(_BYTE *)(a2 + 44);
  v54 = v62;
  v63 = v11;
  v55 = v11;
  v52 = v12;
  v56 = v13;
  if ( v62 )
  {
    v14 = *(_OWORD *)(a2 + 64);
    v15 = *(_OWORD *)(a2 + 80);
    v16 = *(_OWORD *)(a2 + 96);
    v57 = v14;
    v58 = v15;
    v59 = v16;
  }
  else
  {
    v16 = v59;
    v15 = v58;
    v14 = v57;
  }
  v17 = 1LL;
  v18 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 4);
  if ( 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - a1[1]) >> 4) )
  {
LABEL_10:
    v19 = (char *)a1[1];
    v3 = (CDrawListBitmap *)*a1;
    v20 = (__int64)&v19[-*a1];
    v40 = 0LL;
    v4 = 0x6DB6DB6DB6DB6DB7LL * (v20 >> 4);
    v49 = 0LL;
    *((_QWORD *)&v39 + 1) = 1LL;
    v21 = v4 - v18;
    v22 = (CDrawListBitmap *)((char *)v3 + 112 * v4);
    v47 = v4 - v18;
    *(_QWORD *)&v39 = v22;
    if ( !v22 )
      goto LABEL_18;
    v49 = 1LL;
    v23 = v4 - v18;
    if ( v21 > 1 )
      v23 = 1LL;
    v43 = v39;
    v24 = 112 * v23;
    v44 = 1LL;
    v25 = &v19[-v24];
    v45 = &v19[-v24];
    if ( v19 == &v19[-v24] )
      goto LABEL_14;
    goto LABEL_34;
  }
  if ( v18 + 1 >= v18 )
  {
    v32 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)0x6DB6DB6DB6DB6DB7LL,
            0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 4),
            v18 + 1);
    v33 = operator new[](saturated_mul(v32, 0x70uLL));
    v40 = 0LL;
    v34 = a1[1];
    v35 = (__int64)v33;
    v36 = (CDrawListBitmap *)*a1;
    *(_QWORD *)&v39 = v33;
    *((_QWORD *)&v39 + 1) = v18;
    v44 = 0LL;
    v43 = v39;
    std::uninitialized_move<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>(
      v48,
      v36,
      v34,
      &v43,
      v33,
      v18,
      0LL);
    detail::destruct_range<EffectInput>((CDrawListBitmap *)*a1, (CDrawListBitmap *)a1[1]);
    v37 = (CDrawListBitmap *)*a1;
    *a1 = v35;
    v42 = 0LL;
    if ( v37 == (CDrawListBitmap *)(a1 + 3) )
      v37 = 0LL;
    operator delete(v37);
    a1[1] = *a1 + 112 * v18;
    a1[2] = *a1 + 112 * v32;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v42);
    v6 = 0LL;
    v17 = 1LL;
    goto LABEL_10;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_34:
  v30 = v44;
  v31 = v17;
  while ( 1 )
  {
    v38 = v19 - 112;
    v42 = v38;
    if ( (_QWORD)v43 == v6 )
      goto LABEL_18;
    if ( !v31 )
      goto LABEL_18;
    v31 = v30 - 1;
    v46 = v30 - 1;
    if ( (unsigned __int64)(v30 - 1) >= *((_QWORD *)&v43 + 1) )
      goto LABEL_18;
    detail::construct<EffectInput,EffectInput>(v43 + 112 * v31, (__int64)v38);
    v19 = v42;
    if ( v42 == v45 )
      break;
    v30 = v31;
    v6 = 0LL;
  }
  v21 = v47;
  v22 = (CDrawListBitmap *)v39;
LABEL_14:
  if ( v21 <= 1 )
    goto LABEL_15;
  if ( v4 && (!v3 || v4 < 0) )
LABEL_18:
    _invalid_parameter_noinfo_noreturn();
  *(_QWORD *)&v39 = v3;
  *((_QWORD *)&v39 + 1) = v4;
  v40 = v4;
  ((void (__fastcall *)(_BYTE *, char *, char *, __int128 *))std::move_backward<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>)(
    v48,
    (char *)v3 + 112 * v18,
    (char *)v3 + 112 * v4 - 112,
    &v39);
LABEL_15:
  v26 = (CDrawListBitmap *)((char *)v3 + 112 * v18 + 112);
  if ( v22 < v26 )
    v26 = v22;
  for ( i = (CDrawListBitmap *)((char *)v3 + 112 * v18); i != v26; i = (CDrawListBitmap *)((char *)i + 112) )
    CDrawListBitmap::~CDrawListBitmap(i);
  v28 = 112 * v18;
  a1[1] += 112LL;
  *((_QWORD *)v3 + 14 * v18) = v5;
  if ( v5 )
  {
    v29 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v5 + 8LL);
    if ( v29 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v5);
    else
      ((void (__fastcall *)(CMILRefCountImpl *, char *, char *, __int64))v29)(v5, v19, v25, v6);
  }
  *(_QWORD *)((char *)v3 + v28 + 8) = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64, char *, char *, __int64))(*(_QWORD *)v10 + 8LL))(v10, v19, v25, v6);
  *((_BYTE *)v3 + v28 + 16) = v61;
  *(_DWORD *)((char *)v3 + v28 + 40) = v41;
  *((_BYTE *)v3 + v28 + 44) = v62;
  *((_BYTE *)v3 + v28 + 45) = v63;
  *(__m128i *)((char *)v3 + v28 + 24) = v12;
  *(_OWORD *)((char *)v3 + v28 + 48) = v13;
  if ( v62 )
  {
    *(_OWORD *)((char *)v3 + v28 + 64) = v14;
    *(_OWORD *)((char *)v3 + v28 + 80) = v15;
    *(_OWORD *)((char *)v3 + v28 + 96) = v16;
  }
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v50);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)a2);
}
