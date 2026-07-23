/*
 * XREFs of LdrpThreadTokenSetImpersonationToken @ 0x18004EC5C
 * Callers:
 *     TppWorkpExecuteCallback @ 0x18004F5B0 (TppWorkpExecuteCallback.c)
 *     LdrpWorkCallback @ 0x1800E6AB0 (LdrpWorkCallback.c)
 * Callees:
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 */

__int64 __fastcall LdrpThreadTokenSetImpersonationToken(__int64 a1)
{
  unsigned __int32 v1; // ebx
  __int64 ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  ThreadInformation = a1;
  v1 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  LdrpLogInternal(
    "minkernel\\ldr\\ldrapi.c",
    4473,
    (__int64)"LdrpThreadTokenSetImpersonationToken",
    2,
    "Status: 0x%x\n",
    v1);
  return v1;
}
