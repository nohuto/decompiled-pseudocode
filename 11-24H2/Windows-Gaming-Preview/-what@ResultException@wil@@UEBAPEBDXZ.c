/*
 * XREFs of ?what@ResultException@wil@@UEBAPEBDXZ @ 0x18000ACA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180005F64 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_N_K@Z @ 0x18000A8E4 (-create@shared_buffer@details@wil@@QEAA_N_K@Z.c)
 *     _alloca_probe @ 0x180043010 (_alloca_probe.c)
 */

const char *__fastcall wil::ResultException::what(
        wil::ResultException *this,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  volatile signed __int32 **v4; // rbx
  int cbMultiByte; // edi
  WCHAR WideCharStr[2048]; // [rsp+40h] [rbp-1018h] BYREF

  v4 = (volatile signed __int32 **)((char *)this + 192);
  if ( !*((_QWORD *)this + 24) )
  {
    wil::GetFailureLogString((wil *)WideCharStr, (unsigned __int16 *)0x800, (__int64)this + 24, a4);
    cbMultiByte = WideCharToMultiByte(0, 0, WideCharStr, -1, 0LL, 0, 0LL, 0LL);
    if ( !(unsigned __int8)wil::details::shared_buffer::create(v4, (volatile signed __int32 *)cbMultiByte) )
      return "WIL Exception";
    WideCharToMultiByte(
      0,
      0,
      WideCharStr,
      -1,
      (LPSTR)((unsigned __int64)(*v4 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)*v4 >> 64)),
      cbMultiByte,
      0LL,
      0LL);
  }
  return (const char *)((unsigned __int64)(*v4 + 1) & -(__int64)(*v4 != 0LL));
}
