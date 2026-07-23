/*
 * XREFs of PpmHeteroInitializeAmdWpsSupport @ 0x140C3611C
 * Callers:
 *     PoInitHeteroDetection @ 0x140C2F1BC (PoInitHeteroDetection.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PoGetWorkloadClassCount @ 0x140B61E88 (PoGetWorkloadClassCount.c)
 */

__int64 PpmHeteroInitializeAmdWpsSupport()
{
  int v0; // r8d
  char v1; // di
  unsigned int v12; // r11d

  v0 = 0;
  v1 = 1;
  while ( 1 )
  {
    _RAX = 2147483686LL;
    __asm { cpuid }
    if ( !(_WORD)_RBX )
      return (unsigned int)-1073741637;
    if ( (_RCX & 0xFF00) == 0x100 )
      break;
    ++v0;
  }
  if ( (_RAX & 0x40000000) == 0 )
    return (unsigned int)-1073741637;
  _RAX = 2147483681LL;
  __asm { cpuid }
  if ( (_RAX & 0x400000) == 0 )
    return (unsigned int)-1073741637;
  PpmHeteroHgsCapabilityBits = 2;
  PpmHeteroRegisterWpsUpdates = (__int64)PpmHeteroRegisterWpsUpdatesAmd;
  PpmHeteroHgsDynamicUpdateEnabled = 0;
  PpmHeteroHgsUpdateDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PpmHeteroHgsUpdateDpcRoutine;
  PpmHeteroHgsUpdateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmHeteroHgsUpdateWorker;
  PpmHeteroHgsDynamicUpdateReasonEnabled = 0;
  PpmHeteroHgsParkingHintEnabled = 0;
  PpmHeteroHgsEnabled = 1;
  PpmHeteroHgsVendor = 1;
  PpmHeteroHgsUpdateDpc.TargetInfoAsUlong = 787;
  PpmHeteroHgsUpdateDpc.DeferredContext = 0LL;
  PpmHeteroHgsUpdateDpc.DpcData = 0LL;
  PpmHeteroHgsUpdateDpc.ProcessorHistory = 0LL;
  PpmHeteroHgsUpdateWorkItem.Parameter = 0LL;
  PpmHeteroHgsUpdateWorkItem.List.Flink = 0LL;
  if ( PoGetWorkloadClassCount(&PpmHeteroWorkloadClasses) )
  {
    KiHgsPlusEnabled = 1;
  }
  else
  {
    PpmHeteroWorkloadClasses = 1;
    v1 = v12;
  }
  PpmHeteroHgsThreadEnabled = v1;
  return v12;
}
