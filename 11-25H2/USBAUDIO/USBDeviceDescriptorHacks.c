/*
 * XREFs of USBDeviceDescriptorHacks @ 0x1400350BC
 * Callers:
 *     USBDeviceStart @ 0x140040B80 (USBDeviceStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBDeviceDescriptorHacks(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 8) == 2321 && *(_WORD *)(a1 + 10) == 9490 && *(_WORD *)(a2 + 2) > 0x22u )
    *(_BYTE *)(a2 + 34) = 0;
  if ( *(_WORD *)(a1 + 8) == 2235 && *(_WORD *)(a1 + 10) == 9986 && *(_WORD *)(a2 + 2) > 0x36u )
    *(_BYTE *)(a2 + 54) = 1;
  if ( *(_WORD *)(a1 + 8) == 2706 && *(_WORD *)(a1 + 10) == 4128 && *(_WORD *)(a2 + 2) > 0x2Au )
    *(_WORD *)(a2 + 41) = 161;
  result = 2675LL;
  if ( *(_WORD *)(a1 + 8) == 2675 && *(_WORD *)(a1 + 10) == 6 && *(_WORD *)(a2 + 2) > 0x2Au )
    *(_WORD *)(a2 + 41) = 161;
  return result;
}
