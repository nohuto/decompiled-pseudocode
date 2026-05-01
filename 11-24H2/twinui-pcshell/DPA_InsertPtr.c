/*
 * XREFs of DPA_InsertPtr @ 0x1806C9D00
 * Callers:
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x1806C852C (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     DPA_Grow @ 0x1806C9C60 (DPA_Grow.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

int __stdcall DPA_InsertPtr(HDPA hdpa, int i, void *p)
{
  int v4; // edi
  unsigned int v6; // eax
  unsigned int v7; // edx
  int result; // eax

  v4 = i;
  if ( !hdpa || i < 0 )
    return -1;
  v6 = *(_DWORD *)hdpa;
  if ( i > *(_DWORD *)hdpa )
    v4 = *(_DWORD *)hdpa;
  v7 = v6 + 1;
  if ( v6 + 1 < v6 || *((int *)hdpa + 6) < 0 || v7 > *((_DWORD *)hdpa + 6) && !DPA_Grow(hdpa, v7) )
    return -1;
  if ( v4 < *(_DWORD *)hdpa )
    memmove_0(
      (void *)(*((_QWORD *)hdpa + 1) + 8LL * (v4 + 1)),
      (const void *)(*((_QWORD *)hdpa + 1) + 8LL * v4),
      8LL * (*(_DWORD *)hdpa - v4));
  result = v4;
  *(_QWORD *)(*((_QWORD *)hdpa + 1) + 8LL * v4) = p;
  ++*(_DWORD *)hdpa;
  return result;
}
