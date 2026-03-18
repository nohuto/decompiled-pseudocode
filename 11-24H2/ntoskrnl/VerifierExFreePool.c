/*
 * XREFs of VerifierExFreePool @ 0x140B91810
 * Callers:
 *     VerifierExFreePoolEx @ 0x140B91870 (VerifierExFreePoolEx.c)
 * Callees:
 *     VfIsKernelVerificationOn @ 0x1404FB110 (VfIsKernelVerificationOn.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     ExFreePoolSanityChecks @ 0x140BA44B0 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePool(PVOID P)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( VfIsKernelVerificationOn() )
  {
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)P, retaddr);
    guard_dispatch_icall_no_overrides(P, v2, v3, v4);
  }
}
