/*
 * XREFs of ??$?0P8MPCInputRouter@@EAAX_N@ZPEAV0@AEBU?$_Ph@$00@std@@@?$_Compressed_pair@P8MPCInputRouter@@EAAX_N@ZV?$tuple@PEAVMPCInputRouter@@U?$_Ph@$00@std@@@std@@$0A@@std@@QEAA@U_One_then_variadic_args_t@1@$$QEAP8MPCInputRouter@@EAAX_N@Z$$QEAPEAV3@AEBU?$_Ph@$00@1@@Z @ 0x180095808
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18003285C (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x180034544 (-Initialize@MPCInputRouter@@AEAAJXZ.c)
 *     ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x180095FC0 (--0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z.c)
 * Callees:
 *     ??$?0PEAVGameInputProcessor@@AEBU?$_Ph@$00@std@@$0A@@?$tuple@PEAVGameInputProcessor@@U?$_Ph@$00@std@@@std@@QEAA@$$QEAPEAVGameInputProcessor@@AEBU?$_Ph@$00@1@@Z @ 0x180095834 (--$-0PEAVGameInputProcessor@@AEBU-$_Ph@$00@std@@$0A@@-$tuple@PEAVGameInputProcessor@@U-$_Ph@$00@.c)
 */

__int64 __fastcall std::_Compressed_pair<void (MPCInputRouter::*)(bool),std::tuple<MPCInputRouter *,std::_Ph<1>>,0>::_Compressed_pair<void (MPCInputRouter::*)(bool),std::tuple<MPCInputRouter *,std::_Ph<1>>,0>(
        _OWORD *a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4)
{
  __int64 v4; // r10

  *a1 = *a3;
  std::tuple<GameInputProcessor *,std::_Ph<1>>::tuple<GameInputProcessor *,std::_Ph<1>>(a1 + 1, a4);
  return v4;
}
