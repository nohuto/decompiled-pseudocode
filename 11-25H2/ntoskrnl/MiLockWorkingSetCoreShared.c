/*
 * XREFs of MiLockWorkingSetCoreShared @ 0x1402146E0
 * Callers:
 *     MiRemoveWsleList @ 0x14024AF10 (MiRemoveWsleList.c)
 *     MiCountWslesInPageTableRange @ 0x140385CD0 (MiCountWslesInPageTableRange.c)
 *     MiRemoveWsle @ 0x14038B0E4 (MiRemoveWsle.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 */

__int64 __fastcall MiLockWorkingSetCoreShared(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // ett

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v1 = &unk_140E38540;
  else
    v1 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    return ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v1, 0xFFu);
  _m_prefetchw(v1);
  LODWORD(result) = *v1 & 0x7FFFFFFF;
  while ( 1 )
  {
    v3 = (unsigned int)(result + 1);
    v4 = result;
    result = (unsigned int)_InterlockedCompareExchange(v1, v3, result);
    if ( v4 == (_DWORD)result )
      break;
    if ( (int)result < 0 )
    {
      LOBYTE(v3) = -1;
      return ExpWaitForSpinLockSharedAndAcquire(v1, v3);
    }
  }
  return result;
}
