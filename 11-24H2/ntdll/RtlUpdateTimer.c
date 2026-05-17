/*
 * XREFs of RtlUpdateTimer @ 0x18006A310
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     RtlpTpRevertCapture @ 0x18006CFA0 (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x18006E478 (RtlpTpResumeImpersonation.c)
 */

__int64 __fastcall RtlUpdateTimer(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  volatile signed __int32 **v7; // rdx
  int v8; // edi
  unsigned __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a3;
  v11 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
    return 3221225480LL;
  v8 = RtlpTpRevertCapture(&v11, 0LL);
  if ( v8 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 80), v7, v9);
    if ( *(_BYTE *)(a2 + 88) || !*(_DWORD *)(a2 + 92) )
    {
      *(_BYTE *)(a2 + 88) = a4 != 0;
      v12[0] = -10000 * v5;
      TpSetTimerEx(*(_QWORD *)(a2 + 64), v12, a4, 0LL);
    }
    v8 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 80));
  }
  RtlpTpResumeImpersonation(v11);
  return (unsigned int)v8;
}
