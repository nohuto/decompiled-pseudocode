/*
 * XREFs of RtlpHpSegLfhVsFree @ 0x14035CC90
 * Callers:
 *     RtlpHpVsSubsegmentFree @ 0x14035CC40 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCreate @ 0x140367D08 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentFree @ 0x1403D996C (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhContextFree @ 0x14035BCF0 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x14035BF90 (RtlpHpSegFreeInternal.c)
 */

void __fastcall RtlpHpSegLfhVsFree(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // r8
  char v4; // cl
  ULONG_PTR v5; // r11
  __int64 v6; // r11
  unsigned __int64 v7; // r9

  v3 = *(_QWORD *)a1 & a2;
  if ( (v3 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v3 + 0x10)) == a1 )
  {
    v4 = *(_BYTE *)(a1 + 8);
    v5 = v3 + 32 * ((unsigned __int64)(unsigned int)(a2 - v3) >> v4);
    v6 = -32LL * *(unsigned __int8 *)(v5 + 26) + v5;
    v7 = v3 + ((__int64)(v6 - v3) >> 5 << v4);
    if ( *(_BYTE *)(v6 + 24) + (v7 == a2) == 11 )
      RtlpHpLfhContextFree(*(ULONG_PTR **)(a1 + 24), v7, a2);
    else
      RtlpHpSegFreeInternal((__int64 *)a1, a2, v6, 0LL);
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), a2, 0LL, 0LL, 0LL);
  }
}
