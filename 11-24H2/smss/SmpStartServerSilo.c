/*
 * XREFs of SmpStartServerSilo @ 0x140018E80
 * Callers:
 *     <none>
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 */

__int64 __fastcall SmpStartServerSilo(__int64 a1, __int64 a2)
{
  void *v4; // rdx
  void *v5; // rcx
  int InformationJobObject; // ebx
  int v7; // edx
  __int64 v8; // r9
  NTSTATUS v9; // eax
  _OWORD JobInformation[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v12; // [rsp+60h] [rbp-29h]
  __int128 v13; // [rsp+70h] [rbp-19h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp-9h]
  void *TargetHandle; // [rsp+F0h] [rbp+67h] BYREF

  TargetHandle = 0LL;
  DWORD1(v13) = 0;
  memset_0(&v13, 0, 0x64uLL);
  v4 = *(void **)(a1 + 48);
  v5 = *(void **)(a2 + 32);
  memset(JobInformation, 0, sizeof(JobInformation));
  v12 = 0LL;
  InformationJobObject = NtDuplicateObject(v5, v4, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0x1F003Fu, 0, 0);
  if ( InformationJobObject < 0 )
  {
    v7 = 440;
LABEL_3:
    SmpLogFailure((__int64)"SmpStartServerSilo", v7, InformationJobObject);
    return (unsigned int)InformationJobObject;
  }
  InformationJobObject = NtQueryInformationJobObject(
                           TargetHandle,
                           JobObjectEndOfJobTimeInformation|0x20,
                           JobInformation,
                           0x28u,
                           0LL);
  if ( InformationJobObject < 0 )
  {
    NtClose(TargetHandle);
    v7 = 458;
    goto LABEL_3;
  }
  InformationJobObject = SmpExecuteImage(&SmpHelperCmd.Length, 0LL, 0LL, v8, (int *)TargetHandle, 20512, &v13);
  if ( InformationJobObject >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 56) )
    {
      v9 = NtResumeThread(ThreadHandle, 0LL);
      InformationJobObject = v9;
      if ( v9 < 0 )
      {
        SmpLogFailure((__int64)"SmpStartServerSilo", 488, v9);
        NtTerminateProcess(*((HANDLE *)&v13 + 1), 0);
      }
    }
    NtClose(TargetHandle);
    NtClose(*((HANDLE *)&v13 + 1));
    NtClose(ThreadHandle);
  }
  else
  {
    NtClose(TargetHandle);
    SmpLogFailureString((__int64)"SmpStartServerSilo", 0x1DBu, (__int64)SmpHelperCmd.Buffer, InformationJobObject);
  }
  return (unsigned int)InformationJobObject;
}
