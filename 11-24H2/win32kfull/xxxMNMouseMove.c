/*
 * XREFs of xxxMNMouseMove @ 0x14006DA24
 * Callers:
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x14006DE58 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x14006DE80 (xxxMNFindWindowFromPoint.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x14006F2D0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x14009BDD0 (-xxxMNHideNextHierarchy@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     TrackMouseEvent @ 0x14019C004 (TrackMouseEvent.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1401FB1A0 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402BEC74 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNUpdateDraggingInfo @ 0x1402E8064 (xxxMNUpdateDraggingInfo.c)
 */

void __fastcall xxxMNMouseMove(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // eax
  struct tagWND *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rsi
  int v10; // eax
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rdx
  struct tagWND *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagTHREADINFO *v19; // rax
  int v20; // ebx
  _QWORD *v21; // rax
  ULONG_PTR v22; // rax
  _QWORD v23[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v25[4]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+30h]

  v27 = a3;
  BugCheckParameter3[1] = 0LL;
  BugCheckParameter3[0] = -1LL;
  v26 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v23);
  if ( *(_QWORD *)v23[0] != *(_QWORD *)(*(_QWORD *)v23[0] + 64LL) )
    goto LABEL_16;
  if ( __PAIR64__(SHIWORD(v27), (__int16)a3) == *(_QWORD *)(a2 + 12) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v15);
    return;
  }
  v5 = SHIWORD(v27);
  *(_DWORD *)(a2 + 12) = (__int16)a3;
  *(_DWORD *)(a2 + 16) = v5;
  v6 = (struct tagWND *)xxxMNFindWindowFromPoint(v23, &v26, a3);
  if ( (unsigned int)IsMFMWFPWindow(v6) )
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>(BugCheckParameter3, v7);
  if ( (*(_DWORD *)(a2 + 8) & 0x8000) != 0 )
    xxxMNUpdateDraggingInfo(a2, v6, v26);
  if ( *(_DWORD *)(a2 + 20) == 1 )
  {
    if ( !v6
      || v6 == (struct tagWND *)0xFFFFFFFFLL
      && *(_QWORD *)(*(_QWORD *)v23[0] + 8LL)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v23[0] + 8LL) + 40LL) + 31LL) & 0x20) != 0 )
    {
      goto LABEL_16;
    }
    *(_DWORD *)(a2 + 20) = -1;
  }
  if ( v6 == (struct tagWND *)4294967291LL )
  {
    if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
      goto LABEL_24;
    xxxMNSwitchToAlternateMenu(v23, a2);
  }
  else if ( v6 != (struct tagWND *)0xFFFFFFFFLL )
  {
    if ( v6 )
    {
      v8 = safe_cast_fnid_to_PMENUWND(v6);
      if ( (unsigned int)IsWindowBeingDestroyed(v6) || !v8 )
        goto LABEL_16;
      v9 = *(_QWORD *)(v8 + 8);
      if ( v9 != *(_QWORD *)v23[0] )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v23);
        if ( v9 )
        {
          v23[0] = *(_QWORD *)(v9 + 88);
          ++*(_DWORD *)(v23[0] + 8LL);
        }
        else
        {
          v23[0] = gSmartObjNullRef;
        }
      }
      v10 = *(_DWORD *)(a2 + 8);
      if ( (v10 & 0x100) != 0 && (v10 & 0x8000) == 0 && (**(_DWORD **)v23[0] & 0x100000) == 0 )
      {
        v22 = *(_QWORD *)v6;
        v25[0] = 0x200000000LL;
        v25[2] = 0LL;
        v25[1] = v22;
        TrackMouseEvent(v25);
        **(_DWORD **)v23[0] |= 0x100000u;
        xxxSendMessage(v6, 0x20u);
      }
      v11 = xxxSendMessage(v6, 0x1E5u);
      if ( (v11 & 0x10) == 0 || (v11 & 3) != 0 || xxxSendMessage(v6, 0x1F0u) || *(_QWORD *)(v8 + 8) != *(_QWORD *)v23[0] )
        goto LABEL_16;
      goto LABEL_31;
    }
LABEL_24:
    if ( *(_QWORD *)(*(_QWORD *)v23[0] + 56LL) )
    {
      v16 = *(struct tagWND **)(*(_QWORD *)v23[0] + 56LL);
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v25, (__int64)v16);
      xxxSendMessage(v16, 0x1E5u);
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)a2, v16);
      v19 = PtiCurrent(v18, v17);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v19, v25);
    }
    else
    {
      xxxMNSelectItem(v23, a2, 0xFFFFFFFFLL);
    }
    goto LABEL_16;
  }
  if ( *(_DWORD *)(*(_QWORD *)v23[0] + 80LL) != v26 )
  {
    v20 = **(_DWORD **)v23[0];
    v21 = (_QWORD *)xxxMNSelectItem(v23, a2, v26);
    if ( v21 && v21[2] && (*(_DWORD *)(*v21 + 4LL) & 3) == 0 && (v20 & 0x400) != 0 )
      xxxMNOpenHierarchy(v23, a2);
    goto LABEL_16;
  }
LABEL_31:
  xxxMNHideNextHierarchy(v23);
LABEL_16:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23);
  if ( BugCheckParameter3[0] != -1LL )
  {
    v14 = PtiCurrent(v13, v12);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v14, BugCheckParameter3);
  }
}
