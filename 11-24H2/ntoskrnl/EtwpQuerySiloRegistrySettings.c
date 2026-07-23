/*
 * XREFs of EtwpQuerySiloRegistrySettings @ 0x14064B528
 * Callers:
 *     EtwpInitializeSiloState @ 0x1407A829C (EtwpInitializeSiloState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B4D70 (RtlQueryRegistryValuesEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall EtwpQuerySiloRegistrySettings(__int64 a1)
{
  _WORD *v2; // rbx
  _WORD *Pool2; // rax
  unsigned __int64 v4; // rax
  HANDLE v5; // rcx
  void *Src[2]; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+80h] [rbp-80h] BYREF
  void **v10; // [rsp+88h] [rbp-78h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v12; // [rsp+130h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+138h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v12 = 0;
  v2 = 0LL;
  *(_OWORD *)Src = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset_0(&QueryTable, 0, 0x70uLL);
    QueryTable.DefaultType = 1;
    QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&EtwpQueryRegistryCallback;
    v9 = 1;
    QueryTable.EntryContext = &v9;
    QueryTable.Name = L"RTBacklogRoot";
    QueryTable.DefaultData = &v12;
    v10 = Src;
    if ( RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, &QueryTable, 0LL, 0LL) >= 0 )
    {
      if ( Src[1] )
      {
        if ( LOWORD(Src[0]) >= 4u )
        {
          Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, WORD1(Src[0]) + 2LL, 0x50777445u);
          v2 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, Src[1], WORD1(Src[0]));
            v4 = (unsigned __int64)LOWORD(Src[0]) >> 1;
            if ( v2[v4 - 1] != 92 )
            {
              v2[v4] = 92;
              v2[((unsigned __int64)LOWORD(Src[0]) >> 1) + 1] = 0;
            }
          }
        }
      }
    }
  }
  v5 = KeyHandle;
  *(_QWORD *)(a1 + 4384) = v2;
  if ( v5 )
    ZwClose(v5);
  RtlFreeAnsiString((PUNICODE_STRING)Src);
}
