/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x140035220
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400150B4 (-vCleanupDCs@@YAXK@Z.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x14003605C (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     GreCleanDC @ 0x1401073F0 (GreCleanDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1401C5BB0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x14000D9B0 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x140035710 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x140035740 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x140035780 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1400357D0 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     GreDCSelectBrush @ 0x140035920 (GreDCSelectBrush.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     GreDCSelectPen @ 0x14003ABF0 (GreDCSelectPen.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400C5618 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400C568C (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7CEC (-GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this, int a2)
{
  DC *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  DC *v7; // rcx
  BOOL v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // r9
  DC *v11; // rsi
  struct HPATH__ *v12; // rdx
  char *v13; // rcx
  __int128 *v14; // rcx
  __int64 v15; // rdx
  __int128 *v16; // rax
  __int64 v17; // r8
  __int128 v18; // xmm0
  __int128 *v19; // rcx
  __int128 *v20; // rax
  __int128 v21; // xmm0
  __int64 v22; // rbx
  __int64 v23; // rcx
  int (*v24)(void); // rax
  unsigned int v25; // ebx
  void (__fastcall *v26)(DC **, _QWORD); // rax
  __int64 v27; // rbx
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rbx
  void (__fastcall *v32)(__int64); // rax
  DC *v33; // rdx
  __int64 v34; // rax
  int v35; // ecx
  int v36; // edx
  char v38[16]; // [rsp+20h] [rbp-A8h] BYREF
  char v39[8]; // [rsp+30h] [rbp-98h] BYREF
  struct _BASEOBJECT *v40; // [rsp+38h] [rbp-90h]
  ULONG_PTR v41; // [rsp+D0h] [rbp+8h] BYREF

  v4 = *this;
  v5 = *((_QWORD *)v4 + 122);
  v6 = *(_DWORD *)(v5 + 152);
  if ( (v6 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v4, *(_QWORD *)(v5 + 160));
    v4 = *this;
  }
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(v4);
  v7 = *this;
  v8 = *(_DWORD *)(*((_QWORD *)*this + 122) + 104LL) != 1 || (*((_DWORD *)v7 + 63) & 1) != 0;
  if ( *((int *)v7 + 26) > 1 )
    GrepRestoreDCOBJ((struct XDCOBJ *)this, 1);
  v9 = *(_QWORD *)(W32GetSessionState(v7) + 88);
  if ( *((_QWORD *)*this + 11) != *(_QWORD *)(v9 + 3768) )
    GrepSelectPalette((struct XDCOBJ *)this, *(HPALETTE *)(v9 + 584), 1);
  if ( *((_DWORD *)*this + 8) == 1 )
  {
    LOBYTE(v10) = 5;
    if ( a2 )
      LOBYTE(v10) = 7;
    GrepSelectBitmap(v38, this, *(_QWORD *)(*(_QWORD *)(v9 + 3008) + 168LL), v10);
    *((_DWORD *)*this + 9) &= ~0x1000u;
  }
  *((_WORD *)*this + 1044) = -1;
  if ( *((_QWORD *)*this + 20) )
  {
    v41 = *((_QWORD *)*this + 20);
    RGNOBJ::vDeleteRGNOBJ(&v41);
    *((_QWORD *)*this + 20) = 0LL;
  }
  if ( *((_QWORD *)*this + 21) )
  {
    v41 = *((_QWORD *)*this + 21);
    RGNOBJ::vDeleteRGNOBJ(&v41);
    *((_QWORD *)*this + 21) = 0LL;
  }
  v11 = *this;
  v12 = (struct HPATH__ *)*((_QWORD *)*this + 25);
  if ( v12 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v39, v12);
    if ( v40 && (*((_DWORD *)v40 + 22) & 1) == 0 )
      HmgDecrementShareReferenceCountEx(v40, 0LL);
    *((_QWORD *)v11 + 25) = 0LL;
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v39);
  }
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)*this + 19));
  HmgDecrementShareReferenceCountEx(*((struct _BASEOBJECT **)*this + 12), 0LL);
  v13 = (char *)*((_QWORD *)*this + 37);
  if ( v13 && v13 != (char *)*this + 264 )
  {
    GreDeleteFastMutex(v13);
    *((_QWORD *)*this + 37) = 0LL;
  }
  v14 = (__int128 *)(v9 + 584);
  v15 = 3LL;
  v16 = (__int128 *)((char *)*this + 80);
  v17 = 3LL;
  do
  {
    v16 += 8;
    v18 = *v14;
    v14 += 8;
    *(v16 - 8) = v18;
    *(v16 - 7) = *(v14 - 7);
    *(v16 - 6) = *(v14 - 6);
    *(v16 - 5) = *(v14 - 5);
    *(v16 - 4) = *(v14 - 4);
    *(v16 - 3) = *(v14 - 3);
    *(v16 - 2) = *(v14 - 2);
    *(v16 - 1) = *(v14 - 1);
    --v17;
  }
  while ( v17 );
  *v16 = *v14;
  v16[1] = v14[1];
  v19 = (__int128 *)*((_QWORD *)*this + 122);
  v20 = (__int128 *)(v9 + 144);
  do
  {
    v19 += 8;
    v21 = *v20;
    v20 += 8;
    *(v19 - 8) = v21;
    *(v19 - 7) = *(v20 - 7);
    *(v19 - 6) = *(v20 - 6);
    *(v19 - 5) = *(v20 - 5);
    *(v19 - 4) = *(v20 - 4);
    *(v19 - 3) = *(v20 - 3);
    *(v19 - 2) = *(v20 - 2);
    *(v19 - 1) = *(v20 - 1);
    --v15;
  }
  while ( v15 );
  *v19 = *v20;
  v19[1] = v20[1];
  v19[2] = v20[2];
  *(_DWORD *)(*((_QWORD *)*this + 122) + 152LL) |= 0x12001Fu;
  HmgIncrementShareReferenceCount(*((struct _BASEOBJECT **)*this + 17));
  HmgIncrementShareReferenceCount(*((struct _BASEOBJECT **)*this + 18));
  v22 = *((_QWORD *)*this + 6);
  v23 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
  v24 = *(int (**)(void))(v23 + 1496);
  if ( v24 )
  {
    if ( v24() >= 0 )
    {
      v25 = *(_DWORD *)(v22 + 40) & 1;
      v23 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
      v26 = *(void (__fastcall **)(DC **, _QWORD))(v23 + 1504);
      if ( v26 )
        v26(this, v25);
    }
  }
  v27 = *((_QWORD *)*this + 6);
  if ( v27 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v23) + 57008) + 48LL) )
    **((_DWORD **)*this + 122) |= 2u;
  v28 = *((_DWORD *)*this + 63);
  v29 = v28 | 1;
  v30 = v28 & 0xFFFFFFFE;
  if ( !v8 )
    v29 = v30;
  *((_DWORD *)*this + 63) = v29;
  HmgIncrementShareReferenceCount(*((struct _BASEOBJECT **)*this + 12));
  v31 = *((_QWORD *)*this + 220);
  v32 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2000LL);
  if ( v32 )
    v32(v31);
  *((_QWORD *)*this + 220) = 0LL;
  v33 = *this;
  v34 = *((_DWORD *)*this + 10) & 1;
  v35 = *((_DWORD *)*this + 2 * v34 + 255);
  *((_DWORD *)v33 + 298) = *((_DWORD *)*this + 2 * v34 + 254);
  *((_DWORD *)v33 + 299) = v35;
  DC::vReleaseRao(*this);
  v36 = *((_DWORD *)*this + 130);
  if ( (v36 & 1) != 0 && (v36 & 2) == 0 )
    DC::vClearDpiScaling(*this);
  return 1LL;
}
