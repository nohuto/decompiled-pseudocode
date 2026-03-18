/*
 * XREFs of RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x1400F313C
 * Callers:
 *     ?iCombine@RGNCOREOBJ@@QEAAJAEAV1@0J@Z @ 0x1400F3120 (-iCombine@RGNCOREOBJ@@QEAAJAEAV1@0J@Z.c)
 * Callees:
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1400107A0 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?bRectl@RGNCOREOBJ@@QEBA_NXZ @ 0x1400261D8 (-bRectl@RGNCOREOBJ@@QEBA_NXZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400288AC (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1400291D0 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?bContain@RGNCOREOBJ@@QEBA_NAEAV1@@Z @ 0x1400CF208 (-bContain@RGNCOREOBJ@@QEBA_NAEAV1@@Z.c)
 *     ?bMerge@RGNCOREOBJ@@QEAA_NAEAV1@0E@Z @ 0x1400DB59C (-bMerge@RGNCOREOBJ@@QEAA_NAEAV1@0E@Z.c)
 *     ?RegionCore_iCombine@Win32kRS@@YAJPEAVREGION_CORE@@00J@Z @ 0x1400F330C (-RegionCore_iCombine@Win32kRS@@YAJPEAVREGION_CORE@@00J@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017A1BC (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___(
        Win32kRS **this,
        struct REGION_CORE **a2,
        struct REGION_CORE **a3,
        unsigned int a4,
        RGNCOREOBJ *a5)
{
  struct RGNCOREOBJ *v5; // rdi
  __int64 v6; // rbp
  RGNCOREOBJ *v7; // rbx
  const struct REGION_CORE *v10; // rdx
  const struct RGNCOREOBJ *v11; // rdx
  char v12; // al
  const struct REGION_CORE *v13; // rdx
  REGION_CORE *v14; // rax
  __m128i v15; // xmm1
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // xmm1_8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // xmm0_8
  LONG v20; // r8d
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  struct _RECTL v25; // [rsp+20h] [rbp-48h] BYREF

  v5 = (struct RGNCOREOBJ *)a3;
  v6 = (int)a4;
  v7 = (RGNCOREOBJ *)a2;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    return Win32kRS::RegionCore_iCombine(*this, *a2, *a3, (struct REGION_CORE *)a4, v25.left);
  if ( a4 - 1 > 1 )
    goto LABEL_33;
  if ( RGNCOREOBJ::bRectl(a2, (const struct REGION_CORE *)a2) && RGNCOREOBJ::bContain(v7, v5) )
  {
    if ( (_DWORD)v6 != 1 )
      v5 = v7;
    v11 = v5;
LABEL_9:
    v12 = RGNCOREOBJ::bCopy(a5, v11);
    goto LABEL_10;
  }
  if ( RGNCOREOBJ::bRectl((Win32kRS **)v5, v10) && RGNCOREOBJ::bContain(v5, v7) )
  {
    if ( (_DWORD)v6 != 1 )
      v7 = v5;
    v11 = v7;
    goto LABEL_9;
  }
  if ( (_DWORD)v6 != 1
    || (unsigned int)REGION_CORE::get_sizeScan(*(REGION_CORE **)v7) != 56
    || (unsigned int)REGION_CORE::get_sizeScan(*(REGION_CORE **)v5) != 56 )
  {
LABEL_33:
    v12 = RGNCOREOBJ::bMerge(this, (Win32kRS **)v7, (Win32kRS **)v5, byte_140259E24[v6]);
LABEL_10:
    if ( v12 )
      return RGNCOREOBJ::iComplexity(this, v13);
    RGNCOREOBJ::vSet(this, v13);
    return 0LL;
  }
  v14 = *(REGION_CORE **)v7;
  v25 = 0LL;
  v15 = *(__m128i *)((char *)v14 + 28);
  v16 = *(_QWORD *)((char *)v14 + 28);
  v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
  v18 = *(_QWORD *)(*(_QWORD *)v5 + 28LL);
  v19 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)v5 + 28LL), 8).m128i_u64[0];
  v20 = *(_OWORD *)(*(_QWORD *)v5 + 28LL);
  if ( (int)v16 > (int)v18 )
    v20 = v16;
  v21 = (unsigned int)v19;
  v25.left = v20;
  if ( (int)v17 < (int)v19 )
    v21 = (unsigned int)v17;
  v22 = HIDWORD(v16);
  v23 = HIDWORD(v18);
  v25.right = v21;
  if ( (int)v22 > (int)v23 )
    LODWORD(v23) = v22;
  v24 = HIDWORD(v19);
  v25.top = v23;
  if ( SHIDWORD(v17) < SHIDWORD(v19) )
    LODWORD(v24) = HIDWORD(v17);
  v25.bottom = v24;
  if ( v20 >= (int)v21 || (int)v23 >= (int)v24 )
    RGNCOREOBJ::vSet(this, (struct REGION_CORE *)v21);
  else
    RGNCOREOBJ::vSet(this, &v25);
  return 2LL;
}
