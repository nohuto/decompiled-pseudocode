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

void __fastcall RtlpHpLfhContextMetadataFree(_RTL_SRWLOCK *a1, unsigned __int64 *a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 *v4; // rbx

  v3 = a3;
  v4 = a2 + 2;
  if ( a3 != 3 )
    v4 = a2;
  RtlpHpLfhContextLockExtension();
  *v4 = a1[v3 + 17].Value;
  a1[v3 + 17].Value = (unsigned __int64)v4;
  RtlReleaseSRWLockExclusive(a1 + 16);
}
