/*
 * XREFs of ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C01B60C0
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C0086360 (PostWinlogonMessage.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x1C0207254 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x1C0207540 (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall HighContrastHotKey(struct tagKE *a1)
{
  char v1; // r8
  __int64 v2; // rdx
  int v3; // ecx
  char v4; // al

  v1 = *((_BYTE *)a1 + 2);
  v2 = *((_WORD *)a1 + 1) & 0x8000;
  v3 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits | (unsigned __int8)gPhysModifierState;
  v4 = dword_1C02905AC;
  if ( (dword_1C02905AC & 1) != 0 )
  {
    if ( (dword_1C02905AC & 4) != 0 && v1 == 44 && !(_DWORD)v2 && v3 == 17 )
    {
      dword_1C02905AC &= ~1u;
      if ( (v4 & 0x10) != 0 )
        ApiSetEditionPostRitSound(1LL, v2, 0LL);
      PostWinlogonMessage(0x402u, (struct _EX_RUNDOWN_REF *)9);
    }
    return 1LL;
  }
  if ( (dword_1C02905AC & 4) == 0 || v1 != 44 || (_DWORD)v2 || v3 != 17 )
    return 1LL;
  if ( (dword_1C02905AC & 0x10) != 0 )
    ApiSetEditionPostRitSound(0LL, v2, 0LL);
  ApiSetEditionPostAccessibilityShortcutNotification(5LL);
  return 0LL;
}
