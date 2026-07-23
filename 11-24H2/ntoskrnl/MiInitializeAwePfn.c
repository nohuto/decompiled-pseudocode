/*
 * XREFs of MiInitializeAwePfn @ 0x1404F3848
 * Callers:
 *     MiInitializeMdlPfn @ 0x1403954E8 (MiInitializeMdlPfn.c)
 *     MiFillUserPhysicalMdl @ 0x140683174 (MiFillUserPhysicalMdl.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
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
