/*
 * XREFs of ?xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C013CC80
 * Callers:
 *     xxxTrackMouseMove @ 0x1C0024474 (xxxTrackMouseMove.c)
 *     ?xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z @ 0x1C013CE38 (-xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C0086450 (SetRITTimer.c)
 *     _MonitorFromPoint @ 0x1C00AEBB0 (_MonitorFromPoint.c)
 *     GetDPIMETRICSForDpi @ 0x1C00D8DE0 (GetDPIMETRICSForDpi.c)
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x1C013C7B0 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 *     ?GetTooltipIdFromHitTest@@YA?AW4tagTOOLTIPID@@PEAUtagWND@@H@Z @ 0x1C013CA04 (-GetTooltipIdFromHitTest@@YA-AW4tagTOOLTIPID@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxCreateTooltip2(struct tagDESKTOP *a1, struct tagWND *a2, int a3)
{
  __int64 v5; // rsi
  int TooltipIdFromHitTest; // ebp
  __int64 DPIMETRICSForDpi; // rax
  __int64 v8; // r9
  int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  v5 = 0LL;
  TooltipIdFromHitTest = GetTooltipIdFromHitTest((__int64)a2, a3);
  if ( TooltipIdFromHitTest )
  {
    MonitorFromPoint(*(_QWORD *)(gpsi + 4960LL), 2LL, 0LL);
    DPIMETRICSForDpi = GetDPIMETRICSForDpi();
    v9 = *((_DWORD *)a1 + 50);
    v10 = *(_QWORD *)(DPIMETRICSForDpi + 56);
    *((_DWORD *)a1 + 12) |= 0x800u;
    if ( *(_DWORD *)(*((_QWORD *)a2 + 5) + 236LL) != 1 )
      v5 = *(_QWORD *)a2;
    xxxTooltipCallback(TooltipIdFromHitTest, v10, v5, v8);
    if ( *((struct tagWND **)a1 + 24) == a2 && *((_DWORD *)a1 + 50) == v9 )
    {
      v12 = SGDGetUserSessionState(v11);
      *((_QWORD *)a1 + 15) = SetRITTimer(
                               *((_QWORD *)a1 + 15),
                               8 * *(_DWORD *)(v12 + 14360),
                               (int)TooltipRitHideTimerCallback,
                               1);
    }
  }
}
