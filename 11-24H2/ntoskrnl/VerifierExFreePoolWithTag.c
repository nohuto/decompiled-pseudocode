/*
 * XREFs of VerifierExFreePoolWithTag @ 0x140B93890
 * Callers:
 *     <none>
 * Callees:
 *     VfIsKernelVerificationOn @ 0x1404F89F0 (VfIsKernelVerificationOn.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ExFreePoolSanityChecks @ 0x140BA64B0 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(PVOID P, ULONG Tag)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( VfIsKernelVerificationOn() )
  {
    ExFreePoolWithTag(P, Tag);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)P, retaddr);
    guard_dispatch_icall_no_overrides(P, Tag);
  }
}
