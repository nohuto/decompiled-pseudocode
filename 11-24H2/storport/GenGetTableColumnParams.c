/*
 * XREFs of GenGetTableColumnParams @ 0x14013E830
 * Callers:
 *     <none>
 * Callees:
 *     GenNamedValueInt @ 0x1401431F0 (GenNamedValueInt.c)
 */

__int64 __fastcall GenGetTableColumnParams(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rcx
  unsigned int v7; // ecx
  __int64 result; // rax
  __int64 v9; // rcx

  v4 = *(unsigned int *)(a3 + 12);
  if ( (unsigned int)(v4 + 1) > *(_DWORD *)(a3 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v4 + *(_QWORD *)a3) = -16;
  ++*(_DWORD *)(a3 + 12);
  v7 = a4[1];
  if ( !v7
    || v7 < *a4
    || (result = GenNamedValueInt(a3, 3LL, *a4), (int)result >= 0)
    && (result = GenNamedValueInt(a3, 4LL, a4[1]), (int)result >= 0) )
  {
    v9 = *(unsigned int *)(a3 + 12);
    if ( (unsigned int)(v9 + 1) > *(_DWORD *)(a3 + 8) )
      return 3221225507LL;
    *(_BYTE *)(v9 + *(_QWORD *)a3) = -15;
    ++*(_DWORD *)(a3 + 12);
    return 0LL;
  }
  return result;
}
