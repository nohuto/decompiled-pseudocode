/*
 * XREFs of PnpGetLogString @ 0x1404B2344
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x140AA1894 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140B45A74;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140B45A74;
  return result;
}
