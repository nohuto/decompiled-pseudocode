/*
 * XREFs of ??$InvokeDelegates@V_lambda_56908091a02afdced2314238e386ad81_@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_56908091a02afdced2314238e386ad81_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800171F4
 * Callers:
 *     ?_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180022800 (-_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifi.c)
 *     ?_OnTileRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800229B0 (-_OnTileRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUni.c)
 *     ?Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@@Z @ 0x1800362D0 (-Invoke@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEn.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020BB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180020F30 (-Remove@-$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_56908091a02afdced2314238e386ad81_,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // esi
  _QWORD *v6; // rbx
  signed __int32 v7; // eax
  __int64 v8; // r15
  _QWORD *i; // r14
  int v10; // eax
  unsigned int v11; // ebx
  int MatchingRestrictedErrorInfo; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+20h]

  v5 = 0;
  v6 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    do
      v7 = *(_DWORD *)(a2 + 12);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 12), v7 + 1, v7) );
    v6 = (_QWORD *)a2;
    v16 = (_QWORD *)a2;
  }
  v8 = v6[4];
  for ( i = (_QWORD *)v6[2]; i != (_QWORD *)v6[3]; ++i )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *a1);
    v5 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError((unsigned int)v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
    }
    else
    {
      if ( v10 >= 0 )
        goto LABEL_17;
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v11 = v5;
        v15 = 0LL;
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v15);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v15);
        v5 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v5 = v11;
        v13 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v6 = v16;
        break;
      }
      RoTransformError(v5, 0LL, 0LL);
    }
    v5 = 0;
LABEL_17:
    v8 += 8LL;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  return v5;
}
