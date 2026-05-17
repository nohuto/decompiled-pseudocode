/*
 * XREFs of RtlDoesNameContainWildCards @ 0x180068850
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x180068918 (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlDoesNameContainWildCards(unsigned __int16 *a1)
{
  unsigned __int64 v2; // r8
  _WORD *i; // rdx

  if ( *a1 )
  {
    v2 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(v2 + 2 * (((unsigned __int64)*a1 >> 1) - 1)); (unsigned __int64)i >= v2 && *i != 92; --i )
    {
      if ( *i < 0x40u && (byte_18017CE30[(unsigned __int16)*i] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
