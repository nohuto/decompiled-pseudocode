/*
 * XREFs of RtlGetVersion @ 0x140A0B990
 * Callers:
 *     RtlVerifyVersionInfo @ 0x140466150 (RtlVerifyVersionInfo.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1405184E8 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     Win7RtlGetVersion @ 0x1407351F0 (Win7RtlGetVersion.c)
 *     Win81RtlGetVersion @ 0x1407352D0 (Win81RtlGetVersion.c)
 *     Win8RtlGetVersion @ 0x1407353B0 (Win8RtlGetVersion.c)
 *     _SysCtxOpenMachine @ 0x140810504 (_SysCtxOpenMachine.c)
 *     SdbpMatchOsVersion @ 0x140A0B840 (SdbpMatchOsVersion.c)
 *     PopEtInit @ 0x140C21A5C (PopEtInit.c)
 *     EtwpTraceSystemInitialization @ 0x140C2C93C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140311820 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x140A0BA60 (RtlGetSuiteMask.c)
 */

NTSTATUS __stdcall RtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation)
{
  DWORD v2; // eax
  __int16 v3; // ax
  bool v4; // zf
  __int16 SuiteMask; // ax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&lpVersionInformation->dwMajorVersion = 10LL;
  lpVersionInformation->dwBuildNumber = (unsigned __int16)NtBuildNumber;
  v2 = lpVersionInformation->dwOSVersionInfoSize - 284;
  NtProductType = 0;
  lpVersionInformation->dwPlatformId = 2;
  if ( (v2 & 0xFFFFFFF7) == 0 )
  {
    LOWORD(lpVersionInformation[1].dwOSVersionInfoSize) = BYTE1(CmNtCSDVersion);
    v3 = (unsigned __int8)CmNtCSDVersion;
    LOWORD(lpVersionInformation[1].dwMajorVersion) = 0;
    v4 = (_DWORD)InitializationPhase == 0;
    HIWORD(lpVersionInformation[1].dwOSVersionInfoSize) = v3;
    BYTE2(lpVersionInformation[1].dwMajorVersion) = 0;
    if ( !v4 )
    {
      if ( RtlGetNtProductType(&NtProductType) )
        BYTE2(lpVersionInformation[1].dwMajorVersion) = NtProductType;
      SuiteMask = RtlGetSuiteMask();
      v4 = lpVersionInformation->dwOSVersionInfoSize == 292;
      LOWORD(lpVersionInformation[1].dwMajorVersion) = SuiteMask;
      if ( v4 )
        lpVersionInformation[1].dwMinorVersion = RtlGetSuiteMask() & 0x1FFFF;
    }
    HIBYTE(lpVersionInformation[1].dwMajorVersion) = 0;
  }
  return 0;
}
