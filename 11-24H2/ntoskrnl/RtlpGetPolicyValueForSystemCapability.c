/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x140A5B55C
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x140A5B4CC (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryLicenseValue @ 0x1406A9FB0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  void *v4; // r14
  NTSTATUS appended; // ebx
  unsigned __int16 v6; // bx
  wchar_t *Pool2; // rax
  wchar_t *v8; // r15
  NTSTATUS v9; // eax
  ULONG v11; // esi
  ULONG v12; // r15d
  wchar_t *v13; // rax
  wchar_t *v14; // rsi
  __int64 v15; // rdx
  wchar_t *v16; // rax
  unsigned __int16 v17; // cx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+50h] BYREF

  DataSize = 0;
  Type = 0;
  v4 = 0LL;
  Destination = 0LL;
  if ( !Source || !UnicodeString )
  {
    appended = -1073741811;
LABEL_3:
    if ( !UnicodeString )
      goto LABEL_11;
    goto LABEL_4;
  }
  v6 = Source->Length + 56;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v6, 0x67727453u);
  v8 = Pool2;
  if ( !Pool2 )
    goto LABEL_14;
  memset_0(Pool2, 0, v6);
  Destination.MaximumLength = v6;
  Destination.Buffer = v8;
  appended = RtlAppendUnicodeStringToString(&Destination, &stru_1400036F8);
  if ( appended < 0 )
    goto LABEL_4;
  appended = RtlAppendUnicodeStringToString(&Destination, Source);
  if ( appended < 0 )
    goto LABEL_4;
  v9 = ZwQueryLicenseValue(&Destination, &Type, 0LL, 0, &DataSize);
  appended = v9;
  if ( v9 != -1073741789 )
  {
    if ( v9 >= 0 )
      goto LABEL_11;
    goto LABEL_3;
  }
  v11 = DataSize;
  v12 = DataSize;
  v4 = (void *)ExAllocatePool2(0x41uLL, DataSize, 0x62507452u);
  appended = ZwQueryLicenseValue(&Destination, &Type, v4, v11, &DataSize);
  if ( appended < 0 )
  {
LABEL_4:
    RtlFreeAnsiString(UnicodeString);
    goto LABEL_25;
  }
  if ( Type != 1 || !v11 || (v11 & 1) != 0 )
  {
    appended = -1073741823;
    goto LABEL_4;
  }
  v13 = (wchar_t *)ExAllocatePool2(0x100uLL, v11, 0x67727453u);
  v14 = v13;
  if ( !v13 )
  {
LABEL_14:
    appended = -1073741801;
    goto LABEL_4;
  }
  memmove(v13, v4, v12);
  *UnicodeString = 0LL;
  v15 = 0x7FFFLL;
  v16 = v14;
  do
  {
    if ( !*v16 )
      break;
    ++v16;
    --v15;
  }
  while ( v15 );
  appended = v15 == 0 ? 0xC000000D : 0;
  if ( !v15 )
    goto LABEL_4;
  UnicodeString->Buffer = v14;
  v17 = 2 * (0x7FFF - v15);
  UnicodeString->Length = v17;
  UnicodeString->MaximumLength = v17 + 2;
  appended = 0;
LABEL_25:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_11:
  if ( Destination.Buffer )
    ExFreePool(Destination.Buffer);
  return (unsigned int)appended;
}
