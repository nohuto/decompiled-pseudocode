/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1800B2E60
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x1800B2A40 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800B2F18 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rbx
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+18h] BYREF

  v1 = (HANDLE)qword_1801D03B8;
  if ( qword_1801D03B8 )
    goto LABEL_2;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180175A88;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v1 = KeyHandle;
    result = 0;
  }
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_1801D03B8, (signed __int64)v1, 0LL) )
    {
      NtClose(v1);
      v1 = (HANDLE)qword_1801D03B8;
    }
LABEL_2:
    *a1 = v1;
    return 0;
  }
  return result;
}
