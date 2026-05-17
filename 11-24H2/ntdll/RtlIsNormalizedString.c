/*
 * XREFs of RtlIsNormalizedString @ 0x1800BD0B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetNormalization @ 0x1800BC244 (RtlpGetNormalization.c)
 *     Normalization__IsNormalized @ 0x1800BC3B4 (Normalization__IsNormalized.c)
 */

__int64 __fastcall RtlIsNormalizedString(unsigned int a1, unsigned __int16 *a2, unsigned __int64 a3, _BYTE *a4)
{
  int v5; // edi
  __int64 v7; // rbx
  __int64 result; // rax
  volatile signed __int32 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v5 = a3;
  if ( !a2 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = -1LL;
  if ( (int)a3 < -1 || !a1 )
    return 3221225485LL;
  result = RtlpGetNormalization(a1, &v9, a3);
  if ( (int)result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( a2[v7] );
      v5 = v7 + 1;
    }
    return Normalization__IsNormalized((__int64)v9, a2, v5, a4);
  }
  return result;
}
