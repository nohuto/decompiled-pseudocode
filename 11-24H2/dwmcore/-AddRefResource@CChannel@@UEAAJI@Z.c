/*
 * XREFs of ?AddRefResource@CChannel@@UEAAJI@Z @ 0x1801D15E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidHandle@CChannel@@AEAA_NI@Z @ 0x1801D1874 (-IsValidHandle@CChannel@@AEAA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::AddRefResource(CChannel *this, unsigned int a2)
{
  __int64 v2; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  if ( CChannel::IsValidHandle(this, a2) )
  {
    ++*(_DWORD *)(*((_QWORD *)this + 2) + 16LL * (a2 - 1));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    return 2147942487LL;
  }
}
