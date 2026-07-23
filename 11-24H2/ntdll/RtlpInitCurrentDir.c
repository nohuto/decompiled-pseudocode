/*
 * XREFs of RtlpInitCurrentDir @ 0x180094888
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800944C0 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlpCreateNewDirectoryReference @ 0x180094EF0 (RtlpCreateNewDirectoryReference.c)
 */

__int64 __fastcall RtlpInitCurrentDir(unsigned __int16 *a1)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  int v2; // eax
  __int64 v3; // r9
  __int64 result; // rax
  _QWORD *v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v2 = RtlDetermineDosPathNameType_Ustr(a1) - 1;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
        return 3221225485LL;
      v8 = v7 - 1;
      if ( !v8 )
        return 3221225485LL;
      v9 = v8 - 1;
      if ( !v9 || (unsigned int)(v9 - 1) >= 2 )
        return 3221225485LL;
    }
  }
  result = RtlpCreateNewDirectoryReference(v3, ProcessParameters->CurrentDirectory.DosPath.MaximumLength, &v10);
  if ( (int)result >= 0 )
  {
    v5 = v10;
    RtlpCurDirRef = v10;
    ProcessParameters->CurrentDirectory.Handle = (void *)v10[1];
    ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)v5[4];
    ProcessParameters->CurrentDirectory.DosPath.Length = *((_WORD *)v5 + 12);
    return 0LL;
  }
  return result;
}
