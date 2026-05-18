/*
 * XREFs of ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x18001F3B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18001F2C4 @ 0x18001F2C4 (sub_18001F2C4.c)
 */

_QWORD *__fastcall std::stringbuf::`scalar deleting destructor'(_QWORD *lpMem, char a2)
{
  sub_18001F2C4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
