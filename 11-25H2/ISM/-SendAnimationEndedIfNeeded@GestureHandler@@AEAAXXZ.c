/*
 * XREFs of ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180144B64
 * Callers:
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180058734 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 *     ?OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ @ 0x180083658 (-OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ.c)
 *     ?OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEventArg@@@Z @ 0x180104340 (-OnNotify@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_KW4DataProviderNotificationEven.c)
 *     ?OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z @ 0x180140C3C (-OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z.c)
 *     ?OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ @ 0x180144A48 (-OnManagerConfiguredForAnotherDataSource@GestureHandler@@QEAAXXZ.c)
 * Callees:
 *     ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x180095778 (-IsGestureInvalid@GestureHandler@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GestureHandler::SendAnimationEndedIfNeeded(GestureHandler *this)
{
  __int64 v2; // rsi
  __int64 i; // rbx

  if ( *((_QWORD *)this + 31) && GestureHandler::IsGestureInvalid(this) )
  {
    v2 = *((_QWORD *)this + 15);
    for ( i = *((_QWORD *)this + 14); i != v2; i += 40LL )
    {
      if ( !*(_BYTE *)(i + 32) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 72LL))(
          *(_QWORD *)(i + 8) + 8LL,
          *((_QWORD *)this + 32));
        *(_BYTE *)(i + 32) = 1;
      }
    }
  }
}
