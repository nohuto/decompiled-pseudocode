/*
 * XREFs of HmgDecrementShareReferenceCountEx @ 0x1C00421F0
 * Callers:
 *     GreDCSelectPen @ 0x1C00067B0 (GreDCSelectPen.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0018F50 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0033C08 (-vRemoveRefPalettes@@YAXK@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00381D0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C003F8CC (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0041CB0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0045680 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0046370 (--1SURFMEM@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0088250 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0088B30 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C009A7B8 (--1EPALOBJ@@QEAA@XZ.c)
 *     EngDeletePalette @ 0x1C009D940 (EngDeletePalette.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00B41E0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00BA604 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1C00BBAF0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0154130 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0155C5C (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C015E660 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C015F9B0 (--1UMPDREF@@QEAA@XZ.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C0161D44 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C016C39C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     bInitPALOBJ @ 0x1C02DBCC4 (bInitPALOBJ.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004193C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCountEx(int *a1, _DWORD *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // edi
  _BOOL8 v7; // rcx
  int v8; // ebp
  unsigned __int16 *v10; // r14
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned int v18; // r9d
  __int64 v19; // r8
  _DWORD *v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // r10
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 *v27; // [rsp+30h] [rbp-48h] BYREF
  int v28; // [rsp+38h] [rbp-40h]

  if ( a2 )
    *a2 = 0;
  v4 = *a1;
  v5 = *a1;
  v27 = 0LL;
  v28 = 0;
  v6 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, (unsigned __int16)v4 | (v5 >> 8) & 0xFF0000, 0, 0, 1);
  v8 = v28;
  if ( v28 )
  {
    v10 = v27;
    if ( a2 )
    {
      v7 = (*((_BYTE *)v27 + 15) & 8) != 0;
      *a2 = v7;
    }
    v11 = *((_BYTE *)v10 + 14);
    v6 = a1[2];
    if ( v11 == 5 )
    {
      v25 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 85);
      v26 = 0LL;
    }
    else
    {
      if ( v11 != 16 )
      {
LABEL_11:
        --a1[2];
        v12 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
        v13 = *(_QWORD *)(v12 + 8008);
        v14 = SGDGetSessionState(v12);
        v15 = *(_DWORD *)v10 & 0xFFFFFF;
        v16 = *(_QWORD *)(*(_QWORD *)(v14 + 24) + 8008LL);
        if ( v15 >= 0x10000 )
        {
          if ( *(_DWORD *)v16 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v16 + 16),
                                        *v10,
                                        1)
                 + 13) == HIWORD(v15) )
              v15 = (unsigned __int16)v15;
          }
          else
          {
            v15 = *v10;
          }
        }
        v17 = *(_QWORD *)(v16 + 16);
        v18 = *(_DWORD *)(v17 + 2056);
        if ( v15 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16)
          || (v15 >= v18
            ? (v19 = *(_QWORD *)(v17 + 8LL * (((v15 - v18) >> 16) + 1) + 8), v15 += -65536 * ((v15 - v18) >> 16) - v18)
            : (v19 = *(_QWORD *)(v17 + 8)),
              v15 >= *(_DWORD *)(v19 + 20)) )
        {
          v20 = 0LL;
        }
        else
        {
          v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                           + 16LL * (unsigned __int8)v15
                           + 8);
        }
        v21 = (unsigned __int16)*v20 | (*v20 >> 8) & 0xFF0000;
        if ( v21 >= 0x10000 )
        {
          if ( *(_DWORD *)v13 > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *(GdiHandleEntryDirectory **)(v13 + 16),
                                        (unsigned __int16)*v20,
                                        1)
                 + 13) == HIWORD(v21) )
              v21 = (unsigned __int16)v21;
          }
          else
          {
            v21 = (unsigned __int16)*v20;
          }
        }
        v22 = *(_QWORD *)(v13 + 16);
        v23 = *(_DWORD *)(v22 + 2056);
        if ( v21 < v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
        {
          if ( v21 >= v23 )
          {
            v24 = *(_QWORD *)(v22 + 8LL * (((v21 - v23) >> 16) + 1) + 8);
            v21 += -65536 * ((v21 - v23) >> 16) - v23;
          }
          else
          {
            v24 = *(_QWORD *)(v22 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v24 + 24LL * v21 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * ((unsigned __int64)v21 >> 8)) + 16LL * (unsigned __int8)v21,
            0LL);
          KeLeaveCriticalRegion();
        }
        v8 = 0;
        v28 = 0;
        v27 = 0LL;
        KeLeaveCriticalRegion();
        goto LABEL_4;
      }
      v25 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 17);
      v26 = 2LL;
    }
    TrackObjectReferenceDecrement(v26, v25);
    goto LABEL_11;
  }
LABEL_4:
  if ( v8 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
  return v6;
}
