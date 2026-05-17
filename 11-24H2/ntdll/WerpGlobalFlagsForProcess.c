/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x1800020A0
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180002F20 (RtlReportSilentProcessExit.c)
 * Callees:
 *     WerpPathTail @ 0x180002050 (WerpPathTail.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlQueryImageFileKeyOption @ 0x180089B50 (RtlQueryImageFileKeyOption.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  _WORD *v2; // rax
  _WORD *v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int128 v7; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v8; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v9; // [rsp+50h] [rbp-B0h]
  __int128 v10; // [rsp+60h] [rbp-A0h]
  _BYTE ProcessInformation[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v12; // [rsp+78h] [rbp-88h]
  unsigned int v13; // [rsp+2B8h] [rbp+1B8h] BYREF
  HANDLE Handle; // [rsp+2C0h] [rbp+1C0h] BYREF

  *(_QWORD *)&v10 = 0LL;
  DWORD2(v10) = 0;
  Handle = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  memset_thunk_772440563353939046(ProcessInformation, 0, 0x220uLL);
  v13 = 0;
  v7 = 0LL;
  if ( (NtQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)43, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v2 = WerpPathTail(v12);
    v3 = v2;
    if ( v2 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( v2[v4] );
      v5 = 2 * v4 + 202;
      *((_QWORD *)&v7 + 1) = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
      if ( *((_QWORD *)&v7 + 1) )
      {
        WORD1(v7) = v5;
        if ( (int)RtlAppendUnicodeToString(
                    &v7,
                    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && (int)RtlAppendUnicodeToString(&v7, v3) >= 0 )
        {
          LODWORD(v8) = 48;
          *(_QWORD *)&v9 = &v7;
          *((_QWORD *)&v8 + 1) = 0LL;
          DWORD2(v9) = 64;
          v10 = 0LL;
          if ( (int)NtOpenKey(&Handle, 1LL, &v8) >= 0 )
            RtlQueryImageFileKeyOption(Handle, L"GlobalFlag", 4LL, &v13, 4, 0LL, v7);
        }
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( *((_QWORD *)&v7 + 1) )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *((_QWORD *)&v7 + 1));
  return v13;
}
