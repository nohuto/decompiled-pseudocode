/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6690
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C0086360 (PostWinlogonMessage.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00A3090 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01B74B0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C0207214 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C0207540 (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rdx

  if ( (dword_1C02905FC & 1) != 0
    || (dword_1C02905F4 & 1) != 0
    || (dword_1C02905D4 & 1) != 0
    || (dword_1C02905BC & 1) != 0
    || (dword_1C0293954 & 1) != 0
    || (dword_1C02905AC & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    dword_1C02905FC &= ~1u;
    xxxTurnOffStickyKeys();
    dword_1C02905D4 &= ~1u;
    dword_1C02905BC &= ~1u;
    dword_1C0293954 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C02905AC &= ~1u;
    PostWinlogonMessage(0x402u, (struct _EX_RUNDOWN_REF *)9);
    if ( (dword_1C02905C4 & 2) != 0 )
      ApiSetEditionPostRitSound(1LL, v1, 0LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(3LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(2LL);
    ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
  }
  SetAccessEnabledFlag();
}
