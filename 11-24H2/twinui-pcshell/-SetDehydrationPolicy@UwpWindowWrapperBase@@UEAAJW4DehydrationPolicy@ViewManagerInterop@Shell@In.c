/*
 * XREFs of ?SetDehydrationPolicy@UwpWindowWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802062D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@QEAA@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0@Z @ 0x18022A0E8 (--0-$initializer_list@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a9026d8f2ae046375b7e2fa4cf491289___ @ 0x1804480DC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a9026d8f2ae046375b7e2fa4cf491289.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetDehydrationPolicy(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v3; // eax
  const char *v5; // r9
  __int64 v6; // rdx
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h]
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = std::initializer_list<std::vector<Windows::UI::Color>>::initializer_list<std::vector<Windows::UI::Color>>(
         v7,
         a1 - 40,
         &v10);
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a9026d8f2ae046375b7e2fa4cf491289___(v2);
  if ( v3 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9AB,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v7[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v6 + 64) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x9AF,
                               (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v5);
      return v9;
    }
  }
  return 0LL;
}
