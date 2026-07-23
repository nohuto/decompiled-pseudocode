/*
 * XREFs of BiUpdateEfiEntry @ 0x140A25220
 * Callers:
 *     BiCreateEfiEntry @ 0x140805438 (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x1408056A4 (BiExportBcdObjects.c)
 * Callees:
 *     BiSpacesUpdatePhysicalDevicePath @ 0x14068C720 (BiSpacesUpdatePhysicalDevicePath.c)
 *     BiModifyBootEntry @ 0x1408059F4 (BiModifyBootEntry.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BiCreateMergedBootEntry @ 0x140A253DC (BiCreateMergedBootEntry.c)
 *     BiGetElement @ 0x140A256B8 (BiGetElement.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     BiAreBootEntriesEqual @ 0x140AB22A4 (BiAreBootEntriesEqual.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateEfiEntry(void *a1, const GUID *a2)
{
  PVOID v3; // r12
  _OWORD *v4; // r15
  void *v5; // r14
  NTSTATUS v6; // ebx
  int MergedBootEntry; // eax
  int updated; // eax
  _BOOT_ENTRY *v10; // rsi
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-30h] BYREF
  _OWORD *v12; // [rsp+38h] [rbp-28h] BYREF
  void *v13; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+48h] [rbp-18h]
  PVOID v15[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID v16; // [rsp+A8h] [rbp+48h]

  v3 = 0LL;
  P = 0LL;
  v4 = 0LL;
  v12 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  v15[0] = 0LL;
  BcdObjectHandle = 0LL;
  v6 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  if ( v6 < 0 )
    goto LABEL_20;
  BiGetElement(BcdObjectHandle, 0x12000004u);
  if ( (a2[3].Data1 & 8) == 0 )
  {
    BiGetElement(BcdObjectHandle, 0x11000001u);
    updated = BiSpacesUpdatePhysicalDevicePath(&v12);
    if ( updated < 0 )
      BiLogMessage(3LL, L"BiSpacesUpdatePhysicalDevicePath failed %x", (unsigned int)updated);
    BiGetElement(BcdObjectHandle, 0x12000002u);
    v4 = v12;
    v5 = v13;
  }
  v3 = P;
  v16 = *(PVOID *)a2[2].Data4;
  MergedBootEntry = BiCreateMergedBootEntry(v16, P, v4, v5, v15);
  v6 = MergedBootEntry;
  if ( MergedBootEntry == -1073741766 )
  {
    v6 = 0;
    goto LABEL_5;
  }
  if ( MergedBootEntry < 0 )
    goto LABEL_20;
  v10 = (_BOOT_ENTRY *)v15[0];
  if ( !(unsigned __int8)BiAreBootEntriesEqual(v16, v15[0]) )
  {
    v6 = BiModifyBootEntry(v10);
    if ( v6 < 0 )
    {
      ExFreePoolWithTag(v10, 0x4B444342u);
LABEL_20:
      BiLogMessage(4LL, L"BiUpdateEfiEntry failed %x", (unsigned int)v6);
      goto LABEL_5;
    }
  }
  ExFreePoolWithTag(v16, 0x4B444342u);
  *(_QWORD *)a2[2].Data4 = v10;
LABEL_5:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)v6;
}
