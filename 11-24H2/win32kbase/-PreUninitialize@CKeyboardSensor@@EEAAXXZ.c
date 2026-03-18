/*
 * XREFs of ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1400D0420
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     isInputVirtualizationEnabled @ 0x1400D07E4 (isInputVirtualizationEnabled.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021B4FC (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall CKeyboardSensor::PreUninitialize(CKeyboardSensor *this)
{
  char *v2; // rcx

  if ( (unsigned __int8)isInputVirtualizationEnabled() )
    CIVChannel::Uninitialize((CKeyboardSensor *)((char *)this + 1264));
  v2 = (char *)*((_QWORD *)this + 166);
  if ( v2 )
  {
    *(_QWORD *)v2 = &CBaseProcessor::`vftable';
    GreDeleteFastMutex(v2);
  }
  *((_QWORD *)this + 166) = 0LL;
}
