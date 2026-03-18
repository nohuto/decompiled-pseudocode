/*
 * XREFs of ?DpiAcpiDoesDepContainMux@@YAEPEAU_FDO_CONTEXT@@PEAU_ACPI_EVAL_OUTPUT_BUFFER_V1@@@Z @ 0x14008AAAC
 * Callers:
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x14024B2CC (DpiAcpiPrepareDisplayMuxSupport.c)
 * Callees:
 *     DpiCompareAcpiPaths @ 0x14008AC9C (DpiCompareAcpiPaths.c)
 */

char __fastcall DpiAcpiDoesDepContainMux(struct _FDO_CONTEXT *a1, struct _ACPI_EVAL_OUTPUT_BUFFER_V1 *a2)
{
  char v4; // bl
  NTSTATUS v5; // eax
  ACPI_METHOD_ARGUMENT_V1 *Argument; // rdi
  ULONG i; // esi
  NTSTATUS v8; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  struct _STRING SourceString; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-10h] BYREF

  if ( a2->Signature != 1114596673 )
  {
    WdLogSingleEntry1(3LL, a2->Signature);
    WdLogGlobalForLineNumber = 556;
    return 0;
  }
  v4 = 0;
  if ( !a2->Count )
  {
    WdLogSingleEntry1(3LL, 0LL);
    WdLogGlobalForLineNumber = 563;
    return 0;
  }
  DestinationString = 0LL;
  v12 = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)a1 + 6120);
  v5 = RtlAnsiStringToUnicodeString(&v12, &DestinationString, 1u);
  if ( v5 >= 0 )
  {
    Argument = a2->Argument;
    for ( i = 0; i < a2->Count; ++i )
    {
      if ( i )
        Argument = (ACPI_METHOD_ARGUMENT_V1 *)((char *)Argument + Argument->DataLength + 4);
      if ( Argument->Type == 1 )
      {
        SourceString = 0LL;
        RtlInitAnsiString(&SourceString, (PCSZ)Argument->Data);
        UnicodeString = 0LL;
        v8 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
        if ( v8 >= 0 )
        {
          if ( (unsigned __int8)DpiCompareAcpiPaths(&UnicodeString, &v12) )
          {
            RtlFreeUnicodeString(&UnicodeString);
            v4 = 1;
            break;
          }
          WdLogSingleEntry2(4LL, SourceString.Buffer, DestinationString.Buffer);
          WdLogGlobalForLineNumber = 625;
        }
        else
        {
          WdLogSingleEntry1(6LL, v8);
          WdLogGlobalForLineNumber = 615;
        }
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, v5);
    WdLogGlobalForLineNumber = 579;
  }
  RtlFreeUnicodeString(&v12);
  return v4;
}
