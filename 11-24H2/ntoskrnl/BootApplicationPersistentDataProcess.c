/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140BE052C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     BapdpInitializePageDatabase @ 0x140650E14 (BapdpInitializePageDatabase.c)
 *     BapdpMarshallBootDataToRegistry @ 0x140651038 (BapdpMarshallBootDataToRegistry.c)
 *     BapdpProcessEtwEvents @ 0x140651404 (BapdpProcessEtwEvents.c)
 *     BapdpProcessSpacesBootInformation @ 0x140651540 (BapdpProcessSpacesBootInformation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     BapdProcessFwRamdiskInformation @ 0x140C40D34 (BapdProcessFwRamdiskInformation.c)
 *     BapdProcessOslRamdiskInformation @ 0x140C40D90 (BapdProcessOslRamdiskInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140C40E08 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessBootMetadata @ 0x140C40EE8 (BapdpProcessBootMetadata.c)
 *     BapdpProcessEDrvHintInfo @ 0x140C41028 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140C41108 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140C411E8 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140C412CC (BapdpProcessResumeInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C413AC (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessWmdResults @ 0x140C417A8 (BapdpProcessWmdResults.c)
 *     BapdpRecordIumStatus @ 0x140C41A70 (BapdpRecordIumStatus.c)
 *     BapdpRegisterWbclData @ 0x140C42188 (BapdpRegisterWbclData.c)
 *     ExpInitializeMemoryMirroring @ 0x140C425E8 (ExpInitializeMemoryMirroring.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax

  if ( (__int64 *)qword_140E62450 != &qword_140E62450 )
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
      v3 = (PVOID *)qword_140E62458;
      v4 = (PVOID *)*((_QWORD *)qword_140E62458 + 1);
      if ( *(__int64 **)qword_140E62458 == &qword_140E62450 )
      {
        while ( *v4 == v3 )
        {
          qword_140E62458 = v4;
          *v4 = &qword_140E62450;
          if ( v3 == (PVOID *)&qword_140E62450 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140E62458;
          if ( *(__int64 **)qword_140E62458 != &qword_140E62450 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140E62458 + 1);
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
