/*
 * XREFs of ??0_CEndpointVolumeNotificationDelegator@CEndpointVolumeState@@QEAA@PEAV1@@Z @ 0x1800463A8
 * Callers:
 *     ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x180046140 (--0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

CEndpointVolumeState::_CEndpointVolumeNotificationDelegator *__fastcall CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::_CEndpointVolumeNotificationDelegator(
        CEndpointVolumeState::_CEndpointVolumeNotificationDelegator *this,
        struct CEndpointVolumeState *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::`vftable';
  return this;
}
