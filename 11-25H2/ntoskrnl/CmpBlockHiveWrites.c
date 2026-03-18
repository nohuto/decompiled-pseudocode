/*
 * XREFs of CmpBlockHiveWrites @ 0x140A2224C
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x140878260 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A5D438 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpDereferenceHive @ 0x1408484B4 (CmpDereferenceHive.c)
 *     CmpGetNextHive @ 0x1408484DC (CmpGetNextHive.c)
 *     CmpReferenceHive @ 0x140848B50 (CmpReferenceHive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(volatile signed __int32 *a1, int a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *i; // rcx
  __int64 *NextHive; // rax
  volatile signed __int32 *v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    NextHive = CmpGetNextHive(i);
    v8 = (volatile signed __int32 *)NextHive;
    if ( !NextHive )
      break;
    if ( a1 == (volatile signed __int32 *)NextHive || !a1 )
    {
      if ( !a2 || (a2 & (_DWORD)NextHive[514]) == a2 || NextHive == (__int64 *)CmpMasterHive )
      {
        CmpReferenceHive((__int64)NextHive);
        if ( a3 )
          *a3 = v8;
        HvLockHiveFlusherExclusive(v8);
      }
      if ( a1 == v8 )
      {
        CmpDereferenceHive(v8);
        return 0LL;
      }
    }
  }
  return a1 != 0LL ? 0xC0000034 : 0;
}
