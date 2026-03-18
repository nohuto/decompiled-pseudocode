/*
 * XREFs of ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x1801D1790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidHandle@CChannel@@AEAA_NI@Z @ 0x1801D1874 (-IsValidHandle@CChannel@@AEAA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::ReleaseResource(CChannel *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  if ( CChannel::IsValidHandle(this, a2) )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = 16LL * (a2 - 1);
    if ( (*(_DWORD *)(v6 + v5))-- == 1 )
    {
      v8 = (__int64 *)*((_QWORD *)this + 8);
      v9 = *(_QWORD *)(v6 + v5 + 8);
      v10 = *v8;
      *(_QWORD *)(v6 + v5 + 8) = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64))(v10 + 64))(v8, v9);
      v11 = *((_QWORD *)this + 2);
      *(_DWORD *)(v6 + v11 + 4) = 0;
      v12 = *(_QWORD *)(v6 + v11 + 8);
      *(_QWORD *)(v6 + v11 + 8) = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      --*((_QWORD *)this + 5);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    return 2147942487LL;
  }
}
