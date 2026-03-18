/*
 * XREFs of BiUpdateEfiEntry @ 0x1409C14D0
 * Callers:
 *     BiCreateEfiEntry @ 0x140814FB0 (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x14081521C (BiExportBcdObjects.c)
 * Callees:
 *     BiSpacesUpdatePhysicalDevicePath @ 0x140697A70 (BiSpacesUpdatePhysicalDevicePath.c)
 *     BiModifyBootEntry @ 0x14081556C (BiModifyBootEntry.c)
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BcdCloseObject @ 0x1409BF5DC (BcdCloseObject.c)
 *     BiGetElement @ 0x1409BFBB8 (BiGetElement.c)
 *     BiCreateMergedBootEntry @ 0x1409C168C (BiCreateMergedBootEntry.c)
 *     BiAreBootEntriesEqual @ 0x140AB713C (BiAreBootEntriesEqual.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateEfiEntry(__int64 a1, __int64 a2)
{
  PVOID v3; // r12
  _OWORD *v4; // r15
  void *v5; // r14
  int v6; // ebx
  int MergedBootEntry; // eax
  PVOID v9; // rsi
  void *v10; // [rsp+30h] [rbp-30h] BYREF
  _OWORD *v11; // [rsp+38h] [rbp-28h] BYREF
  void *v12; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID v14[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID v15; // [rsp+A8h] [rbp+48h] BYREF
  int v16; // [rsp+B0h] [rbp+50h] BYREF
  int v17; // [rsp+B8h] [rbp+58h] BYREF

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
  v10 = 0LL;
  v6 = BcdOpenObject(a1, (unsigned int *)(a2 + 16), &v10);
  if ( v6 < 0 )
    goto LABEL_20;
  BiGetElement((__int64)v10, 0x12000004u, &P, &v15);
  if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
  {
    BiGetElement((__int64)v10, 0x11000001u, &v11, &v16);
    if ( (int)BiSpacesUpdatePhysicalDevicePath(&v11) < 0 )
      BiLogMessage();
    BiGetElement((__int64)v10, 0x12000002u, &v12, &v17);
    v4 = v11;
    v5 = v12;
  }
  v3 = P;
  v15 = *(PVOID *)(a2 + 40);
  MergedBootEntry = BiCreateMergedBootEntry(v15, P, v4, v5, v14);
  v6 = MergedBootEntry;
  if ( MergedBootEntry == -1073741766 )
  {
    v6 = 0;
    goto LABEL_5;
  }
  if ( MergedBootEntry < 0 )
    goto LABEL_20;
  v9 = v14[0];
  if ( !(unsigned __int8)BiAreBootEntriesEqual(v15, v14[0]) )
  {
    v6 = BiModifyBootEntry((__int64)v9);
    if ( v6 < 0 )
    {
      ExFreePoolWithTag(v9, 0x4B444342u);
LABEL_20:
      BiLogMessage();
      goto LABEL_5;
    }
  }
  ExFreePoolWithTag(v15, 0x4B444342u);
  *(_QWORD *)(a2 + 40) = v9;
LABEL_5:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v10 )
    BcdCloseObject(v10);
  return (unsigned int)v6;
}
