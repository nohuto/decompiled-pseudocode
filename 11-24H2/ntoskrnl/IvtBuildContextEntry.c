/*
 * XREFs of IvtBuildContextEntry @ 0x1404D1F98
 * Callers:
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtBuildContextEntry(__int64 a1, char a2, unsigned __int16 a3, __int64 a4, __int64 *a5)
{
  unsigned __int64 v5; // r10
  __int64 v6; // rcx
  __int64 result; // rax

  *a5 = 0LL;
  v5 = ((unsigned __int64)a3 << 8) | *(_DWORD *)(a1 + 248) & 7;
  v6 = *(_DWORD *)a5 & 0xFF2;
  a5[1] = v5;
  result = (4 * a2) & 0xC;
  *a5 = result ^ ((a4 << 12) | v6) | 1;
  return result;
}
