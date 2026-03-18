/*
 * XREFs of PspDereferenceQuota @ 0x1408E0988
 * Callers:
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     PspAssignProcessQuotaBlock @ 0x140A30EE8 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspDereferenceQuotaBlock @ 0x1408E0160 (PspDereferenceQuotaBlock.c)
 */

void __fastcall PspDereferenceQuota(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 516));
  PspDereferenceQuotaBlock((char *)a1, a2, a3, a4);
}
