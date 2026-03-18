/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1408EF170
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14040B494 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14040BA30 (AdtpFormatPrefix.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406528D8 (BapdpMarshallBootDataToRegistry.c)
 *     pIoQueryDeviceDescription @ 0x140715D3C (pIoQueryDeviceDescription.c)
 *     AdtpBuildReplacementString @ 0x14081120C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408112A8 (AdtpBuildUserAccountControlString.c)
 *     AdtpObjsInitialize @ 0x1408114B8 (AdtpObjsInitialize.c)
 *     ObCreateSiloRootDirectory @ 0x14082ABD4 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082AF14 (ObGetSiloRootDirectoryPath.c)
 *     ExProcessCounterSetCallback @ 0x1408EDBC0 (ExProcessCounterSetCallback.c)
 *     RtlpInitNlsFileName @ 0x140A0949C (RtlpInitNlsFileName.c)
 *     AdtpBuildAccessesString @ 0x140A729FC (AdtpBuildAccessesString.c)
 *     PopReadSimulatedHGSClasses @ 0x140C31050 (PopReadSimulatedHGSClasses.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1408EF200 (RtlIntegerToChar.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(Value, Base, 33LL, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
