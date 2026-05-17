/*
 * XREFs of RtlReleasePrivilege @ 0x1800F9660
 * Callers:
 *     LdrpMinimalMapModule @ 0x18006D7B0 (LdrpMinimalMapModule.c)
 *     GetProcessIptTrace @ 0x18015E4D8 (GetProcessIptTrace.c)
 *     GetProcessIptTraceSize @ 0x18015E5E4 (GetProcessIptTraceSize.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtAdjustPrivilegesToken @ 0x180163A40 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlReleasePrivilege(HANDLE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  HANDLE v8; // rcx

  if ( ((_DWORD)a1[4] & 3) != 1 )
    NtAdjustPrivilegesToken(*a1, 0LL, a1[2]);
  if ( ((_BYTE)a1[4] & 1) != 0 )
  {
    NtSetInformationThread(-2LL, 5LL, a1 + 1);
    v8 = a1[1];
    if ( v8 )
      NtClose(v8);
  }
  v5 = (__int64)a1[2];
  if ( (HANDLE *)v5 != (HANDLE *)((char *)a1 + 36) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, a4);
  NtClose(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1, v6);
}
