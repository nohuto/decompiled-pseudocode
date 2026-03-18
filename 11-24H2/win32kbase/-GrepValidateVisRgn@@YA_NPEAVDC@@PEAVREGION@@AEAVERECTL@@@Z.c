/*
 * XREFs of ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401CD320
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreValidateVisrgn @ 0x140022F24 (GreValidateVisrgn.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x14000F160 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140047EB8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400BC160 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D1F28 (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D1F48 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400EB884 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1400EE304 (-bEqual@ERECTL@@QEBAHAEBV1@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1401C0B88 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

char __fastcall GrepValidateVisRgn(struct DC *this, struct REGION *a2, struct tagRECT *a3)
{
  char v3; // di
  __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // r9
  __int64 v10; // rcx
  LONG v11; // ebx
  LONG v12; // r10d
  LONG v13; // r15d
  LONG v14; // r11d
  __int64 v15; // r9
  int v16; // eax
  LONG v17; // edx
  int v18; // r8d
  __int64 v19; // r9
  int v20; // r10d
  int v21; // r11d
  struct tagRECT v23; // [rsp+30h] [rbp-50h] BYREF
  __m128i si128; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v25[32]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]

  v3 = 0;
  if ( (*((_DWORD *)this + 9) & 0x100000) == 0 )
    return 1;
  v7 = *((_QWORD *)this + 6);
  if ( !v7 || !a2 )
    return 1;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((__int64)v25);
  v8 = (*((_DWORD *)this + 9) & 0x40000) == 0;
  v26 = 0LL;
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 62);
  }
  else
  {
    v10 = *((_QWORD *)this + 265);
    if ( v10 )
    {
      v9 = HmgShareLockCheck(v10, 5);
      v26 = v9;
    }
    else
    {
      v9 = *(_QWORD *)(v7 + 2544);
    }
  }
  if ( !v9 || (*(_DWORD *)(v7 + 40) & 0x20000) != 0 && *(int *)(v9 + 112) < 0 )
    goto LABEL_23;
  v11 = *((_DWORD *)a2 + 13);
  v12 = *((_DWORD *)a2 + 14);
  v13 = *((_DWORD *)a2 + 15);
  v14 = *((_DWORD *)a2 + 16);
  v23.left = v11;
  v23.top = v12;
  v23.right = v13;
  v23.bottom = v14;
  if ( DC::bInFullScreen(this)
    || ERECTL::bEmpty((ERECTL *)&v23)
    || (si128 = _mm_load_si128((const __m128i *)&_xmm), ERECTL::bEqual((ERECTL *)&v23, (const struct ERECTL *)&si128)) )
  {
LABEL_23:
    v3 = 1;
  }
  else
  {
    v16 = *(_DWORD *)(v15 + 116) & 0x800;
    si128.m128i_i64[0] = 0LL;
    si128.m128i_i64[1] = *(_QWORD *)((v16 != 0 ? 0x264 : 0) + v15 + 56);
    if ( !IsRectEmptyInl(&v23) && v11 >= 0 && v17 >= v13 && v20 >= 0 && v18 >= v21 )
    {
      SURFREF::~SURFREF((SURFREF *)v25);
      return 1;
    }
    GrepCaptureLiveMemoryDump(0x190u, 1LL, (__int64)this, v19, (__int64)a2, 0);
    ERECTL::vOrder((ERECTL *)&v23);
    ERECTL::operator*=(&v23.left, si128.m128i_i32);
    *a3 = v23;
  }
  SURFREF::~SURFREF((SURFREF *)v25);
  return v3;
}
