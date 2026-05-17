/*
 * XREFs of RtlpTpInitializeData @ 0x18003D1C0
 * Callers:
 *     RtlCreateTimer @ 0x18003B9A0 (RtlCreateTimer.c)
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 * Callees:
 *     TpSetDefaultPoolMaxThreads @ 0x180111770 (TpSetDefaultPoolMaxThreads.c)
 *     NtDuplicateToken @ 0x180163A60 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlpTpInitializeData(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int16 v5; // bx
  int v7; // eax

  v3 = 0;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = 0LL;
  v5 = a2;
  if ( (a2 & 0xFFFF0000) != 0 )
    TpSetDefaultPoolMaxThreads(HIWORD(a2));
  if ( !a3 || (v5 & 0x100) == 0 )
    return 0LL;
  v7 = NtDuplicateToken(a3, 4LL, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  return v3;
}
