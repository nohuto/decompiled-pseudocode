/*
 * XREFs of ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140002E50
 * Callers:
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x140002C40 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z @ 0x140002D88 (-SendSimpleAsyncRequest@CPortClient@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPortClient::CheckStatus(CPortClient *this, unsigned int a2)
{
  if ( a2 == -1073741769 || a2 == -1073741229 )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 2, 1, 0);
  return a2;
}
