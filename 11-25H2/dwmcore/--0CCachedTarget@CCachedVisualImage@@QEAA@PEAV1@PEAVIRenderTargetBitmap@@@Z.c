/*
 * XREFs of ??0CCachedTarget@CCachedVisualImage@@QEAA@PEAV1@PEAVIRenderTargetBitmap@@@Z @ 0x18003F0D8
 * Callers:
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18003F8E8 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CCachedVisualImage::CCachedTarget *__fastcall CCachedVisualImage::CCachedTarget::CCachedTarget(
        CCachedVisualImage::CCachedTarget *this,
        struct CCachedVisualImage *a2,
        struct IRenderTargetBitmap *a3)
{
  __int64 v5; // rcx

  *(_QWORD *)this = a2;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    (char *)this + 8,
    a3);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v5 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 8) = 2;
  *((_WORD *)this + 28) = 1;
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v5 + 72LL))(
    v5,
    ((unsigned __int64)a2 + 88) & -(__int64)(a2 != 0LL));
  return this;
}
