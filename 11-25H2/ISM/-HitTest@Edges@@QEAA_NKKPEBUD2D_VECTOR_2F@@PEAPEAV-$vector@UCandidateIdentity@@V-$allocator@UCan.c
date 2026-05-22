/*
 * XREFs of ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801A283C
 * Callers:
 *     ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801A12E0 (-OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007FAB0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B7AAC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1801A1948 (--$_Emplace_reallocate@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandid.c)
 *     ??0CandidateIdentity@@QEAA@AEBU0@@Z @ 0x1801A1D88 (--0CandidateIdentity@@QEAA@AEBU0@@Z.c)
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801A22B8 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x1801A27BC (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 *     ?erase@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@@Z @ 0x1801A31E8 (-erase@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@QEAA-AV-$_Vecto.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Edges::HitTest(Edges *this, int a2, int a3, const struct D2D_VECTOR_2F *a4, char ***a5)
{
  const struct D2D_VECTOR_2F *v5; // rax
  int v7; // esi
  unsigned int v8; // r15d
  char **v9; // r10
  char v10; // di
  unsigned int *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r12
  char **v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r8
  char **v17; // r15
  unsigned int v19; // [rsp+20h] [rbp-50h]
  unsigned int v20; // [rsp+24h] [rbp-4Ch]
  char v22; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-38h] BYREF
  __int128 v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+58h] [rbp-18h]
  int v27; // [rsp+60h] [rbp-10h]

  v5 = a4;
  v19 = a3;
  v20 = a2;
  v7 = 0;
  v8 = 0;
  v9 = *a5;
  if ( *a5 )
  {
    if ( 0xCCCCCCCCCCCCCCCDuLL * ((v9[1] - *v9) >> 3) )
    {
      v10 = 1;
      while ( 1 )
      {
        if ( Edges::FindEdge(this, (const struct CandidateIdentity *)&(*v9)[40 * v8]) >= 0 )
        {
          if ( Edge::HitTest((Edge *)(*(_QWORD *)this + ((unsigned __int64)v8 << 7)), v20, v19, a4) )
          {
            ++v7;
            ++v8;
            goto LABEL_10;
          }
          v11 = &v23;
        }
        else
        {
          v11 = (unsigned int *)&v22;
        }
        std::vector<CandidateIdentity>::erase(*a5, v11, &(**a5)[40 * v8]);
LABEL_10:
        v9 = *a5;
        if ( v8 >= 0xCCCCCCCCCCCCCCCDuLL * (((*a5)[1] - **a5) >> 3) )
          goto LABEL_26;
      }
    }
    return 0;
  }
  v12 = *(_QWORD *)this;
  v13 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)this == v13 )
    return 0;
  v10 = 1;
  do
  {
    if ( Edge::HitTest((Edge *)v12, a2, a3, v5) )
    {
      if ( !*a5 )
      {
        v14 = (char **)operator new(0x18uLL);
        *v14 = 0LL;
        v14[1] = 0LL;
        v14[2] = 0LL;
        *a5 = v14;
      }
      v24 = 0LL;
      v25 = 0LL;
      v26 = 7LL;
      LOWORD(v24) = 0;
      v27 = 0;
      v15 = (_QWORD *)(v12 + 8);
      if ( *(_QWORD *)(v12 + 32) > 7uLL )
        v15 = (_QWORD *)*v15;
      v16 = -1LL;
      do
        ++v16;
      while ( *((_WORD *)v15 + v16) );
      std::wstring::assign((char *)&v24, v15, v16);
      v27 = *(_DWORD *)(v12 + 64);
      v17 = *a5;
      if ( (*a5)[1] == (*a5)[2] )
      {
        std::vector<CandidateIdentity>::_Emplace_reallocate<CandidateIdentity &>(
          *a5,
          (*a5)[1],
          (const struct CandidateIdentity *)&v24);
      }
      else
      {
        CandidateIdentity::CandidateIdentity((CandidateIdentity *)(*a5)[1], (const struct CandidateIdentity *)&v24);
        v17[1] += 40;
      }
      ++v7;
      std::wstring::_Tidy_deallocate((__int64)&v24);
    }
    v12 += 128LL;
    v5 = a4;
    a3 = v19;
    a2 = v20;
  }
  while ( v12 != v13 );
LABEL_26:
  if ( !v7 )
    return 0;
  return v10;
}
