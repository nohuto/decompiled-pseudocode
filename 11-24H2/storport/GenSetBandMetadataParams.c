/*
 * XREFs of GenSetBandMetadataParams @ 0x14013D490
 * Callers:
 *     <none>
 * Callees:
 *     GenNamedValueBytes @ 0x140143188 (GenNamedValueBytes.c)
 *     GenNamedValueInt @ 0x1401431F0 (GenNamedValueInt.c)
 */

__int64 __fastcall GenSetBandMetadataParams(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8; // r8

  result = GenNamedValueInt(a3, 0LL, *(_QWORD *)a4);
  if ( (int)result >= 0 )
  {
    v7 = *(_DWORD *)(a4 + 24);
    v8 = *(_QWORD *)(a4 + 16);
    if ( v7 >= *(_DWORD *)(a3 + 8) - *(_DWORD *)(a3 + 12) - 14 )
      v7 = *(_DWORD *)(a3 + 8) - *(_DWORD *)(a3 + 12) - 14;
    *(_DWORD *)(a4 + 24) = v7;
    return GenNamedValueBytes(a3, 1LL, v8);
  }
  return result;
}
