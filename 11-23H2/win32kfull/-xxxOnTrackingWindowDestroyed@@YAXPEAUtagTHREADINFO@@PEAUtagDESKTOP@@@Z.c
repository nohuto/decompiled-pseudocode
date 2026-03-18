/*
 * XREFs of ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x1C013CD6C
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     xxxResetTooltip @ 0x1C0016C70 (xxxResetTooltip.c)
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00D80F8 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x1C013C7B0 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 */

void __fastcall xxxOnTrackingWindowDestroyed(struct tagTHREADINFO *a1, struct tagDESKTOP *a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  struct tagTOOLTIPWND *v7; // rax
  struct tagTOOLTIPWND *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  if ( (unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage() )
  {
    v5 = *((_QWORD *)a2 + 15);
    if ( v5 )
    {
      FindTimer(0LL, v5, 4u, 1, 0LL);
      *((_QWORD *)a2 + 15) = 0LL;
    }
    v6 = *((_DWORD *)a2 + 12);
    if ( (v6 & 0x800) != 0 )
    {
      *((_DWORD *)a2 + 12) = v6 & 0xFFFFF7FF;
      if ( (*((_DWORD *)a1 + 122) & 1) == 0 )
        xxxTooltipCallback(0, 0LL, 0LL, v4);
    }
  }
  else if ( (*((_DWORD *)a2 + 12) & 0x200) != 0 )
  {
    v7 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*((_QWORD *)a2 + 14));
    v8 = v7;
    if ( v7 )
    {
      v9 = *(_QWORD *)v7;
      if ( *(_QWORD *)v7 )
      {
        v13 = 0LL;
        v14 = 0LL;
        ThreadLockAlways(v9, &v13);
        xxxResetTooltip(v8);
        ThreadUnlock1(v11, v10, v12);
      }
    }
  }
}
