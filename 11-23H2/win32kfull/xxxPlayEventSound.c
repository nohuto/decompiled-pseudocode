/*
 * XREFs of xxxPlayEventSound @ 0x1C0085A20
 * Callers:
 *     xxxSysCommand @ 0x1C00857C4 (xxxSysCommand.c)
 *     NtUserPlayEventSound @ 0x1C01D7FB0 (NtUserPlayEventSound.c)
 *     xxxMNCancel @ 0x1C0216554 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C0218340 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxSnapWindow @ 0x1C0227938 (xxxSnapWindow.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C007A890 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  RPC_BINDING_HANDLE *v4; // rbx

  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
  {
    v4 = CUserPlaySound::s_pUserPlaySound;
    UserSessionSwitchLeaveCrit(a1, gptiCurrent, a3, a4);
    CUserPlaySound::PlaySync(v4);
    EnterCrit(1LL, 0LL);
  }
  return 1LL;
}
