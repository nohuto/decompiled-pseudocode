/*
 * XREFs of RtlInitFunctionalityCache @ 0x14076DC08
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407632B0 (PspInitializeServerSiloDeferred.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     NtOpenKey @ 0x140AD33A0 (NtOpenKey.c)
 */

__int64 RtlInitFunctionalityCache()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax
  ULONG v2; // edi
  NTSTATUS v3; // esi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v5; // r9d
  ULONG ResultLength; // [rsp+38h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-11h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+88h] [rbp+37h] BYREF
  int v12; // [rsp+8Ch] [rbp+3Bh]
  unsigned int v13; // [rsp+94h] [rbp+43h]

  v0 = 0;
  v9[0] = 8913030LL;
  KeyHandle = 0LL;
  v9[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\RtlFunctionality";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v9;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v1 < 0 )
  {
    if ( v1 == -1073741772 )
      return 0;
    return (unsigned int)v1;
  }
  else
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = NtEnumerateValueKey(KeyHandle, v2, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
        if ( v3 < 0 )
          break;
        if ( v12 == 4 && v13 < 0x80 )
        {
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          *((_DWORD *)&CurrentServerSiloGlobals[88].Blink + ((unsigned __int64)v5 >> 5)) |= 1 << (v5 & 0x1F);
        }
        ++v2;
      }
      ++v2;
    }
    while ( v3 == -2147483643 );
    NtClose(KeyHandle);
    if ( v3 != -2147483622 )
      return (unsigned int)v3;
  }
  return v0;
}
