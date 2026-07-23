/*
 * XREFs of EmonReserveProfileResourcesEnhanced @ 0x14055B970
 * Callers:
 *     <none>
 * Callees:
 *     HalpPmuGetNumberOfReservedCounters @ 0x140543700 (HalpPmuGetNumberOfReservedCounters.c)
 *     EmonAllocateResources @ 0x1405589BC (EmonAllocateResources.c)
 *     EmonGetCountersBitmap @ 0x140559618 (EmonGetCountersBitmap.c)
 */

__int64 __fastcall EmonReserveProfileResourcesEnhanced(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r12
  int v5; // edi
  int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  int v12; // r10d
  unsigned __int64 v13; // rbx
  _DWORD *v14; // r11
  __int64 v15; // r10
  __int64 i; // r9
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  unsigned int v23; // eax
  int Resources; // ebx

  *a3 = -1LL;
  v4 = a1;
  v5 = 0;
  v8 = 1701736270;
  v9 = 0LL;
  v10 = 0LL;
  v11 = (unsigned __int64)(unsigned int)EmonGetCountersBitmap(KeGetPcr()->Prcb.Number, 1) << 32;
  v13 = (unsigned int)EmonGetCountersBitmap(v12, 0) | v11;
  if ( v14 )
  {
    v15 = 0LL;
    for ( i = 0LL; (unsigned int)i < *v14; i = (unsigned int)(i + 1) )
    {
      v17 = v14[6 * i + 2];
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 2;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              if ( v20 != 1 )
                return 3221225659LL;
              if ( v5 )
                return 3221225485LL;
              v8 = v14[6 * i + 4];
              v5 = 1;
            }
            else
            {
              if ( !EmonPebsAvailable )
                return 3221225659LL;
              if ( !EmonPebsEntrySize && !v14[6 * i + 6] || !v14[6 * i + 7] )
                return 3221225485LL;
              v10 = (__int64)&v14[6 * i + 4];
            }
          }
          else
          {
            if ( (unsigned int)EmonVersion < 2 )
              return 3221225659LL;
            if ( v9 )
              return 3221225485LL;
            v9 = *(_QWORD *)&v14[6 * i + 4];
          }
        }
        else
        {
          v21 = v14[6 * i + 5];
          if ( v21 > 0x3F )
            return 3221225485LL;
          v22 = v14[6 * i + 4];
          if ( v21 < v22 )
            return 3221225485LL;
          v15 |= ((1LL << ((unsigned __int8)v21 - (unsigned __int8)v22 + 1)) - 1) << v22;
        }
      }
      else
      {
        v23 = v14[6 * i + 4];
        if ( v23 > 0x3F )
          return 3221225485LL;
        v15 |= 1LL << v23;
      }
    }
    v4 = a1;
  }
  else
  {
    v15 = v13;
  }
  if ( (v15 & v13) != v15 )
    return 3221225485LL;
  Resources = EmonAllocateResources(v15, v9, v4, v10, v8, a3);
  if ( Resources >= 0 )
    *a4 = HalpPmuGetNumberOfReservedCounters(*a3);
  return (unsigned int)Resources;
}
