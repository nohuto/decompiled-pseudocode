/*
 * XREFs of SmpTreeLookupControlBlock @ 0x140007BB0
 * Callers:
 *     SmpLookupControlBlock @ 0x140007B60 (SmpLookupControlBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpTreeLookupControlBlock(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  signed __int32 v3; // eax
  signed __int32 v4; // edx

  while ( a1 )
  {
    v2 = a1 - 104;
    if ( *(_DWORD *)(a1 - 96) == a2 )
    {
      v3 = *(_DWORD *)(v2 + 4);
      while ( 1 )
      {
        v4 = v3;
        if ( !v3 )
          break;
        v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4), v3 + 1, v3);
        if ( v3 == v4 )
          return a1 - 104;
      }
      return 0LL;
    }
    if ( *(_DWORD *)(a1 - 96) <= a2 )
      a1 = *(_QWORD *)(a1 + 16);
    else
      a1 = *(_QWORD *)(a1 + 8);
  }
  return 0LL;
}
