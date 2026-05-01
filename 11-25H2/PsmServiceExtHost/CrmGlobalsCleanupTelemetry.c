/*
 * XREFs of CrmGlobalsCleanupTelemetry @ 0x18007B660
 * Callers:
 *     CrmGlobalsCleanup @ 0x180078688 (CrmGlobalsCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmGlobalsCleanupTelemetry(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *(_QWORD *)(a1 + 744) )
  {
    v2 = a1 + 448;
    CempLockAcquireExclusive(a1 + 448);
    TpSetTimer(*(_QWORD *)(a1 + 744), 0LL, 0LL, 0LL);
    *(_DWORD *)(v2 + 8) = 0;
    RtlReleaseSRWLockExclusive(v2);
    result = TpWaitForTimer(*(_QWORD *)(a1 + 744), 1LL);
  }
  v4 = *(_QWORD *)(a1 + 584);
  if ( v4 )
  {
    TpSetTimer(v4, 0LL, 0LL, 0LL);
    result = TpWaitForTimer(*(_QWORD *)(a1 + 584), 1LL);
  }
  v5 = *(_QWORD *)(a1 + 744);
  if ( v5 )
    result = TpReleaseTimer(v5);
  v6 = *(_QWORD *)(a1 + 584);
  if ( v6 )
    return TpReleaseTimer(v6);
  return result;
}
