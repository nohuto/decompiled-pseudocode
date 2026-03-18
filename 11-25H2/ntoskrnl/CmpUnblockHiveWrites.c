/*
 * XREFs of CmpUnblockHiveWrites @ 0x140A445B0
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x140878260 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A5D438 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpDereferenceHive @ 0x1408484B4 (CmpDereferenceHive.c)
 *     CmpGetNextHive @ 0x1408484DC (CmpGetNextHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
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
