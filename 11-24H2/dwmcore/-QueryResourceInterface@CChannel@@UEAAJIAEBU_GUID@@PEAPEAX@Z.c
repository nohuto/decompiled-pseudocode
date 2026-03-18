/*
 * XREFs of ?QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1801D1680
 * Callers:
 *     ?VisualTargetSetRoot@CChannel@@UEAAJII@Z @ 0x1801D14A0 (-VisualTargetSetRoot@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidHandle@CChannel@@AEAA_NI@Z @ 0x1801D1874 (-IsValidHandle@CChannel@@AEAA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::QueryResourceInterface(CChannel *this, unsigned int a2, const struct _GUID *a3, void **a4)
{
  __int64 v4; // rbx
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // rcx
  int v10; // edi
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  if ( CChannel::IsValidHandle(this, a2) )
  {
    *a4 = 0LL;
    v9 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 16LL * (a2 - 1) + 8);
    if ( v9 )
    {
      v10 = (**v9)(v9, a3, a4);
      if ( v10 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
        return 0LL;
      }
      v12 = 506LL;
    }
    else
    {
      v10 = -2147467262;
      v12 = 505LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  }
  else
  {
    v10 = -2147024890;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070006LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  }
  return (unsigned int)v10;
}
