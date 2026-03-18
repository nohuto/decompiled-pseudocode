/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140BCD52C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     BapdpInitializePageDatabase @ 0x1406467B8 (BapdpInitializePageDatabase.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406469D8 (BapdpMarshallBootDataToRegistry.c)
 *     BapdpProcessEtwEvents @ 0x140646DA4 (BapdpProcessEtwEvents.c)
 *     BapdpProcessSpacesBootInformation @ 0x140646EE0 (BapdpProcessSpacesBootInformation.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     BapdProcessFwRamdiskInformation @ 0x140C2D908 (BapdProcessFwRamdiskInformation.c)
 *     BapdProcessOslRamdiskInformation @ 0x140C2D964 (BapdProcessOslRamdiskInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140C2D9DC (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessBootMetadata @ 0x140C2DABC (BapdpProcessBootMetadata.c)
 *     BapdpProcessEDrvHintInfo @ 0x140C2DBFC (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140C2DCDC (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140C2DDBC (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140C2DEA0 (BapdpProcessResumeInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C2DF80 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessWmdResults @ 0x140C2E37C (BapdpProcessWmdResults.c)
 *     BapdpRecordIumStatus @ 0x140C2E644 (BapdpRecordIumStatus.c)
 *     BapdpRegisterWbclData @ 0x140C2ED5C (BapdpRegisterWbclData.c)
 *     ExpInitializeMemoryMirroring @ 0x140C2F1BC (ExpInitializeMemoryMirroring.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax

  if ( (__int64 *)qword_140E620C0 != &qword_140E620C0 )
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
      v3 = (PVOID *)qword_140E620C8;
      v4 = (PVOID *)*((_QWORD *)qword_140E620C8 + 1);
      if ( *(__int64 **)qword_140E620C8 == &qword_140E620C0 )
      {
        while ( *v4 == v3 )
        {
          qword_140E620C8 = v4;
          *v4 = &qword_140E620C0;
          if ( v3 == (PVOID *)&qword_140E620C0 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140E620C8;
          if ( *(__int64 **)qword_140E620C8 != &qword_140E620C0 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140E620C8 + 1);
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
