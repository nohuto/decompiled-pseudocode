/*
 * XREFs of KeSetDisableQuantumProcess @ 0x1403B4014
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x1408E7EF8 (PspApplyJobLimitsToProcess.c)
 * Callees:
 *     KiReleaseProcessLockExclusive @ 0x1403B3B08 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x1403B3B60 (KiAcquireProcessLockExclusive.c)
 */

__int64 __fastcall KeSetDisableQuantumProcess(__int64 a1, int a2)
{
  __int64 v4; // rdx
  signed __int8 v5; // cf
  unsigned int v6; // edi
  volatile signed __int32 *i; // rax
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  KiAcquireProcessLockExclusive(a1, &v9);
  if ( a2 )
    v5 = _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 2u);
  else
    v5 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 136), 2u);
  v6 = v5;
  for ( i = *(volatile signed __int32 **)(a1 + 48);
        i != (volatile signed __int32 *)(a1 + 48);
        i = *(volatile signed __int32 **)i )
  {
    if ( a2 )
      _interlockedbittestandset(i - 160, 8u);
    else
      _interlockedbittestandreset(i - 160, 8u);
  }
  LOBYTE(v4) = v9;
  KiReleaseProcessLockExclusive(a1, v4);
  return v6;
}
