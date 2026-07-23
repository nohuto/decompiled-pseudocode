/*
 * XREFs of RtlpPopulateContext @ 0x1800DC070
 * Callers:
 *     RtlInsertEntryHashTable @ 0x1800DBEB0 (RtlInsertEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1800DBFF0 (RtlInitEnumerationHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1800E6BA0 (RtlRemoveEntryHashTable.c)
 *     RtlInitStrongEnumerationHashTable @ 0x180141C90 (RtlInitStrongEnumerationHashTable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpPopulateContext(__int64 a1, unsigned __int64 **a2, unsigned __int64 a3)
{
  unsigned int v4; // ecx
  unsigned __int64 result; // rax
  unsigned int v6; // r9d
  __int64 v7; // r11
  unsigned __int64 *v8; // rcx
  unsigned __int64 *v9; // r10
  unsigned __int64 *v10; // r9
  unsigned int v11; // ecx

  v4 = (69069 * ((unsigned int)a3 >> *(_DWORD *)(a1 + 4)) + 1) & 0xFFFF0000 | ((1103515245
                                                                              * ((unsigned int)a3 >> *(_DWORD *)(a1 + 4))
                                                                              + 12345) >> 16);
  result = *(unsigned int *)(a1 + 16);
  v6 = v4 & *(_DWORD *)(a1 + 16);
  if ( v6 < *(_DWORD *)(a1 + 12) )
    v6 = v4 & ((2 * result) | 1);
  v7 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v11, v6 + 128);
    v6 = (v6 + 128) ^ (1 << v11);
    result = v11 - 7;
    v7 = *(_QWORD *)(v7 + 8 * result);
  }
  v8 = (unsigned __int64 *)(v7 + 16LL * v6);
  v9 = v8;
  v10 = (unsigned __int64 *)*v8;
  if ( (unsigned __int64 *)*v8 != v8 )
  {
    do
    {
      result = v10[2];
      if ( result && result >= a3 )
        break;
      result = *v10;
      v9 = v10;
      v10 = (unsigned __int64 *)result;
    }
    while ( (unsigned __int64 *)result != v8 );
  }
  *a2 = v8;
  a2[1] = v9;
  a2[2] = (unsigned __int64 *)a3;
  return result;
}
