/*
 * XREFs of CmShutdownCmRM @ 0x140865B04
 * Callers:
 *     CmpTryToRundownHive @ 0x14036DA50 (CmpTryToRundownHive.c)
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpRunDownCmRM @ 0x140865B50 (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x140A843A4 (CmpStopRMLog.c)
 */

__int64 __fastcall CmShutdownCmRM(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 64) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
      if ( !*(_DWORD *)(a1 + 64) )
        CmpStopRMLog();
    }
  }
  LOBYTE(a2) = v2;
  return CmpRunDownCmRM(a1, a2);
}
