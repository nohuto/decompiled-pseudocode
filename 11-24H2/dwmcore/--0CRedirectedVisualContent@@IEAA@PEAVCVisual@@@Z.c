/*
 * XREFs of ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x18018CE74
 * Callers:
 *     ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18018CDA4 (-Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 */

CRedirectedVisualContent *__fastcall CRedirectedVisualContent::CRedirectedVisualContent(
        CRedirectedVisualContent *this,
        struct CVisual *a2)
{
  __int64 v2; // rax
  CRedirectedVisualContent *result; // rax

  v2 = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = v2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CRedirectedVisualContent::`vftable';
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    (_QWORD *)this + 9,
    (__int64)a2);
  *((_QWORD *)this + 10) = 0LL;
  result = this;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  return result;
}
