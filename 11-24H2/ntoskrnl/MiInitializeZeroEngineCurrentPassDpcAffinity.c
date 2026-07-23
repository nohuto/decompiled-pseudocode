/*
 * XREFs of MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x1406947C4
 * Callers:
 *     MiStartDpcZeroingRound @ 0x140694B0C (MiStartDpcZeroingRound.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x140371000 (KeFindFirstSetRightGroupAffinity.c)
 *     MiEngineAffinity @ 0x14046C2B0 (MiEngineAffinity.c)
 */

_BOOL8 __fastcall MiInitializeZeroEngineCurrentPassDpcAffinity(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  void **v6; // rbp
  unsigned int v7; // r8d
  __int64 v8; // rdx
  int v9; // esi
  int v10; // r12d
  int v11; // ecx
  unsigned int v12; // r15d
  __int64 v13; // r13
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // esi
  int v20; // eax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v22; // rdx
  _OWORD v23[4]; // [rsp+20h] [rbp-48h] BYREF
  int i; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)a1;
  v3 = 0;
  if ( **(_DWORD **)a1 )
  {
    v6 = MiEngineAffinity(*(_QWORD *)a1);
    v7 = 0;
    for ( i = *((_DWORD *)v6 + 2); v7 < *((unsigned __int16 *)v6 + 8); *(_QWORD *)(*(_QWORD *)(v2 + 152) + 8 * v8) = 0LL )
    {
      v8 = v7++;
      v8 *= 2LL;
      *(_OWORD *)(*(_QWORD *)(v2 + 152) + 8 * v8) = *(_OWORD *)(*(_QWORD *)(v2 + 144) + 8 * v8);
    }
    v9 = 0;
    v10 = 0;
    if ( a2 )
    {
      v11 = i;
      do
      {
        v12 = 0;
        if ( *((_WORD *)v6 + 8) )
        {
          do
          {
            v23[0] = *(_OWORD *)(16LL * v12 + *(_QWORD *)(v2 + 144));
            v13 = *(_QWORD *)&v23[0];
            while ( v13 )
            {
              v14 = KiProcessorBlock[(unsigned int)KeFindFirstSetRightGroupAffinity((__int64)v23)];
              v15 = *(_DWORD *)(v14 + 47412);
              if ( *(_BYTE *)(a1 + 25) )
                v15 += *(_DWORD *)(*(_QWORD *)(qword_140E2DC38 + 384LL * *(unsigned int *)(v14 + 34644) + 376) + 12LL);
              v13 &= ~*(_QWORD *)(v14 + 36448);
              *(_QWORD *)&v23[0] = v13;
              if ( v15 == v9 )
              {
                v16 = *(_QWORD *)(v2 + 152);
                v17 = *(_QWORD *)(v14 + 200);
                v18 = *(_QWORD *)(v16 + 16LL * v12);
                if ( (v17 & v18) == 0 )
                {
                  *(_QWORD *)(v16 + 16LL * v12) = v18 | v17;
                  ++v10;
                  break;
                }
              }
            }
            if ( v10 == a2 )
              break;
            ++v12;
          }
          while ( v12 < *((unsigned __int16 *)v6 + 8) );
          v11 = i;
        }
        v19 = v9 + 1;
        v20 = 0;
        if ( v19 != v11 )
          v20 = v19;
        v9 = v20;
      }
      while ( v10 != a2 );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    while ( v3 < *((unsigned __int16 *)v6 + 8) )
    {
      v22 = *(_QWORD *)(v2 + 152);
      if ( CurrentPrcb->Group == *(_WORD *)(v22 + 16LL * v3 + 8)
        && (CurrentPrcb->GroupSetMember & *(_QWORD *)(v22 + 16LL * v3)) != 0 )
      {
        return 1LL;
      }
      ++v3;
    }
    return 0LL;
  }
  return KeGetPcr()->Prcb.Number < a2;
}
