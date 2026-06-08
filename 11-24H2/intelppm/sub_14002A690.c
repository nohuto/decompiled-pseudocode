/*
 * XREFs of sub_14002A690 @ 0x14002A690
 * Callers:
 *     sub_14002A400 @ 0x14002A400 (sub_14002A400.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010270 @ 0x140010270 (sub_140010270.c)
 */

char sub_14002A690()
{
  _DWORD v1[4]; // [rsp+30h] [rbp-28h] BYREF

  sub_140010270(0xAu, v1);
  if ( LOBYTE(v1[0]) < 2u )
    return 0;
  __writemsr(0x309u, __readmsr(0x309u));
  __writemsr(0x30Au, __readmsr(0x30Au));
  __writemsr(0x30Bu, __readmsr(0x30Bu));
  __writemsr(0x38Du, __readmsr(0x38Du));
  __writemsr(0x38Fu, __readmsr(0x38Fu));
  return 1;
}
