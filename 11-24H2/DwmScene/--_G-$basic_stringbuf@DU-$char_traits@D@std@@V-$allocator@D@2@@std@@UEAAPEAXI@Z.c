/*
 * XREFs of ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x18001F510
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18001F424 @ 0x18001F424 (sub_18001F424.c)
 */

_QWORD *__fastcall std::stringbuf::`scalar deleting destructor'(_QWORD *lpMem, char a2)
{
  sub_18001F424(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
