/*
 * XREFs of PopPolicyDeviceRemove @ 0x14075AAE4
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x14075AB60 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

LONG_PTR __fastcall PopPolicyDeviceRemove(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LONG_PTR result; // rax
  LONG_PTR *v6; // rcx

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(result + 8) != a1 || (v6 = *(LONG_PTR **)(a1 + 8), *v6 != a1) )
      __fastfail(3u);
    *v6 = result;
    *(_QWORD *)(result + 8) = v6;
    *(_QWORD *)a1 = 0LL;
    guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    IoFreeIrp(*(PIRP *)(a1 + 56));
    return ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x64506F50u);
  }
  return result;
}
