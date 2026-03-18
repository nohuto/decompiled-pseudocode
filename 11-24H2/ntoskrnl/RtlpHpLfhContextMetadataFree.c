/*
 * XREFs of RtlpHpLfhContextMetadataFree @ 0x140606834
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x14049CB38 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B9584 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x140606890 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140606A80 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140606D74 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     RtlpHpLfhContextLockExtension @ 0x140606780 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x14060694C (RtlpHpLfhContextUnlockExtension.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataFree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  char v6; // al
  __int64 v7; // rdx

  v3 = (int)a3;
  v4 = (_QWORD *)(a2 + 16);
  if ( (_DWORD)a3 != 3 )
    v4 = (_QWORD *)a2;
  v6 = RtlpHpLfhContextLockExtension(a1, a2, a3);
  v7 = *(_QWORD *)(a1 + 8 * v3 + 136);
  *v4 = v7;
  LOBYTE(v7) = v6;
  *(_QWORD *)(a1 + 8 * v3 + 136) = v4;
  return RtlpHpLfhContextUnlockExtension(a1, v7);
}
