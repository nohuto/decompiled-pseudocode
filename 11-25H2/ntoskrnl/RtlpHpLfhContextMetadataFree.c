/*
 * XREFs of RtlpHpLfhContextMetadataFree @ 0x1405FA4F4
 * Callers:
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x1403C83BC (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1404A0110 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404BA624 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x1405FA550 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1405FA740 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1405FAA34 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     RtlpHpLfhContextLockExtension @ 0x1405FA440 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x1405FA60C (RtlpHpLfhContextUnlockExtension.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataFree(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  char v6; // al
  __int64 v7; // rdx

  v3 = a3;
  v4 = a2 + 2;
  if ( a3 != 3 )
    v4 = a2;
  v6 = RtlpHpLfhContextLockExtension(a1);
  v7 = *(_QWORD *)(a1 + 8 * v3 + 136);
  *v4 = v7;
  LOBYTE(v7) = v6;
  *(_QWORD *)(a1 + 8 * v3 + 136) = v4;
  return RtlpHpLfhContextUnlockExtension(a1, v7);
}
