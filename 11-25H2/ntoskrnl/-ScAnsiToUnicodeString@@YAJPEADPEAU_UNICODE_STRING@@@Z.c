/*
 * XREFs of ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140691EC0
 * Callers:
 *     ?ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z @ 0x140691F74 (-ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z.c)
 *     ?GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140692410 (-GetStoragePropertyPost@SC_DISK@@MEAAJW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     ?ScTrimString@@YAXPEAD@Z @ 0x14069202C (-ScTrimString@@YAXPEAD@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140701E20 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlxOemStringToUnicodeSize @ 0x1408E7E30 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall ScAnsiToUnicodeString(char *SourceString, struct _UNICODE_STRING *a2)
{
  ULONG v4; // eax
  unsigned int v5; // edx
  unsigned __int8 v6; // r8
  unsigned int v7; // r9d
  wchar_t *Buffer; // rax
  NTSTATUS v9; // ebx
  wchar_t *v10; // rcx
  UNICODE_STRING v12; // [rsp+20h] [rbp-28h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  *(_QWORD *)&v12.Length = 0LL;
  ScTrimString(SourceString);
  RtlInitAnsiString(&DestinationString, SourceString);
  v4 = RtlxOemStringToUnicodeSize(&DestinationString);
  v12.MaximumLength = v4;
  Buffer = (wchar_t *)SC_ENV::Allocate(v4, v5, v6, v7);
  v12.Buffer = Buffer;
  if ( Buffer )
  {
    v9 = RtlAnsiStringToUnicodeString(&v12, &DestinationString, 0);
    if ( v9 < 0 )
    {
      Buffer = v12.Buffer;
    }
    else
    {
      v10 = a2->Buffer;
      if ( v10 )
        PspUserApcKernelRoutine(v10);
      Buffer = 0LL;
      *a2 = v12;
    }
  }
  else
  {
    v9 = -1073741670;
  }
  if ( Buffer )
    PspUserApcKernelRoutine(Buffer);
  return (unsigned int)v9;
}
