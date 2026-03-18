/*
 * XREFs of IopBuildFullDriverPath @ 0x1409B0AA8
 * Callers:
 *     PpCheckInDriverDatabase @ 0x1409AF608 (PpCheckInDriverDatabase.c)
 *     PiNormalizeDeviceText @ 0x1409AFC94 (PiNormalizeDeviceText.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x140871070 (RtlPrefixUnicodeString.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B01F8 (IopQueryRegistryKeySystemPath.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopBuildFullDriverPath(UNICODE_STRING *a1, void *a2, UNICODE_STRING *a3)
{
  NTSTATUS appended; // ebx
  __int64 v7; // r14
  unsigned __int16 v8; // bx
  UNICODE_STRING v9; // xmm6
  unsigned int v10; // edx
  __int64 Pool2; // rax
  UNICODE_STRING String2; // [rsp+28h] [rbp-39h] BYREF
  UNICODE_STRING Source; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-9h] BYREF
  UNICODE_STRING v17; // [rsp+68h] [rbp+7h]
  UNICODE_STRING v18; // [rsp+78h] [rbp+17h] BYREF
  UNICODE_STRING v19; // [rsp+88h] [rbp+27h] BYREF

  *(_QWORD *)&String1.Length = 1703960LL;
  *(_QWORD *)&v17.Length = 2359330LL;
  String1.Buffer = (wchar_t *)L"\\SystemRoot\\";
  v17.Buffer = L"System32\\Drivers\\";
  DestinationString = 0LL;
  Source = 0LL;
  v18 = 0LL;
  String2 = 0LL;
  v19 = 0LL;
  RtlInitUnicodeString(a3, 0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&Source, 0LL);
  RtlInitUnicodeString(&v18, 0LL);
  RtlInitUnicodeString(&String2, 0LL);
  RtlInitUnicodeString(&v19, 0LL);
  appended = IopQueryRegistryKeySystemPath(a2, &DestinationString);
  if ( appended < 0 )
    goto LABEL_16;
  if ( (int)IopGetRegistryValue(a2) < 0 || MEMORY[0xC] < 2u )
  {
    String2 = *a1;
    v9 = String2;
    Source = DestinationString;
    v18 = v17;
    RtlInitUnicodeString(&v19, L".SYS");
    v8 = _mm_cvtsi128_si32((__m128i)v9);
  }
  else
  {
    if ( MEMORY[0xC] > 0xFFFFu )
    {
LABEL_21:
      appended = -2147483643;
      goto LABEL_16;
    }
    v7 = MEMORY[8];
    String2.MaximumLength = MEMORY[0xC];
    v8 = MEMORY[0xC] - 2;
    String2.Buffer = (wchar_t *)MEMORY[8];
    String2.Length = MEMORY[0xC] - 2;
    if ( *(_WORD *)MEMORY[8] == 92 )
    {
      if ( RtlPrefixUnicodeString(&String1, &String2, 1u) )
      {
        v8 -= 24;
        Source = DestinationString;
        String2.Length = v8;
        String2.Buffer = (wchar_t *)(v7 + 24);
      }
      else
      {
        RtlInitUnicodeString(&Source, 0LL);
      }
    }
    else
    {
      Source = DestinationString;
    }
  }
  v10 = Source.Length + 2 + v18.Length + v19.Length + v8;
  if ( v10 > 0xFFFF )
    goto LABEL_21;
  a3->MaximumLength = v10;
  a3->Length = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  a3->Buffer = (wchar_t *)Pool2;
  if ( Pool2 )
  {
    appended = RtlAppendUnicodeStringToString(a3, &Source);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(a3, &v18);
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(a3, &String2);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(a3, &v19);
          if ( appended >= 0 )
            a3->Buffer[(unsigned __int64)a3->Length >> 1] = 0;
        }
      }
    }
  }
  else
  {
    appended = -1073741670;
  }
LABEL_16:
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return (unsigned int)appended;
}
