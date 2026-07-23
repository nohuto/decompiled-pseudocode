/*
 * XREFs of AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800B3634
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     AVrfpFormatCurrentUserKeyPath @ 0x18011EED4 (AVrfpFormatCurrentUserKeyPath.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

int __fastcall AVrfOpenCurrentUserImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, HANDLE *a3)
{
  int result; // eax
  int v6; // eax
  wchar_t *v7; // rcx
  int v8; // edx
  UNICODE_STRING Source; // [rsp+20h] [rbp-50h] BYREF
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  Source = 0LL;
  Destination = 0LL;
  result = AVrfpFormatCurrentUserKeyPath(&Destination);
  if ( result >= 0 )
  {
    v6 = *a1;
    v7 = (wchar_t *)(*((_QWORD *)a1 + 1) + *a1);
    if ( *a1 )
    {
      do
      {
        if ( *(v7 - 1) == 92 )
          break;
        --v7;
        v6 -= 2;
      }
      while ( v6 );
    }
    v8 = *a1 - v6;
    Source.Buffer = v7;
    Source.Length = v8;
    if ( (unsigned __int16)v8 == v8 )
    {
      result = RtlAppendUnicodeStringToString(&Destination, &Source);
      if ( result >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        return NtOpenKey(a3, 9u, &ObjectAttributes);
      }
    }
    else
    {
      return -1073741789;
    }
  }
  return result;
}
