/*
 * XREFs of VerifierExFreePoolWithTag @ 0x140B91890
 * Callers:
 *     <none>
 * Callees:
 *     VfIsKernelVerificationOn @ 0x1404FB110 (VfIsKernelVerificationOn.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     ExFreePoolSanityChecks @ 0x140BA44B0 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(PVOID P, ULONG Tag)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( VfIsKernelVerificationOn() )
  {
    ExFreePoolWithTag(P, Tag);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)P, retaddr);
    guard_dispatch_icall_no_overrides(P, Tag, v4, v5);
  }
}
