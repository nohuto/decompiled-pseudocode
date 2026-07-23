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

void __cdecl RtlReleasePrivilege(PVOID StatePointer)
{
  char *v2; // r8
  void *v3; // rcx

  if ( (*((_DWORD *)StatePointer + 8) & 3) != 1 )
    NtAdjustPrivilegesToken(*(HANDLE *)StatePointer, 0, *((PTOKEN_PRIVILEGES *)StatePointer + 2), 0, 0LL, 0LL);
  if ( (*((_BYTE *)StatePointer + 32) & 1) != 0 )
  {
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, (char *)StatePointer + 8, 8u);
    v3 = (void *)*((_QWORD *)StatePointer + 1);
    if ( v3 )
      NtClose(v3);
  }
  v2 = (char *)*((_QWORD *)StatePointer + 2);
  if ( v2 != (char *)StatePointer + 36 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  NtClose(*(HANDLE *)StatePointer);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, StatePointer);
}
