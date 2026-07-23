/*
 * XREFs of VerifierIoDisconnectInterruptEx @ 0x140BA3D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall VerifierIoDisconnectInterruptEx(int *a1)
{
  void *v1; // rbx
  int v3; // ecx
  __int64 v4; // rcx

  v1 = 0LL;
  v3 = *a1;
  if ( (VfRuleClasses & 0x800) == 0 || !ViCtxInitializedIsrStateBlocks )
    goto LABEL_9;
  if ( (unsigned int)(v3 - 1) <= 1 )
  {
    v4 = *((_QWORD *)a1 + 1);
  }
  else
  {
    if ( v3 != 3 )
      goto LABEL_9;
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL);
  }
  if ( v4 )
    v1 = *(void **)(v4 + 48);
LABEL_9:
  guard_dispatch_icall_no_overrides(a1, a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
