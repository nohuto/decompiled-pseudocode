/*
 * XREFs of RtlpHpEnvTlsSetValue @ 0x1404F5694
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402B7624 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140606A80 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpEnvTlsSetValue(unsigned int a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r9d
  unsigned int v4; // ecx

  v2 = (a1 >> 4) & 0x1FF;
  v3 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v4, v3);
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v4 - 2) + 8LL * (v3 ^ (1 << v4)) + 8) + 8 * v2) = a2;
  return 0LL;
}
