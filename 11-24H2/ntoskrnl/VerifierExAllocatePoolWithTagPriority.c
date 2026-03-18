/*
 * XREFs of VerifierExAllocatePoolWithTagPriority @ 0x140B916E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x140437960 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViPtLogPoolTraceWrapper @ 0x140B82100 (ViPtLogPoolTraceWrapper.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B96490 (VfFaultsInjectPoolAllocationFailure.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithTagPriority(
        unsigned int PoolType,
        SIZE_T NumberOfBytes,
        __int64 Tag,
        __int64 Priority)
{
  EX_POOL_PRIORITY v4; // r14d
  ULONG v5; // edi
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx

  v4 = (int)Priority;
  v5 = Tag;
  if ( (PoolType & 2) == 0 )
  {
    if ( (VfRuleClasses & 0x40000) != 0
      && ViFnAutoFailInject
      && (unsigned __int8)guard_dispatch_icall_no_overrides(
                            "ExAllocatePoolWithTagPriority",
                            NumberOfBytes,
                            Tag,
                            Priority)
      || (VfRuleClasses & 4) != 0
      && (v8 = v5, LODWORD(v8) = v5 & 0x7FFFFFFF, (unsigned int)VfFaultsInjectPoolAllocationFailure(v8)) )
    {
      ViPtLogPoolTraceWrapper(0LL, v5, NumberOfBytes, 0);
      if ( (PoolType & 0x10) == 0 )
        return 0LL;
LABEL_18:
      RtlRaiseStatus(-1073741670);
    }
  }
  v10 = PoolType & 0xFFFFFFEF;
  if ( (PoolType & 0x10) == 0 )
    v10 = PoolType;
  if ( (char *)VfExAllocPoolInternal == (char *)pXdvExAllocatePoolWithTagPriority || !pXdvExAllocatePoolWithTagPriority )
  {
    result = (__int64)ExAllocatePoolWithTagPriority((POOL_TYPE)v10, NumberOfBytes, v5, v4);
  }
  else
  {
    LODWORD(v10) = v10 | 0x80;
    result = guard_dispatch_icall_no_overrides(v10, 0LL, NumberOfBytes, v5);
  }
  if ( !result && (PoolType & 0x10) != 0 )
    goto LABEL_18;
  return result;
}
