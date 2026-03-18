/*
 * XREFs of ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x14000C950 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400101A0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400D7F78 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400D8054 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreMarkPendingDestroyDC @ 0x14011C458 (GreMarkPendingDestroyDC.c)
 *     GreMarkDCUnreadable @ 0x140152E84 (GreMarkDCUnreadable.c)
 *     bDynamicModeChange @ 0x140175A68 (bDynamicModeChange.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CDF18 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CDFF8 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE0E8 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE1E0 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE2C0 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitICM @ 0x1402E4910 (bInitICM.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140031250 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLockEx(__int64 a1, char a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  int v7; // ebx
  unsigned int *v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // r10
  unsigned int v14; // r11d
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned int v18; // r8d
  __int64 v19; // r10
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned int v23; // r9d
  __int64 v24; // r10
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // r9d
  __int64 v28; // r10
  unsigned int v29; // r11d
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // r9
  unsigned int v33; // r10d
  __int64 v34; // r11
  _DWORD *v35; // rcx
  __int64 v36; // r9
  __int64 v37; // r10
  unsigned int v38; // r11d
  __int64 v39; // r10
  __int64 v40; // rcx
  unsigned int *v41; // [rsp+20h] [rbp-38h] BYREF
  int v42; // [rsp+28h] [rbp-30h]
  __int16 v43; // [rsp+2Ch] [rbp-2Ch]
  __int64 v44; // [rsp+30h] [rbp-28h]

  v5 = a1;
  v6 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  v44 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  HANDLELOCK::vLockHandle(&v41, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, a3 | 1u);
  v7 = v42;
  if ( v42 )
  {
    v8 = v41;
    v9 = v44;
    if ( *((_BYTE *)v41 + 14) == a2 && *((_WORD *)v41 + 6) == HIWORD(v5) )
    {
      v10 = *v41;
      v11 = *(_QWORD *)(v44 + 5672);
      if ( (unsigned int)v10 >= 0x10000 )
      {
        v12 = (unsigned __int16)v10;
        if ( *(_DWORD *)v11 <= 0x10000u )
        {
          v10 = (unsigned __int16)v10;
        }
        else
        {
          v13 = *(_QWORD *)(v11 + 16);
          v14 = *(_DWORD *)(v13 + 2056);
          if ( (unsigned __int16)v10 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
          {
            v16 = 0LL;
          }
          else
          {
            if ( (unsigned __int16)v10 >= v14 )
            {
              v15 = *(_QWORD *)(v13 + 8LL * ((((unsigned __int16)v10 - v14) >> 16) + 1) + 8);
              v12 = -65536 * (((unsigned __int16)v10 - v14) >> 16) - v14 + (unsigned __int16)v10;
            }
            else
            {
              v15 = *(_QWORD *)(v13 + 8);
            }
            v16 = 0LL;
            if ( v12 < *(_DWORD *)(v15 + 20) )
              v16 = *(_QWORD *)v15 + 24LL * v12;
          }
          if ( *(unsigned __int8 *)(v16 + 13) == WORD1(v10) )
            v10 = (unsigned __int16)v10;
        }
      }
      v22 = *(_QWORD *)(v11 + 16);
      v23 = *(_DWORD *)(v22 + 2056);
      if ( (unsigned int)v10 < v23 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
      {
        if ( (unsigned int)v10 >= v23 )
        {
          v24 = *(_QWORD *)(v22 + 8LL * ((((unsigned int)v10 - v23) >> 16) + 1) + 8);
          v10 = -65536 * (((unsigned int)v10 - v23) >> 16) - v23 + (unsigned int)v10;
        }
        else
        {
          v24 = *(_QWORD *)(v22 + 8);
        }
        if ( (unsigned int)v10 < *(_DWORD *)(v24 + 20) )
          v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
      }
      ++*(_DWORD *)(v6 + 8);
      if ( a2 == 5 )
      {
        TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v6 + 680));
      }
      else if ( a2 == 16 )
      {
        TrackObjectReferenceIncrement(2LL, *(_QWORD *)(v6 + 136));
      }
    }
    else
    {
      HIBYTE(v43) = 1;
    }
    v25 = *v8;
    v26 = *(_QWORD *)(v9 + 5672);
    if ( (unsigned int)v25 >= 0x10000 )
    {
      v27 = (unsigned __int16)v25;
      if ( *(_DWORD *)v26 <= 0x10000u )
      {
        v25 = (unsigned __int16)v25;
      }
      else
      {
        v28 = *(_QWORD *)(v26 + 16);
        v29 = *(_DWORD *)(v28 + 2056);
        if ( (unsigned __int16)v25 >= v29 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
        {
          v31 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v25 >= v29 )
          {
            v30 = *(_QWORD *)(v28 + 8LL * ((((unsigned __int16)v25 - v29) >> 16) + 1) + 8);
            v27 = -65536 * (((unsigned __int16)v25 - v29) >> 16) - v29 + (unsigned __int16)v25;
          }
          else
          {
            v30 = *(_QWORD *)(v28 + 8);
          }
          v31 = 0LL;
          if ( v27 < *(_DWORD *)(v30 + 20) )
            v31 = *(_QWORD *)v30 + 24LL * v27;
        }
        if ( *(unsigned __int8 *)(v31 + 13) == WORD1(v25) )
          v25 = (unsigned __int16)v25;
      }
    }
    v32 = *(_QWORD *)(v26 + 16);
    v33 = *(_DWORD *)(v32 + 2056);
    if ( (unsigned int)v25 >= v33 + ((*(unsigned __int16 *)(v32 + 2) + 0xFFFF) << 16)
      || ((unsigned int)v25 >= v33
        ? (v34 = *(_QWORD *)(v32 + 8LL * ((((unsigned int)v25 - v33) >> 16) + 1) + 8),
           v25 = -65536 * (((unsigned int)v25 - v33) >> 16) - v33 + (unsigned int)v25)
        : (v34 = *(_QWORD *)(v32 + 8)),
          (unsigned int)v25 >= *(_DWORD *)(v34 + 20)) )
    {
      v35 = 0LL;
    }
    else
    {
      v35 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * (v25 >> 8)) + 16LL * (unsigned __int8)v25 + 8);
    }
    v21 = (unsigned __int16)*v35 | (*v35 >> 8) & 0xFF0000;
    if ( v21 >= 0x10000 )
    {
      v36 = (unsigned __int16)*v35;
      if ( *(_DWORD *)v26 <= 0x10000u )
      {
        v21 = (unsigned __int16)*v35;
      }
      else
      {
        v37 = *(_QWORD *)(v26 + 16);
        v38 = *(_DWORD *)(v37 + 2056);
        if ( (unsigned __int16)*v35 >= v38 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
        {
          v40 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)*v35 >= v38 )
          {
            v39 = *(_QWORD *)(v37 + 8LL * ((((unsigned __int16)*v35 - v38) >> 16) + 1) + 8);
            v36 = -65536 * (((unsigned __int16)v21 - v38) >> 16) - v38 + (unsigned __int16)v21;
          }
          else
          {
            v39 = *(_QWORD *)(v37 + 8);
          }
          v40 = 0LL;
          if ( (unsigned int)v36 < *(_DWORD *)(v39 + 20) )
            v40 = *(_QWORD *)v39 + 24 * v36;
        }
        if ( *(unsigned __int8 *)(v40 + 13) == HIWORD(v21) )
          v21 = (unsigned __int16)v21;
      }
    }
    v17 = *(_QWORD *)(v26 + 16);
    v18 = *(_DWORD *)(v17 + 2056);
    if ( v21 < v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
    {
      if ( v21 >= v18 )
      {
        v19 = *(_QWORD *)(v17 + 8LL * (((v21 - v18) >> 16) + 1) + 8);
        v21 += -65536 * ((v21 - v18) >> 16) - v18;
      }
      else
      {
        v19 = *(_QWORD *)(v17 + 8);
      }
      *(_BYTE *)(*(_QWORD *)v19 + 24LL * v21 + 6) = 0;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v21 >> 8)) + 16LL * (unsigned __int8)v21,
        0LL);
      KeLeaveCriticalRegion();
    }
    v7 = 0;
    v41 = 0LL;
    v42 = 0;
    KeLeaveCriticalRegion();
  }
  if ( v7 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v41);
  return v6;
}
