/*
 * XREFs of BiBindEfiEntries @ 0x140A9AAF4
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1409C1ADC (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BiIsPortableWorkspaceBoot @ 0x1408148AC (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140814B14 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140814FB0 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x14081519C (BiDeleteBootEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1408155D8 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x1408157BC (BiUpdateBcdObject.c)
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BcdDeleteObject @ 0x1409C2520 (BcdDeleteObject.c)
 *     BiBindEfiEntryToBcdObject @ 0x140ABC2E0 (BiBindEfiEntryToBcdObject.c)
 */

__int64 __fastcall BiBindEfiEntries(__int64 a1, __int64 *a2)
{
  int updated; // edi
  __int64 v3; // rbx
  int v6; // eax
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  updated = 0;
  v3 = *a2;
  if ( (__int64 *)*a2 != a2 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v3 + 48);
      if ( (v6 & 0x10) != 0 )
        break;
      if ( (v6 & 1) != 0 )
      {
        if ( (v6 & 0x24) == 0x20 && !BiIsPortableWorkspaceBoot() )
        {
          if ( (int)BiDeleteBootEntry(*(_DWORD *)(v3 + 32)) < 0 )
            goto LABEL_21;
          goto LABEL_6;
        }
        updated = BiBindEfiEntryToBcdObject(a1, v3);
        if ( updated < 0 || (updated = BiUpdateBcdObject(a1, v3), updated < 0) )
        {
LABEL_23:
          BiLogMessage();
          return (unsigned int)updated;
        }
      }
      else if ( (v6 & 4) != 0 )
      {
        if ( (v6 & 8) != 0 )
        {
          updated = BcdOpenObject(a1, (unsigned int *)(v3 + 16), &v8);
          if ( updated < 0 )
            goto LABEL_23;
          BcdDeleteObject(v8);
          *(_DWORD *)(v3 + 48) &= 0xFFFFFFF9;
        }
        else if ( !BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(a1, v3) >= 0 )
        {
          BiAddBootEntryToNvramDisplayOrder(v3);
        }
      }
LABEL_21:
      v3 = *(_QWORD *)v3;
      if ( (__int64 *)v3 == a2 )
        return (unsigned int)updated;
    }
    if ( (v6 & 1) == 0 )
      goto LABEL_21;
    BiLogMessage();
    if ( (int)BiDeleteBootEntry(*(_DWORD *)(v3 + 32)) < 0 )
      goto LABEL_21;
    *(_DWORD *)(v3 + 48) &= ~1u;
LABEL_6:
    BiRemoveBootEntryFromNvramDisplayOrder(v3);
    goto LABEL_21;
  }
  return (unsigned int)updated;
}
