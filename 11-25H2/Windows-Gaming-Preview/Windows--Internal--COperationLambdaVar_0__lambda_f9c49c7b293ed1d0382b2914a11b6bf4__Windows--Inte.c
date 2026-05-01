/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x18001B520
 * Callers:
 *     <none>
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180001D30 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800209B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  __int64 v4; // rcx

  `eh vector destructor iterator'(
    (char *)a1 + 48,
    8LL,
    1LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
  WindowsDeleteString(*((HSTRING *)a1 + 3));
  *((_QWORD *)a1 + 3) = 0LL;
  v4 = *((_QWORD *)a1 + 2);
  if ( v4 )
  {
    *((_QWORD *)a1 + 2) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v4);
  }
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
