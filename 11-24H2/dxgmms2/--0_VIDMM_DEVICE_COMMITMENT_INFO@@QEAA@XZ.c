/*
 * XREFs of ??0_VIDMM_DEVICE_COMMITMENT_INFO@@QEAA@XZ @ 0x140040270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_VIDMM_DEVICE_COMMITMENT_INFO *__fastcall _VIDMM_DEVICE_COMMITMENT_INFO::_VIDMM_DEVICE_COMMITMENT_INFO(
        _VIDMM_DEVICE_COMMITMENT_INFO *this)
{
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  return this;
}
