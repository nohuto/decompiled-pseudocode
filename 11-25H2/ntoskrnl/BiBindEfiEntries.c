/*
 * XREFs of BiBindEfiEntries @ 0x140A94DD4
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x140A27E30 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BiIsPortableWorkspaceBoot @ 0x140804D34 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140804F9C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140805438 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x140805624 (BiDeleteBootEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140805A60 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BcdDeleteObject @ 0x140A24A18 (BcdDeleteObject.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiBindEfiEntryToBcdObject @ 0x140AB8160 (BiBindEfiEntryToBcdObject.c)
 *     BiUpdateBcdObject @ 0x140AD63A8 (BiUpdateBcdObject.c)
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
