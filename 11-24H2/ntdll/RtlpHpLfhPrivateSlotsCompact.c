/*
 * XREFs of RtlpHpLfhPrivateSlotsCompact @ 0x1800E3F90
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x180065FB0 (RtlpHpLfhContextCompact.c)
 * Callees:
 *     RtlpHpLfhPrivateSlotListCompact @ 0x1800E4020 (RtlpHpLfhPrivateSlotListCompact.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotsCompact(__int64 a1)
{
  __int64 *v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi

  v2 = (__int64 *)(a1 + 448);
  v3 = 0;
  v4 = 128LL;
  do
  {
    v5 = 0LL;
    if ( (*v2 & 1) == 0 )
      v5 = *v2;
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 88) )
      {
        RtlpHpLfhPrivateSlotListCompact(a1, v5);
        if ( *(_WORD *)(v5 + 88) )
          ++v3;
      }
    }
    ++v2;
    --v4;
  }
  while ( v4 );
  return v3;
}
