/*
 * XREFs of BiBindEfiEntries @ 0x140A96064
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1409A812C (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BiIsPortableWorkspaceBoot @ 0x140814FEC (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140815254 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x1408156F0 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x1408158DC (BiDeleteBootEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140815D18 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BcdDeleteObject @ 0x1409A8B70 (BcdDeleteObject.c)
 *     BiBindEfiEntryToBcdObject @ 0x140AB7300 (BiBindEfiEntryToBcdObject.c)
 */

__int64 __fastcall BiBindEfiEntries(HANDLE BcdStoreHandle, const GUID **a2)
{
  int updated; // edi
  const GUID *v3; // rbx
  unsigned int Data1; // eax
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  BcdObjectHandle = 0LL;
  updated = 0;
  v3 = *a2;
  if ( *a2 != (const GUID *)a2 )
  {
    while ( 1 )
    {
      Data1 = v3[3].Data1;
      if ( (Data1 & 0x10) != 0 )
        break;
      if ( (Data1 & 1) != 0 )
      {
        if ( (Data1 & 0x24) == 0x20 && !BiIsPortableWorkspaceBoot() )
        {
          if ( (int)BiDeleteBootEntry(v3[2].Data1) < 0 )
            goto LABEL_21;
          goto LABEL_6;
        }
        updated = BiBindEfiEntryToBcdObject(BcdStoreHandle, v3);
        if ( updated < 0 || (updated = BiUpdateBcdObject(BcdStoreHandle, v3), updated < 0) )
        {
LABEL_23:
          BiLogMessage();
          return (unsigned int)updated;
        }
      }
      else if ( (Data1 & 4) != 0 )
      {
        if ( (Data1 & 8) != 0 )
        {
          updated = BcdOpenObject(BcdStoreHandle, v3 + 1, &BcdObjectHandle);
          if ( updated < 0 )
            goto LABEL_23;
          BcdDeleteObject(BcdObjectHandle);
          v3[3].Data1 &= 0xFFFFFFF9;
        }
        else if ( !BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(BcdStoreHandle, v3) >= 0 )
        {
          BiAddBootEntryToNvramDisplayOrder((__int64)v3);
        }
      }
LABEL_21:
      v3 = *(const GUID **)&v3->Data1;
      if ( v3 == (const GUID *)a2 )
        return (unsigned int)updated;
    }
    if ( (Data1 & 1) == 0 )
      goto LABEL_21;
    BiLogMessage();
    if ( (int)BiDeleteBootEntry(v3[2].Data1) < 0 )
      goto LABEL_21;
    v3[3].Data1 &= ~1u;
LABEL_6:
    BiRemoveBootEntryFromNvramDisplayOrder((__int64)v3);
    goto LABEL_21;
  }
  return (unsigned int)updated;
}
