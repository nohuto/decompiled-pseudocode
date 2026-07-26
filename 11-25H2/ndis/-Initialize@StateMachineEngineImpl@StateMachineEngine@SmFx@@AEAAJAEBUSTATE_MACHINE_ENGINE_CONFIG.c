/*
 * XREFs of ?Initialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAJAEBUSTATE_MACHINE_ENGINE_CONFIG@3@@Z @ 0x1400ED6BC
 * Callers:
 *     ?MakeAndInitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@SAJAEBUSTATE_MACHINE_ENGINE_CONFIG@3@PEAPEAV123@@Z @ 0x1400ED90C (-MakeAndInitialize@StateMachineEngineImpl@StateMachineEngine@SmFx@@SAJAEBUSTATE_MACHINE_ENGINE_C.c)
 * Callees:
 *     ?InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x1400ED7E8 (-InitiateFirstRun@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?AllocatePoolWithTag@Memory@SmFx@@YAPEAXW4PoolType@12@_KI@Z @ 0x1400EDD90 (-AllocatePoolWithTag@Memory@SmFx@@YAPEAXW4PoolType@12@_KI@Z.c)
 */

__int64 __fastcall SmFx::StateMachineEngine::StateMachineEngineImpl::Initialize(
        SmFx::StateMachineEngine::StateMachineEngineImpl *this,
        const struct SmFx::STATE_MACHINE_ENGINE_CONFIG *a2)
{
  char *v2; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 PoolWithTag; // rax
  _DEVICE_OBJECT *deviceObject; // rdi
  PIO_WORKITEM WorkItem; // rax

  v2 = (char *)this + 1000;
  *(struct SmFx::STATE_MACHINE_ENGINE_CONFIG *)((char *)this + 888) = *a2;
  if ( !*((_BYTE *)this + 1008) )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)this + 125);
    v2[8] = 1;
  }
  v5 = 16LL;
  v6 = 2017881427LL;
  if ( *((_BYTE *)this + 953) )
    v5 = *((unsigned __int8 *)this + 953);
  *((_BYTE *)this + 864) = v5;
  v7 = *((_DWORD *)this + 228);
  if ( v7 )
    v6 = v7;
  PoolWithTag = SmFx::Memory::AllocatePoolWithTag(v5, 2LL * (unsigned __int8)v5, v6);
  *((_QWORD *)this + 109) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( *((_BYTE *)this + 952) )
  {
    deviceObject = a2->deviceObject;
    if ( *((_QWORD *)this + 127) )
      return 3221225860LL;
    WorkItem = IoAllocateWorkItem(deviceObject);
    *((_QWORD *)this + 127) = WorkItem;
    if ( !WorkItem )
      return 3221225626LL;
    *((_QWORD *)this + 128) = deviceObject;
    *((_QWORD *)this + 129) = lambda_c276094d149607b901f7fae525da7e78_::_lambda_invoker_cdecl_;
    *((_QWORD *)this + 130) = this;
  }
  SmFx::StateMachineEngine::StateMachineEngineImpl::InitiateFirstRun(this);
  return 0LL;
}
