/*
 * XREFs of BiCreateEfiEntry @ 0x140805438
 * Callers:
 *     BiExportBcdObjects @ 0x1408056A4 (BiExportBcdObjects.c)
 *     BiBindEfiEntries @ 0x140A94DD4 (BiBindEfiEntries.c)
 * Callees:
 *     BiAddBootEntry @ 0x140804DD4 (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x140805084 (BiCreateBootEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140805C44 (BiUpdateObjectReferenceInEfiEntry.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BiUpdateEfiEntry @ 0x140A25220 (BiUpdateEfiEntry.c)
 *     BiSetRegistryValue @ 0x140A25BA8 (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     BiGetSavedBootEntry @ 0x140A284C4 (BiGetSavedBootEntry.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateEfiEntry(void *a1, const GUID *a2)
{
  _BOOT_ENTRY *v3; // rdi
  NTSTATUS v5; // eax
  HANDLE v6; // r14
  int SavedBootEntry; // ebx
  ULONG v8; // eax
  ULONG v9; // eax
  ULONG Id; // [rsp+68h] [rbp+38h] BYREF
  PVOID P; // [rsp+70h] [rbp+40h] BYREF
  HANDLE BcdObjectHandle; // [rsp+78h] [rbp+48h] BYREF

  Id = 0;
  BcdObjectHandle = 0LL;
  v3 = 0LL;
  P = 0LL;
  v5 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v6 = BcdObjectHandle;
  SavedBootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_16;
  if ( (a2[3].Data1 & 2) == 0 )
  {
    SavedBootEntry = BiCreateBootEntry(BcdObjectHandle, &P);
    if ( SavedBootEntry >= 0 )
    {
      v3 = (_BOOT_ENTRY *)P;
      SavedBootEntry = BiAddBootEntry((PBOOT_ENTRY)P, &Id);
      if ( SavedBootEntry >= 0 )
      {
        BiLogMessage(2LL, L"Created new boot entry 0x%x", Id);
        v3->Id = Id;
        v9 = Id;
        a2[3].Data1 |= 0x21u;
        a2[2].Data1 = v9;
        *(_QWORD *)a2[2].Data4 = v3;
        SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", L"Description");
        if ( SavedBootEntry >= 0 )
        {
          a2[3].Data1 |= 2u;
          goto LABEL_17;
        }
      }
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  SavedBootEntry = BiGetSavedBootEntry(BcdObjectHandle, &P);
  if ( SavedBootEntry < 0 )
  {
LABEL_15:
    v3 = (_BOOT_ENTRY *)P;
    goto LABEL_16;
  }
  v3 = (_BOOT_ENTRY *)P;
  if ( (a2[3].Data1 & 8) == 0 )
  {
    SavedBootEntry = BiUpdateObjectReferenceInEfiEntry(P, v6);
    if ( SavedBootEntry >= 0 )
    {
      a2[3].Data1 |= 0x20u;
      goto LABEL_7;
    }
LABEL_16:
    BiLogMessage(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)SavedBootEntry);
    goto LABEL_17;
  }
LABEL_7:
  SavedBootEntry = BiAddBootEntry(v3, &Id);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  BiLogMessage(2LL, L"Created boot entry 0x%x using cached variable", Id);
  v3->Id = Id;
  v8 = Id;
  a2[3].Data1 |= 1u;
  a2[2].Data1 = v8;
  *(_QWORD *)a2[2].Data4 = v3;
  SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", L"Description");
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  SavedBootEntry = BiUpdateEfiEntry(a1, a2);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (a2[3].Data1 & 1) == 0 && v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)SavedBootEntry;
}
