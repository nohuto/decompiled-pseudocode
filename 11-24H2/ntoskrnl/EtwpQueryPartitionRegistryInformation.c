/*
 * XREFs of EtwpQueryPartitionRegistryInformation @ 0x14064B27C
 * Callers:
 *     EtwpContainerStateWnfCallback @ 0x14064AD40 (EtwpContainerStateWnfCallback.c)
 *     EtwpInitializeSiloState @ 0x1407A829C (EtwpInitializeSiloState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     StringToGuidNoBrackets @ 0x14064B92C (StringToGuidNoBrackets.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlUnicodeToUTF8N @ 0x140905BE0 (RtlUnicodeToUTF8N.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B4D70 (RtlQueryRegistryValuesEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpQueryPartitionRegistryInformation(
        GUID *a1,
        PVOID *a2,
        _WORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        GUID *a6)
{
  NTSTATUS v10; // ebx
  ULONG v11; // ebx
  CHAR *Pool2; // rax
  NTSTATUS v13; // eax
  _WORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  PCWCH UnicodeStringSource[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp-50h] BYREF
  PCWCH *v25; // [rsp+B8h] [rbp-48h]
  int v26; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+C8h] [rbp-38h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+E0h] [rbp-20h] BYREF
  void *v29; // [rsp+118h] [rbp+18h]
  const wchar_t *v30; // [rsp+128h] [rbp+28h]
  int *v31; // [rsp+130h] [rbp+30h]
  int v32; // [rsp+138h] [rbp+38h]
  _WORD *v33; // [rsp+140h] [rbp+40h]
  void *v34; // [rsp+150h] [rbp+50h]
  const wchar_t *v35; // [rsp+160h] [rbp+60h]
  int *v36; // [rsp+168h] [rbp+68h]
  int v37; // [rsp+170h] [rbp+70h]
  _WORD *v38; // [rsp+178h] [rbp+78h]

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  UTF8StringActualByteCount = 0;
  v15[0] = 0;
  DestinationString = 0LL;
  *a4 = 0;
  *(_OWORD *)UnicodeStringSource = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v10 >= 0 )
  {
    memset_0(&QueryTable, 0, 0xE0uLL);
    v23 = a4;
    v32 = 1;
    QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&EtwpQueryRegistryCallback;
    QueryTable.EntryContext = &v22;
    v29 = &EtwpQueryRegistryCallback;
    QueryTable.Name = L"ContainerType";
    v24 = 1;
    QueryTable.DefaultType = 4;
    v22 = 4;
    v31 = &v24;
    v30 = L"ContainerId";
    v33 = v15;
    v25 = UnicodeStringSource;
    v36 = &v26;
    v35 = L"ContainerCorrelationId";
    v38 = v15;
    v34 = &EtwpQueryRegistryCallback;
    v37 = 1;
    v26 = 1;
    p_UnicodeString = &UnicodeString;
    v10 = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, &QueryTable, 0LL, 0LL);
    if ( v10 >= 0 )
    {
      *a5 = 0LL;
      if ( (unsigned int)StringToGuidNoBrackets(UnicodeStringSource, a1) )
        *a1 = CPER_EMPTY_GUID;
      if ( !RtlUnicodeToUTF8N(
              0LL,
              0,
              &UTF8StringActualByteCount,
              UnicodeStringSource[1],
              LOWORD(UnicodeStringSource[0])) )
      {
        v11 = UTF8StringActualByteCount;
        if ( UTF8StringActualByteCount < 0xFFFF )
        {
          Pool2 = (CHAR *)ExAllocatePool2(0x48uLL, UTF8StringActualByteCount, 0x61777445u);
          *a2 = Pool2;
          if ( Pool2 )
          {
            v13 = RtlUnicodeToUTF8N(
                    Pool2,
                    v11,
                    &UTF8StringActualByteCount,
                    UnicodeStringSource[1],
                    LOWORD(UnicodeStringSource[0]));
            if ( !v13 || v13 == 263 )
            {
              *a3 = UTF8StringActualByteCount;
            }
            else
            {
              ExFreePoolWithTag(*a2, 0x61777445u);
              *a2 = 0LL;
            }
          }
        }
      }
      v10 = StringToGuidNoBrackets(&UnicodeString, a6);
      if ( v10 )
      {
        v10 = 0;
        *a6 = CPER_EMPTY_GUID;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeAnsiString((PUNICODE_STRING)UnicodeStringSource);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v10;
}
