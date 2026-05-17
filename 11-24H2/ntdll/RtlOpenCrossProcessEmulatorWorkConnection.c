/*
 * XREFs of RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E5F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsCurrentProcess @ 0x1800E60F0 (RtlIsCurrentProcess.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x180162190 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180162470 (ZwReadVirtualMemory.c)
 */

NTSTATUS __fastcall RtlOpenCrossProcessEmulatorWorkConnection(HANDLE ProcessHandle, HANDLE *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  int v7; // [rsp+30h] [rbp-50h]
  __int64 v8; // [rsp+50h] [rbp-30h] BYREF
  __int128 v9; // [rsp+58h] [rbp-28h] BYREF
  __int128 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+78h] [rbp-8h]
  HANDLE Handle; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+40h] BYREF
  __int64 ProcessInformation; // [rsp+C8h] [rbp+48h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  v11 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  result = RtlIsCurrentProcess();
  if ( !(_BYTE)result )
  {
    ProcessInformation = 0LL;
    result = NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &ProcessInformation, 8u, 0LL);
    if ( result >= 0 )
    {
      if ( ProcessInformation )
      {
        result = ZwReadVirtualMemory(ProcessHandle, ProcessInformation + 1160, &v9, 40LL, 0LL);
        if ( result >= 0 && (BYTE4(v9) & 2) != 0 && (_QWORD)v10 )
        {
          v7 = 6;
          Handle = 0LL;
          v13 = 0LL;
          v8 = 0LL;
          result = ZwDuplicateObject(ProcessHandle, v10, -1LL, &Handle, 0, 0, v7);
          if ( result < 0
            || (result = ZwMapViewOfSection(Handle, -1LL, &v13, 0LL, 0LL, 0LL, &v8, 2, 0x100000, 4), result < 0) )
          {
            if ( v13 )
              result = NtUnmapViewOfSection(-1LL);
            if ( Handle )
              return NtClose(Handle);
          }
          else
          {
            *a2 = Handle;
            result = v13;
            *a3 = v13;
          }
        }
      }
    }
  }
  return result;
}
