/*
 * XREFs of _lambda_0adeea27616b30382c54e31f2f6dc703_::__lambda_0adeea27616b30382c54e31f2f6dc703_ @ 0x1800253F0
 * Callers:
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_0adeea27616b30382c54e31f2f6dc703____::_1_::dtor$2 @ 0x180043D1C (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Inter_ea_180043D1C.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 */

volatile signed __int64 *__fastcall lambda_0adeea27616b30382c54e31f2f6dc703_::__lambda_0adeea27616b30382c54e31f2f6dc703_(
        __int64 a1)
{
  volatile signed __int64 *result; // rax

  result = *(volatile signed __int64 **)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
