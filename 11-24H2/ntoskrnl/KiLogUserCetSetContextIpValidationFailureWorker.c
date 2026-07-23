/*
 * XREFs of KiLogUserCetSetContextIpValidationFailureWorker @ 0x14073ADB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1407AC8F0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KiLogUserCetSetContextIpValidationFailureWorker(_QWORD *P)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  _OWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF

  v1 = P[5];
  memset(v5, 0, sizeof(v5));
  KiStackAttachProcess((_KPROCESS *)v1, 0, (__int64)v5);
  EtwTimLogUserCetSetContextIpValidationFailure(*((_DWORD *)P + 8), v1, P[6], *((_DWORD *)P + 14), *((_DWORD *)P + 15));
  KiUnstackDetachProcess((__int64)v5, 0, v3, v4);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v1 + 488));
  ObfDereferenceObject((PVOID)v1);
  ExFreePoolWithTag(P, 0);
}
