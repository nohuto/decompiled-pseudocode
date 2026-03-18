/*
 * XREFs of ?RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z @ 0x140285138
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRenderAdapterLuidForWindow@@YA_NPEAUHWND__@@PEAU_LUID@@@Z @ 0x1402850E8 (-GetRenderAdapterLuidForWindow@@YA_NPEAUHWND__@@PEAU_LUID@@@Z.c)
 */

void __fastcall RecreateRedirectionBitmapIfAdapterChanged(struct tagWND *a1)
{
  __int64 v2; // rcx
  Gre::Base *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // si
  bool v9; // bp
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _LUID v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 27) & 0x20) != 0 && (*(_BYTE *)(v2 + 26) & 0x20) == 0 )
  {
    v3 = *(Gre::Base **)a1;
    v18 = 0LL;
    if ( GetRenderAdapterLuidForWindow(v3, &v18) )
    {
      v4 = *((_QWORD *)a1 + 5);
      v19 = 0LL;
      v5 = ValidateHmonitorNoRip(*(_QWORD *)(v4 + 256));
      if ( (int)DrvGetRenderAdapterLuidFromHDEV(*(_QWORD *)(v5 + 80), &v19) >= 0 && v19 != v18 )
      {
        *((_DWORD *)a1 + 95) &= ~0x20000u;
        v7 = *(_QWORD *)&WPP_GLOBAL_Control;
        v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v10 = *(_QWORD *)a1;
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
          LOBYTE(v12) = v9;
          LOBYTE(v13) = v8;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v13,
            v12,
            *(_QWORD *)(UserSessionState + 69416),
            4,
            7,
            11,
            (__int64)&WPP_b0f4d68f623e388aa0a251c43001270c_Traceguids,
            v10);
        }
        v14 = W32GetUserSessionState(v7, v6);
        GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v14 + 57008) + 48LL));
        RecreateRedirectionBitmap(a1, 0, 0, 0, 0, 0LL);
        v17 = W32GetUserSessionState(v16, v15);
        GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v17 + 57008) + 48LL));
      }
    }
  }
}
