/*
 * XREFs of ?DisconnectProxyAtShutdown@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAXIIPEBX@Z @ 0x1800B66A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBUSimpleHapticsControllerFeedback@@@?$vector@USimpleHapticsControllerFeedback@@V?$allocator@USimpleHapticsControllerFeedback@@@std@@@std@@AEAAPEAUSimpleHapticsControllerFeedback@@QEAU2@AEBU2@@Z @ 0x1800AC224 (--$_Emplace_reallocate@AEBUSimpleHapticsControllerFeedback@@@-$vector@USimpleHapticsControllerFe.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  _BYTE *v4; // rdx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _BYTE *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a4;
  if ( a4 )
  {
    a4[29] = 1;
    v4 = (_BYTE *)a1[1];
    if ( v4 == (_BYTE *)a1[2] )
    {
      try
      {
        std::vector<SimpleHapticsControllerFeedback>::_Emplace_reallocate<SimpleHapticsControllerFeedback const &>(
          (__int64)a1,
          v4,
          &v8);
      }
      catch ( ... )
      {
        wil::details::in1diag3::FailFast_CaughtException(
          retaddr,
          (void *)0x8CD,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v5);
      }
    }
    else
    {
      *(_QWORD *)v4 = a4;
      a1[1] += 8LL;
    }
  }
  return 0LL;
}
