/*
 * XREFs of RtlpHpSegLfhVsFree @ 0x1403CBA30
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1402F792C (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpVsSubsegmentCreate @ 0x1402F8374 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentFree @ 0x1403CB82C (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpVsSubsegmentFree @ 0x1403CB9D4 (RtlpHpVsSubsegmentFree.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlpHpLfhContextFree @ 0x1402E04D0 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x1403CBADC (RtlpHpSegFreeInternal.c)
 */

void __fastcall RtlpHpSegLfhVsFree(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // r8
  char v4; // cl
  ULONG_PTR v5; // r11
  ULONG_PTR v6; // r11
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
      RtlpHpSegFreeInternal(a1, a2, v6, 0LL);
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), a2, 0LL, 0LL, 0LL);
  }
}
