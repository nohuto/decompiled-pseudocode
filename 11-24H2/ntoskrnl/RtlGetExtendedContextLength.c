/*
 * XREFs of RtlGetExtendedContextLength @ 0x1403E72F0
 * Callers:
 *     RtlUnwindEx @ 0x14027CD20 (RtlUnwindEx.c)
 *     KyRaiseException @ 0x1403E65D0 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403E6858 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiContinuePreviousModeUser @ 0x1403E6E30 (KiContinuePreviousModeUser.c)
 *     PspSetContextState @ 0x14077C958 (PspSetContextState.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspSetContextThreadInternal @ 0x1408FD220 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1408FD570 (PspGetContextThreadInternal.c)
 *     PspGetSetContextInternal @ 0x1409A4CA0 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags2 @ 0x1405EA8B8 (RtlpValidateContextFlags2.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0;
  v4 = a1;
  result = RtlpValidateContextFlags2(a1, &v6, 0xFFFFF780000003D8uLL);
  if ( (int)result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v3 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    return RtlGetExtendedContextLength2(v4, a2, v3);
  }
  return result;
}
