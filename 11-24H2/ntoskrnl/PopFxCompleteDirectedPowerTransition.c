/*
 * XREFs of PopFxCompleteDirectedPowerTransition @ 0x1404F756C
 * Callers:
 *     PopFxHandleDirectedPowerTransition @ 0x1404B3CDC (PopFxHandleDirectedPowerTransition.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1404CD190 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1402BEC64 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1402F1298 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x1404CF918 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x1405CEA4C (PopFxEnforceDirectedPowerTransition.c)
 */

LONG __fastcall PopFxCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  KIRQL v8; // r12
  unsigned __int8 v9; // r9
  unsigned __int32 v10; // eax
  unsigned __int32 v11; // ett
  int v12; // esi
  __int64 v13; // r14
  unsigned int v14; // edi

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v4 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 0x2000) == 0 )
    goto LABEL_16;
  _m_prefetchw((const void *)(BugCheckParameter3 + 1200));
  v6 = *(_DWORD *)(BugCheckParameter3 + 1200);
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 1200), v6, v6);
  }
  while ( v7 != v6 );
  if ( v6 )
    goto LABEL_16;
  PopFxDisableWorkOrderWatchdog((__int64 *)(BugCheckParameter3 + 1016));
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1192));
  PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 1LL);
  _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFDFFF);
  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v10 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v10, v10);
  }
  while ( v11 != v10 );
  if ( (v9 & (unsigned __int8)(v10 >> 12)) != a2 )
LABEL_16:
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  v12 = *(_DWORD *)(BugCheckParameter3 + 1220);
  v13 = *(_QWORD *)(BugCheckParameter3 + 1208);
  v14 = *(_DWORD *)(BugCheckParameter3 + 1216);
  *(_QWORD *)(BugCheckParameter3 + 1208) = 0LL;
  *(_DWORD *)(BugCheckParameter3 + 1216) = 0;
  *(_DWORD *)(BugCheckParameter3 + 1220) = v12 & 0xFFFFFFFD;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 1192), v8);
  PopDiagTraceFxDeviceDirectedCompletion(*(_QWORD *)(BugCheckParameter3 + 48), a2);
  if ( byte_140F0E20C )
    goto LABEL_14;
  if ( (v12 & 2) == 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 864) & 1) == 0 )
      goto LABEL_15;
LABEL_14:
    v14 = 0;
    goto LABEL_15;
  }
  PopFxEnforceDirectedPowerTransition(BugCheckParameter3);
LABEL_15:
  PopCompleteDirectedPowerTransitionCallback(BugCheckParameter3, v13, v14);
  return PopFxDereferenceDevice(BugCheckParameter3, 5);
}
