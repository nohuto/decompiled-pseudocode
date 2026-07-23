/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x14035E43C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x14035E694 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // r9
  unsigned int v3; // ebx
  unsigned __int64 v4; // r8
  __int64 v6; // r9

  v2 = a2 + 4;
  v3 = 0;
  v4 = a2[4];
  if ( (v4 || (v4 = qword_140E28358, v2 = &qword_140E28358, qword_140E28358)) && ((a2[17] + a2[12]) << 12) + a1 > v4 )
  {
    v6 = v2[1];
    if ( v6 )
      RtlpLogHeapFailure(21, (ULONG_PTR)a2, 0LL, v6, a1, (a2[17] + a2[12]) << 12);
  }
  else
  {
    return 1;
  }
  return v3;
}
