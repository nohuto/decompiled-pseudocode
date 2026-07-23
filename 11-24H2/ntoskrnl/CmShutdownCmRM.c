/*
 * XREFs of CmShutdownCmRM @ 0x140A00C24
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BB3C0 (CmpTryToRundownHive.c)
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpStopRMLog @ 0x140A00A5C (CmpStopRMLog.c)
 *     CmpRunDownCmRM @ 0x140A00C70 (CmpRunDownCmRM.c)
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
        CmpStopRMLog(a1);
    }
  }
  LOBYTE(a2) = v2;
  return CmpRunDownCmRM(a1, a2);
}
