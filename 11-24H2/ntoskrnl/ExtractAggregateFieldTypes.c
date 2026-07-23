/*
 * XREFs of ExtractAggregateFieldTypes @ 0x140274970
 * Callers:
 *     TlgAggregateAbsorbEvent @ 0x140274154 (TlgAggregateAbsorbEvent.c)
 *     MiLogBadMapper @ 0x140274724 (MiLogBadMapper.c)
 *     MiLogSlabEntryAllocateFailure @ 0x14047E460 (MiLogSlabEntryAllocateFailure.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1404A55E0 (MiLogPeriodicTelemetryForSlabAllocator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExtractAggregateFieldTypes(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // r10
  unsigned __int64 v5; // r9
  char *v6; // rax
  char v7; // cl
  char v10; // cl
  char v11; // dl
  char v12; // r8
  __int64 v13; // rcx

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v5 = v2 + *(unsigned int *)(a2 + 24);
  v6 = (char *)(v2 + 2);
  do
    v7 = *v6++;
  while ( v7 < 0 );
  while ( *v6++ )
    ;
  while ( (unsigned __int64)v6 < v5 )
  {
    while ( *v6++ )
      ;
    if ( *v6 >= 0 )
      break;
    v10 = v6[1];
    v11 = *v6 & 0x7F;
    v6 += 2;
    if ( v10 >= 0 )
      break;
    while ( 1 )
    {
      v12 = *v6;
      if ( *v6 >= 0 )
        break;
      if ( v12 != (char)0x80 )
        return v3;
      ++v6;
    }
    if ( v11 != 9 || (unsigned __int8)(v12 - 113) > 2u )
      break;
    v13 = 2LL * v3++;
    *(_BYTE *)(a2 + 8 * v13 + 45) = v12;
  }
  return v3;
}
