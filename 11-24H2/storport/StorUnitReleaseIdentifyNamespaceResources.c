/*
 * XREFs of StorUnitReleaseIdentifyNamespaceResources @ 0x14003D2B0
 * Callers:
 *     StorAdapterNVMeEnumerateZNS @ 0x1401B8B44 (StorAdapterNVMeEnumerateZNS.c)
 *     StorAdapterNVMeInitializeEnumUnitIdentifyInfo @ 0x1401B92F0 (StorAdapterNVMeInitializeEnumUnitIdentifyInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall StorUnitReleaseIdentifyNamespaceResources(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 3552);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x494E6152u);
    *(_QWORD *)(a1 + 3552) = 0LL;
  }
  v3 = *(void **)(a1 + 3560);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x494E6152u);
    *(_QWORD *)(a1 + 3560) = 0LL;
  }
}
