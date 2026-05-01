/*
 * XREFs of ?UpdateEngagementTelemetryFlags@UwpWindowWrapperBase@@UEAAJ_K0@Z @ 0x18044BDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@@ZAEAW42@AEAJ@Z @ 0x18028CA38 (--0_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f15b22c9ce1ee69acf06e5130bdeeb0f___ @ 0x1804486E0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f15b22c9ce1ee69acf06e5130bdeeb0f.c)
 */

__int64 __fastcall UwpWindowWrapperBase::UpdateEngagementTelemetryFlags(
        UwpWindowWrapperBase *this,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  int v4; // eax
  const char *v6; // r9
  __int64 v7; // rdx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  if ( *((_QWORD *)this + 12) )
  {
    if ( a2 )
    {
      v3 = _lambda_3de5d145e6ce0c9b4d563a35329ea675_::_lambda_3de5d145e6ce0c9b4d563a35329ea675_(
             v8,
             (__int64)this - 16,
             (__int64)&v11,
             (__int64)&v12);
      v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f15b22c9ce1ee69acf06e5130bdeeb0f___((__int64)v3);
      if ( v4 < 0 )
      {
        try
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x5D1,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v4,
            v8[0]);
        }
        catch ( ... )
        {
          *(_DWORD *)(v7 + 80) = wil::details::in1diag3::Return_CaughtException(
                                   retaddr,
                                   (void *)0x5D6,
                                   (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                                   v6);
          return v10;
        }
      }
    }
  }
  return 0LL;
}
