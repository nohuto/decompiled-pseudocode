/*
 * XREFs of MiSwitchKstackPages @ 0x140676734
 * Callers:
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiStackCopyHighLevel @ 0x1406764D4 (MiStackCopyHighLevel.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
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
