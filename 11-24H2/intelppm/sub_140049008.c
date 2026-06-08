/*
 * XREFs of sub_140049008 @ 0x140049008
 * Callers:
 *     DriverEntry @ 0x140008600 (DriverEntry.c)
 * Callees:
 *     <none>
 */

uintptr_t sub_140049008()
{
  uintptr_t result; // rax

  if ( !_security_cookie || _security_cookie == 0x2B992DDFA232LL )
    __fastfail(6u);
  result = ~_security_cookie;
  qword_140018D08 = ~_security_cookie;
  return result;
}
