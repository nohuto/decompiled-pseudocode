/*
 * XREFs of MiSwitchKstackPages @ 0x140675564
 * Callers:
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiStackCopyHighLevel @ 0x140675304 (MiStackCopyHighLevel.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 */

signed __int64 __fastcall MiSwitchKstackPages(__int64 a1, __int64 a2)
{
  int v4; // [rsp+30h] [rbp+8h]

  MiCopyPfnEntryEx(a1, a2);
  v4 = *(_DWORD *)(a1 + 32);
  BYTE2(v4) = BYTE2(v4) & 0xF8 | 6;
  *(_DWORD *)(a1 + 32) = v4;
  return MiSetPfnIdentity(a1, 2u);
}
