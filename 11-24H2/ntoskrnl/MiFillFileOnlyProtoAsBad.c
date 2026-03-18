/*
 * XREFs of MiFillFileOnlyProtoAsBad @ 0x14067AC68
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1407F0124 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 */

__int64 __fastcall MiFillFileOnlyProtoAsBad(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  ULONG_PTR v5; // rsi
  ULONG_PTR v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 32) & 0x3E;
  v10 = 17;
  v4 = MiSwizzleInvalidPte(16 * (v3 | (a1 << 12) | 0x40));
  v5 = MiLockProtoPoolPageForce((ULONG_PTR)a2, &v10);
  v6 = MiLockLeafPage(a2, 0);
  if ( v6 )
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  else
    *a2 = v4;
  LOBYTE(v7) = v10;
  return MiUnlockProtoPoolPage(v5, v7, v8);
}
