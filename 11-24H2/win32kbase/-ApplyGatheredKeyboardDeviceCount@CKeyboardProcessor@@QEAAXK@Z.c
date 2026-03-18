/*
 * XREFs of ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x1401083D0
 * Callers:
 *     ApplyGatheredKeyboardDeviceCount @ 0x140108250 (ApplyGatheredKeyboardDeviceCount.c)
 * Callees:
 *     UpdateToggleKeyAndLights @ 0x140214380 (UpdateToggleKeyAndLights.c)
 */

void __fastcall CKeyboardProcessor::ApplyGatheredKeyboardDeviceCount(CKeyboardProcessor *this, unsigned __int32 a2)
{
  if ( a2 > *((_DWORD *)this + 5) )
    UpdateToggleKeyAndLights(2LL);
  _InterlockedExchange((volatile __int32 *)this + 5, a2);
}
