/*
 * XREFs of BcdOpenObject @ 0x1409A4724
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D8174 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x14065B5B0 (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075E0CC (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14075E214 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdEstablishResumeObject @ 0x140762D7C (PopBcdEstablishResumeObject.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140762F44 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdSetPendingResume @ 0x140763390 (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x140793ED4 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140812A44 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140815104 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x1408156F0 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 *     PopBcdClearPendingResume @ 0x1409A6B48 (PopBcdClearPendingResume.c)
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x1409A7B20 (BiUpdateEfiEntry.c)
 *     BiBindEfiEntries @ 0x140A96064 (BiBindEfiEntries.c)
 *     BiExportEfiBootManager @ 0x140AADFCC (BiExportEfiBootManager.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404A5974 (BiIsOfflineHandle.c)
 *     BiGetAliasedIdentifier @ 0x1408129C8 (BiGetAliasedIdentifier.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiIsObjectAliased @ 0x1409A5574 (BiIsObjectAliased.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
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
  int AliasedIdentifier; // eax
  const wchar_t *v14; // rdx
  __int64 v15; // rcx
  void *v16; // rcx
  NTSTATUS v17; // eax
  void *v18; // [rsp+20h] [rbp-30h] BYREF
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
  AliasedIdentifier = BiOpenKey((__int64)BcdStoreHandle, L"Objects", 0x20019u, &v18);
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
  AliasedIdentifier = BiOpenKey((__int64)v18, Buffer, 0xF003Fu, BcdObjectHandle);
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
