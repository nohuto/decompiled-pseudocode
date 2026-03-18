/*
 * XREFs of PnpGetLogString @ 0x1404B79F4
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140A98C04 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgLogDeviceStarted @ 0x140AA6798 (PiDevCfgLogDeviceStarted.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140B43C84;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140B43C84;
  return result;
}
