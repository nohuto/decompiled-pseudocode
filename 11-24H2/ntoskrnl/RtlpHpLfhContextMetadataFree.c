/*
 * XREFs of RtlpHpLfhContextMetadataFree @ 0x140603E74
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1404977E0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B4424 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x140603ED0 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1406040C0 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140604374 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     RtlpHpLfhContextLockExtension @ 0x140603DC0 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x140603F8C (RtlpHpLfhContextUnlockExtension.c)
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
