/*
 * XREFs of KiLogUserCetSetContextIpValidationFailureWorker @ 0x140730E60
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x14079D050 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KiLogUserCetSetContextIpValidationFailureWorker(_QWORD *P)
{
  __int64 v1; // rbx
  _OWORD v3[3]; // [rsp+30h] [rbp-48h] BYREF

  v1 = P[5];
  memset(v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)v1, 0, (__int64)v3);
  EtwTimLogUserCetSetContextIpValidationFailure(*((_DWORD *)P + 8), v1, P[6], *((_DWORD *)P + 14), *((_DWORD *)P + 15));
  KiUnstackDetachProcess((__int64)v3, 0LL);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v1 + 488));
  ObfDereferenceObject((PVOID)v1);
  ExFreePoolWithTag(P, 0);
}
