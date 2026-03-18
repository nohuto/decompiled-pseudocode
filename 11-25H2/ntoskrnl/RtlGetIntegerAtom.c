/*
 * XREFs of RtlGetIntegerAtom @ 0x140952F60
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140435780 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x140953030 (RtlUnicodeStringToInteger.c)
 */

char __fastcall RtlGetIntegerAtom(unsigned __int64 a1, _WORD *a2)
{
  wchar_t *v3; // rcx
  wchar_t *i; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+40h] [rbp+8h] BYREF

  String = 0LL;
  if ( (a1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( *(_WORD *)a1 != 35 )
      return 0;
    v3 = (wchar_t *)(a1 + 2);
    for ( i = v3; *i; ++i )
    {
      if ( (unsigned __int16)(*i - 48) > 9u )
        return 0;
    }
    String.Buffer = v3;
    String.Length = (_WORD)i - (_WORD)v3;
    String.MaximumLength = (_WORD)i - (_WORD)v3;
    Value = 0;
    if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) < 0 )
      return 0;
    if ( a2 )
    {
      if ( Value - 1 > 0xBFFF )
        *a2 = -16384;
      else
        *a2 = Value;
    }
  }
  else
  {
    if ( (unsigned __int16)a1 >= 0xC000u )
      return 0;
    if ( !(_WORD)a1 )
      LOWORD(a1) = -16384;
    if ( a2 )
      *a2 = a1;
  }
  return 1;
}
