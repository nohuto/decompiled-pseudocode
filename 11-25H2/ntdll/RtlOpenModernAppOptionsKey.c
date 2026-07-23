/*
 * XREFs of RtlOpenModernAppOptionsKey @ 0x1800B094C
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlOpenModernAppOptionsKey(_UNICODE_STRING *a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  if ( RtlpModernAppKey )
  {
    *a3 = RtlpModernAppKey;
    return 0;
  }
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&RtlpModernAppKey, (signed __int64)KeyHandle, 0LL) )
      NtClose(KeyHandle);
    *a3 = RtlpModernAppKey;
    return 0;
  }
  return result;
}
