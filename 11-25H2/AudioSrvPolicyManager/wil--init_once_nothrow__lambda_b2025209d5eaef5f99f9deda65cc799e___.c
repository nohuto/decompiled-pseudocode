/*
 * XREFs of wil::init_once_nothrow__lambda_b2025209d5eaef5f99f9deda65cc799e___ @ 0x18003F61C
 * Callers:
 *     ?UpdateGlobalUserPresenceState@@YAXXZ @ 0x18001FACC (-UpdateGlobalUserPresenceState@@YAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001B8B0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _lambda_b2025209d5eaef5f99f9deda65cc799e_::operator() @ 0x18004038C (_lambda_b2025209d5eaef5f99f9deda65cc799e_--operator().c)
 */

__int64 __fastcall wil::init_once_nothrow__lambda_b2025209d5eaef5f99f9deda65cc799e___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const char *v3; // r9
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]

  v9 = HIDWORD(a3);
  fPending = 0;
  if ( !InitOnceBeginInitialize(&InitOnce, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x330, (int)"wil", v3);
  if ( fPending )
  {
    v5 = lambda_b2025209d5eaef5f99f9deda65cc799e_::operator()();
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x335, (int)"wil", (const char *)(unsigned int)v5);
      InitOnceComplete(&InitOnce, 4u, 0LL);
      return v6;
    }
    InitOnceComplete(&InitOnce, 0, 0LL);
  }
  return 0LL;
}
