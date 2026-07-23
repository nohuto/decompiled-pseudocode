/*
 * XREFs of RtlGetFullPathName_UEx @ 0x1800DD740
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180071600 (RtlGetFullPathName_Ustr.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

NTSTATUS __cdecl RtlGetFullPathName_UEx(
        PCWSTR FileName,
        ULONG BufferLength,
        PWSTR Buffer,
        PWSTR *FilePart,
        ULONG *BytesRequired)
{
  ULONG *v5; // rbx
  size_t v9; // rax
  ULONG FullPathName_Ustr; // eax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v5 = BytesRequired;
  v13 = 0LL;
  if ( BytesRequired )
    *BytesRequired = 0;
  v12[0] = 0LL;
  v12[1] = FileName;
  if ( FileName )
  {
    v9 = wcslen(FileName);
    if ( v9 > 0x7FFE )
      return -1073741562;
    LOWORD(v12[0]) = 2 * v9;
    WORD1(v12[0]) = 2 * v9 + 2;
  }
  FullPathName_Ustr = RtlGetFullPathName_Ustr(
                        (unsigned __int16 *)v12,
                        BufferLength,
                        Buffer,
                        (__int64 *)FilePart,
                        0LL,
                        &v13);
  if ( !FullPathName_Ustr )
    return -1073741773;
  if ( v5 )
    *v5 = FullPathName_Ustr;
  return 0;
}
