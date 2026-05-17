/*
 * XREFs of RtlUpdateTimer @ 0x1800FBA30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpRevertCapture @ 0x18003B900 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18003C978 (RtlpTpResumeImpersonation.c)
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 */

__int64 __fastcall RtlUpdateTimer(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  int v7; // edi
  HANDLE v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a3;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
    return 3221225480LL;
  v7 = RtlpTpRevertCapture(&v9, 0);
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 80));
    if ( *(_BYTE *)(a2 + 88) || !*(_DWORD *)(a2 + 92) )
    {
      *(_BYTE *)(a2 + 88) = a4 != 0;
      v10[0] = -10000 * v5;
      TpSetTimerEx(*(_PEB_LDR_DATA **)(a2 + 64), (__int64)v10, a4, 0);
    }
    v7 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  RtlpTpResumeImpersonation(v9);
  return (unsigned int)v7;
}
