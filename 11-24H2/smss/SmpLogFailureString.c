/*
 * XREFs of SmpLogFailureString @ 0x1400010B8
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 *     SmscpLoadSubSystemsForMuSession @ 0x140002580 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpLoadSubSystem @ 0x140002D40 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 *     SmscpExecuteInitialCommand @ 0x140003B40 (SmscpExecuteInitialCommand.c)
 *     SmpExecuteCommand @ 0x140003F30 (SmpExecuteCommand.c)
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 *     SmpParseCommandLine @ 0x140004FD0 (SmpParseCommandLine.c)
 *     SmpInitializeKnownDllsInternal @ 0x140008F30 (SmpInitializeKnownDllsInternal.c)
 *     SmpCleanupStalePageFiles @ 0x14000F3F0 (SmpCleanupStalePageFiles.c)
 *     SmpCreatePagingFile @ 0x14000FD88 (SmpCreatePagingFile.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000FE40 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateVolumeDescriptor @ 0x1400102D4 (SmpCreateVolumeDescriptor.c)
 *     SmpGetPagingFileSize @ 0x1400110CC (SmpGetPagingFileSize.c)
 *     SmpTrimPagingFileExtents @ 0x14001187C (SmpTrimPagingFileExtents.c)
 *     SmpBuildSubSystemLists @ 0x1400136A0 (SmpBuildSubSystemLists.c)
 *     SmpConfigureEnvironment @ 0x140013BB0 (SmpConfigureEnvironment.c)
 *     SmpConfigureObjectDirectories @ 0x140013F20 (SmpConfigureObjectDirectories.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x1400143B0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpDeleteFile @ 0x14001499C (SmpDeleteFile.c)
 *     SmpInit @ 0x1400150FC (SmpInit.c)
 *     SmpInitializeDosDevices @ 0x140015700 (SmpInitializeDosDevices.c)
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 *     SmpLoadDeferredSubsystem @ 0x140016C40 (SmpLoadDeferredSubsystem.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 *     SmpOpenKnownDllsHandles @ 0x140017200 (SmpOpenKnownDllsHandles.c)
 *     SmpProcessFileRenames @ 0x1400176FC (SmpProcessFileRenames.c)
 *     SmpRunSecureKernelTrustlets @ 0x140017E00 (SmpRunSecureKernelTrustlets.c)
 *     SmpStartServerSilo @ 0x140018E80 (SmpStartServerSilo.c)
 * Callees:
 *     SmpInternalLogFailure @ 0x1400036FC (SmpInternalLogFailure.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpLogFailureString(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // r11
  _WORD *v10; // r10
  __int16 v11; // ax
  _WORD *v12; // rax
  _BYTE v14[64]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v15[160]; // [rsp+60h] [rbp-B8h] BYREF

  memset_0(v14, 0, 0xE0uLL);
  if ( a3 )
  {
    v8 = a3 - (_QWORD)v15;
    v9 = 64LL;
    v10 = v15;
    do
    {
      if ( v9 == -2147483582 )
        break;
      v11 = *(_WORD *)((char *)v10 + v8);
      if ( !v11 )
        break;
      *v10++ = v11;
      --v9;
    }
    while ( v9 );
    v12 = v10 - 1;
    if ( v9 )
      v12 = v10;
    *v12 = 0;
  }
  return SmpInternalLogFailure(a1, a2, a4, v14);
}
