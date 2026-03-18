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

__int64 __fastcall BiCreateEfiEntry(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rdi
  int v5; // eax
  __int64 v6; // r14
  int SavedBootEntry; // ebx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v11; // [rsp+68h] [rbp+38h] BYREF
  PVOID P; // [rsp+70h] [rbp+40h] BYREF
  __int64 v13; // [rsp+78h] [rbp+48h] BYREF

  v11 = 0;
  v13 = 0LL;
  v3 = 0LL;
  P = 0LL;
  v5 = BcdOpenObject(a1, a2 + 16, &v13);
  v6 = v13;
  SavedBootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_16;
  if ( (*(_DWORD *)(a2 + 48) & 2) == 0 )
  {
    SavedBootEntry = BiCreateBootEntry(v13, &P);
    if ( SavedBootEntry >= 0 )
    {
      v3 = P;
      SavedBootEntry = BiAddBootEntry((__int64)P, (__int64)&v11);
      if ( SavedBootEntry >= 0 )
      {
        BiLogMessage(2LL, L"Created new boot entry 0x%x", v11);
        v3[2] = v11;
        v9 = v11;
        *(_DWORD *)(a2 + 48) |= 0x21u;
        *(_DWORD *)(a2 + 32) = v9;
        *(_QWORD *)(a2 + 40) = v3;
        SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", L"Description");
        if ( SavedBootEntry >= 0 )
        {
          *(_DWORD *)(a2 + 48) |= 2u;
          goto LABEL_17;
        }
      }
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  SavedBootEntry = BiGetSavedBootEntry(v13, &P);
  if ( SavedBootEntry < 0 )
  {
LABEL_15:
    v3 = P;
    goto LABEL_16;
  }
  v3 = P;
  if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
  {
    SavedBootEntry = BiUpdateObjectReferenceInEfiEntry(P, v6);
    if ( SavedBootEntry >= 0 )
    {
      *(_DWORD *)(a2 + 48) |= 0x20u;
      goto LABEL_7;
    }
LABEL_16:
    BiLogMessage(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)SavedBootEntry);
    goto LABEL_17;
  }
LABEL_7:
  SavedBootEntry = BiAddBootEntry((__int64)v3, (__int64)&v11);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  BiLogMessage(2LL, L"Created boot entry 0x%x using cached variable", v11);
  v3[2] = v11;
  v8 = v11;
  *(_DWORD *)(a2 + 48) |= 1u;
  *(_DWORD *)(a2 + 32) = v8;
  *(_QWORD *)(a2 + 40) = v3;
  SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", L"Description");
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  SavedBootEntry = BiUpdateEfiEntry(a1, a2);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (*(_DWORD *)(a2 + 48) & 1) == 0 && v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)SavedBootEntry;
}
