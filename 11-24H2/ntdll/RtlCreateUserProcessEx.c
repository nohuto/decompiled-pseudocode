/*
 * XREFs of RtlCreateUserProcessEx @ 0x1800F65A0
 * Callers:
 *     RtlCreateUserProcess @ 0x180135020 (RtlCreateUserProcess.c)
 * Callees:
 *     RtlNormalizeProcessParams @ 0x1800F6660 (RtlNormalizeProcessParams.c)
 *     RtlpCreateUserProcess @ 0x1800F6744 (RtlpCreateUserProcess.c)
 */

NTSTATUS __cdecl RtlCreateUserProcessEx(
        PUNICODE_STRING NtImagePathName,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        BOOLEAN InheritHandles,
        PRTL_USER_PROCESS_EXTENDED_PARAMETERS ProcessExtendedParameters,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  PRTL_USER_PROCESS_PARAMETERS v9; // rax
  int v10; // edx
  unsigned int Flags; // r9d
  int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r8

  if ( !NtImagePathName )
    return -1073741811;
  if ( !ProcessParameters )
    return -1073741811;
  v9 = RtlNormalizeProcessParams(ProcessParameters);
  if ( !v9 )
    return -1073741811;
  v10 = 0;
  if ( InheritHandles )
    v10 = 4;
  else
    v9->CurrentDirectory.Handle = 0LL;
  Flags = v9->Flags;
  v12 = v10 | 0x80;
  if ( (Flags & 0x40000) == 0 )
    v12 = v10;
  v13 = v12 | 0x40;
  if ( (Flags & 0x400000) == 0 )
    v13 = v12;
  v14 = v13 | 0x40000;
  if ( (Flags & 0x800000) == 0 )
    v14 = v13;
  return RtlpCreateUserProcess(NtImagePathName, v9, v14, 1LL, ProcessExtendedParameters, ProcessInformation);
}
