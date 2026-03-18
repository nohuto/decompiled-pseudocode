/*
 * XREFs of VerifierExAllocatePool2 @ 0x140B91190
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExpPoolFlagsToPoolType @ 0x140B744E0 (ExpPoolFlagsToPoolType.c)
 *     ViPtLogPoolTraceWrapper @ 0x140B82100 (ViPtLogPoolTraceWrapper.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B96490 (VfFaultsInjectPoolAllocationFailure.c)
 */

__int64 __fastcall VerifierExAllocatePool2(__int64 BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  __int64 v6; // rdx
  ULONG_PTR v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rcx
  __int64 result; // rax
  _BYTE v13[4]; // [rsp+50h] [rbp-18h] BYREF
  int v14[3]; // [rsp+54h] [rbp-14h] BYREF
  char v15; // [rsp+88h] [rbp+20h] BYREF

  v14[0] = 0;
  if ( (int)ExpPoolFlagsToPoolType(BugCheckParameter3, 0, v14, v13, &v15) < 0 )
    return ExAllocatePool2(v7, a2, a3);
  v10 = v14[0];
  if ( (v14[0] & 2) == 0 )
  {
    if ( (VfRuleClasses & 0x40000) != 0
      && ViFnAutoFailInject
      && (unsigned __int8)guard_dispatch_icall_no_overrides("ExAllocatePoolWithTagPriority", v6, v8, v9)
      || (VfRuleClasses & 4) != 0
      && (v11 = a3, LODWORD(v11) = a3 & 0x7FFFFFFF, (unsigned int)VfFaultsInjectPoolAllocationFailure(v11)) )
    {
      ViPtLogPoolTraceWrapper(0LL, a3, a2, 0);
      if ( (v10 & 0x10) == 0 )
        return 0LL;
LABEL_18:
      RtlRaiseStatus(-1073741670);
    }
  }
  if ( (v10 & 8) != 0 )
    v10 &= ~8u;
  if ( (v10 & 0x10) != 0 )
    v10 &= ~0x10u;
  if ( (char *)VfExAllocPoolInternal == (char *)pXdvExAllocatePool2 || !pXdvExAllocatePool2 )
  {
    v7 = BugCheckParameter3;
    return ExAllocatePool2(v7, a2, a3);
  }
  result = guard_dispatch_icall_no_overrides(v10 | 0x80u, 0LL, a2, a3);
  if ( !result && (BugCheckParameter3 & 0x20) != 0 )
    goto LABEL_18;
  return result;
}
