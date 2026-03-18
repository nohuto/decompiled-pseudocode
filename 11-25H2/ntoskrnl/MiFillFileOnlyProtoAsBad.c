/*
 * XREFs of MiFillFileOnlyProtoAsBad @ 0x14066F4A8
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1407E0284 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 */

__int64 __fastcall MiFillFileOnlyProtoAsBad(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  ULONG_PTR v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // r9
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
  return MiUnlockProtoPoolPage(v5, v10, v7, v8);
}
