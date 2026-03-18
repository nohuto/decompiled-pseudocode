/*
 * XREFs of VerifierIoDisconnectInterruptEx @ 0x140BA1D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall VerifierIoDisconnectInterruptEx(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  int v6; // ecx
  __int64 v7; // rcx

  v4 = 0LL;
  v6 = *a1;
  if ( (VfRuleClasses & 0x800) == 0 || !ViCtxInitializedIsrStateBlocks )
    goto LABEL_9;
  if ( (unsigned int)(v6 - 1) <= 1 )
  {
    v7 = *((_QWORD *)a1 + 1);
  }
  else
  {
    if ( v6 != 3 )
      goto LABEL_9;
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL);
  }
  if ( v7 )
    v4 = *(void **)(v7 + 48);
LABEL_9:
  guard_dispatch_icall_no_overrides(a1, a1, a3, a4);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
