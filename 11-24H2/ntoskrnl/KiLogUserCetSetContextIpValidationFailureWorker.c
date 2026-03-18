/*
 * XREFs of KiLogUserCetSetContextIpValidationFailureWorker @ 0x14073CE80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1407AC420 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KiLogUserCetSetContextIpValidationFailureWorker(_QWORD *P)
{
  __int64 v1; // rbx
  _OWORD v3[3]; // [rsp+30h] [rbp-48h] BYREF

  v1 = P[5];
  memset(v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)v1, 0, (__int64)v3);
  EtwTimLogUserCetSetContextIpValidationFailure(*((_DWORD *)P + 8), v1, P[6], *((_DWORD *)P + 14), *((_DWORD *)P + 15));
  KiUnstackDetachProcess((__int64)v3, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v1 + 488));
  ObfDereferenceObject((PVOID)v1);
  ExFreePoolWithTag(P, 0);
}
