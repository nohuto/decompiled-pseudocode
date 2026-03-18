/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C0098298
 * Callers:
 *     xxxCapture @ 0x1C00117EC (xxxCapture.c)
 *     xxxTrackMouseMove @ 0x1C0024474 (xxxTrackMouseMove.c)
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxResetTooltip @ 0x1C0016C70 (xxxResetTooltip.c)
 *     xxxHotTrack @ 0x1C0017B10 (xxxHotTrack.c)
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00D80F8 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     ?ResetTooltipTimer@@YAXPEAUtagDESKTOP@@@Z @ 0x1C013CB70 (-ResetTooltipTimer@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?xxxTooltipDestroyCallback@@YAXXZ @ 0x1C013CED8 (-xxxTooltipDestroyCallback@@YAXXZ.c)
 */

void __fastcall xxxCancelMouseMoveTracking(unsigned __int16 a1, struct tagWND *a2, int a3, unsigned __int16 a4)
{
  char v5; // si
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct tagTOOLTIPWND *v12; // rax
  struct tagTOOLTIPWND *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h]

  v5 = a4 & a1;
  if ( (a4 & a1 & 0x400) != 0 )
    xxxHotTrack(a2, a3, 0);
  if ( (unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage() )
  {
    if ( (a4 & 0x800) != 0 )
    {
      v9 = *((_QWORD *)a2 + 3);
      if ( *(_QWORD *)(v9 + 120) )
        ResetTooltipTimer((struct tagDESKTOP *)v9);
      if ( (a1 & 0x800) != 0 )
        xxxTooltipDestroyCallback();
    }
  }
  else if ( (a1 & 0x200) != 0 && (a4 & 0x300) != 0 )
  {
    v10 = *((_QWORD *)a2 + 3);
    v11 = 0LL;
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 112);
    v12 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(v11);
    v13 = v12;
    if ( v12 )
    {
      v14 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 )
      {
        v18 = 0LL;
        v19 = 0LL;
        ThreadLockAlways(v14, &v18);
        xxxResetTooltip(v13);
        ThreadUnlock1(v16, v15, v17);
      }
    }
  }
  if ( v5 < 0 )
    PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0LL, 0LL);
  if ( (v5 & 0x40) != 0 )
    FindTimer((__int64)a2, 65530LL, 2u, 1, 0LL);
}
