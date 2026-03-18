/*
 * XREFs of BcdOpenObject @ 0x1409BE0D4
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405DAE54 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     WheaPersistBadPageToBcd @ 0x14065CE90 (WheaPersistBadPageToBcd.c)
 *     PopAdaptiveClearInitialSystemPowerState @ 0x14075F12C (PopAdaptiveClearInitialSystemPowerState.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14075F274 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     PopBcdEstablishResumeObject @ 0x1407633AC (PopBcdEstablishResumeObject.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140763580 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdSetPendingResume @ 0x1407639CC (PopBcdSetPendingResume.c)
 *     SepSecureBootCorrectBcd @ 0x140793E34 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140812304 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408149C4 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140814FB0 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x1408157BC (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x1409BEF7C (BiBuildIdentifierList.c)
 *     PopBcdClearPendingResume @ 0x1409C04F8 (PopBcdClearPendingResume.c)
 *     BiBindEfiBootManager @ 0x1409C0574 (BiBindEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x1409C14D0 (BiUpdateEfiEntry.c)
 *     BiBindEfiEntries @ 0x140A9AAF4 (BiBindEfiEntries.c)
 *     BiExportEfiBootManager @ 0x140AB305C (BiExportEfiBootManager.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1404AB350 (BiIsOfflineHandle.c)
 *     BiGetAliasedIdentifier @ 0x140812288 (BiGetAliasedIdentifier.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiIsObjectAliased @ 0x1409BEF24 (BiIsObjectAliased.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall BcdOpenObject(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char v7; // r13
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // ebx
  wchar_t *Buffer; // rdi
  unsigned int v12; // esi
  int AliasedIdentifier; // eax
  const wchar_t *v14; // rdx
  __int64 v15; // rcx
  void *v16; // rcx
  int v17; // eax
  void *v18; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v20[6]; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+98h] [rbp+48h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v21 = 0;
  *(_OWORD *)v20 = 0LL;
  LOBYTE(v6) = BiIsOfflineHandle(a1);
  v7 = v6;
  result = BiAcquireBcdSyncMutant(v6);
  if ( (int)result < 0 )
    return result;
  *a3 = 0LL;
  v18 = 0LL;
  UnicodeString.Buffer = 0LL;
  v9 = RtlStringFromGUIDEx(a2, (__int64)&UnicodeString, 1);
  v10 = v9;
  if ( v9 < 0 )
  {
    BiLogMessage(4LL, L"Failed to get object identifier. Status: %x", (unsigned int)v9);
    goto LABEL_19;
  }
  Buffer = UnicodeString.Buffer;
  v12 = 2;
  BiLogMessage(2LL, L"Opening object %s", UnicodeString.Buffer);
  AliasedIdentifier = BiOpenKey(a1, L"Objects", 0x20019u, &v18);
  v10 = AliasedIdentifier;
  if ( AliasedIdentifier < 0 )
  {
    v14 = L"Failed to open key for all objects. Status: %x";
LABEL_5:
    v15 = 4LL;
    goto LABEL_6;
  }
  if ( (unsigned __int8)BiIsObjectAliased(a2, &v21) )
  {
    AliasedIdentifier = BiGetAliasedIdentifier(a1, v21, v20);
    v10 = AliasedIdentifier;
    if ( AliasedIdentifier < 0 )
    {
      v14 = L"Failed to get aliased identifier. Status: %x";
      goto LABEL_5;
    }
    RtlFreeAnsiString(&UnicodeString);
    UnicodeString.Buffer = 0LL;
    v17 = RtlStringFromGUIDEx(v20, (__int64)&UnicodeString, 1);
    v10 = v17;
    if ( v17 >= 0 )
    {
      Buffer = UnicodeString.Buffer;
      BiLogMessage(2LL, L"Object alias resolves to %s", UnicodeString.Buffer);
      goto LABEL_14;
    }
    BiLogMessage(4LL, L"Failed to update object GUID string. Status: %x", (unsigned int)v17);
LABEL_19:
    Buffer = UnicodeString.Buffer;
    goto LABEL_7;
  }
LABEL_14:
  AliasedIdentifier = BiOpenKey((__int64)v18, Buffer, 0xF003Fu, a3);
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
