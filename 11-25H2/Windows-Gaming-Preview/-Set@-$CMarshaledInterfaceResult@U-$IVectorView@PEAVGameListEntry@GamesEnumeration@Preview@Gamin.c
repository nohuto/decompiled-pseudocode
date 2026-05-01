/*
 * XREFs of ?Set@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x180021A54
 * Callers:
 *     _lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator() @ 0x180019568 (_lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator().c)
 *     _lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator() @ 0x18001AEE0 (_lambda_f9c49c7b293ed1d0382b2914a11b6bf4_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Set(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx

  v3 = (__int64 *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  *v3 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v6 = *v3;
  if ( a2 )
  {
    if ( v6 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)RoGetAgileReference(0LL, &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a, a2, v3);
  }
  else
  {
    *v3 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
