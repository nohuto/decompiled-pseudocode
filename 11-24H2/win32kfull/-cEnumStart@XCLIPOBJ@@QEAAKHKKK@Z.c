/*
 * XREFs of ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C
 * Callers:
 *     EngAlphaBlend @ 0x14000A5C0 (EngAlphaBlend.c)
 *     EngHTBlt @ 0x14000C53C (EngHTBlt.c)
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x140018168 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x140020CB0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x140021EE0 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     EngTextOut @ 0x140058790 (EngTextOut.c)
 *     ?vStrWrite04@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400A0C70 (-vStrWrite04@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite32@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400A1210 (-vStrWrite32@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite24@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400A1740 (-vPlgWrite24@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite32@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1400A2560 (-vPlgWrite32@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     CLIPOBJ_cEnumStart @ 0x1400A2930 (CLIPOBJ_cEnumStart.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400D48D8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1400D50D4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     EngTransparentBlt @ 0x14011EBE0 (EngTransparentBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140121030 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140136784 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x14016D28C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vStrWrite24@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14018A9C0 (-vStrWrite24@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1401A8634 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x140219540 (NtGdiCLIPOBJ_cEnumStart.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1402252C4 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     WNDOBJ_cEnumStart @ 0x140301DA0 (WNDOBJ_cEnumStart.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1403072C8 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     ?vStrWrite08@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140313450 (-vStrWrite08@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x140313760 (-vStrWrite16@stretch@@YAXPEAU_STRRUN@1@PEAU_XRUNLEN@1@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x140313A84 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x140313DA4 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 *     ?vPlgWrite16@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14031DE10 (-vPlgWrite16@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite1@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14031E020 (-vPlgWrite1@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite4@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14031E3B0 (-vPlgWrite4@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite8@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14031E750 (-vPlgWrite8@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteAND@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14031E9E0 (-vPlgWriteAND@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteOR@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14031ED80 (-vPlgWriteOR@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400A32E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A345C (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 */

__int64 __fastcall XCLIPOBJ::cEnumStart(XCLIPOBJ *this, int a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // edi
  __int128 v7; // xmm0
  __int64 v8; // rcx
  unsigned int v9; // esi
  int v10; // eax
  Win32kRS *v11; // r14
  struct REGION_CORE *v12; // rdx
  unsigned __int64 pScan_mut; // rcx
  bool v14; // zf
  int v15; // r8d
  unsigned __int64 i; // rdx
  struct SCAN *pscnTail; // rax
  int v19; // ecx
  __int64 v20; // rdx
  _DWORD *v21; // r8
  int v22; // edx
  __int64 v23; // r8

  v5 = 0;
  *((_DWORD *)this + 28) = a3;
  *((_DWORD *)this + 32) = a2;
  if ( a4 != 4 )
    v5 = a4;
  *((_DWORD *)this + 27) = v5;
  if ( a2 )
    v7 = *(_OWORD *)(*((_QWORD *)this + 7) + 52LL);
  else
    v7 = *(_OWORD *)((char *)this + 4);
  *((_OWORD *)this + 4) = v7;
  v8 = *((_QWORD *)this + 7);
  v9 = -1;
  v10 = *(_DWORD *)(v8 + 48);
  v11 = (Win32kRS *)(v8 + 24);
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 22) = v10 - 1;
  if ( v5 >= 2 )
  {
    pscnTail = REGION_CORE::get_pscnTail((REGION_CORE *)(v8 + 24));
    v19 = *((_DWORD *)pscnTail - 1);
    *((_DWORD *)this + 30) = -1;
    v20 = (unsigned int)(4 * v19 + 16);
    v21 = (_DWORD *)((char *)pscnTail - v20 - 4);
    v14 = *((_DWORD *)this + 32) == 0;
    *((_QWORD *)this + 10) = (char *)pscnTail - v20;
    if ( v14 )
    {
      v22 = *((_DWORD *)this + 19);
      while ( 1 )
      {
        v23 = (__int64)v21 - (unsigned int)(4 * *v21 + 16) + 4;
        if ( *(_DWORD *)(v23 + 4) < v22 )
          break;
        v14 = (*((_DWORD *)this + 22))-- == 1;
        if ( v14 )
          return v9;
        *((_QWORD *)this + 10) = v23;
        v21 = (_DWORD *)(v23 - 4);
      }
    }
  }
  else
  {
    if ( GetBaseRustGlobals() )
      pScan_mut = (unsigned __int64)Win32kRS::RegionCore_get_pScan_mut(v11, v12);
    else
      pScan_mut = *(_QWORD *)v11;
    v14 = *((_DWORD *)this + 32) == 0;
    *((_QWORD *)this + 10) = pScan_mut;
    *((_DWORD *)this + 30) = 1;
    if ( v14 )
    {
      v15 = *((_DWORD *)this + 17);
      for ( i = (unsigned int)(4 * *(_DWORD *)pScan_mut + 16); ; pScan_mut = (unsigned int)(4 * *(_DWORD *)i + 16) )
      {
        i += pScan_mut;
        if ( *(_DWORD *)(i + 8) > v15 )
          break;
        v14 = (*((_DWORD *)this + 22))-- == 1;
        if ( v14 )
          return v9;
        *((_QWORD *)this + 10) = i;
      }
    }
  }
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 25) = 4 * ((v5 & 1) == 0) - 2;
  if ( *((_DWORD *)this + 32) && *((_DWORD *)this + 34) <= a5 )
    return *((unsigned int *)this + 34);
  return v9;
}
