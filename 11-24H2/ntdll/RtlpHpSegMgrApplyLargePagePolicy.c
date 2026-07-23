/*
 * XREFs of RtlpHpSegMgrApplyLargePagePolicy @ 0x180156530
 * Callers:
 *     RtlpHpSegMgrCommitInitiate @ 0x180111468 (RtlpHpSegMgrCommitInitiate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpSegMgrApplyLargePagePolicy(__int64 a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // rdx
  signed __int64 v3; // rcx
  bool v4; // zf
  signed __int64 v5; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx

  v1 = *(_BYTE *)(a1 + 13) & 7;
  if ( v1 <= 1 )
  {
    v8 = a1 + *(__int16 *)(a1 + 22);
    v9 = *(_QWORD *)(v8 + 64) + *(_QWORD *)(v8 + 48);
    if ( v9 < *(_QWORD *)(v8 + 80) )
    {
      if ( v9 >= *(_QWORD *)(v8 + 72) )
        return *(_QWORD *)(v8 + 56) + *(_QWORD *)(v8 + 40) >= ((v9 * *(unsigned __int8 *)(v8 + 88)) << 9) / 0x64;
      return 1LL;
    }
  }
  else if ( v1 != 2 )
  {
    if ( v1 != 3 )
    {
      v2 = qword_1801CCF00;
      do
      {
        v3 = ((((v2 ^ (v2 >> 12)) << 25) ^ v2 ^ (v2 >> 12)) >> 27) ^ ((v2 ^ (v2 >> 12)) << 25) ^ v2 ^ (v2 >> 12);
        v5 = _InterlockedCompareExchange64(&qword_1801CCF00, v3, v2);
        v4 = v2 == v5;
        v2 = v5;
      }
      while ( !v4 );
      return -(int)v3 & 1;
    }
    return 1LL;
  }
  return 0LL;
}
