/*
 * XREFs of VerifierIoConnectInterrupt @ 0x140BA1AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     ViCtxAllocateIsrContext @ 0x140BA1E58 (ViCtxAllocateIsrContext.c)
 */

__int64 __fastcall VerifierIoConnectInterrupt(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, __int64 a4)
{
  void *v4; // rbx
  __int64 v6; // r11
  __int64 (__fastcall *v7)(); // rdi
  __int64 IsrContext; // rax
  int v11; // edi

  v4 = 0LL;
  v6 = a3;
  v7 = a2;
  if ( (VfRuleClasses & 0x800) != 0 && ViCtxInitializedIsrStateBlocks )
  {
    IsrContext = ViCtxAllocateIsrContext(a2, a3, 0LL);
    v4 = (void *)IsrContext;
    if ( !IsrContext )
      return 3221225626LL;
    v7 = ViCtxIsr;
    v6 = IsrContext;
  }
  v11 = guard_dispatch_icall_no_overrides(a1, v7, v6, a4);
  if ( v11 < 0 )
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v11;
}
