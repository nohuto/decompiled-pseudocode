/*
 * XREFs of AggregateField @ 0x1406A007C
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140274A04 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

void __fastcall AggregateField(volatile signed __int64 *a1, signed __int64 a2, int a3)
{
  signed __int64 v3; // rax
  volatile signed __int64 v4; // rtt

  if ( a3 == 113 )
  {
    _InterlockedAdd64(a1, a2);
  }
  else if ( (unsigned int)(a3 - 114) <= 1 )
  {
    do
    {
      v3 = *a1;
      if ( a3 == 114 )
      {
        if ( a2 >= v3 )
          return;
      }
      else if ( a2 <= v3 )
      {
        return;
      }
      v4 = *a1;
    }
    while ( v4 != _InterlockedCompareExchange64(a1, a2, v3) );
  }
}
