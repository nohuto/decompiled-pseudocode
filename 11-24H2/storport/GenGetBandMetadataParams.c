/*
 * XREFs of GenGetBandMetadataParams @ 0x14013D3F0
 * Callers:
 *     <none>
 * Callees:
 *     GenNamedValueInt @ 0x1401431F0 (GenNamedValueInt.c)
 */

__int64 __fastcall GenGetBandMetadataParams(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rcx

  v4 = *(unsigned int *)(a3 + 12);
  if ( (unsigned int)(v4 + 1) > *(_DWORD *)(a3 + 8) )
    return 3221225507LL;
  *(_BYTE *)(v4 + *(_QWORD *)a3) = -16;
  ++*(_DWORD *)(a3 + 12);
  result = GenNamedValueInt(a3, 1LL, *(_QWORD *)a4);
  if ( (int)result >= 0 )
  {
    v8 = *(_DWORD *)(a4 + 24);
    if ( v8 >= *(_DWORD *)(a3 + 8) - *(_DWORD *)(a3 + 12) - 13 )
      v8 = *(_DWORD *)(a3 + 8) - *(_DWORD *)(a3 + 12) - 13;
    v9 = *(_QWORD *)a4 - 1LL;
    *(_DWORD *)(a4 + 24) = v8;
    result = GenNamedValueInt(a3, 2LL, v8 + v9);
    if ( (int)result >= 0 )
    {
      v10 = *(unsigned int *)(a3 + 12);
      if ( (unsigned int)(v10 + 1) > *(_DWORD *)(a3 + 8) )
        return 3221225507LL;
      *(_BYTE *)(v10 + *(_QWORD *)a3) = -15;
      ++*(_DWORD *)(a3 + 12);
      return 0LL;
    }
  }
  return result;
}
