/*
 * XREFs of RtlpHpLfhPrivateSlotsCompact @ 0x1406045AC
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x140432100 (RtlpHpLfhContextCompact.c)
 * Callees:
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14060428C (RtlpHpLfhPrivateSlotListCompact.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotsCompact(__int64 a1)
{
  __int64 *v1; // rsi
  unsigned int v2; // ebx
  __int64 v4; // rbp
  __int64 v5; // rdi

  v1 = (__int64 *)(a1 + 448);
  v2 = 0;
  v4 = 128LL;
  do
  {
    v5 = 0LL;
    if ( (*v1 & 1) == 0 )
      v5 = *v1;
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 88) )
      {
        RtlpHpLfhPrivateSlotListCompact(a1, v5);
        if ( *(_WORD *)(v5 + 88) )
          ++v2;
      }
    }
    ++v1;
    --v4;
  }
  while ( v4 );
  return v2;
}
