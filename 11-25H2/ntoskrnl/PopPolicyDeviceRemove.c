/*
 * XREFs of PopPolicyDeviceRemove @ 0x14074E514
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x14074E590 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

LONG_PTR __fastcall PopPolicyDeviceRemove(__int64 a1)
{
  LONG_PTR result; // rax
  LONG_PTR *v3; // rcx

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(result + 8) != a1 || (v3 = *(LONG_PTR **)(a1 + 8), *v3 != a1) )
      __fastfail(3u);
    *v3 = result;
    *(_QWORD *)(result + 8) = v3;
    *(_QWORD *)a1 = 0LL;
    guard_dispatch_icall_no_overrides(a1);
    IoFreeIrp(*(PIRP *)(a1 + 56));
    return ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x64506F50u);
  }
  return result;
}
