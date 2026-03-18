/*
 * XREFs of RtlInitializeExtendedContext @ 0x140262930
 * Callers:
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1402626C8 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KyRaiseException @ 0x140263BB0 (KyRaiseException.c)
 *     PspSetContextState @ 0x14076D62C (PspSetContextState.c)
 *     PspSetContextThreadInternal @ 0x1409095F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, int a2, _QWORD *a3)
{
  char v4; // r11
  __int64 v5; // r10
  bool v6; // cl

  if ( (a2 & 0x27FFFF80) != 0x10000
    && (a2 & 0x7FFFF20) != 0x100000
    && ((a2 & 0x200000) == 0 || (a2 & 0x7DFFFF0) != 0)
    && (a2 & 0x7FFFFC0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v4 = 1;
  v5 = 0LL;
  v6 = 0;
  if ( (a2 & 0x400020) != 0x400020 )
    v6 = (a2 & 0x10040) != 65600 && (a2 & 0x100040) != 1048640;
  if ( !v6 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v4 = 3;
  }
  if ( !(_BYTE)KiKernelCetEnabled && (a2 & 0x100080) == 0x100080 )
    return 3221225659LL;
  if ( (v4 & 2) != 0 )
    v5 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
  return RtlInitializeExtendedContext2(a1, a2, a3, v5);
}
