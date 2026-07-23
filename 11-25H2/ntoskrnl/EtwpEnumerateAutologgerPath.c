/*
 * XREFs of EtwpEnumerateAutologgerPath @ 0x14079FAC8
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x14079FDC4 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403EA890 (RtlInsertElementGenericTableAvl.c)
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14069B780 (ZwEnumerateKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwStartAutoLogger @ 0x14079EA28 (EtwStartAutoLogger.c)
 *     RtlNtStatusToDosError @ 0x140919300 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x140A50A70 (RtlWriteRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpEnumerateAutologgerPath(PCWSTR Path, const WCHAR *a2, _RTL_AVL_TABLE *a3)
{
  WCHAR *v5; // rdi
  __int64 v6; // rbx
  ULONG v7; // r13d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  PCWSTR v10; // rax
  size_t v11; // r15
  wchar_t *Pool2; // rbx
  NTSTATUS v13; // esi
  _RTL_AVL_TABLE *v14; // rcx
  NTSTATUS v15; // ecx
  const WCHAR *v16; // rdx
  BOOLEAN NewElement[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ValueData; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  PRTL_AVL_TABLE Table; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v25; // [rsp+9Ch] [rbp-64h]
  wchar_t Buffer[136]; // [rsp+A0h] [rbp-60h] BYREF

  Table = a3;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  NewElement[0] = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  memset_0(KeyInformation, 0, 0x120uLL);
  v6 = -1LL;
  v7 = 0;
  if ( a2 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    v9 = -1LL;
    do
      ++v9;
    while ( Path[v9] );
    v10 = Path;
    if ( v9 <= v8 )
      v10 = a2;
  }
  else
  {
    v10 = Path;
  }
  do
    ++v6;
  while ( v10[v6] );
  RtlInitUnicodeString(&DestinationString, Path);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v11 = (unsigned int)(2 * v6 + 260);
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      if ( !a2 || (v5 = (WCHAR *)ExAllocatePool2(0x100uLL)) != 0LL )
      {
        while ( 1 )
        {
          v13 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
          if ( v13 < 0 )
          {
            v15 = v13;
            if ( v13 == -2147483622 )
              v15 = 0;
            ValueData = RtlNtStatusToDosError(v15);
            v16 = a2;
            if ( !a2 )
              v16 = Path;
            RtlWriteRegistryValue(0, v16, L"Status", 4u, &ValueData, 4u);
            if ( v13 != -2147483643 && v13 != -1073741789 )
              break;
          }
          else if ( v25 < 0x102 )
          {
            v14 = Table;
            Buffer[(unsigned __int64)v25 >> 1] = 0;
            RtlInsertElementGenericTableAvl(v14, Buffer, v25 + 2, NewElement);
            if ( NewElement[0] )
            {
              if ( !RtlStringCbPrintfW(Pool2, v11, L"%ws\\%ws", Path, Buffer)
                && (!a2 || !RtlStringCbPrintfW(v5, v11, L"%ws\\%ws", a2, Buffer)) )
              {
                EtwStartAutoLogger(Buffer, (__int64)Pool2, v5);
              }
            }
          }
          ++v7;
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
}
