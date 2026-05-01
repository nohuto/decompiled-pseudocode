/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______ @ 0x180018F20
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x18001B5B0 (Windows--Internal--COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e___ea_18001B5B0.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180001D30 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020B30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall Windows::Internal::COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_COperationLambdaVar_0__lambda_88afd6bbfe2a61dd98f4359340091e1e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______(
        __int64 a1)
{
  __int64 v2; // rcx
  void **result; // rax

  `eh vector destructor iterator'(
    (char *)(a1 + 32),
    8LL,
    1LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release();
  }
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  return result;
}
