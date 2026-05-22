/*
 * XREFs of wil::init_once_nothrow__lambda_dcfa4c4accc7a4c0ffedb44f9f29ee27___ @ 0x18000CE7C
 * Callers:
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18000CDE4 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Create@KernelContextProvider@@CAJPEAPEAV1@@Z @ 0x180082948 (-Create@KernelContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::init_once_nothrow__lambda_dcfa4c4accc7a4c0ffedb44f9f29ee27___(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  const char *v4; // r9
  int v6; // eax
  unsigned int v7; // edi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+38h] [rbp+10h] BYREF

  fPending = 0;
  if ( a3 )
    *a3 = 0;
  if ( !__std_init_once_begin_initialize(&InitOnce, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x330, (unsigned int)"wil", v4);
  if ( fPending )
  {
    v6 = KernelContextProvider::Create(&qword_180247E30);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x335, (unsigned int)"wil", (const char *)(unsigned int)v6, v8);
      InitOnceComplete(&InitOnce, 4u, 0LL);
      return v7;
    }
    if ( a3 )
      *a3 = 1;
    InitOnceComplete(&InitOnce, 0, 0LL);
  }
  return 0LL;
}
