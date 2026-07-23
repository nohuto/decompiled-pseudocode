/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x1800B3710
 * Callers:
 *     <none>
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A3370 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x1800B3990 (RtlPrefixUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x1800B4050 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlNtPathNameToDosPathName(
        ULONG Flags,
        PRTL_UNICODE_STRING_BUFFER Path,
        PULONG Disposition,
        PWSTR *FilePart)
{
  NTSTATUS v4; // ebx
  unsigned __int64 v8; // rbp
  const _UNICODE_STRING *v10; // r14
  unsigned __int16 *v11; // r12
  unsigned __int16 v12; // si
  unsigned __int64 v13; // r8
  RTL_BUFFER *p_ByteBuffer; // rax
  unsigned __int16 *p_Size; // r15
  wchar_t *Buffer; // rcx
  __int64 Length; // r8
  unsigned __int16 v18; // si
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d

  v4 = 0;
  v8 = 0LL;
  if ( Disposition )
    *Disposition = 0;
  if ( !Path )
    return -1073741811;
  if ( Flags )
    return -1073741811;
  if ( FilePart )
  {
    if ( *FilePart )
    {
      v8 = *FilePart - Path->String.Buffer;
      if ( v8 >= (unsigned __int64)Path->String.Length >> 1 )
        return -1073741811;
    }
  }
  v10 = &RtlpDosDevicesUncPrefix;
  if ( RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesUncPrefix, &Path->String, 1u) )
  {
    v11 = (unsigned __int16 *)&unk_180176E38;
    if ( Disposition )
      *Disposition = 2;
    goto LABEL_12;
  }
  v10 = &RtlpDosDevicesPrefix;
  if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesPrefix, &Path->String, 1u) )
  {
    if ( !Disposition )
      return v4;
    v19 = RtlDetermineDosPathNameType_Ustr(&Path->String.Length);
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_25;
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_25;
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( (unsigned int)(v24 - 1) > 1 )
              return v4;
LABEL_25:
            *Disposition = 4;
            return v4;
          }
        }
      }
    }
    *Disposition = 1;
    return v4;
  }
  v11 = (unsigned __int16 *)&RtlpEmptyString;
  if ( Disposition )
    *Disposition = 3;
LABEL_12:
  v12 = (*v11 >> 1) + (Path->String.Length >> 1) - (v10->Length >> 1);
  v13 = 2LL * v12 + 2;
  if ( v13 > 0xFFFE )
    return -1073741562;
  p_ByteBuffer = &Path->ByteBuffer;
  p_Size = (unsigned __int16 *)&Path->ByteBuffer.Size;
  if ( Path == (PRTL_UNICODE_STRING_BUFFER)-16LL || v13 > *(_QWORD *)p_Size )
  {
    if ( (int)RtlpEnsureBufferSize(0LL, &Path->ByteBuffer, v13) < 0 )
      return -1073741801;
    p_ByteBuffer = &Path->ByteBuffer;
  }
  Buffer = (wchar_t *)p_ByteBuffer->Buffer;
  Length = Path->String.Length;
  Path->String.MaximumLength = *p_Size;
  Path->String.Buffer = Buffer;
  memmove(&Buffer[(unsigned __int64)*v11 >> 1], &Buffer[(unsigned __int64)v10->Length >> 1], Length - v10->Length);
  memmove(Path->String.Buffer, *((const void **)v11 + 1), *v11);
  v18 = 2 * v12;
  Path->String.Length = v18;
  Path->String.Buffer[(unsigned __int64)v18 >> 1] = 0;
  if ( v8 )
    *FilePart = &Path->String.Buffer[v8 + ((unsigned __int64)*v11 >> 1) - ((unsigned __int64)v10->Length >> 1)];
  return v4;
}
