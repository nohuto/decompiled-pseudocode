/*
 * XREFs of EtwpAccessCheckFromState @ 0x14089A6E0
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     SeAccessCheckFromState @ 0x140361D30 (SeAccessCheckFromState.c)
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x14089A960 (EtwpGetGuidSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAccessCheckFromState(unsigned int *a1, __int64 a2, _TOKEN_ACCESS_INFORMATION *a3)
{
  int v3; // eax
  int v5; // ecx
  int v7; // edx
  int v8; // r8d
  int v9; // r10d
  int v10; // r11d
  int v11; // ebx
  int v12; // edi
  int v13; // esi
  int v14; // r14d
  __int64 v15; // r9
  PSECURITY_DESCRIPTOR v16; // rbx
  NTSTATUS AccessStatus; // [rsp+70h] [rbp-49h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+74h] [rbp-45h] BYREF
  void *v20; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-39h] BYREF
  wchar_t pszDest[40]; // [rsp+90h] [rbp-29h] BYREF

  v3 = *((unsigned __int8 *)a1 + 15);
  v5 = *((unsigned __int8 *)a1 + 14);
  AccessStatus = 0;
  GrantedAccess = 0;
  v7 = *((unsigned __int8 *)a1 + 13);
  v8 = *((unsigned __int8 *)a1 + 12);
  v9 = *((unsigned __int8 *)a1 + 11);
  v10 = *((unsigned __int8 *)a1 + 10);
  v11 = *((unsigned __int8 *)a1 + 9);
  v12 = *((unsigned __int8 *)a1 + 8);
  v13 = *((unsigned __int16 *)a1 + 3);
  v14 = *((unsigned __int16 *)a1 + 2);
  v15 = *a1;
  v20 = 0LL;
  DestinationString = 0LL;
  RtlStringCbPrintfW(
    pszDest,
    0x4CuLL,
    L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
    v15,
    v14,
    v13,
    v12,
    v11,
    v10,
    v9,
    v8,
    v7,
    v5,
    v3);
  RtlInitUnicodeString(&DestinationString, pszDest);
  EtwpGetGuidSecurityDescriptor(&DestinationString, &v20);
  v16 = v20;
  if ( !v20 )
    v16 = EtwpDefaultTraceSecurityDescriptor;
  SeAccessCheckFromState(
    v16,
    a3,
    0LL,
    0x80u,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  if ( v16 && v16 != (PSECURITY_DESCRIPTOR)WmipDefaultAccessSd && v16 != EtwpDefaultTraceSecurityDescriptor )
    ExFreePoolWithTag(v16, 0);
  return (unsigned int)AccessStatus;
}
