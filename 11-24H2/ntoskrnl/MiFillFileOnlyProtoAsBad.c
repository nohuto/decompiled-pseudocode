/*
 * XREFs of MiFillFileOnlyProtoAsBad @ 0x14067BE48
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1407F06F4 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 */

__int64 __fastcall MiFillFileOnlyProtoAsBad(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 32) & 0x3E;
  v11 = 17;
  v4 = MiSwizzleInvalidPte(16 * (v3 | (a1 << 12) | 0x40));
  v5 = MiLockProtoPoolPageForce((ULONG_PTR)a2, &v11);
  v6 = MiLockLeafPage(a2, 0);
  if ( v6 )
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  else
    *a2 = v4;
  LOBYTE(v7) = v11;
  return MiUnlockProtoPoolPage(v5, v7, v8, v9);
}
