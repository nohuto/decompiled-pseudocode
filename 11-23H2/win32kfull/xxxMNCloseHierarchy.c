/*
 * XREFs of xxxMNCloseHierarchy @ 0x1C0216C60
 * Callers:
 *     xxxMNCancel @ 0x1C0216554 (xxxMNCancel.c)
 *     xxxMNKeyDown @ 0x1C0217788 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0218340 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02191F0 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxEndMenu @ 0x1C0231520 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1C023E908 (xxxMNKeyFilter.c)
 * Callees:
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C002D8D8 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C007BA50 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C008CE78 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00E3E74 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C013A0B4 (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02152FC (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNAnimate @ 0x1C0233B54 (MNAnimate.c)
 *     xxxSendMenuSelect @ 0x1C023F51C (xxxSendMenuSelect.c)
 */

_QWORD *__fastcall xxxMNCloseHierarchy(__int64 a1, __int64 a2)
{
  struct tagWND *v3; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct tagMENUWND *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD v26[2]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v27[2]; // [rsp+48h] [rbp-19h] BYREF
  __int128 v28; // [rsp+58h] [rbp-9h] BYREF
  __int64 v29; // [rsp+68h] [rbp+7h]
  __int128 v30; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+80h] [rbp+1Fh]
  _QWORD v32[3]; // [rsp+88h] [rbp+27h] BYREF
  __int128 v33; // [rsp+A0h] [rbp+3Fh] BYREF
  __int64 v34; // [rsp+B0h] [rbp+4Fh]

  v31 = 0LL;
  v29 = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v33 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v26, a1);
  MNAnimate(a2, 0LL);
  if ( (**(_DWORD **)v26[0] & 0x20) != 0 )
  {
    if ( (**(_DWORD **)v26[0] & 0x4000) != 0 )
    {
      FindTimer(*(_QWORD *)(*(_QWORD *)v26[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v26[0] &= ~0x4000u;
    }
    v3 = *(struct tagWND **)(*(_QWORD *)v26[0] + 24LL);
    if ( v3 )
    {
      ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v26[0] + 24LL), &v30);
      xxxSendMessage((ULONG_PTR)v3);
      v4 = *(_DWORD *)(a2 + 8);
      if ( (v4 & 0x100) != 0 && (v4 & 4) != 0 && (**(_DWORD **)v26[0] & 1) == 0 )
      {
        ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v26[0] + 16LL), &v28);
        xxxActivateWindow(*(struct tagWND **)(*(_QWORD *)v26[0] + 16LL));
        ThreadUnlock1(v6, v5, v7);
      }
      xxxWindowEvent(7u, v3, -4, 0, 0);
      if ( ThreadUnlock1(v9, v8, v10) )
      {
        if ( !(unsigned int)xxxDestroyWindow((__int64 *)v3) )
        {
          v11 = (struct tagMENUWND *)safe_cast_fnid_to_PMENUWND((__int64)v3);
          if ( v11 )
            xxxMNDestroyHandler(v11);
        }
      }
      HMAssignmentUnlock(*(_QWORD *)v26[0] + 24LL);
      **(_DWORD **)v26[0] &= ~0x20u;
    }
    v12 = *(_QWORD *)v26[0];
    if ( (**(_DWORD **)v26[0] & 1) != 0 )
    {
      HMAssignmentUnlock(v12 + 56);
    }
    else
    {
      v27[1] = *(_QWORD *)(v12 + 16);
      v27[0] = *(_QWORD *)(*(_QWORD *)v26[0] + 64LL) + 56LL;
      HMAssignmentLock(v27, 0LL);
    }
    if ( (*(_DWORD *)(a2 + 8) & 4) != 0 && *(_DWORD *)(*(_QWORD *)v26[0] + 80LL) != -1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)v26[0] + 64LL);
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
      {
        ThreadLockAlways(*(_QWORD *)(v13 + 8), &v28);
        ThreadLockAlways(*(_QWORD *)(*(_QWORD *)v26[0] + 16LL), &v30);
        ThreadLock(*(_QWORD *)(*(_QWORD *)v26[0] + 40LL), &v33);
        v15 = *(_DWORD *)(*(_QWORD *)v26[0] + 80LL);
        SmartObjStackRefBase<tagMENU>::Init(v32, *(_QWORD *)(*(_QWORD *)v26[0] + 40LL));
        v32[2] = 0LL;
        xxxSendMenuSelect(v14, *(_QWORD *)(*(_QWORD *)v26[0] + 16LL), (unsigned int)v32, v15, a2);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v32);
        ThreadUnlock1(v17, v16, v18);
        ThreadUnlock1(v20, v19, v21);
        ThreadUnlock1(v23, v22, v24);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v26);
}
