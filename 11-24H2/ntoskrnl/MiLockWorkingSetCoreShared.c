/*
 * XREFs of MiLockWorkingSetCoreShared @ 0x1402DF160
 * Callers:
 *     MiRemoveWsleList @ 0x140231F70 (MiRemoveWsleList.c)
 *     MiRemoveWsle @ 0x1402C8340 (MiRemoveWsle.c)
 *     MiCountWslesInPageTableRange @ 0x1402E3F20 (MiCountWslesInPageTableRange.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetCoreShared(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rcx
  __int64 result; // rax
  int v4; // ett

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v2 = &unk_140E38780;
  else
    v2 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v2);
    LODWORD(result) = *v2 & 0x7FFFFFFF;
    while ( 1 )
    {
      v4 = result;
      result = (unsigned int)_InterlockedCompareExchange(v2, result + 1, result);
      if ( v4 == (_DWORD)result )
        break;
      if ( (int)result < 0 )
        return ExpWaitForSpinLockSharedAndAcquire(v2, 0xFFu);
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    return ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, a2);
  }
  return result;
}
