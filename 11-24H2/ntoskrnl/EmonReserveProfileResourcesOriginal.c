/*
 * XREFs of EmonReserveProfileResourcesOriginal @ 0x14055BB30
 * Callers:
 *     <none>
 * Callees:
 *     HalpPmuGetNumberOfReservedCounters @ 0x140543700 (HalpPmuGetNumberOfReservedCounters.c)
 *     EmonAllocateResources @ 0x1405589BC (EmonAllocateResources.c)
 */

__int64 __fastcall EmonReserveProfileResourcesOriginal(__int64 a1, _DWORD *a2, __int64 *a3, _DWORD *a4)
{
  int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v9; // r11
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 i; // rbx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // r11d
  unsigned int v24; // eax
  int Resources; // ebx

  *a3 = -1LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v9 = a1;
  v10 = 1701736270;
  v11 = KiProcessorBlock[KeGetPcr()->Prcb.Number];
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
    LODWORD(v12) = *(_DWORD *)(v12 + 4);
  v13 = *(_QWORD *)(v11 + 88) + 24LL;
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 4);
  else
    LOBYTE(v14) = 0;
  v15 = ((1LL << v12) - 1) | (((1LL << v14) - 1) << 32);
  if ( a2 )
  {
    v16 = 0LL;
    for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
    {
      v18 = a2[6 * i + 2];
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 2;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 != 1 )
                return 3221225659LL;
              if ( v5 )
                return 3221225485LL;
              v10 = a2[6 * i + 4];
              v5 = 1;
            }
            else
            {
              if ( !EmonPebsAvailable )
                return 3221225659LL;
              if ( !EmonPebsEntrySize && !a2[6 * i + 6] || !a2[6 * i + 7] )
                return 3221225485LL;
              v7 = (__int64)&a2[6 * i + 4];
            }
          }
          else
          {
            if ( (unsigned int)EmonVersion < 2 )
              return 3221225659LL;
            if ( v6 )
              return 3221225485LL;
            v6 = *(_QWORD *)&a2[6 * i + 4];
          }
        }
        else
        {
          v22 = a2[6 * i + 5];
          if ( v22 > 0x3F )
            return 3221225485LL;
          v23 = a2[6 * i + 4];
          if ( v22 < v23 )
            return 3221225485LL;
          v16 |= ((1LL << ((unsigned __int8)v22 - (unsigned __int8)v23 + 1)) - 1) << v23;
        }
      }
      else
      {
        v24 = a2[6 * i + 4];
        if ( v24 > 0x3F )
          return 3221225485LL;
        v16 |= 1LL << v24;
      }
    }
    v9 = a1;
  }
  else
  {
    v16 = ((1LL << v12) - 1) | (((1LL << v14) - 1) << 32);
  }
  if ( (v16 & v15) != v16 )
    return 3221225485LL;
  Resources = EmonAllocateResources(v16, v6, v9, v7, v10, a3);
  if ( Resources >= 0 )
    *a4 = HalpPmuGetNumberOfReservedCounters(*a3);
  return (unsigned int)Resources;
}
