/*
 * XREFs of ?GetDefaultIoTarget@FxMpDevice@@UEAAPEAVFxIoTarget@@XZ @ 0x140074130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FxIoTarget *__fastcall FxMpDevice::GetDefaultIoTarget(FxMpDevice *this)
{
  return this->m_DefaultTarget;
}
