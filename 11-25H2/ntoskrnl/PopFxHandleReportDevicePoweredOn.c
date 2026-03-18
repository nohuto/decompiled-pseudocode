/*
 * XREFs of PopFxHandleReportDevicePoweredOn @ 0x140356360
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x140356340 (PoFxReportDevicePoweredOn.c)
 *     DifPoFxReportDevicePoweredOnWrapper @ 0x14062BA30 (DifPoFxReportDevicePoweredOnWrapper.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     ExTryQueueWorkItem @ 0x140282120 (ExTryQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     PoFxIdleComponent @ 0x14034C3C0 (PoFxIdleComponent.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     ExInterlockedInsertTailList @ 0x140354630 (ExInterlockedInsertTailList.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x14035610C (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     PopFxGetDeviceDStateReason @ 0x140357078 (PopFxGetDeviceDStateReason.c)
 *     PopPepDeviceDState @ 0x140357170 (PopPepDeviceDState.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140358A38 (PopDiagTraceFxDevicePowerState.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140359474 (PopFxCompleteDevicePowerRequired.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     PopSystemIrpCompletion @ 0x140B5A4B0 (PopSystemIrpCompletion.c)
 */

void __fastcall PopFxHandleReportDevicePoweredOn(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // r14
  unsigned int DeviceDStateReason; // eax
  __int64 v4; // r8
  KIRQL v5; // al
  __int64 v6; // rsi
  int v7; // edi
  KIRQL v8; // r12
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int v13; // r8d
  __int64 v14; // rdx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  unsigned int v17; // eax
  __int64 v18; // r15
  unsigned int i; // ebp
  signed __int32 v20; // eax
  signed __int32 v21; // ett

  v1 = *(_QWORD *)(BugCheckParameter3 + 48);
  if ( !KeGetCurrentIrql() )
    goto LABEL_2;
  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v11 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v11, v11);
  }
  while ( v12 != v11 );
  if ( (v11 & 2) != 0 )
  {
    if ( !(unsigned __int8)ExTryQueueWorkItem(BugCheckParameter3 + 1248, 0x30u) )
    {
      ExInterlockedInsertTailList(&stru_140F0D1D0, (PLIST_ENTRY)(BugCheckParameter3 + 1248), &Lock);
      KeReleaseSemaphore(&stru_140F0D1E0, 0, 1, 0);
    }
  }
  else
  {
LABEL_2:
    _m_prefetchw((const void *)(BugCheckParameter3 + 32));
    if ( (_InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFFFFD) & 2) != 0 )
    {
      DeviceDStateReason = PopFxGetDeviceDStateReason(BugCheckParameter3);
      LOBYTE(v4) = 1;
      PopPepDeviceDState(*(_QWORD *)(BugCheckParameter3 + 56), 1LL, v4, DeviceDStateReason);
      PopDiagTraceFxDevicePowerState(v1, 1LL);
    }
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    v6 = 0LL;
    v7 = _InterlockedExchange((volatile __int32 *)(v1 + 124), 0);
    v8 = v5;
    if ( v7 > 0 )
    {
      v13 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 48) + 120LL);
      if ( v7 > v13 )
        PopFxBugCheck(0x602uLL, v1, v7, 0LL);
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFF7FE);
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 48) + 120LL) = v13 - v7;
      v14 = *(_QWORD *)(BugCheckParameter3 + 48);
      _m_prefetchw((const void *)(v14 + 296));
      v15 = *(_DWORD *)(v14 + 296);
      do
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 296), v15, v15);
      }
      while ( v16 != v15 );
      if ( (v15 & 4) != 0 )
      {
        v17 = *(_DWORD *)(BugCheckParameter3 + 868);
        v18 = (unsigned int)v7;
        do
        {
          for ( i = 0; i < v17; ++i )
          {
            PoFxIdleComponent(BugCheckParameter3, i);
            v17 = *(_DWORD *)(BugCheckParameter3 + 868);
          }
          --v18;
        }
        while ( v18 );
      }
      _m_prefetchw((const void *)(BugCheckParameter3 + 32));
      v20 = *(_DWORD *)(BugCheckParameter3 + 32);
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v20 & 0xFFFFFBFF, v20);
      }
      while ( v21 != v20 );
      if ( (v20 & 0x400) != 0 )
        v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 48) + 280LL);
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88), v8);
    if ( v6 )
      PopSystemIrpCompletion(0LL, v6, *(_QWORD *)(v6 + 72LL * *(char *)(v6 + 66) + 200));
    if ( !v7 )
    {
      _m_prefetchw((const void *)(BugCheckParameter3 + 32));
      v9 = *(_DWORD *)(BugCheckParameter3 + 32);
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v9, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x2000) != 0 )
        PopFxDerefAndCompleteDirectedPowerTransition(BugCheckParameter3);
      else
        PopFxCompleteDevicePowerRequired(BugCheckParameter3);
    }
  }
}
