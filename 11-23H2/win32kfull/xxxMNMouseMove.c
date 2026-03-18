/*
 * XREFs of xxxMNMouseMove @ 0x1C02180A0
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0213518 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 * Callees:
 *     TrackMouseEvent @ 0x1C0086C14 (TrackMouseEvent.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0087C20 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C008CE78 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00E3E74 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C013A0B4 (safe_cast_fnid_to_PMENUWND.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0215020 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0215780 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0215E88 (IsMFMWFPWindow.c)
 *     xxxMNButtonDown @ 0x1C0216338 (xxxMNButtonDown.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02173E0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNSelectItem @ 0x1C02191F0 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0219C44 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023134C (xxxMNUpdateDraggingInfo.c)
 */

_QWORD *__fastcall xxxMNMouseMove(__int64 **a1, __int64 a2, int a3)
{
  __int64 *v4; // rdx
  int v6; // eax
  __int64 *v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rax
  char v16; // al
  struct tagWND *v17; // rbx
  __int64 *v19[2]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v20[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int64 v22; // [rsp+40h] [rbp-20h]
  __int128 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+58h] [rbp-8h]
  unsigned int v25; // [rsp+80h] [rbp+20h] BYREF
  int v26; // [rsp+90h] [rbp+30h]

  v26 = a3;
  v25 = 0;
  v4 = *a1;
  v23 = 0LL;
  v24 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, *v4);
  if ( *v19[0] == *(_QWORD *)(*v19[0] + 64) && __PAIR64__(SHIWORD(v26), (__int16)a3) != *(_QWORD *)(a2 + 12) )
  {
    v6 = SHIWORD(v26);
    *(_DWORD *)(a2 + 12) = (__int16)a3;
    *(_DWORD *)(a2 + 16) = v6;
    v7 = (__int64 *)xxxMNFindWindowFromPoint(v19, &v25, a3);
    LOBYTE(v8) = IsMFMWFPWindow((__int64)v7);
    if ( v8 )
      ThreadLock(v9, &v23);
    if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
      xxxMNUpdateDraggingInfo(a2, v7, v25);
    if ( *(_DWORD *)(a2 + 20) != 1 )
    {
LABEL_13:
      if ( v7 == (__int64 *)4294967291LL )
      {
        if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
        {
          xxxMNSwitchToAlternateMenu(v19, a2);
LABEL_17:
          xxxMNButtonDown((__int64 *)v19, a2, v25, 0);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19);
        }
      }
      else
      {
        if ( v7 == (__int64 *)0xFFFFFFFFLL )
          goto LABEL_17;
        if ( v7 )
        {
          v10 = safe_cast_fnid_to_PMENUWND((__int64)v7);
          if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v7) && v10 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, *(_QWORD *)(v10 + 8));
            v14 = *(_DWORD *)(a2 + 8);
            if ( (v14 & 0x100) != 0 && (v14 & 0x8000) == 0 && (**(_DWORD **)v19[0] & 0x100000) == 0 )
            {
              v15 = *v7;
              v20[0] = 0;
              v22 = 0LL;
              v20[1] = 2;
              v21 = v15;
              TrackMouseEvent((__int64)v20);
              **(_DWORD **)v19[0] |= 0x100000u;
              xxxSendMessage((ULONG_PTR)v7);
            }
            v16 = xxxSendMessage((ULONG_PTR)v7);
            if ( (v16 & 0x10) != 0 && (v16 & 3) == 0 && !xxxSendMessage((ULONG_PTR)v7) )
            {
              v12 = *v19[0];
              if ( *(_QWORD *)(v10 + 8) == *v19[0] )
                xxxMNHideNextHierarchy((__int64 *)v19);
            }
          }
LABEL_32:
          ThreadUnlock1(v12, v11, v13);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19);
        }
      }
      if ( !*(_QWORD *)(*v19[0] + 56) )
      {
        xxxMNSelectItem(v19, a2);
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19);
      }
      v17 = *(struct tagWND **)(*v19[0] + 56);
      ThreadLock(v17, &v23);
      xxxSendMessage((ULONG_PTR)v17);
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, v17);
      goto LABEL_32;
    }
    if ( v7
      && (v7 != (__int64 *)0xFFFFFFFFLL
       || !*(_QWORD *)(*v19[0] + 8)
       || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v19[0] + 8) + 40LL) + 31LL) & 0x20) == 0) )
    {
      *(_DWORD *)(a2 + 20) = -1;
      goto LABEL_13;
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19);
}
