/*
 * XREFs of RtlpQueryCriticalSectionOwner32 @ 0x180135880
 * Callers:
 *     RtlpQueryCriticalSectionOwner @ 0x180099C74 (RtlpQueryCriticalSectionOwner.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpQueryCriticalSectionOwner32(HANDLE ProcessHandle, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int128 Buffer; // [rsp+48h] [rbp-30h] BYREF
  __int128 v9; // [rsp+58h] [rbp-20h]

  v2 = a2 - 4;
  *(_OWORD *)BaseAddress = 0LL;
  v3 = 0;
  v7 = 0LL;
  Buffer = 0LL;
  v9 = 0LL;
  if ( ZwReadVirtualMemory(ProcessHandle, (PVOID)(unsigned int)(a2 - 4), BaseAddress, 0x18uLL, 0LL) >= 0
    && LODWORD(BaseAddress[0])
    && ZwReadVirtualMemory(ProcessHandle, (PVOID)LODWORD(BaseAddress[0]), &Buffer, 0x20uLL, 0LL) >= 0
    && DWORD1(Buffer) == v2
    && HIWORD(v9) == 17235 )
  {
    return HIDWORD(BaseAddress[1]);
  }
  return v3;
}
