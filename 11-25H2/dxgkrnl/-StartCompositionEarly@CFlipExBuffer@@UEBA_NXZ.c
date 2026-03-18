/*
 * XREFs of ?StartCompositionEarly@CFlipExBuffer@@UEBA_NXZ @ 0x14005ED50
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EarlyWakeupTokenDeadline__private_IsEnabledDeviceUsageNoInline @ 0x140099DD8 (Feature_EarlyWakeupTokenDeadline__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall CFlipExBuffer::StartCompositionEarly(CFlipExBuffer *this)
{
  int v2; // ecx

  if ( !(unsigned int)Feature_EarlyWakeupTokenDeadline__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((_BYTE *)this + 643) && *((_BYTE *)this + 645) )
      return *((_DWORD *)this + 100) == 0;
    return 0;
  }
  v2 = *((_DWORD *)this + 100);
  if ( v2 )
  {
    if ( v2 == 1 )
      return *((_DWORD *)this + 72) == 2;
    return 0;
  }
  return *((_BYTE *)this + 643) && *((_BYTE *)this + 645);
}
