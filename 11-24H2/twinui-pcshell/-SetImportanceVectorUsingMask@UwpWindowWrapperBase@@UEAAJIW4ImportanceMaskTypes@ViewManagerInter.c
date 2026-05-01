/*
 * XREFs of ?SetImportanceVectorUsingMask@UwpWindowWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801E1380
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@@ZAEAW42@AEAJ@Z @ 0x18028CA38 (--0_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0d0dc26f2e1703fa8279b79796d53b0f___ @ 0x18044701C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_0d0dc26f2e1703fa8279b79796d53b0f.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetImportanceVectorUsingMask(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  int v4; // eax
  const char *v6; // r9
  __int64 v7; // rdx
  int v8[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h]
  int v11; // [rsp+58h] [rbp+10h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v3 = _lambda_3de5d145e6ce0c9b4d563a35329ea675_::_lambda_3de5d145e6ce0c9b4d563a35329ea675_(v8, &v11, a1 - 40, &v12);
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0d0dc26f2e1703fa8279b79796d53b0f___(v3);
  if ( v4 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x97E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4,
        v8[0]);
    }
    catch ( ... )
    {
      *(_DWORD *)(v7 + 80) = wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x982,
                               (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                               v6);
      return v10;
    }
  }
  return 0LL;
}
