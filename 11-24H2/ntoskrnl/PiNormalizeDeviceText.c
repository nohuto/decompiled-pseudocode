/*
 * XREFs of PiNormalizeDeviceText @ 0x1409C8004
 * Callers:
 *     PnpQueryDeviceText @ 0x1409C75AC (PnpQueryDeviceText.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140356698 (RtlStringCbPrintfExW.c)
 *     RtlStringCbPrintfW @ 0x14040BC90 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x1404FFD90 (wcschr.c)
 *     _wcstoi64 @ 0x140500974 (_wcstoi64.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1406A66D0 (ZwQueryKey.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlPrefixUnicodeString @ 0x14086E3C0 (RtlPrefixUnicodeString.c)
 *     PiGetDefaultMessageString @ 0x1409C8444 (PiGetDefaultMessageString.c)
 *     IopBuildFullDriverPath @ 0x1409C8E18 (IopBuildFullDriverPath.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiNormalizeDeviceText(const WCHAR *Src, wchar_t **a2)
{
  void *v3; // r14
  unsigned __int16 *v4; // r13
  wchar_t *v5; // rsi
  NTSTATUS inited; // ebx
  void *Pool2; // rax
  const wchar_t *v8; // rbx
  wchar_t *v9; // rax
  const wchar_t *v10; // r15
  wchar_t *v11; // rax
  wchar_t *v12; // rdi
  unsigned __int16 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  size_t v17; // rbx
  wchar_t *v18; // rax
  UNICODE_STRING String2; // [rsp+50h] [rbp-59h] BYREF
  wchar_t *EndPtr; // [rsp+60h] [rbp-49h] BYREF
  void *v22; // [rsp+68h] [rbp-41h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-39h] BYREF
  size_t pcbRemaining[2]; // [rsp+80h] [rbp-29h] BYREF
  wchar_t *v25; // [rsp+90h] [rbp-19h]
  PVOID P; // [rsp+98h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-9h] BYREF
  ULONG Length; // [rsp+120h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+128h] [rbp+7Fh] BYREF

  *a2 = 0LL;
  EndPtr = 0LL;
  v3 = 0LL;
  Length = 0;
  DestinationString = 0LL;
  pcbRemaining[0] = 0LL;
  v4 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v22 = 0LL;
  v5 = 0LL;
  KeyHandle = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  inited = RtlInitUnicodeStringEx(&String2, Src);
  if ( inited < 0 )
    goto LABEL_24;
  if ( !RtlPrefixUnicodeString(&CmRegistryMachineName, &String2, 1u) )
  {
    inited = 0;
    goto LABEL_24;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  P = Pool2;
  v8 = (const wchar_t *)Pool2;
  if ( !Pool2 )
  {
    inited = -1073741670;
    goto LABEL_24;
  }
  memmove(Pool2, Src, String2.Length);
  v8[(unsigned __int64)String2.Length >> 1] = 0;
  v9 = wcschr(v8, 0x2Cu);
  if ( !v9 )
    goto LABEL_35;
  v10 = v9 + 1;
  *v9 = 0;
  v11 = wcschr(v9 + 1, 0x2Cu);
  v12 = v11;
  if ( v11 )
  {
    *v11 = 0;
    v12 = v11 + 1;
  }
  pcbRemaining[1] = wcstoi64(v10, &EndPtr, 10);
  if ( *EndPtr )
    goto LABEL_35;
  RtlInitUnicodeString(&String2, v8);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &String2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  inited = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( inited >= 0 )
  {
    inited = ZwQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
    if ( inited == -1073741789 )
    {
      v4 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
      if ( !v4 )
      {
LABEL_21:
        inited = -1073741670;
        goto LABEL_22;
      }
      inited = ZwQueryKey(KeyHandle, KeyBasicInformation, v4, Length, &Length);
      if ( inited >= 0 )
      {
        String2.Length = v4[6];
        String2.MaximumLength = v4[6];
        String2.Buffer = v4 + 8;
        inited = IopBuildFullDriverPath(&String2, KeyHandle, &DestinationString);
        if ( inited >= 0 )
        {
          *(_DWORD *)&String2.Length = 1703960;
          String2.Buffer = (wchar_t *)L"\\SystemRoot\\";
          if ( RtlPrefixUnicodeString(&String2, &DestinationString, 1u) )
          {
            v13 = DestinationString.Length - 24;
            v25 = DestinationString.Buffer + 12;
            inited = PiGetDefaultMessageString(KeyHandle);
            if ( inited < 0 )
            {
              v3 = v22;
            }
            else
            {
              v14 = -1LL;
              v15 = -1LL;
              do
                ++v15;
              while ( v10[v15] );
              v3 = v22;
              v16 = -1LL;
              do
                ++v16;
              while ( *((_WORD *)v22 + v16) );
              v17 = v13 + 2 * (v15 + v16 + 5);
              if ( v12 )
              {
                do
                  ++v14;
                while ( v12[v14] );
                v17 += 2 * v14 + 6;
              }
              v18 = (wchar_t *)ExAllocatePool2(0x100uLL);
              v5 = v18;
              if ( !v18 )
                goto LABEL_21;
              inited = RtlStringCbPrintfExW(v18, v17, &EndPtr, pcbRemaining, 0, L"@%s,#%s;%s", v25, v10, v3);
              if ( inited >= 0 )
              {
                if ( !v12 || (inited = RtlStringCbPrintfW(EndPtr, pcbRemaining[0], L";(%s)", v12), inited >= 0) )
                {
                  *a2 = v5;
LABEL_35:
                  inited = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_22:
  ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( inited < 0 && v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)inited;
}
