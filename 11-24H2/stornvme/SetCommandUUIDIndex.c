/*
 * XREFs of SetCommandUUIDIndex @ 0x14002663C
 * Callers:
 *     QueryProtocolInfoIdentifyData @ 0x140025B90 (QueryProtocolInfoIdentifyData.c)
 * Callees:
 *     NVMeControllerSupportsUUIDList @ 0x14000D6E0 (NVMeControllerSupportsUUIDList.c)
 */

char __fastcall SetCommandUUIDIndex(__int64 a1)
{
  char result; // al
  int v2; // r10d
  _DWORD *v3; // r11

  result = NVMeControllerSupportsUUIDList(a1);
  if ( !result || !v2 )
    v2 = 0;
  *v3 = v2;
  return result;
}
