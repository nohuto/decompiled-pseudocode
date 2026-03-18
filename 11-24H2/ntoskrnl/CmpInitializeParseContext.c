/*
 * XREFs of CmpInitializeParseContext @ 0x14092D400
 * Callers:
 *     CmpAllocateParseContext @ 0x1406F509C (CmpAllocateParseContext.c)
 *     CmpCreatePredefined @ 0x1407CA0EC (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x1407CFFA0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D01B0 (NtQueryOpenSubKeysEx.c)
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x1407E6EF4 (CmpDoReOpenTransKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x14097A7E4 (CmKeyBodyRemapToVirtual.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E2450 (CmpStartSiloRegistryNamespace.c)
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall CmpInitializeParseContext(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 100) = 0LL;
  *(_OWORD *)(a1 + 116) = 0LL;
  *(_QWORD *)(a1 + 132) = 0LL;
  *(_DWORD *)(a1 + 140) = 0;
  memset_0((void *)(a1 + 160), 0, 0xE0uLL);
  *(_DWORD *)(a1 + 96) = -1;
  result = a1 + 144;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  *(_OWORD *)(a1 + 384) = 0LL;
  *(_OWORD *)(a1 + 400) = 0LL;
  *(_OWORD *)(a1 + 416) = 0LL;
  *(_OWORD *)(a1 + 432) = 0LL;
  *(_OWORD *)(a1 + 448) = 0LL;
  return result;
}
