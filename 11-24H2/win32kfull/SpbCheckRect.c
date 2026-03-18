/*
 * XREFs of SpbCheckRect @ 0x140097868
 * Callers:
 *     SpbCheckDce @ 0x14002F820 (SpbCheckDce.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     _ScrollDC @ 0x1400960A0 (_ScrollDC.c)
 *     SpbCheckPwnd @ 0x140098004 (SpbCheckPwnd.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x140171754 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 * Callees:
 *     IsVisible @ 0x140036A48 (IsVisible.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x14009776C (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x14026C97C (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 */

char __fastcall SpbCheckRect(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagSPB *i; // rcx
  struct tagSPB *v8; // rbx

  LODWORD(UserSessionState) = IsVisible((__int64)a1);
  if ( (_DWORD)UserSessionState )
  {
LABEL_2:
    UserSessionState = W32GetUserSessionState(v6, v5);
    for ( i = *(struct tagSPB **)(*(_QWORD *)(UserSessionState + 57008) + 40LL); i; i = v8 )
    {
      v8 = *(struct tagSPB **)i;
      LODWORD(UserSessionState) = SpbCheckRect2(i, a1, a2);
      if ( !(_DWORD)UserSessionState )
      {
        LOBYTE(UserSessionState) = IsSpbPresentOrNull(v8);
        if ( !(_BYTE)UserSessionState )
          goto LABEL_2;
      }
    }
  }
  return UserSessionState;
}
