/*
 * XREFs of RtlGetIntegerAtom @ 0x180012A70
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x180013E20 (RtlUnicodeStringToInteger.c)
 */

BOOLEAN __cdecl RtlGetIntegerAtom(PWSTR AtomName, PUSHORT IntegerAtom)
{
  wchar_t *v4; // rcx
  wchar_t *i; // rax
  _UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  ULONG Value; // [rsp+40h] [rbp+8h] BYREF

  String = 0LL;
  if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( *AtomName == 35 )
    {
      v4 = AtomName + 1;
      for ( i = v4; *i; ++i )
      {
        if ( (unsigned __int16)(*i - 48) > 9u )
          return 0;
      }
      String.Buffer = v4;
      String.Length = (_WORD)i - (_WORD)v4;
      String.MaximumLength = (_WORD)i - (_WORD)v4;
      Value = 0;
      if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 )
      {
        if ( IntegerAtom )
        {
          if ( Value - 1 > 0xBFFF )
            *IntegerAtom = -16384;
          else
            *IntegerAtom = Value;
        }
        return 1;
      }
    }
    return 0;
  }
  if ( (unsigned __int16)AtomName >= 0xC000u )
    return 0;
  if ( !(_WORD)AtomName )
    LOWORD(AtomName) = -16384;
  if ( !IntegerAtom )
    return 1;
  *IntegerAtom = (unsigned __int16)AtomName;
  return 1;
}
