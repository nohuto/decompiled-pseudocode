/*
 * XREFs of ?Destroy@StateMachineEngineImpl@StateMachineEngine@SmFx@@QEAAXXZ @ 0x1400ED3B8
 * Callers:
 *     ?UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z @ 0x140074DE0 (-UpdateEngineState@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4EngineState@123@@Z.c)
 *     ?MakeAndInitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@SAJAEBUSTATE_MACHINE_ENGINE_CONFIG@3@PEAPEAV123@@Z @ 0x1400ED90C (-MakeAndInitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@SAJAEBUSTATE_MACHINE_ENGINE_C.c)
 * Callees:
 *     ??1StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA@XZ @ 0x1400ED2F8 (--1StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::Destroy(
        SmFx::StateMachineEngine::StateMachineEngineImpl *P)
{
  void (__fastcall *v1)(__int64); // rdi
  __int64 v3; // rsi

  v1 = (void (__fastcall *)(__int64))*((_QWORD *)P + 118);
  v3 = *((_QWORD *)P + 112);
  SmFx::StateMachineEngine::StateMachineEngineImpl::~StateMachineEngineImpl(P);
  ExFreePool(P);
  if ( v1 )
    v1(v3);
}
