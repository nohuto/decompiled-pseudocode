/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1400D0470
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     isInputVirtualizationEnabled @ 0x1400D07E4 (isInputVirtualizationEnabled.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021B4FC (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x14021B8D8 (--1CMouseProcessor@@QEAA@XZ.c)
 */

void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this)
{
  char *v2; // rdi

  if ( (unsigned __int8)isInputVirtualizationEnabled() )
    CIVChannel::Uninitialize((CMouseSensor *)((char *)this + 1264));
  v2 = (char *)*((_QWORD *)this + 166);
  if ( v2 )
  {
    CMouseProcessor::~CMouseProcessor(*((CMouseProcessor **)this + 166));
    GreDeleteFastMutex(v2);
  }
  *((_QWORD *)this + 166) = 0LL;
}
