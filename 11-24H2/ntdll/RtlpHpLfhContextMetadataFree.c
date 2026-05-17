/*
 * XREFs of RtlpHpLfhContextMetadataFree @ 0x1800A4C98
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18004AEFC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x18004B3D8 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x1800A4410 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1800A4664 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x1800A4CF4 (RtlpHpLfhContextPrivateHeatMapCreate.c)
 * Callees:
 *     RtlpHpLfhContextLockExtension @ 0x1800A4E8C (RtlpHpLfhContextLockExtension.c)
 */

__int64 __fastcall RtlpHpLfhContextMetadataFree(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx

  v3 = a3;
  v4 = a2 + 2;
  if ( a3 != 3 )
    v4 = a2;
  RtlpHpLfhContextLockExtension(a1);
  *v4 = *(_QWORD *)(a1 + 8 * v3 + 136);
  *(_QWORD *)(a1 + 8 * v3 + 136) = v4;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 128));
}
