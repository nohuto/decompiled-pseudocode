/*
 * XREFs of RtlNormalizeProcessParams @ 0x1800F6660
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlCreateUserProcessEx @ 0x1800F65A0 (RtlCreateUserProcessEx.c)
 * Callees:
 *     <none>
 */

PRTL_USER_PROCESS_PARAMETERS __cdecl RtlNormalizeProcessParams(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  unsigned int Flags; // edx
  wchar_t *Buffer; // rax
  wchar_t *v4; // rax
  wchar_t *v5; // rax
  wchar_t *v6; // rax
  wchar_t *v7; // rax
  wchar_t *v8; // rax
  wchar_t *v9; // rax
  wchar_t *v10; // rax
  wchar_t *v11; // rax

  if ( !ProcessParameters )
    return 0LL;
  Flags = ProcessParameters->Flags;
  if ( (Flags & 1) == 0 )
  {
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    if ( Buffer )
      ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)((char *)Buffer + (_QWORD)ProcessParameters);
    v4 = ProcessParameters->DllPath.Buffer;
    if ( v4 )
      ProcessParameters->DllPath.Buffer = (wchar_t *)((char *)v4 + (_QWORD)ProcessParameters);
    v5 = ProcessParameters->ImagePathName.Buffer;
    if ( v5 )
      ProcessParameters->ImagePathName.Buffer = (wchar_t *)((char *)v5 + (_QWORD)ProcessParameters);
    v6 = ProcessParameters->CommandLine.Buffer;
    if ( v6 )
      ProcessParameters->CommandLine.Buffer = (wchar_t *)((char *)v6 + (_QWORD)ProcessParameters);
    v7 = ProcessParameters->WindowTitle.Buffer;
    if ( v7 )
      ProcessParameters->WindowTitle.Buffer = (wchar_t *)((char *)v7 + (_QWORD)ProcessParameters);
    v8 = ProcessParameters->DesktopInfo.Buffer;
    if ( v8 )
      ProcessParameters->DesktopInfo.Buffer = (wchar_t *)((char *)v8 + (_QWORD)ProcessParameters);
    v9 = ProcessParameters->ShellInfo.Buffer;
    if ( v9 )
      ProcessParameters->ShellInfo.Buffer = (wchar_t *)((char *)v9 + (_QWORD)ProcessParameters);
    v10 = ProcessParameters->RuntimeData.Buffer;
    if ( v10 )
      ProcessParameters->RuntimeData.Buffer = (wchar_t *)((char *)v10 + (_QWORD)ProcessParameters);
    v11 = ProcessParameters->RedirectionDllName.Buffer;
    if ( v11 )
      ProcessParameters->RedirectionDllName.Buffer = (wchar_t *)((char *)v11 + (_QWORD)ProcessParameters);
    ProcessParameters->Flags = Flags | 1;
  }
  return ProcessParameters;
}
