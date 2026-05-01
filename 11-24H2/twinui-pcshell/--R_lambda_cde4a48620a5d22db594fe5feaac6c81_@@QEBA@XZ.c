/*
 * XREFs of ??R_lambda_cde4a48620a5d22db594fe5feaac6c81_@@QEBA@XZ @ 0x1805E43C8
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1805E8B80 (-Run@-$CTaskWrapper@V_lambda_cde4a48620a5d22db594fe5feaac6c81_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1801BA298 (--B-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string_view@GU-$c.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028FD2C (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180290830 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x1805E4A20 (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_cde4a48620a5d22db594fe5feaac6c81_::operator()(__int64 a1)
{
  bool *v2; // r8
  const char *v3; // r9
  __int64 result; // rax
  int CanPinToTaskbar; // eax
  int v6[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  TaskbarPinHelper *v9; // [rsp+50h] [rbp+8h] BYREF

  std::wstring::operator std::basic_string_view<unsigned short>((_QWORD *)(**(_QWORD **)(a1 + 8) + 24LL), v6);
  v7 = 0LL;
  try
  {
    TryGetAppsFolderItem(&v9, (SecondaryTileIdentifierHelpers **)v6, (__int64)&v7);
    result = (__int64)v9;
    if ( v9 )
    {
      CanPinToTaskbar = TaskbarPinHelper::CanPinToTaskbar(v9, *(struct IShellItem **)(a1 + 16), v2);
      if ( CanPinToTaskbar < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2E5,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)(unsigned int)CanPinToTaskbar,
          v6[0]);
      result = (__int64)v9;
    }
    if ( result )
      result = winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v9);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x2E8,
             (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
             v3);
  }
  return result;
}
