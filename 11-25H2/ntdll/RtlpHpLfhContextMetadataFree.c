/*
 * XREFs of RtlpHpLfhContextMetadataFree @ 0x180009A2C
 * Callers:
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x180009B7C (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1800334C4 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800B8200 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x1800FCC00 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180114104 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpHpLfhContextLockExtension @ 0x180009A88 (RtlpHpLfhContextLockExtension.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataFree(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx

  v3 = a3;
  v4 = a2 + 2;
  if ( a3 != 3 )
    v4 = a2;
  RtlpHpLfhContextLockExtension();
  *v4 = *(_QWORD *)(a1 + 8 * v3 + 136);
  *(_QWORD *)(a1 + 8 * v3 + 136) = v4;
  return RtlReleaseSRWLockExclusive(a1 + 128);
}
