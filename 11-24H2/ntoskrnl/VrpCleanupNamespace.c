/*
 * XREFs of VrpCleanupNamespace @ 0x14092CC18
 * Callers:
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140A5BD80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpJobContextDelete @ 0x140A9B900 (VrpJobContextDelete.c)
 * Callees:
 *     VrpDestroyNamespaceNodeList @ 0x14092B320 (VrpDestroyNamespaceNodeList.c)
 *     VrpUnloadDifferencingHive @ 0x14092CC8C (VrpUnloadDifferencingHive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall VrpCleanupNamespace(__int64 a1)
{
  _WORD *v2; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 84) = 1;
  VrpDestroyNamespaceNodeList(a1);
  while ( 1 )
  {
    v2 = *(_WORD **)(a1 + 24);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)v2;
    v3[0] = 0LL;
    v3[1] = v2 + 5;
    WORD1(v3[0]) = v2[4];
    LOWORD(v3[0]) = WORD1(v3[0]);
    VrpUnloadDifferencingHive(v3);
    ExFreePoolWithTag(v2, 0x67655256u);
  }
}
