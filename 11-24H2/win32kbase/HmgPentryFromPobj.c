/*
 * XREFs of HmgPentryFromPobj @ 0x140032C30
 * Callers:
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vCleanupRegionsAndPaths@@YAXK@Z @ 0x140014C24 (-vCleanupRegionsAndPaths@@YAXK@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140014D00 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x140021A94 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x14002E270 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgRemoveObject @ 0x140031C10 (HmgRemoveObject.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1400346B8 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1400364AC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiCreateRectRgn @ 0x140039620 (NtGdiCreateRectRgn.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z @ 0x1400BF050 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6030 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?GrepSelectBrush@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x14013B540 (-GrepSelectBrush@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x14013DF58 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C1BDC (-HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEA.c)
 *     ?HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z @ 0x1401C1CA4 (-HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z.c)
 *     ?GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1401C3CA0 (-GrepSelectPen@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgPentryFromPobj(_DWORD *a1)
{
  __int64 v2; // r10
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // r11d
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // r8d
  __int64 v11; // r11
  unsigned int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r11
  unsigned int v16; // esi
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // r10
  unsigned int v20; // r8d
  __int64 v21; // r11
  _DWORD *v22; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 5672LL);
  v3 = (unsigned __int16)*a1 | (*a1 >> 8) & 0xFF0000;
  if ( v3 >= 0x10000 )
  {
    v4 = (unsigned __int16)*a1;
    if ( *(_DWORD *)v2 <= 0x10000u )
    {
      v3 = (unsigned __int16)*a1;
    }
    else
    {
      v5 = *(_QWORD *)(v2 + 16);
      v6 = *(_DWORD *)(v5 + 2056);
      if ( (unsigned __int16)*a1 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      {
        v8 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)*a1 >= v6 )
        {
          v7 = *(_QWORD *)(v5 + 8LL * ((((unsigned __int16)*a1 - v6) >> 16) + 1) + 8);
          v4 = -65536 * (((unsigned __int16)v3 - v6) >> 16) - v6 + (unsigned __int16)v3;
        }
        else
        {
          v7 = *(_QWORD *)(v5 + 8);
        }
        v8 = 0LL;
        if ( (unsigned int)v4 < *(_DWORD *)(v7 + 20) )
          v8 = *(_QWORD *)v7 + 24 * v4;
      }
      if ( *(unsigned __int8 *)(v8 + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)*a1;
    }
  }
  v9 = *(_QWORD *)(v2 + 16);
  v10 = *(_DWORD *)(v9 + 2056);
  if ( v3 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
  {
    v13 = 0LL;
  }
  else
  {
    if ( v3 >= v10 )
    {
      v11 = *(_QWORD *)(v9 + 8LL * (((v3 - v10) >> 16) + 1) + 8);
      v12 = v3 + -65536 * ((v3 - v10) >> 16) - v10;
    }
    else
    {
      v11 = *(_QWORD *)(v9 + 8);
      v12 = v3;
    }
    v13 = 0LL;
    if ( v12 < *(_DWORD *)(v11 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                   + 16LL * (unsigned __int8)v12
                   + 8) )
    {
      v13 = *(_QWORD *)v11 + 24LL * v12;
    }
  }
  if ( v3 >= 0x10000 )
  {
    v14 = (unsigned __int16)v3;
    if ( *(_DWORD *)v2 <= 0x10000u )
    {
      v3 = (unsigned __int16)v3;
    }
    else
    {
      v15 = *(_QWORD *)(v2 + 16);
      v16 = *(_DWORD *)(v15 + 2056);
      if ( (unsigned __int16)v3 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
      {
        v18 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v3 >= v16 )
        {
          v17 = *(_QWORD *)(v15 + 8LL * ((((unsigned __int16)v3 - v16) >> 16) + 1) + 8);
          v14 = -65536 * (((unsigned __int16)v3 - v16) >> 16) - v16 + (unsigned __int16)v3;
        }
        else
        {
          v17 = *(_QWORD *)(v15 + 8);
        }
        v18 = 0LL;
        if ( (unsigned int)v14 < *(_DWORD *)(v17 + 20) )
          v18 = *(_QWORD *)v17 + 24 * v14;
      }
      if ( *(unsigned __int8 *)(v18 + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)v3;
    }
  }
  v19 = *(_QWORD *)(v2 + 16);
  v20 = *(_DWORD *)(v19 + 2056);
  if ( v3 >= v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16)
    || (v3 >= v20
      ? (v21 = *(_QWORD *)(v19 + 8LL * (((v3 - v20) >> 16) + 1) + 8), v3 += -65536 * ((v3 - v20) >> 16) - v20)
      : (v21 = *(_QWORD *)(v19 + 8)),
        v3 >= *(_DWORD *)(v21 + 20)) )
  {
    v22 = 0LL;
  }
  else
  {
    v22 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                     + 16LL * (unsigned __int8)v3
                     + 8);
  }
  if ( v22 != a1 )
    return 0LL;
  return v13;
}
