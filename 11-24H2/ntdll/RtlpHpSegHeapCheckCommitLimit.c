/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x18009A690
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18009A714 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  unsigned __int64 v3; // rax
  __int64 v5; // rax

  v2 = (__int64 *)(a2 + 32);
  if ( dword_1801CB578 )
    return 1LL;
  v3 = *v2;
  if ( !*v2 )
  {
    v3 = qword_1801CCED8;
    v2 = &qword_1801CCED8;
    if ( !qword_1801CCED8 )
      return 1LL;
  }
  if ( ((*(_QWORD *)(a2 + 136) + *(_QWORD *)(a2 + 96)) << 12) + a1 <= v3 )
    return 1LL;
  v5 = v2[1];
  if ( v5 )
    RtlpLogHeapFailure(21, a2, 0LL, v5, a1, (*(_QWORD *)(a2 + 136) + *(_QWORD *)(a2 + 96)) << 12);
  return 0LL;
}
