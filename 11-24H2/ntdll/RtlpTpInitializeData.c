/*
 * XREFs of RtlpTpInitializeData @ 0x18008B5A0
 * Callers:
 *     RtlCreateTimer @ 0x180089920 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 * Callees:
 *     TpSetDefaultPoolMaxThreads @ 0x1800E9040 (TpSetDefaultPoolMaxThreads.c)
 *     NtDuplicateToken @ 0x180160890 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlpTpInitializeData(HANDLE *NewTokenHandle, unsigned int a2, void *a3)
{
  unsigned int v3; // ebp
  __int16 v5; // bx
  NTSTATUS v8; // eax

  v3 = 0;
  *((_DWORD *)NewTokenHandle + 2) = a2;
  *NewTokenHandle = 0LL;
  v5 = a2;
  if ( (a2 & 0xFFFF0000) != 0 )
    TpSetDefaultPoolMaxThreads(HIWORD(a2));
  if ( !a3 || (v5 & 0x100) == 0 )
    return 0LL;
  v8 = NtDuplicateToken(a3, 4u, 0LL, 0, TokenImpersonation, NewTokenHandle);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
