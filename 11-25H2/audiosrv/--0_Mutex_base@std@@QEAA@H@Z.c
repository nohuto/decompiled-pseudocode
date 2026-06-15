/*
 * XREFs of ??0_Mutex_base@std@@QEAA@H@Z @ 0x1800CC04C
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800CBEA4 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x1800CBFE4 (--0CSerialWorkQueue@@QEAA@XZ.c)
 *     ??0CPdcActivationClient@@QEAA@XZ @ 0x1800FE980 (--0CPdcActivationClient@@QEAA@XZ.c)
 *     ??0CSebNotifier@@QEAA@XZ @ 0x1801036DC (--0CSebNotifier@@QEAA@XZ.c)
 *     ??0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z @ 0x1801037B4 (--0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z.c)
 *     ??0CWorkFifo@@QEAA@XZ @ 0x180117DF4 (--0CWorkFifo@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct _Mtx_internal_imp_t *__fastcall std::_Mutex_base::_Mutex_base(struct _Mtx_internal_imp_t *this, int a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  _Mtx_init_in_situ(this, a2 | 2);
  return this;
}
