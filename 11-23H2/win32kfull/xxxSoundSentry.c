/*
 * XREFs of xxxSoundSentry @ 0x1C01F5958
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 *     NtUserSoundSentry @ 0x1C01DE4C0 (NtUserSoundSentry.c)
 *     xxxMessageBeep @ 0x1C01F64D8 (xxxMessageBeep.c)
 *     xxxOldMessageBeep @ 0x1C01F6568 (xxxOldMessageBeep.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x1C01F877C (-xxxUserBeep@@YAHKK_N@Z.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     GreTransformPoints @ 0x1C0006CF4 (GreTransformPoints.c)
 *     NtGdiPatBlt @ 0x1C00BD720 (NtGdiPatBlt.c)
 *     GetPrimaryMonitorRect @ 0x1C00D8B54 (GetPrimaryMonitorRect.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C00EFF30 (InternalSetTimer.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     GreEnableAppContainerRestriction @ 0x1C026B4FC (GreEnableAppContainerRestriction.c)
 */

__int64 xxxSoundSentry()
{
  int v0; // ecx
  __int64 v2; // rbx
  signed int v3; // r8d
  __int64 v4; // rax
  HDC v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 DesktopWindow; // rax
  HDC DCEx; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  HDC v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int128 v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int128 v27; // [rsp+30h] [rbp-40h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h]
  _BYTE v29[16]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v30; // [rsp+58h] [rbp-18h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    v0 = 50;
LABEL_3:
    UserSetLastError(v0);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v2 = *(_QWORD *)(gpqForeground + 128LL);
    if ( v2 )
    {
      if ( !WPP_MAIN_CB.Queue.ListEntry.Flink )
      {
        if ( *((_DWORD *)&gSoundSentry + 8) == 1 || (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 2) <= 1 )
        {
          LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = *((_DWORD *)&gSoundSentry + 8);
          v3 = *(_DWORD *)(gpsi + 4984LL);
          if ( v3 < 1 )
            v3 = 1200;
          WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = *(PDRIVER_CONTROL *)v2;
          WPP_MAIN_CB.Queue.ListEntry.Flink = (struct _LIST_ENTRY *)InternalSetTimer(
                                                                      0LL,
                                                                      0LL,
                                                                      v3,
                                                                      (__int64)xxxSoundSentryTimer,
                                                                      0,
                                                                      20);
          if ( !WPP_MAIN_CB.Queue.ListEntry.Flink )
          {
            v0 = 170;
            goto LABEL_3;
          }
        }
        switch ( *((_DWORD *)&gSoundSentry + 8) )
        {
          case 1:
            ThreadLock(v2, &v27);
            xxxFlashWindow((unsigned __int64 *)v2, 3u, 0);
            ThreadUnlock1(v25, v24, v26);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v2) )
            {
              v30 = *(_OWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
              LogicalToPhysicalDPIRect(&v30, &v30, *(unsigned int *)(*(_QWORD *)(v2 + 40) + 288LL), 0LL);
              *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink = v30;
              DesktopWindow = GetDesktopWindow(v2);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
              NtGdiPatBlt(DCEx, v30, SDWORD1(v30), DWORD2(v30) - v30, HIDWORD(v30) - DWORD1(v30), 5570569);
              EnterCrit(1LL, 0LL);
              GreEnableAppContainerRestriction(1LL);
              v19 = DCEx;
LABEL_20:
              _ReleaseDC(v19);
              return 1LL;
            }
            v20 = _GetDCEx(v2, 0LL, 65537LL);
            v22 = *(_QWORD *)(v2 + 40);
            v5 = (HDC)v20;
            if ( (*(_WORD *)(v22 + 42) & 0x2FFF) == 0x29D )
              v23 = *(_OWORD *)GetPrimaryMonitorRect((__int64)v29, v22, v21);
            else
              v23 = *(_OWORD *)(v22 + 88);
            DWORD2(v30) = DWORD2(v23) - v23;
            HIDWORD(v30) = HIDWORD(v23) - DWORD1(v23);
            *(_QWORD *)&v30 = 0LL;
            GreTransformPoints(v5, (struct _POINTL *)&v30, (struct _POINTFIX *)&v30, 2, 0);
            GreEnableAppContainerRestriction(0LL);
            goto LABEL_25;
          case 3:
            v4 = GetDesktopWindow(v2);
            v5 = (HDC)_GetDCEx(v4, 0LL, 3LL);
            v30 = *(_OWORD *)(*(_QWORD *)GetDispInfo(v7, v6, v8) + 24LL);
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v2) )
            {
              UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
              NtGdiPatBlt(v5, v30, SDWORD1(v30), DWORD2(v30) - v30, HIDWORD(v30) - DWORD1(v30), 5570569);
              EnterCrit(1LL, 0LL);
LABEL_26:
              GreEnableAppContainerRestriction(1LL);
              v19 = v5;
              goto LABEL_20;
            }
LABEL_25:
            NtGdiPatBlt(v5, v30, SDWORD1(v30), DWORD2(v30) - v30, HIDWORD(v30) - DWORD1(v30), 5570569);
            goto LABEL_26;
        }
      }
    }
  }
  return 1LL;
}
