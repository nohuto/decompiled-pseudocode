/*
 * XREFs of RtlpInitCurrentDir @ 0x1800A1C48
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpCreateNewDirectoryReference @ 0x1800A1A30 (RtlpCreateNewDirectoryReference.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A3370 (RtlDetermineDosPathNameType_Ustr.c)
 */

__int64 __fastcall RtlpInitCurrentDir(__int64 a1, __int64 a2, __int64 a3)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  int v4; // eax
  unsigned __int16 *v5; // r9
  __int64 result; // rax
  _QWORD *v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v4 = RtlDetermineDosPathNameType_Ustr(a1, a2, a3, a1) - 1;
  if ( v4 )
  {
    v8 = v4 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
        return 3221225485LL;
      v10 = v9 - 1;
      if ( !v10 )
        return 3221225485LL;
      v11 = v10 - 1;
      if ( !v11 || (unsigned int)(v11 - 1) >= 2 )
        return 3221225485LL;
    }
  }
  result = RtlpCreateNewDirectoryReference(v5, ProcessParameters->CurrentDirectory.DosPath.MaximumLength, &v12);
  if ( (int)result >= 0 )
  {
    v7 = v12;
    RtlpCurDirRef = v12;
    ProcessParameters->CurrentDirectory.Handle = (void *)v12[1];
    ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)v7[4];
    ProcessParameters->CurrentDirectory.DosPath.Length = *((_WORD *)v7 + 12);
    return 0LL;
  }
  return result;
}
