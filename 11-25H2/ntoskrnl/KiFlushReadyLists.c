/*
 * XREFs of KiFlushReadyLists @ 0x140352060
 * Callers:
 *     KiFlushSharedReadyQueueReadyLists @ 0x140351F9C (KiFlushSharedReadyQueueReadyLists.c)
 *     KiFlushPrcbReadyLists @ 0x140351FF0 (KiFlushPrcbReadyLists.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertDeferredReadyList @ 0x140352190 (KiInsertDeferredReadyList.c)
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x140352650 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 */

void __fastcall KiFlushReadyLists(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  int v8; // edi
  unsigned int v9; // esi
  unsigned int v10; // eax
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  _QWORD *v15; // rdx

  v5 = a3;
  if ( a4 )
  {
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 768), 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
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
      while ( *(_QWORD *)(a4 + 768) );
    }
  }
  v9 = *a2;
  if ( *a2 )
  {
    do
    {
      _BitScanForward(&v10, v9);
      v11 = (_QWORD *)(a1 + 16LL * v10);
      v9 &= v9 - 1;
      v12 = (_QWORD *)*v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      v14 = v12;
      v12[1] = v13;
      v11[1] = v11;
      *v11 = v11;
      do
      {
        if ( a4 )
        {
          LOBYTE(a3) = 1;
          KiUpdateSoftParkElectionStatisticsOnRemoval(a4, v12 - 27, a3);
        }
        *((_DWORD *)v12 - 25) |= 2u;
        v15 = v12 - 27;
        v12 = (_QWORD *)*v12;
        KiInsertDeferredReadyList(v5, v15);
      }
      while ( v12 != v14 );
    }
    while ( v9 );
    *a2 = 0;
  }
  if ( a4 )
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 768), 0LL);
}
