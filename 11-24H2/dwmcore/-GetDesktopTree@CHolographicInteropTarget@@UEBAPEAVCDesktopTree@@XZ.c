/*
 * XREFs of ?GetDesktopTree@CHolographicInteropTarget@@UEBAPEAVCDesktopTree@@XZ @ 0x1802D00A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z @ 0x1802CF3CC (-GetDefaultDesktopTree@CHolographicManager@@QEBAJPEAPEAVCDesktopTree@@@Z.c)
 */

struct CDesktopTree *__fastcall CHolographicInteropTarget::GetDesktopTree(CHolographicInteropTarget *this)
{
  RTL_SRWLOCK *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r8
  struct CDesktopTree *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
  v5 = 0LL;
  CHolographicManager::GetDefaultDesktopTree(v1, &v5);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
    &v5,
    v2,
    v3);
  return v5;
}
