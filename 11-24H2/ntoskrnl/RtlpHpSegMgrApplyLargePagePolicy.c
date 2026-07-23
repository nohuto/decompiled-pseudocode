/*
 * XREFs of RtlpHpSegMgrApplyLargePagePolicy @ 0x14047C830
 * Callers:
 *     RtlpHpSegMgrCommitInitiate @ 0x14035E2C4 (RtlpHpSegMgrCommitInitiate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpSegMgrApplyLargePagePolicy(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v6; // rdx
  signed __int64 v7; // rcx
  bool v8; // zf
  signed __int64 v9; // rax

  v1 = *(_BYTE *)(a1 + 13) & 7;
  if ( v1 > 1 )
  {
    if ( v1 != 2 )
    {
      if ( v1 != 3 )
      {
        v6 = qword_140E28380;
        do
        {
          v7 = ((((v6 ^ (v6 >> 12)) << 25) ^ v6 ^ (v6 >> 12)) >> 27) ^ ((v6 ^ (v6 >> 12)) << 25) ^ v6 ^ (v6 >> 12);
          v9 = _InterlockedCompareExchange64(&qword_140E28380, v7, v6);
          v8 = v6 == v9;
          v6 = v9;
        }
        while ( !v8 );
        return -(int)v7 & 1;
      }
      return 1LL;
    }
    return 0LL;
  }
  v2 = a1 + *(__int16 *)(a1 + 22);
  v3 = *(_QWORD *)(v2 + 64) + *(_QWORD *)(v2 + 48);
  if ( v3 >= *(_QWORD *)(v2 + 80) )
    return 0LL;
  if ( v3 >= *(_QWORD *)(v2 + 72) )
    return *(_QWORD *)(v2 + 56) + *(_QWORD *)(v2 + 40) >= ((v3 * *(unsigned __int8 *)(v2 + 88)) << 9) / 0x64;
  return 1LL;
}
