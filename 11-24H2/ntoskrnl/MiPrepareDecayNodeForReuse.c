/*
 * XREFs of MiPrepareDecayNodeForReuse @ 0x14022B350
 * Callers:
 *     MiCreateDecayPfn @ 0x14022AFD8 (MiCreateDecayPfn.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiPrepareDecayNodeForReuse(__int64 a1)
{
  __int64 v1; // rax
  ULONG_PTR v2; // r9
  __int64 v3; // r10
  signed __int64 v4; // rdx
  signed __int64 i; // rax

  v1 = MiSwizzleInvalidPte(((a1 & 0xFFFFFFFFFFLL) << 12) | 0x880);
  *(_QWORD *)(v2 + 16) = v1;
  v4 = *(_QWORD *)(v2 + 40);
  for ( i = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v2 + 40),
              v3 ^ (v3 ^ v4) & 0xFFFFFF0000000000uLL,
              v4);
        v4 != i;
        i = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v2 + 40),
              v3 ^ (v3 ^ i) & 0xFFFFFF0000000000uLL,
              i) )
  {
    v4 = i;
  }
  return MiUnlinkPageFromListEx(v2, 0);
}
