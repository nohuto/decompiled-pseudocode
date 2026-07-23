/*
 * XREFs of PiDmGetCachedKeyIndex @ 0x1408B7F40
 * Callers:
 *     PiDmObjectGetCachedObjectReference @ 0x1408B7070 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmObjectProcessPropertyChange @ 0x1408B7B08 (PiDmObjectProcessPropertyChange.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140A6ABE8 (PiDmListUpdateAggregationCountWorker.c)
 *     PiDmObjectCreate @ 0x140ABF218 (PiDmObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDmGetCachedKeyIndex(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // r8

  for ( result = 0LL; (unsigned int)result < a2; result = (unsigned int)(result + 1) )
  {
    v5 = *(_QWORD *)(a1 + 24 * result);
    if ( *(_DWORD *)(a3 + 16) == *(_DWORD *)(v5 + 16) )
    {
      v6 = *(_QWORD *)a3 - *(_QWORD *)v5;
      if ( *(_QWORD *)a3 == *(_QWORD *)v5 )
        v6 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(v5 + 8);
      if ( !v6 )
        return result;
    }
  }
  return 0xFFFFFFFFLL;
}
