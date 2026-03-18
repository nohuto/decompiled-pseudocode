/*
 * XREFs of ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x18024D7E8
 * Callers:
 *     ?DrawMesh2D@CRenderData@@CAJPEAVCDrawListEntryBuilder@@PEBVCMeshGeometry2D@@PEAVCRenderingEffect@@@Z @ 0x18024D520 (-DrawMesh2D@CRenderData@@CAJPEAVCDrawListEntryBuilder@@PEBVCMeshGeometry2D@@PEAVCRenderingEffect.c)
 * Callees:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180047F70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x180167B50 (-ColorDWFromStraightColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x180169DA0 (-resize@-$vector_facade@GV-$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?resize@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016CB30 (-resize@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 *     ??A?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@QEBAAEBUPrimitiveUVDesc@@_K@Z @ 0x18019E710 (--A-$span@$$CBUPrimitiveUVDesc@@$0-0@gsl@@QEBAAEBUPrimitiveUVDesc@@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Insert(
        __int64 a1,
        __int64 a2,
        int *a3,
        float *a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v10; // r15
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v12; // ebx
  __int64 v14; // rbx
  _QWORD *v15; // rbx
  int v16; // edi
  float *v17; // rsi
  int *v18; // r9
  __int64 v19; // r11
  unsigned int v20; // r15d
  int v21; // r10d
  float *v22; // rbx
  int v23; // xmm0_4
  unsigned int v24; // r8d
  int v25; // xmm1_4
  __int64 v26; // rcx
  __int64 v27; // rdx
  float v28; // xmm1_4
  float v29; // xmm0_4
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // [rsp+20h] [rbp-68h]
  __int64 v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+28h] [rbp-60h]
  __int64 v35; // [rsp+30h] [rbp-58h]
  __int64 v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  __int64 v38; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v40; // [rsp+90h] [rbp+8h] BYREF
  int *v41; // [rsp+A0h] [rbp+18h]
  float *v42; // [rsp+A8h] [rbp+20h]

  v42 = a4;
  v41 = a3;
  v6 = a5;
  v7 = 0LL;
  if ( *(_QWORD *)(a1 + 4464) >= 0xC8uLL || (v10 = a5, v37 = a5, (unsigned __int64)a5 + *(_QWORD *)(a1 + 4080) > 0xFFFF) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                              (CDrawListEntryBuilder *)a1,
                              a2,
                              0LL,
                              0LL);
    v12 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEE,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentrybuilder.cpp",
        (const char *)(unsigned int)BuiltHWPrimitiveEntry);
      return v12;
    }
    v10 = v6;
    v37 = v6;
  }
  v33 = (__int64)(*(_QWORD *)(a1 + 2136) - *(_QWORD *)(a1 + 2128)) >> 4;
  v38 = (__int64)(*(_QWORD *)(a1 + 4096) - *(_QWORD *)(a1 + 4088)) >> 1;
  v35 = (__int64)(*(_QWORD *)(a1 + 184) - *(_QWORD *)(a1 + 176)) >> 4;
  v32 = 8 * *(_DWORD *)a1 + 16;
  v14 = (unsigned int)v6 * (v32 >> 4);
  detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::resize(
    (void **)(a1 + 176),
    v14 + v35);
  detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::resize(
    (void **)(a1 + 2128),
    v14 + v33);
  v15 = a6;
  LOWORD(v40) = 0;
  detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::resize(
    (void **)(a1 + 4088),
    *a6 + v38,
    (char *)&v40);
  v36 = *(_QWORD *)(a1 + 176) + 16 * v35;
  v34 = *(_QWORD *)(a1 + 2128) + 16 * v33;
  v16 = ColorDWFromStraightColorF((const struct _D3DCOLORVALUE *)a2);
  v17 = (float *)gsl::span<PrimitiveUVDesc const,-1>::operator[]((unsigned __int64 *)(a2 + 32), 0LL);
  if ( (_DWORD)v6 )
  {
    v18 = v41;
    v19 = v10;
    v20 = v32;
    v21 = 0;
    v22 = v42;
    do
    {
      v23 = *v18;
      v24 = 0;
      v25 = v18[1];
      v26 = v21 + v36;
      *(_DWORD *)v26 = *v18;
      v27 = v21 + v34;
      *(_DWORD *)(v26 + 4) = v25;
      *(_DWORD *)(v26 + 8) = 1065353216;
      *(_DWORD *)(v26 + 12) = v16;
      *(_DWORD *)v27 = v23;
      *(_DWORD *)(v27 + 4) = v25;
      *(_DWORD *)(v27 + 8) = 0;
      *(_DWORD *)(v27 + 12) = 1065353216;
      if ( *(_DWORD *)a1 )
      {
        do
        {
          if ( v24 )
          {
            *(_QWORD *)(v26 + 8LL * v24 + 16) = 0LL;
            v40 = 0LL;
            *(_QWORD *)(v27 + 8LL * v24 + 16) = 0LL;
          }
          else
          {
            v28 = *v17 * *v22;
            v29 = v22[1] * v17[4];
            *(float *)(v26 + 16) = v28;
            *(float *)(v26 + 20) = v29;
            *(float *)(v27 + 16) = v28;
            *(float *)(v27 + 20) = v29;
          }
          ++v24;
        }
        while ( v24 < *(_DWORD *)a1 );
        v20 = v32;
      }
      v21 += v20;
      v18 += 3;
      v22 += 2;
      --v19;
    }
    while ( v19 );
    v10 = v37;
    v15 = a6;
  }
  v30 = v38;
  v31 = *(_QWORD *)(a1 + 4088) + 2 * v38;
  if ( *(_DWORD *)v15 )
  {
    do
    {
      if ( (unsigned __int64)(unsigned int)v7 >= *v15 )
        ((void (__fastcall *)(__int64, _QWORD, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v30,
          (unsigned int)v7,
          v31);
      v30 = *(unsigned __int16 *)(v15[1] + 4 * v7);
      LOWORD(v30) = *(_WORD *)(a1 + 4080) + v30;
      *(_WORD *)(v31 + 2 * v7) = v30;
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *(_DWORD *)v15 );
  }
  *(_QWORD *)(a1 + 4080) += v10;
  ++*(_QWORD *)(a1 + 4464);
  return 0LL;
}
