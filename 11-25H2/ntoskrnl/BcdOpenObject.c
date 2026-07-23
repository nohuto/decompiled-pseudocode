/*
 * XREFs of BcdOpenObject @ 0x1409666B4
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D632C (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x140650F00 (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075270C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x140752814 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdEstablishResumeObject @ 0x1407538EC (PopBcdEstablishResumeObject.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140753AC0 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140753F0C (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x140784A64 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14080278C (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140804E4C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140805438 (BiCreateEfiEntry.c)
 *     BiUpdateEfiEntry @ 0x140A25220 (BiUpdateEfiEntry.c)
 *     BiBindEfiBootManager @ 0x140A25DC8 (BiBindEfiBootManager.c)
 *     PopBcdClearPendingResume @ 0x140A26F08 (PopBcdClearPendingResume.c)
 *     BiBuildIdentifierList @ 0x140A27590 (BiBuildIdentifierList.c)
 *     BiBindEfiEntries @ 0x140A94DD4 (BiBindEfiEntries.c)
 *     BiExportEfiBootManager @ 0x140AADFBC (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140AD63A8 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     BiGetAliasedIdentifier @ 0x140802710 (BiGetAliasedIdentifier.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiIsObjectAliased @ 0x140A269A4 (BiIsObjectAliased.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

NTSTATUS __cdecl BcdOpenObject(HANDLE BcdStoreHandle, const GUID *Identifier, PHANDLE BcdObjectHandle)
{
  __int64 v6; // rcx
  char v7; // r13
  NTSTATUS result; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  wchar_t *Buffer; // rdi
  unsigned int v12; // esi
  NTSTATUS AliasedIdentifier; // eax
  const wchar_t *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING GuidString; // [rsp+28h] [rbp-28h] BYREF
  GUID Guid; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+98h] [rbp+48h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  v21 = 0;
  Guid = 0LL;
  LOBYTE(v6) = BiIsOfflineHandle((char)BcdStoreHandle);
  v7 = v6;
  result = BiAcquireBcdSyncMutant(v6);
  if ( result < 0 )
    return result;
  *BcdObjectHandle = 0LL;
  v18 = 0LL;
  GuidString.Buffer = 0LL;
  v9 = RtlStringFromGUIDEx((PGUID)Identifier, &GuidString, 1u);
  v10 = v9;
  if ( v9 < 0 )
  {
    BiLogMessage(4LL, L"Failed to get object identifier. Status: %x", (unsigned int)v9);
    goto LABEL_19;
  }
  Buffer = GuidString.Buffer;
  v12 = 2;
  BiLogMessage(2LL, L"Opening object %s", GuidString.Buffer);
  AliasedIdentifier = BiOpenKey(BcdStoreHandle, L"Objects", 131097LL, &v18);
  v10 = AliasedIdentifier;
  if ( AliasedIdentifier < 0 )
  {
    v14 = L"Failed to open key for all objects. Status: %x";
LABEL_5:
    v15 = 4LL;
    goto LABEL_6;
  }
  if ( (unsigned __int8)BiIsObjectAliased(Identifier, &v21) )
  {
    AliasedIdentifier = BiGetAliasedIdentifier((__int64)BcdStoreHandle, v21, &Guid);
    v10 = AliasedIdentifier;
    if ( AliasedIdentifier < 0 )
    {
      v14 = L"Failed to get aliased identifier. Status: %x";
      goto LABEL_5;
    }
    RtlFreeAnsiString(&GuidString);
    GuidString.Buffer = 0LL;
    v17 = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
    v10 = v17;
    if ( v17 >= 0 )
    {
      Buffer = GuidString.Buffer;
      BiLogMessage(2LL, L"Object alias resolves to %s", GuidString.Buffer);
      goto LABEL_14;
    }
    BiLogMessage(4LL, L"Failed to update object GUID string. Status: %x", (unsigned int)v17);
LABEL_19:
    Buffer = GuidString.Buffer;
    goto LABEL_7;
  }
LABEL_14:
  AliasedIdentifier = BiOpenKey(v18, Buffer, 983103LL, BcdObjectHandle);
  v10 = AliasedIdentifier;
  if ( AliasedIdentifier >= 0 )
    goto LABEL_7;
  v14 = L"Failed to open object's key. Status: %x";
  if ( AliasedIdentifier != -1073741772 )
    v12 = 4;
  v15 = v12;
LABEL_6:
  BiLogMessage(v15, v14, (unsigned int)AliasedIdentifier);
LABEL_7:
  if ( Buffer )
    ExFreePool(Buffer);
  v16 = v18;
  if ( v18 )
    BiCloseKey(v18);
  LOBYTE(v16) = v7;
  BiReleaseBcdSyncMutant(v16);
  return v10;
}
