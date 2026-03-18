/*
 * XREFs of ?ResolveGpuTimestamp@CComputeScribbleStopwatch@@AEAAJXZ @ 0x180175A4C
 * Callers:
 *     ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ @ 0x18017592C (-ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::ResolveGpuTimestamp(CComputeScribbleStopwatch *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = 0LL;
  v7[0] = 0LL;
  v7[1] = 8LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD **))(**((_QWORD **)this + 5) + 64LL))(
         *((_QWORD *)this + 5),
         0LL,
         v7,
         &v6);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  else
  {
    *((_QWORD *)this + 7) = *v6;
    v4 = *((_QWORD *)this + 5);
    v8 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v4 + 72LL))(v4, 0LL, &v8);
    result = 0LL;
    *((_BYTE *)this + 64) = 1;
  }
  return result;
}
