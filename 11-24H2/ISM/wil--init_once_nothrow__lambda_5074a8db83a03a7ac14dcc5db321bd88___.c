/*
 * XREFs of wil::init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___ @ 0x18010A634
 * Callers:
 *     ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x18010A7E4 (-IsTestSigningEnabled@KernelContextProvider@@SA_NXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008D698 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::init_once_nothrow__lambda_5074a8db83a03a7ac14dcc5db321bd88___(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 SystemInformation; // [rsp+30h] [rbp+8h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp+10h] BYREF

  SystemInformation = a1;
  fPending = 0;
  if ( a3 )
    *a3 = 0;
  if ( !__std_init_once_begin_initialize(&stru_180251920, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x330, (int)"wil", v4);
  if ( fPending )
  {
    SystemInformation = 8LL;
    if ( NtQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) >= 0 )
      byte_180251918 = (SystemInformation & 0x200000000LL) != 0;
    if ( a3 )
      *a3 = 1;
    InitOnceComplete(&stru_180251920, 0, 0LL);
  }
  return 0LL;
}
