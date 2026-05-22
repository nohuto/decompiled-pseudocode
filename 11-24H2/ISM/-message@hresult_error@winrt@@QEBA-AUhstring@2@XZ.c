/*
 * XREFs of ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1800DF3B8
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x1800DE784 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 * Callees:
 *     FormatMessageW_0 @ 0x18009DE2D (FormatMessageW_0.c)
 *     SysStringLen_0 @ 0x18009F2F1 (SysStringLen_0.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800A7B00 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x1800A8340 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 *     ?close@?$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800DF378 (-close@-$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

winrt::hstring *__fastcall winrt::hresult_error::message(__int64 a1, winrt::hstring *a2)
{
  __int64 v2; // r14
  unsigned int (__fastcall *v5)(__int64, BSTR *, const unsigned __int16 **, BSTR *, OLECHAR **); // rbx
  UINT v6; // eax
  const unsigned __int16 *v7; // rdx
  DWORD v8; // ebx
  DWORD v9; // eax
  OLECHAR *v11[2]; // [rsp+40h] [rbp-10h] BYREF
  const unsigned __int16 *Buffer; // [rsp+80h] [rbp+30h] BYREF
  BSTR pbstr; // [rsp+90h] [rbp+40h] BYREF
  BSTR v14; // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    goto LABEL_9;
  LODWORD(Buffer) = 0;
  v14 = 0LL;
  pbstr = 0LL;
  v11[0] = 0LL;
  v5 = *(unsigned int (__fastcall **)(__int64, BSTR *, const unsigned __int16 **, BSTR *, OLECHAR **))(*(_QWORD *)v2 + 24LL);
  winrt::handle_type<winrt::impl::bstr_traits>::close(v11);
  winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
  winrt::handle_type<winrt::impl::bstr_traits>::close(&v14);
  if ( v5(v2, &v14, &Buffer, &pbstr, v11) || (_DWORD)Buffer != *(_DWORD *)(a1 + 12) )
  {
    winrt::handle_type<winrt::impl::bstr_traits>::close(v11);
    winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
    winrt::handle_type<winrt::impl::bstr_traits>::close(&v14);
LABEL_9:
    v8 = *(_DWORD *)(a1 + 12);
    Buffer = 0LL;
    winrt::handle_type<winrt::impl::heap_traits>::close((void **)&Buffer);
    v9 = FormatMessageW_0(0x1300u, 0LL, v8, 0x400u, (LPWSTR)&Buffer, 0, 0LL);
    winrt::impl::trim_hresult_message(a2, Buffer, v9);
    winrt::handle_type<winrt::impl::heap_traits>::close((void **)&Buffer);
    return a2;
  }
  if ( pbstr )
  {
    v6 = SysStringLen_0(pbstr);
    v7 = pbstr;
  }
  else
  {
    v6 = SysStringLen_0(v14);
    v7 = v14;
  }
  winrt::impl::trim_hresult_message(a2, v7, v6);
  winrt::handle_type<winrt::impl::bstr_traits>::close(v11);
  winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
  winrt::handle_type<winrt::impl::bstr_traits>::close(&v14);
  return a2;
}
