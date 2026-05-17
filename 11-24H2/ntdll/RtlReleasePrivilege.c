/*
 * XREFs of RtlReleasePrivilege @ 0x1800F7A00
 * Callers:
 *     LdrpMinimalMapModule @ 0x180072F40 (LdrpMinimalMapModule.c)
 *     GetProcessIptTrace @ 0x18015D014 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015D120 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x1801624B0 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlReleasePrivilege(HANDLE *a1)
{
  unsigned __int64 v2; // r8
  HANDLE v4; // rcx

  if ( ((_DWORD)a1[4] & 3) != 1 )
    NtAdjustPrivilegesToken(*a1, 0LL, a1[2]);
  if ( ((_BYTE)a1[4] & 1) != 0 )
  {
    NtSetInformationThread(-2LL, 5LL, a1 + 1);
    v4 = a1[1];
    if ( v4 )
      NtClose(v4);
  }
  v2 = (unsigned __int64)a1[2];
  if ( (HANDLE *)v2 != (HANDLE *)((char *)a1 + 36) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  NtClose(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
}
