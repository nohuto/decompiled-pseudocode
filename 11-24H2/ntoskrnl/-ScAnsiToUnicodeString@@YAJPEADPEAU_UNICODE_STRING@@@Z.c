/*
 * XREFs of ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x14069E2F0
 * Callers:
 *     ?ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z @ 0x14069E3A8 (-ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z.c)
 *     ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14069E840 (-GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     ?ScTrimString@@YAXPEAD@Z @ 0x14069E460 (-ScTrimString@@YAXPEAD@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x14070B8A0 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxOemStringToUnicodeSize @ 0x140906840 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall ScAnsiToUnicodeString(char *SourceString, struct _UNICODE_STRING *a2)
{
  ULONG v4; // eax
  unsigned int v5; // edx
  unsigned __int8 v6; // r8
  wchar_t *Buffer; // rax
  NTSTATUS v8; // ebx
  wchar_t *v9; // rcx
  UNICODE_STRING v11; // [rsp+20h] [rbp-28h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  ScTrimString(SourceString);
  RtlInitAnsiString(&DestinationString, SourceString);
  v4 = RtlxOemStringToUnicodeSize(&DestinationString);
  v11.MaximumLength = v4;
  Buffer = (wchar_t *)SC_ENV::Allocate(v4, v5, v6, 0);
  v11.Buffer = Buffer;
  if ( Buffer )
  {
    v8 = RtlAnsiStringToUnicodeString(&v11, &DestinationString, 0);
    if ( v8 < 0 )
    {
      Buffer = v11.Buffer;
    }
    else
    {
      v9 = a2->Buffer;
      if ( v9 )
        PspUserApcKernelRoutine(v9);
      Buffer = 0LL;
      *a2 = v11;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( Buffer )
    PspUserApcKernelRoutine(Buffer);
  return (unsigned int)v8;
}
