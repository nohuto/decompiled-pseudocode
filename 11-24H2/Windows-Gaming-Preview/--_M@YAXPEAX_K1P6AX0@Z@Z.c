/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180001D30
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______ @ 0x180018F20 (Windows--Internal--COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::_COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___ @ 0x180018F88 (Windows--Internal--COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows--Inte.c)
 *     ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x180019310 (--1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x18001B630 (Windows--Internal--COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows--Inte.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180021548 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180026CE0 (Windows--Internal--COperationLambdaVar_0__lambda_0adeea27616b30382c54e31f2f6dc703__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_75b78523e3da460933f50e5d76bfa16b__Windows::Internal::CBasicResult_unsigned_char_0___::_scalar_deleting_destructor_ @ 0x180026D50 (Windows--Internal--COperationLambdaVar_0__lambda_75b78523e3da460933f50e5d76bfa16b__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_ef8eb52c9e6883c3173b82c9be862a9c__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180026DC0 (Windows--Internal--COperationLambdaVar_0__lambda_ef8eb52c9e6883c3173b82c9be862a9c__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x1800367B0 (Windows--Internal--COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows--Inte.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_e30f9dfe56fd89cbeec2250555549c57__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x1800399C0 (Windows--Internal--COperationLambdaVar_0__lambda_e30f9dfe56fd89cbeec2250555549c57__Windows--Inte.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180001DA0 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *i; // rdi

  v5 = a3;
  for ( i = &a1[a3 * a2]; v5--; a4(i) )
    i -= a2;
}
