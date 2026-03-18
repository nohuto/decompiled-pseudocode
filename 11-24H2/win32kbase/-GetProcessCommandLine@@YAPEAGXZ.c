/*
 * XREFs of ?GetProcessCommandLine@@YAPEAGXZ @ 0x140143CCC
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x140143AE0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14011BE88 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

char *GetProcessCommandLine(void)
{
  BOOL v0; // esi
  char *v1; // rbx
  char **v2; // rdi
  __int64 v3; // rcx
  char **v4; // rax
  __int64 v5; // rcx
  char *v6; // rax
  _CLIENT_ID ClientId; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ProcessInformationLength; // [rsp+90h] [rbp+20h] BYREF
  void *ProcessHandle; // [rsp+98h] [rbp+28h] BYREF

  v0 = 0;
  ObjectAttributes.Length = 48;
  ProcessInformationLength = 0;
  v1 = 0LL;
  ProcessHandle = 0LL;
  memset(&ObjectAttributes.Length + 1, 0, 20);
  v2 = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.Attributes = 512;
  ClientId.UniqueProcess = (HANDLE)PsGetCurrentThreadProcessId();
  if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0
    && ZwQueryInformationProcess(
         ProcessHandle,
         ProcessImageFileMapping|ProcessUserModeIOPL,
         0LL,
         0,
         &ProcessInformationLength) == -1073741820
    && ProcessInformationLength >= 0x10 )
  {
    v4 = (char **)Win32AllocPoolWithQuotaZInitImpl(v3, ProcessInformationLength + 2LL, 0x79747355u);
    v2 = v4;
    if ( v4 )
    {
      if ( ZwQueryInformationProcess(
             ProcessHandle,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v4,
             ProcessInformationLength,
             0LL) >= 0 )
      {
        v6 = (char *)Win32AllocPoolWithQuotaZInitImpl(v5, *(unsigned __int16 *)v2 + 2LL, 0x79747355u);
        v1 = v6;
        if ( v6 )
          v0 = (int)RtlStringCchCopyNW(
                      v6,
                      *(unsigned __int16 *)v2 + 1LL,
                      v2[1],
                      (unsigned __int64)*(unsigned __int16 *)v2 >> 1) >= 0;
      }
    }
  }
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( v2 )
    GreDeleteFastMutex((char *)v2);
  if ( !v0 && v1 )
  {
    GreDeleteFastMutex(v1);
    return 0LL;
  }
  return v1;
}
