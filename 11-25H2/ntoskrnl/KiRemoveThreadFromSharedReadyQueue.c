/*
 * XREFs of KiRemoveThreadFromSharedReadyQueue @ 0x1403527C0
 * Callers:
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140352764 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSetThreadSchedulingGroup @ 0x1403A9BE8 (KiSetThreadSchedulingGroup.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiScanSharedReadyThreads @ 0x140466DC8 (KiScanSharedReadyThreads.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiRemoveThreadFromSharedReadyQueue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 result; // rax
  int v9; // esi
  __int64 v10; // rcx

  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
  v5 = (_QWORD *)(a2 + 216);
  v6 = (_QWORD *)*v5;
  v7 = (_QWORD *)v5[1];
  if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v7 != v5 )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  if ( v7 == v6 )
    *(_DWORD *)(a1 + 8) ^= 1 << a3;
  --*(_DWORD *)(a1 + 12);
  if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v6) && !*(_DWORD *)(a1 + 12) )
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 720) + 392LL), ~*(_QWORD *)(a1 + 712));
  *(_QWORD *)(a1 + 16) -= *(unsigned int *)(a2 + 1784);
  result = *(_QWORD *)(a1 + 776);
  if ( *(_QWORD *)(a2 + 1792) == result )
  {
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 768), 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 768) );
    }
    result = *(_QWORD *)(a1 + 776);
    if ( *(_QWORD *)(a2 + 1792) == result )
    {
      --*(_DWORD *)(a1 + 784);
      *(_QWORD *)(a1 + 792) -= *(unsigned int *)(a2 + 1788);
      if ( !*(_DWORD *)(a1 + 784) )
        *(_QWORD *)(a1 + 1760) = 0LL;
      v10 = *(unsigned __int8 *)(a2 + 1829)
          + 8 * (*(unsigned __int8 *)(a2 + 1830) + 2LL * *(unsigned __int8 *)(a2 + 1828));
      result = *(unsigned int *)(a2 + 1788);
      *(_QWORD *)(a1 + 8 * v10 + 864) -= result;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 768), 0LL);
  }
  return result;
}
