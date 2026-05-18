/*
 * XREFs of ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z_1 @ 0x1800819E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180090EEC @ 0x180090EEC (sub_180090EEC.c)
 */

LPVOID __fastcall std::stringbuf::`scalar deleting destructor'(LPVOID lpMem, char a2)
{
  sub_180090EEC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
