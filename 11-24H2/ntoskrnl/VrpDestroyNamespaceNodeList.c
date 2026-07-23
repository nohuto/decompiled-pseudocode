/*
 * XREFs of VrpDestroyNamespaceNodeList @ 0x14092B320
 * Callers:
 *     VrpCleanupNamespace @ 0x14092CC18 (VrpCleanupNamespace.c)
 * Callees:
 *     VrpDestroyNamespaceNode @ 0x14092B1C0 (VrpDestroyNamespaceNode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDestroyNamespaceNodeList(__int64 a1)
{
  __int64 i; // rax
  __int64 *v3; // rdx
  void *v4; // rcx

  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(a1 + 48) )
  {
    if ( is_mul_ok(*(_QWORD *)(a1 + 40), 0LL) )
      v3 = *(__int64 **)(a1 + 72);
    else
      v3 = 0LL;
    VrpDestroyNamespaceNode((size_t *)a1, *v3);
  }
  v4 = *(void **)(a1 + 72);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72615452u);
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
}
