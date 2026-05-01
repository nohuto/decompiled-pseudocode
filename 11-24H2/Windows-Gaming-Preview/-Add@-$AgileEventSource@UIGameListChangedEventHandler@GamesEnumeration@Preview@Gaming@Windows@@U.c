/*
 * XREFs of ?Add@?$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18001BA9C
 * Callers:
 *     ?add_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListChangedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x180023670 (-add_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGame.c)
 *     ?add_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListChangedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x1800237A0 (-add_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGa.c)
 * Callees:
 *     ??$CreateAgileHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@YAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAPEAU34567@@Z @ 0x180016F58 (--$CreateAgileHelper@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Det.c)
 *     ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18001BB44 (-AddInternal@-$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v9 = 0LL;
  v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>(
         a2,
         &v9);
  v8 = v9;
  if ( v7 >= 0 )
  {
    if ( v9 )
    {
      v7 = Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             a1,
             v9,
             *(_QWORD *)(*(_QWORD *)a2 + 24LL),
             a3);
      v8 = v9;
    }
    else
    {
      v7 = -2147024809;
    }
  }
  if ( v8 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
