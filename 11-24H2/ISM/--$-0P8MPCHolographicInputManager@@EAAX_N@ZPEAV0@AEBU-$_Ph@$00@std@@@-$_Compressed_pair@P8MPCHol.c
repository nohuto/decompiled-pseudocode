/*
 * XREFs of ??$?0P8MPCHolographicInputManager@@EAAX_N@ZPEAV0@AEBU?$_Ph@$00@std@@@?$_Compressed_pair@P8MPCHolographicInputManager@@EAAX_N@ZV?$tuple@PEAVMPCHolographicInputManager@@U?$_Ph@$00@std@@@std@@$0A@@std@@QEAA@U_One_then_variadic_args_t@1@$$QEAP8MPCHolographicInputManager@@EAAX_N@Z$$QEAPEAV3@AEBU?$_Ph@$00@1@@Z @ 0x180095A64
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004E364 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800D1A34 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800D6AF8 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     ??$?0PEAVGameInputProcessor@@AEBU?$_Ph@$00@std@@$0A@@?$tuple@PEAVGameInputProcessor@@U?$_Ph@$00@std@@@std@@QEAA@$$QEAPEAVGameInputProcessor@@AEBU?$_Ph@$00@1@@Z @ 0x180095A34 (--$-0PEAVGameInputProcessor@@AEBU-$_Ph@$00@std@@$0A@@-$tuple@PEAVGameInputProcessor@@U-$_Ph@$00@.c)
 */

__int64 __fastcall std::_Compressed_pair<void (MPCHolographicInputManager::*)(bool),std::tuple<MPCHolographicInputManager *,std::_Ph<1>>,0>::_Compressed_pair<void (MPCHolographicInputManager::*)(bool),std::tuple<MPCHolographicInputManager *,std::_Ph<1>>,0>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v4; // r10

  *a1 = *a3;
  std::tuple<GameInputProcessor *,std::_Ph<1>>::tuple<GameInputProcessor *,std::_Ph<1>>((__int64)(a1 + 1), a4);
  return v4;
}
