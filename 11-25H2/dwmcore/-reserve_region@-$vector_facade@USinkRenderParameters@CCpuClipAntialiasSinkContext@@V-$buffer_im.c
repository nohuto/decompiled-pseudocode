/*
 * XREFs of ?reserve_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x180094F10
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180093920 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ??$insert@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@X@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$move_iterator@V?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@@std@@1@Z @ 0x18029176C (--$insert@V-$move_iterator@V-$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@.c)
 *     ??$insert_unchecked@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@V?$basic_iterator@$$CBUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@1@$$QEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@Z @ 0x180291850 (--$insert_unchecked@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@-$vector_facade@USinkRe.c)
 * Callees:
 *     ??1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x180095B80 (--1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x180096A3C (--$uninitialized_move@V-$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@s.c)
 *     ??$destruct_range@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@0@Z @ 0x180096B34 (--$destruct_range@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkRender.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x18025566C (--4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

char *__fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  char *v3; // r12
  __int128 v4; // xmm1
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rbp
  __int64 v10; // rdx
  signed __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r10
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // r14
  CCpuClipAntialiasSinkContext::SinkRenderParameters *v18; // rdi
  CCpuClipAntialiasSinkContext::SinkRenderParameters *v19; // rbx
  char *result; // rax
  char *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdi
  void *v26; // rax
  __int64 v27; // r8
  char *v28; // rdx
  void *v29; // rbx
  char *v30; // rdx
  void *v31; // rcx
  char *v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // r11
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int128 v38; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+30h] [rbp-58h]
  __int128 v40; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-38h]

  v5 = *((_QWORD *)a1 + 1);
  v7 = 0xCCCCCCCCCCCCCCCDuLL;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)a1 + 2) - v5) >> 3) >= a3 )
  {
LABEL_2:
    v3 = *(char **)a1;
    v10 = v5 - *(_QWORD *)a1;
    v39 = 0LL;
    v11 = 0xCCCCCCCCCCCCCCCDuLL * (v10 >> 3);
    v41 = 0LL;
    *((_QWORD *)&v38 + 1) = a3;
    v12 = v11 - a2;
    v13 = 40 * v11;
    v7 = (unsigned __int64)&v3[40 * v11];
    *(_QWORD *)&v38 = v7;
    v4 = v38;
    if ( !a3 )
      goto LABEL_5;
    if ( !v7 )
      goto LABEL_11;
    if ( (a3 & 0x8000000000000000uLL) == 0LL )
      goto LABEL_5;
    goto LABEL_29;
  }
  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(v5 - *(_QWORD *)a1) >> 3);
  v24 = v5 + a3;
  if ( v24 >= v5 )
  {
    v25 = detail::liberal_expansion_policy::expand(
            a1,
            0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3),
            v24);
    v26 = operator new[](saturated_mul(v25, 0x28uLL));
    v27 = *((_QWORD *)a1 + 1);
    v28 = *(char **)a1;
    *(_QWORD *)&v38 = v26;
    v29 = v26;
    *((_QWORD *)&v38 + 1) = v5;
    v39 = 0LL;
    v40 = v38;
    v41 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>>)(
      &v38,
      v28,
      v27,
      &v40);
    detail::destruct_range<CCpuClipAntialiasSinkContext::SinkRenderParameters>(*(_QWORD *)a1, *((_QWORD *)a1 + 1));
    v30 = *(char **)a1;
    *(_QWORD *)a1 = v29;
    v31 = 0LL;
    if ( v30 != (char *)a1 + 24 )
      v31 = v30;
    operator delete(v31);
    v32 = *(char **)a1;
    v5 = *(_QWORD *)a1 + 40 * v5;
    *((_QWORD *)a1 + 1) = v5;
    *((_QWORD *)a1 + 2) = &v32[40 * v25];
    goto LABEL_2;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_29:
  if ( a3 )
    goto LABEL_11;
LABEL_5:
  v41 = a3;
  v14 = v12;
  if ( a3 < v12 )
    v14 = a3;
  v38 = v4;
  v39 = a3;
  v15 = 40 * v14;
  v16 = v5 - v15;
  if ( v5 != v5 - v15 )
  {
    v33 = v39;
    v34 = v4 + 40 * a3 + 12;
    do
    {
      v5 -= 40LL;
      if ( !(_QWORD)v38 )
        goto LABEL_11;
      if ( !v33 )
        goto LABEL_11;
      --v33;
      v34 -= 40LL;
      if ( v33 >= *((_QWORD *)&v38 + 1) )
        goto LABEL_11;
      v35 = *(_QWORD *)v5;
      *(_QWORD *)v5 = 0LL;
      *(_QWORD *)(v34 - 12) = v35;
      *(_DWORD *)(v34 - 4) = *(_DWORD *)(v5 + 8);
      *(_DWORD *)v34 = *(_DWORD *)(v5 + 12);
      v36 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 16) = 0LL;
      *(_QWORD *)(v34 + 4) = v36;
      v37 = *(_QWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 24) = 0LL;
      *(_QWORD *)(v34 + 12) = v37;
      *(_BYTE *)(v34 + 20) = *(_BYTE *)(v5 + 32);
      *(_BYTE *)(v34 + 21) = *(_BYTE *)(v5 + 33);
    }
    while ( v5 != v16 );
  }
  if ( v12 <= a3 )
  {
    v17 = 40 * a2;
    goto LABEL_13;
  }
  if ( v11 && (!v3 || v11 < 0) )
LABEL_11:
    _invalid_parameter_noinfo_noreturn();
  v21 = &v3[v13 - 40 * a3];
  v17 = 40 * a2;
  v22 = 0x3333333333333333LL * ((__int64)(v13 - 40 * a3 - 40 * a2) >> 3);
  if ( v22 >= 0 )
  {
    if ( v22 <= 0 )
      goto LABEL_22;
    goto LABEL_11;
  }
  if ( v11 < 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(v13 - 40 * a3 - 40 * a2) >> 3) )
    goto LABEL_11;
LABEL_22:
  v23 = 40 * v11 - (v13 - 40 * a3);
  while ( &v3[40 * a2] != v21 )
  {
    v21 -= 40;
    CCpuClipAntialiasSinkContext::SinkRenderParameters::operator=(&v21[v23], v21);
  }
LABEL_13:
  v18 = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)&v3[40 * a3 + 40 * a2];
  v19 = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)&v3[v17];
  if ( v7 < (unsigned __int64)v18 )
    v18 = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)v7;
  if ( v19 != v18 )
  {
    do
    {
      CCpuClipAntialiasSinkContext::SinkRenderParameters::~SinkRenderParameters(v19);
      v19 = (CCpuClipAntialiasSinkContext::SinkRenderParameters *)((char *)v19 + 40);
    }
    while ( v19 != v18 );
    v17 = 40 * a2;
  }
  result = &v3[v17];
  *((_QWORD *)a1 + 1) += 40 * a3;
  return result;
}
