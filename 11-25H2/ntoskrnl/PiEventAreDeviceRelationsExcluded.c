/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x14082F17C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
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
