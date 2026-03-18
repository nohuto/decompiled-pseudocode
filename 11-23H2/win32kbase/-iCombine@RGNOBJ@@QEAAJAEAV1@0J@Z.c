/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007D990
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003A080 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CBC0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007CEAC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C007D860 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD50 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C016AF30 (GreIntersectVisRect.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C003E4A0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C0044530 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007DB3C (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007DD60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C007DF50 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r14
  __int64 v8; // r10
  __int64 v9; // rax
  int v10; // eax
  struct RGNOBJ *v12; // rdx
  __int64 v13; // rcx
  __m128i v14; // xmm1
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // xmm1_8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // xmm0_8
  LONG v19; // r8d
  LONG v20; // edx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  struct _RECTL v24; // [rsp+20h] [rbp-10h] BYREF
  __int64 v25; // [rsp+50h] [rbp+20h] BYREF

  v4 = a4;
  v8 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v9 = *(_QWORD *)this;
  if ( *(_QWORD *)this == *(_QWORD *)(v8 + 6400) )
    goto LABEL_6;
  if ( (unsigned int)(v4 - 1) <= 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a2 + 48LL) == 56 && (unsigned int)RGNOBJ::bContain(a2, a3) )
    {
      if ( (_DWORD)v4 != 1 )
        a3 = a2;
      v12 = a3;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)a3 + 48LL) != 56 || !(unsigned int)RGNOBJ::bContain(a3, a2) )
      {
        if ( (_DWORD)v4 == 1 && *(_DWORD *)(*(_QWORD *)a2 + 48LL) == 56 )
        {
          v13 = *(_QWORD *)a3;
          if ( *(_DWORD *)(*(_QWORD *)a3 + 48LL) == 56 )
          {
            v14 = *(__m128i *)(*(_QWORD *)a2 + 56LL);
            v24 = 0LL;
            v15 = v14.m128i_i64[0];
            v16 = _mm_srli_si128(v14, 8).m128i_u64[0];
            v17 = *(_QWORD *)(v13 + 56);
            v18 = _mm_srli_si128(*(__m128i *)(v13 + 56), 8).m128i_u64[0];
            v19 = v17;
            if ( (int)v15 > (int)v17 )
              v19 = v15;
            v20 = v18;
            v24.left = v19;
            if ( (int)v16 < (int)v18 )
              v20 = v16;
            v21 = HIDWORD(v15);
            v22 = HIDWORD(v17);
            v24.right = v20;
            if ( (int)v21 > (int)v22 )
              LODWORD(v22) = v21;
            v23 = HIDWORD(v18);
            v24.top = v22;
            if ( SHIDWORD(v16) < SHIDWORD(v18) )
              LODWORD(v23) = HIDWORD(v16);
            v24.bottom = v23;
            if ( (int)v22 >= (int)v23 || v19 >= v20 )
              RGNOBJ::vSet(this);
            else
              RGNOBJ::vSet(this, &v24);
            return 2LL;
          }
        }
        goto LABEL_3;
      }
      if ( (_DWORD)v4 != 1 )
        a2 = a3;
      v12 = a2;
    }
    v10 = RGNOBJ::bCopy(this, v12);
    goto LABEL_4;
  }
LABEL_3:
  v10 = RGNOBJ::bMerge(this, a2, a3, byte_1C024CD58[v4]);
LABEL_4:
  if ( v10 )
  {
    v9 = *(_QWORD *)this;
LABEL_6:
    v25 = (v9 + 24) & -(__int64)(v9 != 0);
    return RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v25);
  }
  RGNOBJ::vSet(this);
  return 0LL;
}
