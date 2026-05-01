/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18022B1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$make@V?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1802B3B14 (--$make@V-$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  _QWORD *v7; // rax
  char v8; // r9
  __int16 v9; // r8
  __int16 v10; // dx
  unsigned int v11; // ebx
  const char *v12; // r9
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h] BYREF
  __int16 v15; // [rsp+2Ch] [rbp-1Ch]
  __int16 v16; // [rsp+2Eh] [rbp-1Ah]
  char v17; // [rsp+30h] [rbp-18h]
  char v18; // [rsp+31h] [rbp-17h]
  char v19; // [rsp+32h] [rbp-16h]
  char v20; // [rsp+33h] [rbp-15h]
  char v21; // [rsp+34h] [rbp-14h]
  char v22; // [rsp+35h] [rbp-13h]
  char v23; // [rsp+36h] [rbp-12h]
  char v24; // [rsp+37h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    try
    {
      v7 = (_QWORD *)winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>,>(&v13);
      v8 = *((_BYTE *)a3 + 8);
      v9 = *((_WORD *)a3 + 3);
      v10 = *((_WORD *)a3 + 2);
      v14 = *a3;
      v15 = v10;
      v16 = v9;
      v17 = v8;
      v18 = *((_BYTE *)a3 + 9);
      v19 = *((_BYTE *)a3 + 10);
      v20 = *((_BYTE *)a3 + 11);
      v21 = *((_BYTE *)a3 + 12);
      v22 = *((_BYTE *)a3 + 13);
      v23 = *((_BYTE *)a3 + 14);
      v24 = *((_BYTE *)a3 + 15);
      v11 = (**(__int64 (__fastcall ***)(_QWORD, int *, _QWORD *))*v7)(*v7, &v14, a4);
      if ( v13 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
      result = v11;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x49,
                             (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
                             v12);
    }
  }
  return result;
}
