/*
 * XREFs of RtlInitializeExtendedContext @ 0x1403E7270
 * Callers:
 *     RtlUnwindEx @ 0x14027CD20 (RtlUnwindEx.c)
 *     KyRaiseException @ 0x1403E65D0 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403E6858 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiContinuePreviousModeUser @ 0x1403E6E30 (KiContinuePreviousModeUser.c)
 *     PspSetContextState @ 0x14077C958 (PspSetContextState.c)
 *     PspSetContextThreadInternal @ 0x1408FD220 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1408FD570 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags2 @ 0x1405EA8B8 (RtlpValidateContextFlags2.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v8 = 0;
  result = RtlpValidateContextFlags2(a2, &v8, 0xFFFFF780000003D8uLL);
  if ( (int)result >= 0 )
  {
    if ( (v8 & 2) != 0 )
      v6 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlInitializeExtendedContext2(a1, a2, a3, v6);
  }
  return result;
}
