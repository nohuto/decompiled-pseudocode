/*
 * XREFs of CmpBlockHiveWrites @ 0x140A2BEB0
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1408745A0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A5F1F8 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     CmpGetNextHive @ 0x14084425C (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x1408443C0 (CmpDereferenceHive.c)
 *     CmpReferenceHive @ 0x140844680 (CmpReferenceHive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BB9AB4 (HvLockHiveFlusherExclusive.c)
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
