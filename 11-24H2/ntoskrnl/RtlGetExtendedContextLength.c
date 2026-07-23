/*
 * XREFs of RtlGetExtendedContextLength @ 0x1403D4E90
 * Callers:
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 *     KyRaiseException @ 0x1403D4170 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D43F8 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiContinuePreviousModeUser @ 0x1403D49D0 (KiContinuePreviousModeUser.c)
 *     PspSetContextState @ 0x14077C808 (PspSetContextState.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 *     PspGetSetContextInternal @ 0x1409882C0 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags2 @ 0x1405E7E08 (RtlpValidateContextFlags2.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  ULONG64 v3; // rbx
  NTSTATUS result; // eax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0;
  result = RtlpValidateContextFlags2(ContextFlags, &v6, 0xFFFFF780000003D8uLL);
  if ( result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v3 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlGetExtendedContextLength2(ContextFlags, ContextLength, v3);
  }
  return result;
}
