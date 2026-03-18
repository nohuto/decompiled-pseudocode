/*
 * XREFs of CmpUnblockHiveWrites @ 0x140A496EC
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1408745A0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A5F1F8 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpGetNextHive @ 0x14084425C (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x1408443C0 (CmpDereferenceHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BB9A98 (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpUnblockHiveWrites(volatile signed __int32 *a1, int a2, volatile signed __int32 *a3)
{
  volatile signed __int32 *v5; // rbx
  __int64 *NextHive; // rax

  v5 = a1;
  if ( a1 )
  {
    HvUnlockHiveFlusherExclusive(a1);
  }
  else
  {
    while ( 1 )
    {
      NextHive = CmpGetNextHive(a1);
      v5 = (volatile signed __int32 *)NextHive;
      if ( !a2 || (a2 & (_DWORD)NextHive[514]) == a2 || NextHive == (__int64 *)CmpMasterHive )
      {
        HvUnlockHiveFlusherExclusive(NextHive);
        CmpDereferenceHive(v5);
      }
      if ( v5 == a3 )
        break;
      a1 = v5;
    }
  }
  return CmpDereferenceHive(v5);
}
