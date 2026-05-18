/*
 * XREFs of ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z_1 @ 0x180081880
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180090D8C @ 0x180090D8C (sub_180090D8C.c)
 */

LPVOID __fastcall std::stringbuf::`scalar deleting destructor'(LPVOID lpMem, char a2)
{
  sub_180090D8C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
