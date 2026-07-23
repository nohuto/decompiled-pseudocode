/*
 * XREFs of RtlpHpLfhSubsegmentCountEmptyUnits @ 0x180064F90
 * Callers:
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1800643E0 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x180064EE4 (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentCountEmptyUnits(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  __int64 v5; // r11
  unsigned __int64 v6; // r8
  _WORD *v7; // rax
  _WORD *j; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _WORD *i; // rax

  v1 = *(unsigned __int8 *)(a1 + 39);
  v2 = 0LL;
  v3 = 0;
  v4 = *(unsigned __int8 *)(a1 + 39);
  if ( (_BYTE)v1 )
  {
    v5 = a1 + 8LL * *(unsigned __int8 *)(a1 + 24);
    v6 = v5 + 2 * v1;
    do
    {
      v7 = (_WORD *)(v5 + 2 * v2);
      if ( *v7 )
      {
        if ( (unsigned __int64)v7 >= v6 )
          return v3;
        while ( *v7 )
        {
          if ( (unsigned __int64)++v7 >= v6 )
            return v3;
        }
        v2 = ((__int64)v7 - v5) >> 1;
      }
      else
      {
        for ( i = v7 - 1; !*i; --i )
          ;
        v7 = i + 1;
      }
      for ( j = (_WORD *)(v5 + 2 * ((unsigned int)v2 + 1LL)); (unsigned __int64)j < v6; ++j )
      {
        if ( *j )
          break;
      }
      v10 = ((__int64)v7 - v5) >> 1;
      v11 = j - v7;
      if ( (_DWORD)v10 == -1 )
        break;
      v3 += v11;
      v2 = (unsigned int)(v10 + v11);
    }
    while ( (unsigned int)v2 < v4 );
  }
  return v3;
}
