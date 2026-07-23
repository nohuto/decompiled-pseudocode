/*
 * XREFs of RtlIntegerToUnicodeString @ 0x140860970
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140403F10 (AdtpFormatPrefix.c)
 *     BapdpMarshallBootDataToRegistry @ 0x140651038 (BapdpMarshallBootDataToRegistry.c)
 *     pIoQueryDeviceDescription @ 0x1407138CC (pIoQueryDeviceDescription.c)
 *     AdtpBuildReplacementString @ 0x14081194C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408119E8 (AdtpBuildUserAccountControlString.c)
 *     AdtpObjsInitialize @ 0x140811BF8 (AdtpObjsInitialize.c)
 *     ObCreateSiloRootDirectory @ 0x14082B404 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082B744 (ObGetSiloRootDirectoryPath.c)
 *     ExProcessCounterSetCallback @ 0x14085F3F0 (ExProcessCounterSetCallback.c)
 *     RtlpInitNlsFileName @ 0x140A059CC (RtlpInitNlsFileName.c)
 *     AdtpBuildAccessesString @ 0x140A6BDDC (AdtpBuildAccessesString.c)
 *     PopReadSimulatedHGSClasses @ 0x140C33170 (PopReadSimulatedHGSClasses.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlIntegerToChar @ 0x140860A00 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
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
