/*
 * XREFs of RtlpPopulateContext @ 0x1403F8BC0
 * Callers:
 *     RtlRemoveEntryHashTable @ 0x1403E3160 (RtlRemoveEntryHashTable.c)
 *     RtlInitStrongEnumerationHashTable @ 0x1403F8B70 (RtlInitStrongEnumerationHashTable.c)
 *     RtlInsertEntryHashTable @ 0x140421C30 (RtlInsertEntryHashTable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpPopulateContext(__int64 a1, unsigned __int64 **a2, unsigned __int64 a3)
{
  unsigned int v5; // ecx
  unsigned __int64 result; // rax
  unsigned int v7; // r8d
  __int64 v8; // r11
  unsigned __int64 *v9; // rcx
  unsigned __int64 *v10; // r10
  unsigned __int64 *v11; // r8
  unsigned int v12; // ecx

  v5 = (69069 * ((unsigned int)a3 >> *(_DWORD *)(a1 + 4)) + 1) & 0xFFFF0000 | ((1103515245
                                                                              * ((unsigned int)a3 >> *(_DWORD *)(a1 + 4))
                                                                              + 12345) >> 16);
  result = *(unsigned int *)(a1 + 16);
  v7 = v5 & *(_DWORD *)(a1 + 16);
  if ( v7 < *(_DWORD *)(a1 + 12) )
    v7 = v5 & ((2 * result) | 1);
  v8 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v12, v7 + 128);
    v7 = (v7 + 128) ^ (1 << v12);
    result = v12 - 7;
    v8 = *(_QWORD *)(v8 + 8 * result);
  }
  v9 = (unsigned __int64 *)(v8 + 16LL * v7);
  v10 = v9;
  v11 = (unsigned __int64 *)*v9;
  if ( (unsigned __int64 *)*v9 != v9 )
  {
    do
    {
      result = v11[2];
      if ( result && result >= a3 )
        break;
      result = *v11;
      v10 = v11;
      v11 = (unsigned __int64 *)result;
    }
    while ( (unsigned __int64 *)result != v9 );
  }
  *a2 = v9;
  a2[1] = v10;
  a2[2] = (unsigned __int64 *)a3;
  return result;
}
