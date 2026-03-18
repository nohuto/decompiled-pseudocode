/*
 * XREFs of StopFade @ 0x1401EE440
 * Callers:
 *     MNAnimate @ 0x14006F328 (MNAnimate.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     zzzAnimateFade @ 0x14023A678 (zzzAnimateFade.c)
 *     StopSonar @ 0x140285608 (StopSonar.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B3404 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402B38D0 (xxxDwmStopRedirection.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     GreGetLayout @ 0x140037748 (GreGetLayout.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     DeleteFadeSprite @ 0x1401EE600 (DeleteFadeSprite.c)
 */

__int64 __fastcall StopFade(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  HDC DCEx; // rdi
  int v11; // ebp
  int Layout; // eax
  __int64 StockObject; // rax
  __int64 result; // rax
  __int64 v15; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = W32GetUserSessionState(v4, v3);
  FindTimer(*(_QWORD *)(v5 + 68728), 65526LL, 2u, 1, 0LL);
  v6 = DeleteFadeSprite();
  v8 = *(unsigned int *)(UserSessionState + 43072);
  if ( (v8 & 2) == 0 && (v8 & 1) != 0 )
  {
    if ( v6 )
    {
      v9 = 0;
      DCEx = (HDC)_GetDCEx(v6, 0LL, 3LL);
      v11 = 0;
    }
    else
    {
      v15 = W32GetUserSessionState(v8, v7);
      v9 = *(_DWORD *)(UserSessionState + 43048);
      v11 = *(_DWORD *)(UserSessionState + 43052);
      DCEx = *(HDC *)(*(_QWORD *)(v15 + 57008) + 64LL);
    }
    Layout = GreGetLayout(DCEx);
    GreBitBltInternal(
      DCEx,
      v9,
      v11,
      *(_DWORD *)(UserSessionState + 43056),
      *(_DWORD *)(UserSessionState + 43060),
      *(HDC *)(UserSessionState + 43032),
      0,
      0,
      (Layout << 31) + 13369376,
      0,
      0);
    _ReleaseDC(DCEx);
  }
  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(*(_QWORD *)(UserSessionState + 43032), StockObject);
  GreCleanDC(*(_QWORD *)(UserSessionState + 43032));
  GreSetDCOwnerEx(*(_QWORD *)(UserSessionState + 43032), 0LL, 0LL, 1LL);
  result = GreDeleteObject(*(_QWORD *)(UserSessionState + 43040));
  *(_QWORD *)(UserSessionState + 43040) = 0LL;
  *(_DWORD *)(UserSessionState + 43072) = 0;
  return result;
}
