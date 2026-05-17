/*
 * XREFs of LdrpThreadTokenSetImpersonationToken @ 0x18002225C
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180022BB0 (TppWorkpExecuteCallback.c)
 *     LdrpWorkCallback @ 0x1800EAD70 (LdrpWorkCallback.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 */

__int64 __fastcall LdrpThreadTokenSetImpersonationToken(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  v1 = NtSetInformationThread(-2LL, 5LL, &v3);
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrapi.c",
    4473,
    (__int64)"LdrpThreadTokenSetImpersonationToken",
    2,
    "Status: 0x%x\n",
    v1);
  return v1;
}
