/*
 * XREFs of PnprMirrorMarkedPages @ 0x140B543CC
 * Callers:
 *     PnprSwap @ 0x1405A7FAC (PnprSwap.c)
 *     PnprQuiesceProcessorDpc @ 0x140B54710 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     RtlSetBits @ 0x14024BCC0 (RtlSetBits.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140321360 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlFindNextForwardRunClear @ 0x1403E15B0 (RtlFindNextForwardRunClear.c)
 *     RtlFindFirstRunClear @ 0x14045FF90 (RtlFindFirstRunClear.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnprMirrorMarkedPages()
{
  __int64 v0; // r15
  unsigned int v1; // edi
  __int64 v2; // rdx
  bool v3; // r12
  RTL_BITMAP *i; // rsi
  ULONG j; // eax
  ULONG v6; // r14d
  ULONG v7; // ebx
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  ULONG v11; // r14d
  int v12; // eax
  int v13; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  ULONG StartingIndex; // [rsp+80h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h]

  StartingIndex = 0;
  v1 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v2 = PnprContext;
  if ( *(_QWORD *)(*(_QWORD *)(PnprContext + 136) + 24 * v0) )
  {
    v3 = (_DWORD)v0 == *(_DWORD *)(PnprContext + 180);
    v17 = *(_QWORD *)(PnprContext + 33232);
    do
    {
      for ( i = *(RTL_BITMAP **)(v2 + 152); ; i = *(RTL_BITMAP **)&i->SizeOfBitMap )
      {
        v2 = PnprContext;
        if ( i == (RTL_BITMAP *)(PnprContext + 152) )
          break;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(PnprContext + 168), &LockHandle);
        for ( j = RtlFindFirstRunClear(i + 2, &StartingIndex); ; j = RtlFindNextForwardRunClear(
                                                                       i + 2,
                                                                       v11,
                                                                       &StartingIndex) )
        {
          v6 = StartingIndex;
          v7 = j;
          if ( j )
          {
            if ( j >= 0x140 )
              v7 = 320;
            RtlSetBits(i + 2, StartingIndex, v7);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( !v7 )
            break;
          v9 = guard_dispatch_icall_no_overrides(
                 *(_QWORD *)(PnprContext + 33184),
                 (v6 + *(_QWORD *)&i[1].SizeOfBitMap) << 12,
                 (unsigned __int64)v7 << 12,
                 v8);
          v10 = PnprContext;
          v1 = v9;
          if ( v9 < 0 )
          {
            v12 = *(_DWORD *)(PnprContext + 33288);
            if ( !v12 )
              v12 = 3578;
            *(_DWORD *)(PnprContext + 33288) = v12;
            v13 = *(_DWORD *)(v10 + 33292);
            if ( !v13 )
              v13 = 8;
            *(_DWORD *)(v10 + 33292) = v13;
            goto LABEL_22;
          }
          v11 = v7 + v6;
          StartingIndex = v11;
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(PnprContext + 168), &LockHandle);
        }
        if ( *(_DWORD *)(PnprContext + 200) == 3 )
          goto LABEL_22;
      }
    }
    while ( !v3 );
  }
LABEL_22:
  if ( (_DWORD)v0 != *(_DWORD *)(PnprContext + 180) && *(int *)(PnprContext + 200) < 3 )
  {
    do
      _mm_pause();
    while ( *(int *)(PnprContext + 200) < 3 );
  }
  return v1;
}
