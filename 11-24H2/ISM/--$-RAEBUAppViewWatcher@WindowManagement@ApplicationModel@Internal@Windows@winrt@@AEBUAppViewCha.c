/*
 * XREFs of ??$?RAEBUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUAppViewChangedEventArgs@12345@@_lambda_e811ed625de1c9f36d6dae6db721db2b_@@QEBA?A_PAEBUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUAppViewChangedEventArgs@23456@@Z @ 0x180075D84
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_66ed2df52651243ff863a12d97446406_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180075D50 (-Invoke@-$delegate@U-$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Interna.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_e811ed625de1c9f36d6dae6db721db2b_::operator()<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher const &,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs const &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *, __int64 *); // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a1;
  v5 = (__int64 (__fastcall *)(__int64, __int64 *, __int64 *))a1[1];
  v6 = *a3;
  v9 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *a2;
  v10 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return v5(v3, &v10, &v9);
}
