/*
 * XREFs of ?GetDesktopTree@CHolographicInteropTarget@@UEBAPEAVCDesktopTree@@XZ @ 0x1802D9340
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8938 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z @ 0x1802D866C (-GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z.c)
 */

struct CDesktopTree *__fastcall CHolographicInteropTarget::GetDesktopTree(CHolographicInteropTarget *this)
{
  RTL_SRWLOCK *v1; // rcx
  struct CDesktopTree *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
  v3 = 0LL;
  CHolographicManager::GetDefaultDesktopTree(v1, &v3);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(&v3);
  return v3;
}
