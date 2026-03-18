/*
 * XREFs of CmpInitializeParseContext @ 0x140913DE0
 * Callers:
 *     CmpCreatePredefined @ 0x1407BA8EC (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x1407C08A0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407C0AA0 (NtQueryOpenSubKeysEx.c)
 *     CmpAllocateParseContext @ 0x1407C9868 (CmpAllocateParseContext.c)
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x1407D7070 (CmpDoReOpenTransKey.c)
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E3800 (CmpStartSiloRegistryNamespace.c)
 *     CmOpenKey @ 0x140A31750 (CmOpenKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x140AAC100 (CmKeyBodyRemapToVirtual.c)
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
