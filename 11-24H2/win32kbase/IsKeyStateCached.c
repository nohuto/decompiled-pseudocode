/*
 * XREFs of IsKeyStateCached @ 0x1400B7420
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14004FA04 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     <none>
 */

char __fastcall IsKeyStateCached(unsigned __int8 a1)
{
  unsigned int v1; // eax
  _BYTE *v2; // rdx
  char result; // al

  if ( a1 < 0x20u )
    return 1;
  v1 = 0;
  v2 = byte_14025E220;
  while ( v1 < 0xE )
  {
    if ( *v2 == a1 )
      return 1;
    ++v1;
    ++v2;
  }
  if ( a1 == 165 )
    return 1;
  switch ( a1 )
  {
    case 0x5Bu:
    case 0x5Cu:
    case 0xA0u:
    case 0xA1u:
    case 0xA2u:
    case 0xA3u:
    case 0xA4u:
      return 1;
    default:
      result = 0;
      break;
  }
  return result;
}
