/*
 * XREFs of ?GetDispatchersName@CMouseSensor@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x14015C5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMouseSensor::GetDispatchersName(
        CMouseSensor *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 9;
  *(_OWORD *)a2 = *(_OWORD *)&CMouseSensor::dispatcherObjects;
  *((_OWORD *)a2 + 1) = xmmword_140269948;
  *((_DWORD *)a2 + 8) = 16;
}
