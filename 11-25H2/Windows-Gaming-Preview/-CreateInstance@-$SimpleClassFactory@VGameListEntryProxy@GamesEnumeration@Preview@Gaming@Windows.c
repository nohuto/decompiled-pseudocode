/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VGameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180027D70
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180024F5C (--0GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D260 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectab.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002DE40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::SimpleClassFactory<Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD *); // rbx
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *v8; // rax
  int v9; // edi
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD *); // rbx
  __int64 (__fastcall ***v12)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL);
    return 2147746064LL;
  }
  v7 = 0LL;
  v12 = 0LL;
  v8 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *)operator new(
                                                                           0xB8uLL,
                                                                           (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
  {
    v9 = -2147024882;
    goto LABEL_9;
  }
  v10 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::GameListEntryProxy(v8);
  v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::QueryInterface(
         v10,
         &GUID_00000000_0000_0000_c000_000000000046,
         &v12);
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::Release(v10);
  if ( v9 < 0 )
  {
    v7 = v12;
LABEL_9:
    if ( v7 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v7)[2])(v7);
    return (unsigned int)v9;
  }
  v11 = v12;
  v9 = (**v12)(v12, a3, a4);
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v11)[2])(v11);
  return (unsigned int)v9;
}
