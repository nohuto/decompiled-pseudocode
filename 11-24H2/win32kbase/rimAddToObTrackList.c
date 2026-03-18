/*
 * XREFs of rimAddToObTrackList @ 0x1401D3C68
 * Callers:
 *     RawInputManagerDeviceObjectCreate @ 0x1400536A0 (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerObjectCreate @ 0x14013323C (RawInputManagerObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x14019B5B4 (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimAddToObTrackList(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 **v7; // rcx
  __int64 v8; // rcx
  __int64 **v9; // rdx
  __int64 v10; // rax

  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 56);
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 == 1 )
  {
    v5 = (__int64 *)(a1 + 16);
    v6 = W32GetUserSessionState(v3) + 120;
  }
  else
  {
    v8 = 2LL;
    if ( v4 != 2 )
    {
      if ( v4 != 3 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 296);
      v5 = (__int64 *)(a1 + 16);
      v6 = W32GetUserSessionState(v8) + 152;
      v9 = *(__int64 ***)(v6 + 8);
      if ( *v9 == (__int64 *)v6 )
      {
        *v5 = v6;
        *(_QWORD *)(a1 + 24) = v9;
        *v9 = v5;
        goto LABEL_12;
      }
LABEL_10:
      __fastfail(3u);
    }
    v5 = (__int64 *)(a1 + 16);
    v6 = W32GetUserSessionState(2LL) + 136;
  }
  v7 = *(__int64 ***)(v6 + 8);
  if ( *v7 != (__int64 *)v6 )
    goto LABEL_10;
  *v5 = v6;
  v5[1] = (__int64)v7;
  *v7 = v5;
LABEL_12:
  *(_QWORD *)(v6 + 8) = v5;
  *(_BYTE *)(a1 + 8) = 1;
  v10 = W32GetUserSessionState(v7);
  RIMUnlockExclusive(v10 + 56);
}
