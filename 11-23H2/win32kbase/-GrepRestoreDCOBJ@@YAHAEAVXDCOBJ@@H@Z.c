/*
 * XREFs of ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8
 * Callers:
 *     GreRestoreDC @ 0x1C000F0E0 (GreRestoreDC.c)
 *     GreRestoreOwnedDC @ 0x1C0039180 (GreRestoreOwnedDC.c)
 * Callees:
 *     GreDCSelectPen @ 0x1C00067B0 (GreDCSelectPen.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003A440 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C003BC08 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C003F8CC (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F908 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C00402A0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00404E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0041FC0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0045680 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreLockVisRgn @ 0x1C0051080 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C005BA14 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     HmgLockIgnoreOwner @ 0x1C005C9F0 (HmgLockIgnoreOwner.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0088250 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00889C0 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreDCSelectBrush @ 0x1C0089420 (GreDCSelectBrush.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C009A7B8 (--1EPALOBJ@@QEAA@XZ.c)
 *     vRestoreRegion @ 0x1C00A4C80 (vRestoreRegion.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00D28F8 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0050 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0151FE0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 */

__int64 __fastcall GrepRestoreDCOBJ(DC **a1, int a2)
{
  unsigned int v4; // r15d
  _QWORD *v5; // r13
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rbx
  int v9; // r14d
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  DC *v14; // rcx
  HPALETTE v15; // rdx
  __int64 v16; // rax
  DC *v17; // rcx
  DC *v18; // rdx
  int v19; // ecx
  __int64 v20; // r8
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // ecx
  __int64 v25; // [rsp+30h] [rbp-40h]
  char v26; // [rsp+38h] [rbp-38h]
  DC *v27[6]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+40h] BYREF
  HSEMAPHORE v29; // [rsp+C0h] [rbp+50h] BYREF

  v4 = 1;
  v5 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v6 = *((_QWORD *)*a1 + 122);
  v7 = *(_DWORD *)(v6 + 152);
  if ( (v7 & 0x1000) != 0 )
    GreDCSelectBrush(*a1, *(_QWORD *)(v6 + 160));
  if ( (v7 & 0x2000) != 0 )
    GreDCSelectPen(*a1, *(_QWORD *)(*((_QWORD *)*a1 + 122) + 168LL));
  if ( a2 < 0 )
    a2 += *((_DWORD *)*a1 + 26);
  if ( a2 < 1 || a2 >= *((_DWORD *)*a1 + 26) )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  else
  {
    v8 = *((_QWORD *)*a1 + 6);
    if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
      GreLockVisRgn(v8);
    v9 = *((_DWORD *)*a1 + 9) & 0x800;
    if ( v9 )
      DC::bMakeInfoDC(*a1, 0);
    v10 = *(_DWORD *)(*((_QWORD *)*a1 + 122) + 104LL);
    while ( 1 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v27);
      LOBYTE(v11) = 1;
      v27[0] = (DC *)HmgLockIgnoreOwner(*((_QWORD *)*a1 + 14), v11);
      if ( !v27[0] )
        break;
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*a1 + 17));
      DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*a1 + 18));
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)*a1 + 19));
      DEC_SHARE_REF_CNT(*((struct OBJECT **)*a1 + 12));
      vRestoreRegion(a1, (unsigned int)(*((_DWORD *)*a1 + 26) - 1));
      if ( qword_1C0294740 && (int)qword_1C0294740() >= 0 && qword_1C0294748 )
        qword_1C0294748(a1, (unsigned int)(*((_DWORD *)*a1 + 26) - 1));
      v12 = *((_QWORD *)*a1 + 62);
      if ( v12 )
      {
        if ( *((_DWORD *)*a1 + 8) == 1 )
        {
          hbmSelectBitmapInternal((struct XDCOBJ *)a1, *(HBITMAP *)(v5[396] + 168LL), 1, 0, 1);
        }
        else
        {
          v13 = *(_DWORD *)(v12 + 112);
          if ( (v13 & 0x800) != 0 )
          {
            DEC_SHARE_REF_CNT((struct OBJECT *)v12);
          }
          else if ( v13 >= 0 )
          {
            SURFACE::vDec_cRef((SURFACE *)v12);
          }
        }
      }
      v29 = (HSEMAPHORE)v5[5];
      EngAcquireSemaphore(v29);
      v14 = v27[0];
      v15 = (HPALETTE)*((_QWORD *)v27[0] + 10);
      if ( *((HPALETTE *)*a1 + 10) != v15 )
      {
        SelectPaletteWorker((struct XDCOBJ *)a1, v15, 1);
        v14 = v27[0];
      }
      if ( *((_QWORD *)*a1 + 11) != *((_QWORD *)v14 + 11) )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v28, *((HPALETTE *)*a1 + 10));
        *((_QWORD *)v27[0] + 11) = v28;
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v28);
        v14 = v27[0];
      }
      v16 = *((_QWORD *)v14 + 11);
      if ( v16 != v5[750] )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v16 + 56));
        v14 = v27[0];
      }
      DC::vCopyTo(v14, (struct XDCOBJ *)a1);
      XDCOBJ::vDeleteCore((XDCOBJ *)v27);
      SEMOBJ::vUnlock((SEMOBJ *)&v29);
      DCOBJ::~DCOBJ((DCOBJ *)v27);
      if ( a2 >= *((_DWORD *)*a1 + 26) )
        goto LABEL_35;
    }
    EngSetLastError(6u);
    v4 = 0;
    DCOBJ::~DCOBJ((DCOBJ *)v27);
LABEL_35:
    v17 = *a1;
    if ( v10 != *(_DWORD *)(*((_QWORD *)*a1 + 122) + 104LL) )
    {
      *((_DWORD *)v17 + 63) |= 1u;
      v17 = *a1;
    }
    if ( v9 )
      DC::bMakeInfoDC(v17, 1);
    DC::vReleaseRao(*a1);
    DC::AcquireDcVisRgnShared(*a1);
    DC::vUpdate_VisRect(*a1, *((struct REGION **)*a1 + 142));
    if ( v26 )
      CPushLock::ReleaseLock((CPushLock *)(v25 + 1112));
    *(_DWORD *)(*((_QWORD *)*a1 + 122) + 152LL) |= 0x12001Fu;
    if ( *((_DWORD *)*a1 + 8) == 1 )
      DC::bSetDefaultRegion(*a1);
    v18 = *a1;
    v19 = *((_DWORD *)*a1 + 9);
    v20 = *((_QWORD *)*a1 + 62);
    if ( (v19 & 1) != 0
      || *((_DWORD *)v18 + 8) == 1
      && v20
      && ((v21 = *(_DWORD *)(v20 + 112), (v21 & 0x4000) != 0) || (v21 & 0x800000) != 0
                                                              && (*(_DWORD *)(v8 + 40) & 1) != 0) )
    {
      *((_DWORD *)v18 + 9) = v19 | 0x200;
      v18 = *a1;
      v23 = *((_DWORD *)*a1 + 9);
      if ( (*(_DWORD *)(v20 + 112) & 0x200) != 0 )
        v22 = v23 | 0x8000;
      else
        v22 = v23 & 0xFFFF7FFF;
    }
    else
    {
      v22 = v19 & 0xFFFFFDFF;
    }
    *((_DWORD *)v18 + 9) = v22;
    DC::vCalcFillOrigin(*a1);
    if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
      GreUnlockVisRgn(v8);
  }
  return v4;
}
