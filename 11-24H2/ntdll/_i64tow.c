/*
 * XREFs of _i64tow @ 0x18011FF60
 * Callers:
 *     <none>
 * Callees:
 *     x64tow @ 0x180120000 (x64tow.c)
 */

wchar_t *__cdecl i64tow(__int64 Value, wchar_t *Buffer, int Radix)
{
  _BOOL8 v3; // r9

  v3 = 0LL;
  if ( Radix == 10 )
    v3 = Value < 0;
  x64tow(Value, Buffer, Radix, v3);
  return Buffer;
}
