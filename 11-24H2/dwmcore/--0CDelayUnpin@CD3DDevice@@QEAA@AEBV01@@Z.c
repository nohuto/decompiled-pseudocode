/*
 * XREFs of ??0CDelayUnpin@CD3DDevice@@QEAA@AEBV01@@Z @ 0x1802B8A84
 * Callers:
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@detail@@YAXV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@0@0V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@Z @ 0x180245508 (--$move_backward_uninitialized@V-$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V-$checked_ar.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x1802B88B0 (--$uninitialized_move@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V-$checked_array_iterat.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 */

CD3DDevice::CDelayUnpin *__fastcall CD3DDevice::CDelayUnpin::CDelayUnpin(
        CD3DDevice::CDelayUnpin *this,
        const struct CD3DDevice::CDelayUnpin *a2)
{
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    this,
    *(_QWORD *)a2);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  return this;
}
