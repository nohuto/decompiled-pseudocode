/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1408DFD70
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403D20 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1404042BC (AdtpFormatPrefix.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406469D8 (BapdpMarshallBootDataToRegistry.c)
 *     pIoQueryDeviceDescription @ 0x140709C3C (pIoQueryDeviceDescription.c)
 *     AdtpBuildReplacementString @ 0x14080169C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140801738 (AdtpBuildUserAccountControlString.c)
 *     AdtpObjsInitialize @ 0x140801948 (AdtpObjsInitialize.c)
 *     ObCreateSiloRootDirectory @ 0x14081AE94 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14081B1D4 (ObGetSiloRootDirectoryPath.c)
 *     ExProcessCounterSetCallback @ 0x1408DE7B0 (ExProcessCounterSetCallback.c)
 *     RtlpInitNlsFileName @ 0x1408F95F4 (RtlpInitNlsFileName.c)
 *     AdtpBuildAccessesString @ 0x140A70050 (AdtpBuildAccessesString.c)
 *     PopReadSimulatedHGSClasses @ 0x140C1FF50 (PopReadSimulatedHGSClasses.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlIntegerToChar @ 0x1408DFE00 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(Value, Base, 33, Stringa);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = Stringa;
    v5 = -1LL;
    do
      ++v5;
    while ( Stringa[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
