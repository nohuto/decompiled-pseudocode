/*
 * XREFs of SeQueryUserSidToken @ 0x14090A570
 * Callers:
 *     PiDqSameUserHive @ 0x1406FBD90 (PiDqSameUserHive.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14090910C (PopEtGetProcessSidAndPackageIdentity.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140909E2C (ExpWnfQueryCurrentUserSID.c)
 *     CmpGetVirtualizationID @ 0x140909F58 (CmpGetVirtualizationID.c)
 *     PiDqOpenUserObjectRegKey @ 0x14090A064 (PiDqOpenUserObjectRegKey.c)
 *     CmpLogHiveFileInaccessible @ 0x1409305F4 (CmpLogHiveFileInaccessible.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1409AB3F4 (AlpcpPortQueryConnectedSidInfo.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A326F0 (MiFindProcessImageHotPatchRecord.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall SeQueryUserSidToken(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // r14d
  unsigned __int8 *v10; // rdx
  unsigned int v11; // esi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v9 = -1073741789;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v10 = **(unsigned __int8 ***)(a1 + 152);
  v11 = 4 * v10[1] + 8;
  if ( a3 >= v11 )
  {
    memmove(a2, v10, v11);
    v9 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread();
  result = v9;
  if ( a4 )
    *a4 = v11;
  return result;
}
