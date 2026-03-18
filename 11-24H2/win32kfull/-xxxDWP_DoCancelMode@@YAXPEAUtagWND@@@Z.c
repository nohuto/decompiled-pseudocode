/*
 * XREFs of ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140252758
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxReleaseCapture @ 0x140089E6C (xxxReleaseCapture.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14009A5A4 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1401D109C (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x14027F280 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x1402AB060 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     xxxClientEndScroll @ 0x1402BBEF4 (xxxClientEndScroll.c)
 *     xxxEndScroll @ 0x1402E6AC0 (xxxEndScroll.c)
 *     xxxEndMenu @ 0x1402E8608 (xxxEndMenu.c)
 */

void __fastcall xxxDWP_DoCancelMode(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rsi
  struct tagWND *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdx
  Scrollbar::NonClient *v7; // rcx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rcx
  __int64 v10; // rax
  __int64 UserSessionState; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = *(struct tagWND **)(*((_QWORD *)v3 + 59) + 112LL);
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 648LL);
  if ( v5 && a1 == *(struct tagWND **)(*(_QWORD *)v5 + 8LL) && (*(_DWORD *)(v5 + 8) & 0x100) == 0 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v12,
      (struct tagTHREADINFO **)v5);
    xxxEndMenu(v5);
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v12);
  }
  if ( v4 == a1 )
  {
    if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
      && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v7) )
    {
      v9 = PtiCurrent(v8, v6);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v9 + 132, 0, 0) & 1) == 0 )
        xxxClientEndScroll(*(_QWORD *)a1);
    }
    else
    {
      v9 = *(struct tagTHREADINFO **)(*((_QWORD *)a1 + 2) + 752LL);
      if ( v9 && *((_QWORD *)v9 + 6) )
        xxxEndScroll(a1);
    }
    v10 = *((_QWORD *)v3 + 89);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 200) |= 8u;
      _InterlockedAnd((volatile signed __int32 *)v3 + 132, 0xFFFF7FFF);
      UserSessionState = W32GetUserSessionState(v9, v6);
      CCursorClip::ClearClip(*(CCursorClip **)(UserSessionState + 36296));
    }
    xxxReleaseCapture((__int64)v9, v6);
  }
}
