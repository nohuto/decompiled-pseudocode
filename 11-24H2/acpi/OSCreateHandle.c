/*
 * XREFs of OSCreateHandle @ 0x1400B7660
 * Callers:
 *     ACPIRootPowerCallBack @ 0x14003A030 (ACPIRootPowerCallBack.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1400A5090 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1400B740C (ACPIWriteOscSupportToRegistry.c)
 *     ACPIRootWorker @ 0x1400B7510 (ACPIRootWorker.c)
 *     ACPIRegDumpAcpiTable @ 0x1400C9730 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall OSCreateHandle(PCSZ SourceString, void *a2, void **a3)
{
  NTSTATUS v5; // ebx
  unsigned __int16 v7; // r9
  unsigned int v8; // r8d
  __int64 v9; // [rsp+30h] [rbp-11h]
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp+7h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitAnsiString(&DestinationString, SourceString);
  v5 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 10;
      v8 = 22;
LABEL_8:
      LODWORD(v9) = v5;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v8,
        v7,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v9);
    }
  }
  else
  {
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    *a3 = 0LL;
    ObjectAttributes.ObjectName = &UnicodeString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    v5 = ZwCreateKey(a3, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 11;
      v7 = 11;
      goto LABEL_8;
    }
  }
  return (unsigned int)v5;
}
