/*
 * XREFs of VerifierExAllocatePool2 @ 0x140B93190
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExpPoolFlagsToPoolType @ 0x140B76080 (ExpPoolFlagsToPoolType.c)
 *     ViPtLogPoolTraceWrapper @ 0x140B84104 (ViPtLogPoolTraceWrapper.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B98490 (VfFaultsInjectPoolAllocationFailure.c)
 */

__int64 __fastcall VerifierExAllocatePool2(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v6; // rdx
  ULONG_PTR v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 result; // rax
  _BYTE v11[4]; // [rsp+50h] [rbp-18h] BYREF
  int v12[3]; // [rsp+54h] [rbp-14h] BYREF
  char v13; // [rsp+88h] [rbp+20h] BYREF

  v12[0] = 0;
  if ( (int)ExpPoolFlagsToPoolType(a1, 0, v12, v11, &v13) < 0 )
    return ExAllocatePool2(v7, a2, a3);
  v8 = v12[0];
  if ( (v12[0] & 2) == 0 )
  {
    if ( (VfRuleClasses & 0x40000) != 0
      && ViFnAutoFailInject
      && (unsigned __int8)guard_dispatch_icall_no_overrides("ExAllocatePoolWithTagPriority", v6)
      || (VfRuleClasses & 4) != 0
      && (v9 = a3, LODWORD(v9) = a3 & 0x7FFFFFFF, (unsigned int)VfFaultsInjectPoolAllocationFailure(v9)) )
    {
      ViPtLogPoolTraceWrapper(0LL, a3, a2, 0);
      if ( (v8 & 0x10) == 0 )
        return 0LL;
LABEL_18:
      RtlRaiseStatus(-1073741670);
    }
  }
  if ( (v8 & 8) != 0 )
    v8 &= ~8u;
  if ( (v8 & 0x10) != 0 )
    v8 &= ~0x10u;
  if ( VfExAllocPoolInternal == (__int64 (__fastcall *)(__int64, __int64))pXdvExAllocatePool2[0]
    || !pXdvExAllocatePool2[0] )
  {
    v7 = a1;
    return ExAllocatePool2(v7, a2, a3);
  }
  result = guard_dispatch_icall_no_overrides(v8 | 0x80u, 0LL);
  if ( !result && (a1 & 0x20) != 0 )
    goto LABEL_18;
  return result;
}
