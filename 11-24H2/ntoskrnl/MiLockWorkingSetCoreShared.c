/*
 * XREFs of MiLockWorkingSetCoreShared @ 0x140240A40
 * Callers:
 *     MiRemoveWsle @ 0x1402007F4 (MiRemoveWsle.c)
 *     MiRemoveWsleList @ 0x140303100 (MiRemoveWsleList.c)
 *     MiCountWslesInPageTableRange @ 0x140392E70 (MiCountWslesInPageTableRange.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetCoreShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // ett

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v4 = &unk_140E388C0;
  else
    v4 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v4);
    LODWORD(result) = *v4 & 0x7FFFFFFF;
    while ( 1 )
    {
      v6 = (unsigned int)(result + 1);
      v7 = result;
      result = (unsigned int)_InterlockedCompareExchange(v4, v6, result);
      if ( v7 == (_DWORD)result )
        break;
      if ( (int)result < 0 )
      {
        LOBYTE(v6) = -1;
        return ExpWaitForSpinLockSharedAndAcquire(v4, v6, a3, a4);
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    return ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v4, a2);
  }
  return result;
}
