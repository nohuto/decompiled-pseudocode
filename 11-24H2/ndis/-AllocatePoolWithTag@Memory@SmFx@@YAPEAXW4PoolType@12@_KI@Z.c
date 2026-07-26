/*
 * XREFs of ?AllocatePoolWithTag@Memory@SmFx@@YAPEAXW4PoolType@12@_KI@Z @ 0x1400E6F00
 * Callers:
 *     ?Initialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAJAEBUSTATE_MACHINE_ENGINE_CONFIG@3@@Z @ 0x1400E67A8 (-Initialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAJAEBUSTATE_MACHINE_ENGINE_CONFIG.c)
 *     ?MakeAndInitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@SAJAEBUSTATE_MACHINE_ENGINE_CONFIG@3@PEAPEAV123@@Z @ 0x1400E69F8 (-MakeAndInitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@SAJAEBUSTATE_MACHINE_ENGINE_C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmFx::Memory::AllocatePoolWithTag(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(64LL, a2, a3);
}
