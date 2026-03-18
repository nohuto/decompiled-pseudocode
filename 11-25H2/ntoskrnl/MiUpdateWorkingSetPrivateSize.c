/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x1402FD330
 * Callers:
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall MiUpdateWorkingSetPrivateSize(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  volatile signed __int32 *v4; // rdi
  _DWORD *v9; // rcx
  signed __int32 v10; // eax
  __int64 v11; // rdx
  signed __int32 v12; // ett
  char result; // al
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (volatile signed __int32 *)&unk_140E38540;
  if ( !a4 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v9 = &unk_140E38540;
    else
      v9 = (_DWORD *)(a1 + 256);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v9);
      v10 = *v9 & 0x7FFFFFFF;
      while ( 1 )
      {
        v11 = (unsigned int)(v10 + 1);
        v12 = v10;
        v10 = _InterlockedCompareExchange(v9, v11, v10);
        if ( v12 == v10 )
          break;
        if ( v10 < 0 )
        {
          LOBYTE(v11) = -1;
          ExpWaitForSpinLockSharedAndAcquire(v9, v11);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, 0xFFu);
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 152), a3);
  result = 0;
  if ( a2 < 0xFFFFF68000000000uLL || (result = -1, a2 > 0xFFFFF6FFFFFFFFFFuLL) )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 136), a3);
  if ( !a4 )
  {
    result = *(_DWORD *)(a1 + 184) & 0xF;
    if ( result != 1 )
      v4 = (volatile signed __int32 *)(a1 + 256);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = PopHibernateInProgress, PopHibernateInProgress) )
    {
      _InterlockedAnd(v4, 0xBFFFFFFF);
      _InterlockedDecrement(v4);
    }
    else
    {
      return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
    }
  }
  return result;
}
