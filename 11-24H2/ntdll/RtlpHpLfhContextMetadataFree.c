/*
 * XREFs of RtlpHpLfhContextMetadataFree @ 0x1800D660C
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180060ADC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x180060FB8 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x1800D5FC0 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1800D6160 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x1800D6668 (RtlpHpLfhContextPrivateHeatMapCreate.c)
 * Callees:
 *     RtlpHpLfhContextLockExtension @ 0x1800D6800 (RtlpHpLfhContextLockExtension.c)
 */

void __fastcall RtlpHpLfhContextMetadataFree(_RTL_SRWLOCK *a1, unsigned __int64 *a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 *v4; // rbx

  v3 = a3;
  v4 = a2 + 2;
  if ( a3 != 3 )
    v4 = a2;
  RtlpHpLfhContextLockExtension(a1);
  *v4 = a1[v3 + 17].Value;
  a1[v3 + 17].Value = (unsigned __int64)v4;
  RtlReleaseSRWLockExclusive(a1 + 16);
}
