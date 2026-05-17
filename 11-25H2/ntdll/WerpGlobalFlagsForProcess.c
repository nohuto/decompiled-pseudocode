/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x1800CFC84
 * Callers:
 *     RtlReportSilentProcessExit @ 0x1800CF190 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     WerpPathTail @ 0x1800CFE50 (WerpPathTail.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  __int64 v2; // r9
  __int64 v3; // rax
  const wchar_t *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int128 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v10; // [rsp+50h] [rbp-B0h]
  __int128 v11; // [rsp+60h] [rbp-A0h]
  _BYTE ProcessInformation[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v13; // [rsp+78h] [rbp-88h]
  unsigned int v14; // [rsp+2B8h] [rbp+1B8h] BYREF
  HANDLE Handle; // [rsp+2C0h] [rbp+1C0h] BYREF

  *(_QWORD *)&v11 = 0LL;
  DWORD2(v11) = 0;
  Handle = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset_thunk_772440563353939046(ProcessInformation, 0, 0x220uLL);
  v14 = 0;
  v8 = 0LL;
  if ( (NtQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)43, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = WerpPathTail(v13);
    v4 = (const wchar_t *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(v3 + 2 * v5) );
      v6 = 2 * v5 + 202;
      *((_QWORD *)&v8 + 1) = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v6);
      if ( *((_QWORD *)&v8 + 1) )
      {
        WORD1(v8) = v6;
        if ( (int)RtlAppendUnicodeToString(
                    (unsigned __int16 *)&v8,
                    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && (int)RtlAppendUnicodeToString((unsigned __int16 *)&v8, v4) >= 0 )
        {
          LODWORD(v9) = 48;
          *(_QWORD *)&v10 = &v8;
          *((_QWORD *)&v9 + 1) = 0LL;
          DWORD2(v10) = 64;
          v11 = 0LL;
          if ( (int)NtOpenKey(&Handle, 1LL, &v9) >= 0 )
            RtlQueryImageFileKeyOption((__int64)Handle, L"GlobalFlag", 4, (int *)&v14, 4u, 0LL);
        }
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( *((_QWORD *)&v8 + 1) )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((__int64 *)&v8 + 1), v2);
  return v14;
}
