/*
 * XREFs of RtlpHpEnvTlsSetValue @ 0x1404F2F94
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1406040C0 (RtlpHpLfhPrivateSlotCreate.c)
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
