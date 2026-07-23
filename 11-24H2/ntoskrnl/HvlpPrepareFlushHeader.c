/*
 * XREFs of HvlpPrepareFlushHeader @ 0x14042DB20
 * Callers:
 *     HvlpSlowFlushAddressSpaceTb @ 0x14042D8D0 (HvlpSlowFlushAddressSpaceTb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpPrepareFlushHeader(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  int v5; // eax
  unsigned int v6; // r9d
  __int64 result; // rax
  unsigned __int64 v8; // r11
  _BYTE *i; // r8
  unsigned __int64 v10; // r11

  v4 = 0LL;
  v5 = 4;
  if ( a4 )
    v5 = 0;
  v6 = v5 | 2;
  if ( a2 )
    v6 = v5;
  if ( !a3 )
  {
    v6 |= 1u;
LABEL_7:
    a1[2] = v4;
    result = v6;
    a1[1] = v6;
    *a1 = a2;
    return result;
  }
  v8 = *(_QWORD *)(a3 + 8);
  if ( !HvlpVirtualProcessorsIdentityMapped )
  {
    for ( i = &unk_140FCD2A3; ; i += 4 )
    {
      if ( (v8 & 1) != 0 )
        v4 |= 1LL << *(i - 2);
      v10 = v8 >> 1;
      if ( !v10 )
        break;
      if ( (v10 & 1) != 0 )
        v4 |= 1LL << *i;
      v8 = v10 >> 1;
      if ( !v8 )
        break;
    }
    goto LABEL_7;
  }
  a1[2] = v8;
  result = v6;
  a1[1] = v6;
  *a1 = a2;
  return result;
}
