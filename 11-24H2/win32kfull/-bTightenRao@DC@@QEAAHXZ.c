/*
 * XREFs of ?bTightenRao@DC@@QEAAHXZ @ 0x14001666C
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x140015998 (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400CE13C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     GreFillRgn @ 0x1400E2680 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E2CD4 (GreFrameRgn.c)
 *     NtGdiOffsetClipRgn @ 0x1401C8740 (NtGdiOffsetClipRgn.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140202788 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z @ 0x1400CE83C (-RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400CE8CC (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x1400CFC10 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     ?RegionCore_bContain_region@Win32kRS@@YAHPEBVREGION_CORE@@0@Z @ 0x14017C280 (-RegionCore_bContain_region@Win32kRS@@YAHPEBVREGION_CORE@@0@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall DC::bTightenRao(DC *this)
{
  BOOL v1; // r14d
  struct _RECTL *v3; // r15
  __int64 v4; // rax
  REGION *v5; // r8
  REGION *v6; // rdx
  REGION *v7; // rcx
  __int64 v8; // rdx
  _BOOL8 v10; // rcx
  _BOOL8 v11; // rax
  int v12; // ebx
  int v13; // eax
  Win32kRS *v14; // rbx
  const struct REGION_CORE *v15; // rdx
  bool v16; // al
  Win32kRS *v17; // rbx
  const struct REGION_CORE *v18; // rdi
  const struct REGION_CORE *v19; // r8
  REGION *v20; // [rsp+20h] [rbp-50h] BYREF
  REGION *v21; // [rsp+28h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  REGION *v23; // [rsp+38h] [rbp-38h] BYREF
  REGION *v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h] BYREF
  REGION *v26; // [rsp+50h] [rbp-20h]
  __int128 v27; // [rsp+58h] [rbp-18h]

  v1 = 0;
  if ( !*((_QWORD *)this + 143) )
    return v1;
  v3 = (struct _RECTL *)((char *)this + 1000);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  v1 = 1;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  v4 = *((_QWORD *)this + 143);
  v5 = (REGION *)*((_QWORD *)this + 141);
  v6 = (REGION *)*((_QWORD *)this + 21);
  v7 = (REGION *)*((_QWORD *)this + 20);
  v22 = v4;
  if ( !((unsigned __int64)v5 | (unsigned __int64)v6 | (unsigned __int64)v7) )
  {
    if ( *((_QWORD *)this + 144) )
    {
      v21 = (REGION *)*((_QWORD *)this + 144);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
      *((_QWORD *)this + 144) = 0LL;
    }
    RGNOBJ::vGetSubRect((RGNOBJ *)&v22, v3);
    goto LABEL_6;
  }
  v26 = v7;
  v27 = 0LL;
  v10 = v7 != 0LL;
  v11 = v10 + 1;
  *(&v26 + v10) = v6;
  if ( !v6 )
    v11 = v10;
  v12 = v11 + 1;
  *(&v26 + v11) = v5;
  if ( !v5 )
    v12 = v11;
  v21 = (REGION *)*((_QWORD *)this + 144);
  if ( !v21 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
    if ( v20 )
      v21 = v20;
  }
  if ( !v21 )
  {
LABEL_32:
    v1 = 0;
    goto LABEL_33;
  }
  if ( v12 == 1 )
  {
    v20 = v26;
    v13 = RGNOBJ::bCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v20);
LABEL_19:
    v1 = v13 != 0;
    goto LABEL_20;
  }
  if ( v12 == 2 )
  {
    v23 = v26;
    v20 = (REGION *)v27;
    v13 = RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)&v23, (struct RGNOBJ *)&v20, 1);
    goto LABEL_19;
  }
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
  v24 = v26;
  v25 = *((_QWORD *)&v27 + 1);
  v23 = (REGION *)v27;
  if ( !v20
    || !RGNOBJ::iCombine((RGNOBJ *)&v20, (struct RGNOBJ *)&v24, (struct RGNOBJ *)&v23, 1)
    || !RGNOBJ::iCombine((RGNOBJ *)&v21, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v25, 1) )
  {
    v1 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
LABEL_20:
  if ( !v1 )
    goto LABEL_33;
  REGION::vStamp(v21);
  if ( !RGNOBJ::bOffset((RGNOBJ *)&v21, (const struct _POINTL *)this + 129) )
    goto LABEL_32;
  v14 = (Win32kRS *)((v22 + 24) & -(__int64)(v22 != 0));
  if ( GetBaseRustGlobals() )
    v16 = (unsigned int)Win32kRS::RegionCore_is_rect(v14, v15) != 0;
  else
    v16 = REGION_CORE::get_sizeScan(v14) == 56;
  if ( v16 )
  {
    v17 = (Win32kRS *)((v22 + 24) & -(__int64)(v22 != 0));
    v18 = (const struct REGION_CORE *)(((unsigned __int64)v21 + 24) & -(__int64)(v21 != 0LL));
    if ( !(unsigned __int8)IsBaseRustExportsEnabled<1>() )
    {
      if ( *((_DWORD *)v17 + 7) > *((_DWORD *)v18 + 7)
        || *((_DWORD *)v17 + 9) < *((_DWORD *)v18 + 9)
        || *((_DWORD *)v17 + 8) > *((_DWORD *)v18 + 8)
        || *((_DWORD *)v17 + 10) < *((_DWORD *)v18 + 10) )
      {
        goto LABEL_30;
      }
LABEL_36:
      *((_QWORD *)this + 144) = v21;
      RGNOBJ::vGetSubRect((RGNOBJ *)&v21, v3);
      goto LABEL_37;
    }
    if ( (unsigned int)Win32kRS::RegionCore_bContain_region(v17, v18, v19) )
      goto LABEL_36;
  }
LABEL_30:
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v20);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v20, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
  if ( v20
    && RGNOBJ::iCombine((RGNOBJ *)&v20, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v21, 1)
    && RGNOBJ::bCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v20) )
  {
    *((_QWORD *)this + 144) = v21;
    RGNOBJ::vGetSubRect((RGNOBJ *)&v21, v3);
  }
  else
  {
    v1 = 0;
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
LABEL_37:
  if ( !v1 )
  {
LABEL_33:
    *((_QWORD *)this + 144) = 0LL;
    if ( v21 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
  }
LABEL_6:
  DC::vUpdate_VisRect(this, *((struct REGION **)this + 143));
  v8 = *((_QWORD *)this + 62);
  if ( v8 && (*(_DWORD *)(v8 + 116) & 0x800) != 0 )
    *((_DWORD *)this + 130) |= 8u;
  DC::vUpdateScaledRegions(this);
  return v1;
}
