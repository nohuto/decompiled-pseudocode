/*
 * XREFs of ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1800ADFE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800AC8E0 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x1800ADEB4 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800ADF78 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     _alloca_probe @ 0x18015E810 (_alloca_probe.c)
 */

const char *__fastcall wil::ResultException::what(
        wil::ResultException *this,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  volatile signed __int32 **v4; // rdi
  int v5; // eax
  __int64 cbMultiByte; // rbp
  HANDLE ProcessHeap; // rax
  int *v8; // rax
  WCHAR WideCharStr[2048]; // [rsp+40h] [rbp-1018h] BYREF

  v4 = (volatile signed __int32 **)((char *)this + 192);
  if ( *((_QWORD *)this + 24) )
    return (const char *)((unsigned __int64)(*v4 + 1) & -(__int64)(*v4 != 0LL));
  wil::GetFailureLogString((wil *)WideCharStr, (unsigned __int16 *)0x800, (__int64)this + 24, a4);
  v5 = WideCharToMultiByte(0, 0, WideCharStr, -1, 0LL, 0, 0LL, 0LL);
  cbMultiByte = v5;
  if ( !v5 )
  {
    wil::details::shared_buffer::reset(v4);
LABEL_6:
    WideCharToMultiByte(
      0,
      0,
      WideCharStr,
      -1,
      (LPSTR)((unsigned __int64)(*v4 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)*v4 >> 64)),
      cbMultiByte,
      0LL,
      0LL);
    return (const char *)((unsigned __int64)(*v4 + 1) & -(__int64)(*v4 != 0LL));
  }
  ProcessHeap = GetProcessHeap();
  v8 = (int *)HeapAlloc(ProcessHeap, 0, cbMultiByte + 4);
  if ( v8 )
  {
    *v8 = 0;
    wil::details::shared_buffer::assign((wil::details::shared_buffer *)v4, v8, cbMultiByte);
    goto LABEL_6;
  }
  return "WIL Exception";
}
