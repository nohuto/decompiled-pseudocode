/*
 * XREFs of RtlpQueryCriticalSectionOwner @ 0x180099C74
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpQueryCriticalSectionOwner64 @ 0x180097FC0 (RtlpQueryCriticalSectionOwner64.c)
 *     RtlpQueryProcessMachine @ 0x180098084 (RtlpQueryProcessMachine.c)
 *     RtlpQueryCriticalSectionOwner32 @ 0x180135880 (RtlpQueryCriticalSectionOwner32.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenProcess @ 0x1801636E0 (NtOpenProcess.c)
 */

__int64 __fastcall RtlpQueryCriticalSectionOwner(void *a1, __int64 a2)
{
  int v3; // ebx
  __int64 CriticalSectionOwner32; // rax
  _CLIENT_ID ClientId; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 v8; // [rsp+88h] [rbp+28h] BYREF
  HANDLE ProcessHandle; // [rsp+90h] [rbp+30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v8 = 0;
  ProcessHandle = 0LL;
  if ( !*(_QWORD *)(a2 + 160) )
    return (unsigned int)-1073741811;
  ClientId.UniqueProcess = a1;
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ClientId.UniqueThread = 0LL;
  v3 = NtOpenProcess(&ProcessHandle, 0x1010u, &ObjectAttributes, &ClientId);
  if ( v3 >= 0 )
  {
    v3 = RtlpQueryProcessMachine((__int64)ProcessHandle, &v8);
    if ( v3 >= 0 )
    {
      if ( v8 == 332 || v8 == 452 )
      {
        CriticalSectionOwner32 = RtlpQueryCriticalSectionOwner32(ProcessHandle);
      }
      else
      {
        if ( v8 != 34404 && v8 != 43620 )
        {
          v3 = -1073741811;
          goto LABEL_13;
        }
        CriticalSectionOwner32 = RtlpQueryCriticalSectionOwner64(ProcessHandle, *(_QWORD *)(a2 + 160));
      }
      *(_QWORD *)(a2 + 168) = CriticalSectionOwner32;
      v3 = 0;
    }
  }
LABEL_13:
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)v3;
}
