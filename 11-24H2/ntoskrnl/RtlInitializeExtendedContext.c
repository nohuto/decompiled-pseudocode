/*
 * XREFs of RtlInitializeExtendedContext @ 0x1403D4E10
 * Callers:
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 *     KyRaiseException @ 0x1403D4170 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D43F8 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiContinuePreviousModeUser @ 0x1403D49D0 (KiContinuePreviousModeUser.c)
 *     PspSetContextState @ 0x14077C808 (PspSetContextState.c)
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags2 @ 0x1405E7E08 (RtlpValidateContextFlags2.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT_EX *ContextEx)
{
  ULONG64 v6; // rbx
  NTSTATUS result; // eax
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v8 = 0;
  result = RtlpValidateContextFlags2(ContextFlags, &v8, 0xFFFFF780000003D8uLL);
  if ( result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v6 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlInitializeExtendedContext2(Context, ContextFlags, ContextEx, v6);
  }
  return result;
}
