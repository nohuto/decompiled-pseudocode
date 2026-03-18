/*
 * XREFs of MiInitializeAwePfn @ 0x1404F5F48
 * Callers:
 *     MiInitializeMdlPfn @ 0x140413588 (MiInitializeMdlPfn.c)
 *     MiFillUserPhysicalMdl @ 0x140681F84 (MiFillUserPhysicalMdl.c)
 * Callees:
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 */

signed __int64 __fastcall MiInitializeAwePfn(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h]

  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_DWORD *)(a1 + 32);
  BYTE2(v3) = BYTE2(v3) & 0xF8 | 6;
  *(_DWORD *)(a1 + 32) = v3;
  MiSetPfnIdentity(a1, 1u);
  return MiSetPfnContainingFrame(a1, 0x3FFFFFFFFELL);
}
