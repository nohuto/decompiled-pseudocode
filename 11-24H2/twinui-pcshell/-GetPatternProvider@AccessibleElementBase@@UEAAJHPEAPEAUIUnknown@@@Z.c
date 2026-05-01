/*
 * XREFs of ?GetPatternProvider@AccessibleElementBase@@UEAAJHPEAPEAUIUnknown@@@Z @ 0x1804D2B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AccessibleElementBase::GetPatternProvider(AccessibleElementBase *this, int a2, struct IUnknown **a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 *v7; // rcx
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]
  __int64 v11; // [rsp+58h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a2 != 10009 || *((_DWORD *)this + 31) != 50032 )
  {
    v7 = (__int64 *)v8;
    v8[0] = _mm_load_si128((const __m128i *)&_xmm);
    v9 = 256;
    v8[2] = _mm_load_si128((const __m128i *)&_xmm);
    v10 = 10006;
    v8[1] = _mm_load_si128((const __m128i *)&_xmm);
    while ( 1 )
    {
      if ( v7 == &v11 )
        return 2147746308LL;
      if ( (*((_DWORD *)this + 30) & *(_DWORD *)v7) != 0 && a2 == *((_DWORD *)v7 + 1) )
        break;
      ++v7;
    }
    v4 = (**(__int64 (__fastcall ***)(AccessibleElementBase *, GUID *, struct IUnknown **))this)(
           this,
           &GUID_00000000_0000_0000_c000_000000000046,
           a3);
    if ( v4 >= 0 )
      return (unsigned int)v4;
    v5 = 43LL;
    goto LABEL_5;
  }
  v4 = (**(__int64 (__fastcall ***)(AccessibleElementBase *, GUID *, struct IUnknown **, AccessibleElementBase *))this)(
         this,
         &GUID_00000000_0000_0000_c000_000000000046,
         a3,
         this);
  if ( v4 < 0 )
  {
    v5 = 22LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)v4);
  }
  return (unsigned int)v4;
}
