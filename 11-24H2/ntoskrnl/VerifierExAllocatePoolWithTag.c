/*
 * XREFs of VerifierExAllocatePoolWithTag @ 0x140B915C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 *     ViPtLogPoolTraceWrapper @ 0x140B82100 (ViPtLogPoolTraceWrapper.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B96490 (VfFaultsInjectPoolAllocationFailure.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithTag(unsigned int PoolType, SIZE_T NumberOfBytes, __int64 Tag, __int64 a4)
{
  ULONG v4; // edi
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx

  v4 = Tag;
  if ( (PoolType & 2) == 0 )
  {
    if ( (VfRuleClasses & 0x40000) != 0
      && ViFnAutoFailInject
      && (unsigned __int8)guard_dispatch_icall_no_overrides("ExAllocatePoolWithTagPriority", NumberOfBytes, Tag, a4)
      || (VfRuleClasses & 4) != 0
      && (v7 = v4, LODWORD(v7) = v4 & 0x7FFFFFFF, (unsigned int)VfFaultsInjectPoolAllocationFailure(v7)) )
    {
      ViPtLogPoolTraceWrapper(0LL, v4, NumberOfBytes, 0);
      if ( (PoolType & 0x10) == 0 )
        return 0LL;
LABEL_18:
      RtlRaiseStatus(-1073741670);
    }
  }
  v9 = PoolType & 0xFFFFFFEF;
  if ( (PoolType & 0x10) == 0 )
    v9 = PoolType;
  if ( VfExAllocPoolInternal == (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))pXdvExAllocatePoolWithTag[0]
    || !pXdvExAllocatePoolWithTag[0] )
  {
    result = (__int64)ExAllocatePoolWithTag((POOL_TYPE)v9, NumberOfBytes, v4);
  }
  else
  {
    LODWORD(v9) = v9 | 0x80;
    result = guard_dispatch_icall_no_overrides(v9, 0LL, NumberOfBytes, v4);
  }
  if ( !result && (PoolType & 0x10) != 0 )
    goto LABEL_18;
  return result;
}
