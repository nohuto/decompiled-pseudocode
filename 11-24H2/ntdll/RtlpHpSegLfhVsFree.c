/*
 * XREFs of RtlpHpSegLfhVsFree @ 0x180065050
 * Callers:
 *     RtlpHpVsSubsegmentFree @ 0x180064EA4 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentFree @ 0x180064EE4 (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhContextFree @ 0x180065110 (RtlpHpLfhContextFree.c)
 */

__int64 __fastcall RtlpHpSegLfhVsFree(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  char v4; // cl
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r11
  __int64 v7; // r9

  v3 = *(_QWORD *)a1 & a2;
  if ( (v3 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v3 + 0x10)) != a1 )
    return RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), a2, 0LL, 0LL, 0LL);
  v4 = *(_BYTE *)(a1 + 8);
  v5 = v3 + 32 * ((unsigned __int64)(unsigned int)(a2 - v3) >> v4);
  v6 = -32LL * *(unsigned __int8 *)(v5 + 26) + v5;
  v7 = v3 + ((__int64)(v6 - v3) >> 5 << v4);
  if ( *(_BYTE *)(v6 + 24) + (v7 == a2) == 11 )
    return RtlpHpLfhContextFree(*(_QWORD *)(a1 + 24), v7, a2);
  else
    return RtlpHpSegFreeInternal(a1, a2, v6, 0LL);
}
