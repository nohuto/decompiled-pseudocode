/*
 * XREFs of PortBuildRegKeyName @ 0x140030988
 * Callers:
 *     StorPortRegistryRead @ 0x140030580 (StorPortRegistryRead.c)
 *     RaidAdapterStartRegistryWatch @ 0x1400621DC (RaidAdapterStartRegistryWatch.c)
 *     StorPortRegistryWrite @ 0x140074820 (StorPortRegistryWrite.c)
 *     NvmeAdapterStartRegistryWatch @ 0x1400D8E94 (NvmeAdapterStartRegistryWatch.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140030BE0 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PortBuildRegKeyName(PCUNICODE_STRING SourceString, PUNICODE_STRING Destination, int a3, int a4)
{
  char *v6; // rdx
  unsigned int v7; // ebx
  NTSTATUS result; // eax
  unsigned int MaximumLength; // edx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  wchar_t *Pool2; // rax
  NTSTATUS appended; // ebx
  UNICODE_STRING Source; // [rsp+20h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  char pszDest[24]; // [rsp+40h] [rbp-20h] BYREF

  Source = 0LL;
  DestinationString = 0LL;
  if ( a4 )
  {
    v6 = "\\Parameters\\Device";
  }
  else
  {
    RtlStringCbPrintfA(pszDest, 0x18uLL, "\\Parameters\\Device%d", a3);
    v6 = pszDest;
  }
  RtlInitAnsiString(&DestinationString, v6);
  v7 = 1;
  result = RtlAnsiStringToUnicodeString(&Source, &DestinationString, 1u);
  if ( result >= 0 )
  {
    MaximumLength = SourceString->MaximumLength;
    v10 = -1;
    v11 = MaximumLength + Source.MaximumLength;
    if ( v11 < MaximumLength )
    {
      v12 = -1;
    }
    else
    {
      v7 = v11 + 2;
      v12 = MaximumLength + Source.MaximumLength;
      if ( v11 + 2 >= v11 )
      {
        v10 = v11 + 2;
LABEL_11:
        if ( v10 <= 0xFFFF )
        {
          Pool2 = (wchar_t *)ExAllocatePool2(64LL, v10, 1112697936LL);
          Destination->Buffer = Pool2;
          if ( !Pool2 )
            return -1073741670;
          Destination->MaximumLength = v10;
          RtlCopyUnicodeString(Destination, SourceString);
          appended = RtlAppendUnicodeStringToString(Destination, &Source);
          RtlFreeUnicodeString(&Source);
          return appended;
        }
LABEL_15:
        RtlFreeUnicodeString(&Source);
        return -1073741675;
      }
    }
    if ( v11 < MaximumLength || v7 < v12 )
      goto LABEL_15;
    goto LABEL_11;
  }
  return result;
}
