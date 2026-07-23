/*
 * XREFs of RtlOpenCrossProcessEmulatorWorkConnection @ 0x1800E4F50
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsCurrentProcess @ 0x1800E50C0 (RtlIsCurrentProcess.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 */

char __fastcall RtlOpenCrossProcessEmulatorWorkConnection(HANDLE ProcessHandle, HANDLE *a2, PVOID *a3)
{
  NTSTATUS v6; // eax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-30h] BYREF
  __int128 Buffer; // [rsp+58h] [rbp-28h] BYREF
  HANDLE SourceHandle[2]; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+78h] [rbp-8h]
  HANDLE TargetHandle; // [rsp+B8h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+C0h] [rbp+40h] BYREF
  __int64 ProcessInformation; // [rsp+C8h] [rbp+48h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  v11 = 0LL;
  Buffer = 0LL;
  *(_OWORD *)SourceHandle = 0LL;
  LOBYTE(v6) = RtlIsCurrentProcess(ProcessHandle);
  if ( !(_BYTE)v6 )
  {
    ProcessInformation = 0LL;
    v6 = NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &ProcessInformation, 8u, 0LL);
    if ( v6 >= 0 )
    {
      if ( ProcessInformation )
      {
        v6 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(ProcessInformation + 1160), &Buffer, 0x28uLL, 0LL);
        if ( v6 >= 0 && (BYTE4(Buffer) & 2) != 0 && SourceHandle[0] )
        {
          TargetHandle = 0LL;
          BaseAddress = 0LL;
          ViewSize = 0LL;
          v6 = ZwDuplicateObject(ProcessHandle, SourceHandle[0], (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 6u);
          if ( v6 < 0
            || (v6 = ZwMapViewOfSection(
                       TargetHandle,
                       (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                       &BaseAddress,
                       0LL,
                       0LL,
                       0LL,
                       &ViewSize,
                       ViewUnmap,
                       0x100000u,
                       4u),
                v6 < 0) )
          {
            if ( BaseAddress )
              LOBYTE(v6) = NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            if ( TargetHandle )
              LOBYTE(v6) = NtClose(TargetHandle);
          }
          else
          {
            *a2 = TargetHandle;
            LOBYTE(v6) = (_BYTE)BaseAddress;
            *a3 = BaseAddress;
          }
        }
      }
    }
  }
  return v6;
}
