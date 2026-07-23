/*
 * XREFs of KiAdvanceReadyListEnumerator @ 0x1402A86D0
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAdvanceReadyListEnumerator(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rax
  __int64 v4; // r9
  __int64 v5; // rdx
  unsigned __int8 v6; // r8
  unsigned int v7; // edx
  unsigned int v8; // eax

  v2 = *(__int64 **)(a1 + 8);
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      v5 = *v2;
      v6 = *(_BYTE *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = *v2;
      if ( v5 != v4 + 16LL * v6 )
      {
        *a2 = v5 - 216;
        return 0LL;
      }
      v7 = *(_DWORD *)a1 & ~(1 << v6);
      *(_DWORD *)a1 = v7;
      if ( !v7 )
        break;
      _BitScanReverse(&v8, v7);
      *(_BYTE *)(a1 + 4) = v8;
      v2 = (__int64 *)(v4 + 16LL * (unsigned __int8)v8);
      *(_QWORD *)(a1 + 8) = v2;
    }
    *(_BYTE *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return 2147483674LL;
}
