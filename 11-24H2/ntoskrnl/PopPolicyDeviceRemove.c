/*
 * XREFs of PopPolicyDeviceRemove @ 0x1407591D4
 * Callers:
 *     PopPolicyDeviceTargetChange @ 0x140759250 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

LONG_PTR __fastcall PopPolicyDeviceRemove(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax
  LONG_PTR *v4; // rcx

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(result + 8) != a1 || (v4 = *(LONG_PTR **)(a1 + 8), *v4 != a1) )
      __fastfail(3u);
    *v4 = result;
    *(_QWORD *)(result + 8) = v4;
    *(_QWORD *)a1 = 0LL;
    guard_dispatch_icall_no_overrides(a1, a2);
    IoFreeIrp(*(PIRP *)(a1 + 56));
    return ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x64506F50u);
  }
  return result;
}
