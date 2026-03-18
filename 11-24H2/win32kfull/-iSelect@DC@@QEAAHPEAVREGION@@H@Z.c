/*
 * XREFs of ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400CEC24
 * Callers:
 *     ?GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z @ 0x140016AF8 (-GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z.c)
 *     NtGdiExtSelectClipRgn @ 0x140018FD0 (NtGdiExtSelectClipRgn.c)
 *     NtGdiSelectClipPath @ 0x1401F36D0 (NtGdiSelectClipPath.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400CE8CC (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1401482C8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iSelect(DC *this, struct REGION *a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r14d
  __int64 v7; // rbx
  RGNOBJ *v9; // rcx
  LONG v10; // r8d
  int v11; // eax
  bool v12; // zf
  unsigned int sizeScan; // eax
  __int64 v14; // rbx
  unsigned int v15; // eax
  Gre::Base *v16; // rcx
  unsigned __int64 v17; // rax
  _DWORD *v18; // rbx
  LONG left; // r8d
  unsigned __int64 v20; // rdx
  LONG top; // r9d
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  char *v23; // r10
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+28h] [rbp-38h] BYREF
  struct REGION *v26; // [rsp+30h] [rbp-30h] BYREF
  __int64 v27; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v28; // [rsp+40h] [rbp-20h] BYREF

  v3 = *((_QWORD *)this + 20);
  v4 = 0;
  if ( a3 == 5 )
  {
    if ( !a2 )
    {
      v4 = 2;
      if ( !v3 )
        return v4;
      v26 = (struct REGION *)*((_QWORD *)this + 20);
      --*(_DWORD *)(v3 + 76);
      if ( !*((_DWORD *)v26 + 19) )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
      *((_QWORD *)this + 20) = 0LL;
      goto LABEL_7;
    }
  }
  else if ( a3 != 1 || !a2 || v3 )
  {
    v26 = a2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v25);
    if ( !v25 )
      return v4;
    if ( v3 )
    {
      v24 = v3;
      v4 = RGNOBJ::iCombine((RGNOBJ *)&v25, (struct RGNOBJ *)&v24, (struct RGNOBJ *)&v26, a3);
      if ( v4 )
      {
        ++*(_DWORD *)(v25 + 76);
        *((_QWORD *)this + 20) = v25;
        DC::vReleaseRao(this);
        if ( --*(_DWORD *)(v24 + 76) )
          return v4;
        v9 = (RGNOBJ *)&v24;
LABEL_26:
        RGNOBJ::vDeleteRGNOBJ(v9);
        return v4;
      }
LABEL_25:
      v9 = (RGNOBJ *)&v25;
      goto LABEL_26;
    }
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v24);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v24, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v24);
    if ( v24 )
    {
      if ( (unsigned int)DC::bDpiScaledSurface(this) )
        v17 = *(_QWORD *)((char *)this + 532);
      else
        v17 = *((_QWORD *)this + 64);
      v18 = (_DWORD *)*((_QWORD *)this + 6);
      left = 0;
      *(_QWORD *)&v28.left = 0LL;
      v20 = HIDWORD(v17);
      top = 0;
      *(_QWORD *)&v28.right = v17;
      if ( *((_QWORD *)this + 62) )
      {
        v22 = Gre::Base::Globals(v16);
        SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v27, v22);
        if ( (v18[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
        {
          v28.left += v18[644];
          v28.right += v18[644];
          v28.top += v18[645];
          v28.bottom += v18[645];
        }
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v27);
        LODWORD(v20) = v28.bottom;
        LODWORD(v17) = v28.right;
        top = v28.top;
        left = v28.left;
      }
      v23 = (char *)this + 1024;
      if ( (*((_DWORD *)this + 10) & 1) == 0 )
        v23 = (char *)this + 1016;
      v10 = left - *(_DWORD *)v23;
      v28.right = v17 - *(_DWORD *)v23;
      v11 = *((_DWORD *)v23 + 1);
      v28.left = v10;
      v28.bottom = v20 - v11;
      v28.top = top - v11;
      RGNOBJ::vSet((RGNOBJ *)&v24, &v28);
      v4 = RGNOBJ::iCombine((RGNOBJ *)&v25, (struct RGNOBJ *)&v24, (struct RGNOBJ *)&v26, a3);
      if ( v4 )
      {
        ++*(_DWORD *)(v25 + 76);
        *((_QWORD *)this + 20) = v25;
        DC::vReleaseRao(this);
      }
    }
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v24);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
    v12 = v4 == 0;
LABEL_24:
    if ( !v12 )
      return v4;
    goto LABEL_25;
  }
  v26 = a2;
  v25 = v3;
  if ( !v3 || *(_DWORD *)(v3 + 76) != 1 )
  {
    sizeScan = REGION_CORE::get_sizeScan((struct REGION *)((char *)a2 + 24));
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24, sizeScan);
    if ( !v24 )
      return v4;
    RGNOBJ::vCopy((RGNOBJ *)&v24, (struct RGNOBJ *)&v26);
    ++*(_DWORD *)(v24 + 76);
    v14 = v24;
    v15 = RGNOBJ::iComplexity((RGNOBJ *)&v24);
    *((_QWORD *)this + 20) = v14;
    v4 = v15;
    DC::vReleaseRao(this);
    if ( !v3 )
      return v4;
    v12 = --*(_DWORD *)(v25 + 76) == 0;
    goto LABEL_24;
  }
  if ( RGNOBJ::bCopy((RGNOBJ *)&v25, (struct RGNOBJ *)&v26) )
  {
    v7 = v25;
    v4 = RGNOBJ::iComplexity((RGNOBJ *)&v25);
    *((_QWORD *)this + 20) = v7;
LABEL_7:
    DC::vReleaseRao(this);
  }
  return v4;
}
