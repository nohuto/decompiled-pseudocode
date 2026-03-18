/*
 * XREFs of PnpGetLogString @ 0x1404B8194
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x14088F39C (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgLogDeviceStarted @ 0x140AA03F8 (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140B349B4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140B349B4;
  return result;
}
