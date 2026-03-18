/*
 * XREFs of ??0CBitmapResource@@IEAA@PEAVCComposition@@PEAVIBitmapRealization@@@Z @ 0x1801BA258
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x18024ACEC (-Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 */

CBitmapResource *__fastcall CBitmapResource::CBitmapResource(
        CBitmapResource *this,
        struct CComposition *a2,
        struct IBitmapRealization *a3)
{
  CBitmapResource *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CBitmapResource::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CBitmapResource::`vftable'{for `IBitmapResource'};
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    (_QWORD *)this + 10,
    (__int64)a3);
  *((_QWORD *)this + 11) = 0LL;
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
