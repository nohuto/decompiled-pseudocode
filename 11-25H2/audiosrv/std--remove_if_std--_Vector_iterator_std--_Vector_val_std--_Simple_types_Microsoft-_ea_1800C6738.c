/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_9971db2eae47a9fe5413ed8c1598f1b0___ @ 0x1800C6738
 * Callers:
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800C7330 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator() @ 0x180022FA0 (_lambda_92c40f897d3a9c7e927f302002ea2ff3_--operator().c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_9971db2eae47a9fe5413ed8c1598f1b0___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 **result; // rax
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    if ( lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()((__int64)a1, (__int64)i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( !lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()((__int64)a1, (__int64)j) )
      {
        v7 = 0LL;
        if ( v10 != j )
        {
          v7 = *j;
          *j = 0LL;
        }
        v8 = *i;
        *i = v7;
        v10[0] = v8;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v10);
        ++i;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
