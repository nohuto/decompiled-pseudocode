/*
 * XREFs of VerifierExAllocatePool @ 0x140B93070
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     ExAllocatePool @ 0x14041AEE0 (ExAllocatePool.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViPtLogPoolTraceWrapper @ 0x140B84104 (ViPtLogPoolTraceWrapper.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B98490 (VfFaultsInjectPoolAllocationFailure.c)
 */

__int64 __fastcall VerifierExAllocatePool(unsigned int PoolType, SIZE_T NumberOfBytes)
{
  __int64 result; // rax
  __int64 v5; // rcx

  if ( (PoolType & 2) == 0
    && ((VfRuleClasses & 0x40000) != 0
     && ViFnAutoFailInject
     && (unsigned __int8)guard_dispatch_icall_no_overrides("ExAllocatePoolWithTagPriority", NumberOfBytes)
     || (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectPoolAllocationFailure(1885434455LL)) )
  {
    ViPtLogPoolTraceWrapper(0LL, 1885434455, NumberOfBytes, 0);
    if ( (PoolType & 0x10) == 0 )
      return 0LL;
LABEL_18:
    RtlRaiseStatus(-1073741670);
  }
  v5 = PoolType & 0xFFFFFFEF;
  if ( (PoolType & 0x10) == 0 )
    v5 = PoolType;
  if ( VfExAllocPoolInternal == (__int64 (__fastcall *)(__int64, __int64))pXdvExAllocatePool[0]
    || !pXdvExAllocatePool[0] )
  {
    result = (__int64)ExAllocatePool((POOL_TYPE)v5, NumberOfBytes);
  }
  else
  {
    LODWORD(v5) = v5 | 0x80;
    result = guard_dispatch_icall_no_overrides(v5, 0LL);
  }
  if ( !result && (PoolType & 0x10) != 0 )
    goto LABEL_18;
  return result;
}
