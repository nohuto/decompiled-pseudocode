/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x140A0D52C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

char __fastcall PiEventAreDeviceRelationsExcluded(int a1)
{
  char result; // al

  if ( a1 == 4 )
    return 0;
  result = 1;
  if ( a1 <= 1 || a1 >= 7 )
    return 0;
  return result;
}
