/*
 * XREFs of ?ReevaluateGameModeOperation@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800D9AE8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_3b8cbb1503bba28940815bd3e09659f7__void_::_Do_call @ 0x1800DD510 (std--_Func_impl_no_alloc__lambda_3b8cbb1503bba28940815bd3e09659f7__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_4b6ebf976223f59d0588ba0abd99c2c7__void_::_Do_call @ 0x1800DD540 (std--_Func_impl_no_alloc__lambda_4b6ebf976223f59d0588ba0abd99c2c7__void_--_Do_call.c)
 * Callees:
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAXXZ @ 0x1800DA278 (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAXXZ.c)
 *     ?UpdateCurrentGameOperatingMode@CBtAudioResourceManagerBase@@IEAAXPEA_N@Z @ 0x1800DD370 (-UpdateCurrentGameOperatingMode@CBtAudioResourceManagerBase@@IEAAXPEA_N@Z.c)
 */

void __fastcall CBtAudioResourceManagerBase::ReevaluateGameModeOperation(CBtAudioResourceManagerBase *this)
{
  bool v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  CBtAudioResourceManagerBase::UpdateCurrentGameOperatingMode(this, &v2);
  if ( v2 )
    CBtAudioResourceManagerBase::RefreshStreamsOnDevice(this);
}
