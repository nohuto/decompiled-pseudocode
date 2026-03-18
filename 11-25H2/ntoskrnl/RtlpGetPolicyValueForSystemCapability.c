/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x140A09F38
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x140A09EA8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryLicenseValue @ 0x14069DD40 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  void *v4; // r14
  int appended; // ebx
  unsigned __int16 v6; // bx
  wchar_t *Pool2; // rax
  wchar_t *v8; // r15
  int LicenseValue; // eax
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+90h] [rbp+50h] BYREF

  v12 = 0;
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
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v8 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v6);
    Destination.MaximumLength = v6;
    Destination.Buffer = v8;
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_140002DC8);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(&Destination, Source);
      if ( appended >= 0 )
      {
        LicenseValue = ZwQueryLicenseValue((__int64)&Destination, (__int64)&v12);
        appended = LicenseValue;
        if ( LicenseValue != -1073741789 )
        {
          if ( LicenseValue >= 0 )
            goto LABEL_11;
          goto LABEL_3;
        }
        v4 = (void *)ExAllocatePool2(0x41uLL);
        appended = ZwQueryLicenseValue((__int64)&Destination, (__int64)&v12);
        if ( appended >= 0 )
          appended = -1073741823;
      }
    }
  }
  else
  {
    appended = -1073741801;
  }
LABEL_4:
  RtlFreeAnsiString(UnicodeString);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_11:
  if ( Destination.Buffer )
    ExFreePool(Destination.Buffer);
  return (unsigned int)appended;
}
