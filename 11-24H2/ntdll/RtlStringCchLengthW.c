/*
 * XREFs of RtlStringCchLengthW @ 0x1800D7350
 * Callers:
 *     RtlpValidAttribute @ 0x180139F30 (RtlpValidAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchLengthW(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 i; // rax
  unsigned int v4; // ecx

  if ( !a1 || a2 > 0x7FFFFFFF )
  {
    v4 = -1073741811;
LABEL_14:
    if ( a3 )
      *a3 = 0LL;
    return v4;
  }
  for ( i = a2; i; --i )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  v4 = -1073741811;
  if ( i )
    v4 = 0;
  if ( a3 )
  {
    if ( i )
      *a3 = a2 - i;
    else
      *a3 = 0LL;
  }
  if ( !i )
    goto LABEL_14;
  return v4;
}
