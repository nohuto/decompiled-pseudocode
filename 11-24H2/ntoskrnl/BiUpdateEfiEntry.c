/*
 * XREFs of BiUpdateEfiEntry @ 0x1409A7B20
 * Callers:
 *     BiCreateEfiEntry @ 0x1408156F0 (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x14081595C (BiExportBcdObjects.c)
 * Callees:
 *     BiSpacesUpdatePhysicalDevicePath @ 0x140698AF0 (BiSpacesUpdatePhysicalDevicePath.c)
 *     BiModifyBootEntry @ 0x140815CAC (BiModifyBootEntry.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BiGetElement @ 0x1409A6208 (BiGetElement.c)
 *     BiCreateMergedBootEntry @ 0x1409A7CDC (BiCreateMergedBootEntry.c)
 *     BiAreBootEntriesEqual @ 0x140AB1414 (BiAreBootEntriesEqual.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateEfiEntry(void *a1, const GUID *a2)
{
  PVOID v3; // r12
  _OWORD *v4; // r15
  void *v5; // r14
  NTSTATUS v6; // ebx
  int MergedBootEntry; // eax
  _BOOT_ENTRY *v9; // rsi
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-30h] BYREF
  _OWORD *v11; // [rsp+38h] [rbp-28h] BYREF
  void *v12; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID v14[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID v15; // [rsp+A8h] [rbp+48h] BYREF
  ULONG v16; // [rsp+B0h] [rbp+50h] BYREF
  ULONG v17; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(v15) = 0;
  v16 = 0;
  v17 = 0;
  v3 = 0LL;
  P = 0LL;
  v4 = 0LL;
  v11 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v14[0] = 0LL;
  BcdObjectHandle = 0LL;
  v6 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  if ( v6 < 0 )
    goto LABEL_20;
  BiGetElement(BcdObjectHandle, 0x12000004u, &P, (ULONG *)&v15);
  if ( (a2[3].Data1 & 8) == 0 )
  {
    BiGetElement(BcdObjectHandle, 0x11000001u, &v11, &v16);
    if ( (int)BiSpacesUpdatePhysicalDevicePath(&v11) < 0 )
      BiLogMessage();
    BiGetElement(BcdObjectHandle, 0x12000002u, &v12, &v17);
    v4 = v11;
    v5 = v12;
  }
  v3 = P;
  v15 = *(PVOID *)a2[2].Data4;
  MergedBootEntry = BiCreateMergedBootEntry(v15, P, v4, v5, v14);
  v6 = MergedBootEntry;
  if ( MergedBootEntry == -1073741766 )
  {
    v6 = 0;
    goto LABEL_5;
  }
  if ( MergedBootEntry < 0 )
    goto LABEL_20;
  v9 = (_BOOT_ENTRY *)v14[0];
  if ( !(unsigned __int8)BiAreBootEntriesEqual(v15, v14[0]) )
  {
    v6 = BiModifyBootEntry(v9);
    if ( v6 < 0 )
    {
      ExFreePoolWithTag(v9, 0x4B444342u);
LABEL_20:
      BiLogMessage();
      goto LABEL_5;
    }
  }
  ExFreePoolWithTag(v15, 0x4B444342u);
  *(_QWORD *)a2[2].Data4 = v9;
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
