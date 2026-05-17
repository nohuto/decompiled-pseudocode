/*
 * XREFs of LdrpThreadTokenSetImpersonationToken @ 0x18006FA38
 * Callers:
 *     LdrpWorkCallback @ 0x18006F910 (LdrpWorkCallback.c)
 *     TppWorkpExecuteCallback @ 0x18007CF90 (TppWorkpExecuteCallback.c)
 * Callees:
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 */

__int64 __fastcall LdrpThreadTokenSetImpersonationToken(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  v1 = NtSetInformationThread(-2LL, 5LL, &v3);
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrapi.c",
    4473,
    (int)"LdrpThreadTokenSetImpersonationToken",
    2,
    "Status: 0x%x\n",
    v1);
  return v1;
}
