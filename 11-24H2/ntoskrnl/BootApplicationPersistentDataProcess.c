/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140BDE52C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     BapdpInitializePageDatabase @ 0x1406526C0 (BapdpInitializePageDatabase.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406528D8 (BapdpMarshallBootDataToRegistry.c)
 *     BapdpProcessEtwEvents @ 0x140652CA4 (BapdpProcessEtwEvents.c)
 *     BapdpProcessSpacesBootInformation @ 0x140652DE0 (BapdpProcessSpacesBootInformation.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     BapdProcessFwRamdiskInformation @ 0x140C3EBE4 (BapdProcessFwRamdiskInformation.c)
 *     BapdProcessOslRamdiskInformation @ 0x140C3EC40 (BapdProcessOslRamdiskInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140C3ECB8 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessBootMetadata @ 0x140C3ED98 (BapdpProcessBootMetadata.c)
 *     BapdpProcessEDrvHintInfo @ 0x140C3EED8 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140C3EFB8 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140C3F098 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140C3F17C (BapdpProcessResumeInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C3F25C (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessWmdResults @ 0x140C3F658 (BapdpProcessWmdResults.c)
 *     BapdpRecordIumStatus @ 0x140C3F920 (BapdpRecordIumStatus.c)
 *     BapdpRegisterWbclData @ 0x140C40038 (BapdpRegisterWbclData.c)
 *     ExpInitializeMemoryMirroring @ 0x140C40498 (ExpInitializeMemoryMirroring.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax

  if ( (__int64 *)qword_140E62300 != &qword_140E62300 )
  {
    if ( !a1 )
    {
      BapdpProcessWmdResults();
      BapdpProcessResumeInformation();
      BapdpProcessBitlockerStatus();
      BapdpRegisterWbclData(0LL);
      BapdpRegisterWbclData(1LL);
      BapdpProcessVsmKeyBlobs(0LL);
      BapdpProcessEDrvHintInfo();
      BapdpProcessFwUpdateResults();
      BapdProcessFwRamdiskInformation();
      BapdProcessOslRamdiskInformation();
      return;
    }
    if ( a1 == 1 )
    {
      ExpInitializeMemoryMirroring();
      BapdpProcessBootMetadata();
      BapdpProcessSpacesBootInformation(v1);
      BapdpRecordIumStatus();
      BapdpProcessEtwEvents(v2);
      BapdpProcessHSTIResults();
      BapdpMarshallBootDataToRegistry();
      v3 = (PVOID *)qword_140E62308;
      v4 = (PVOID *)*((_QWORD *)qword_140E62308 + 1);
      if ( *(__int64 **)qword_140E62308 == &qword_140E62300 )
      {
        while ( *v4 == v3 )
        {
          qword_140E62308 = v4;
          *v4 = &qword_140E62300;
          if ( v3 == (PVOID *)&qword_140E62300 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140E62308;
          if ( *(__int64 **)qword_140E62308 != &qword_140E62300 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140E62308 + 1);
        }
      }
      __fastfail(3u);
    }
  }
  if ( a1 == 2 )
  {
    BapdpInitializePageDatabase();
  }
  else if ( a1 == 3 )
  {
    BapdpProcessVsmKeyBlobs(1LL);
  }
}
