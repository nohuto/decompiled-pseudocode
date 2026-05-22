/*
 * XREFs of ??0_Mutex_base@std@@QEAA@H@Z @ 0x180080084
 * Callers:
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DD270 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
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
