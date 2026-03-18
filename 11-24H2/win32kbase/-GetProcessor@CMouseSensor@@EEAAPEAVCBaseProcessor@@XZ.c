/*
 * XREFs of ?GetProcessor@CMouseSensor@@EEAAPEAVCBaseProcessor@@XZ @ 0x1401892E0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

struct CBaseProcessor *__fastcall CMouseSensor::GetProcessor(CMouseSensor *this)
{
  __int64 v2; // rcx

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    || !*(_DWORD *)(W32GetUserSessionState(v2) + 18784) )
  {
    return (struct CBaseProcessor *)*((_QWORD *)this + 166);
  }
  else
  {
    return 0LL;
  }
}
