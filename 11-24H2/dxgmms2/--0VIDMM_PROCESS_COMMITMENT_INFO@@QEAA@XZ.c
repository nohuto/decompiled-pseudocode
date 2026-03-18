/*
 * XREFs of ??0VIDMM_PROCESS_COMMITMENT_INFO@@QEAA@XZ @ 0x140040FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x140040FD0 (--0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 */

VIDMM_PROCESS_COMMITMENT_INFO *__fastcall VIDMM_PROCESS_COMMITMENT_INFO::VIDMM_PROCESS_COMMITMENT_INFO(
        VIDMM_PROCESS_COMMITMENT_INFO *this)
{
  VIDMM_PROCESS_COMMITMENT_INFO *v1; // rdx

  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  VIDMM_PROCESS_ADAPTER_INFO::_unnamed_type__Policy_::_unnamed_type__Policy_((VIDMM_PROCESS_COMMITMENT_INFO *)((char *)this + 168));
  return v1;
}
