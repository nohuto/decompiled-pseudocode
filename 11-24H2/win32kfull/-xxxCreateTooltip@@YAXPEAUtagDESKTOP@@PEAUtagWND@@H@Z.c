/*
 * XREFs of ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x140255950
 * Callers:
 *     xxxTrackMouseMove @ 0x140255AC4 (xxxTrackMouseMove.c)
 *     ?xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z @ 0x140269B94 (-xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z.c)
 * Callees:
 *     _MonitorFromPoint @ 0x140027270 (_MonitorFromPoint.c)
 *     SetRITTimer @ 0x1401BDAB0 (SetRITTimer.c)
 *     ?GetTooltipIdFromHitTest@@YA?AW4tagTOOLTIPID@@PEAUtagWND@@H@Z @ 0x140221A8C (-GetTooltipIdFromHitTest@@YA-AW4tagTOOLTIPID@@PEAUtagWND@@H@Z.c)
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x140269C14 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 */

void __fastcall xxxCreateTooltip(struct tagDESKTOP *a1, struct tagWND *a2, int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int TooltipIdFromHitTest; // ebp
  __int64 UserSessionState; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v5 = 0LL;
  TooltipIdFromHitTest = GetTooltipIdFromHitTest((__int64)a2, a3);
  if ( TooltipIdFromHitTest )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    v10 = MonitorFromPoint(*(_QWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4960LL), 2u, 0);
    v11 = *(_QWORD *)(GetDpiMetricsForDpi(*(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 60LL)) + 64);
    *((_DWORD *)a1 + 12) |= 0x100u;
    v12 = *((_DWORD *)a1 + 50);
    if ( *(_DWORD *)(*((_QWORD *)a2 + 5) + 236LL) != 1 )
      v5 = *(_QWORD *)a2;
    xxxTooltipCallback(TooltipIdFromHitTest, v11, v5);
    if ( *((struct tagWND **)a1 + 24) == a2 && *((_DWORD *)a1 + 50) == v12 )
    {
      v15 = W32GetUserSessionState(v14, v13);
      *((_QWORD *)a1 + 15) = SetRITTimer(
                               *((_QWORD *)a1 + 15),
                               8 * *(_DWORD *)(v15 + 14720),
                               (__int64)TooltipRitHideTimerCallback,
                               1);
    }
  }
}
