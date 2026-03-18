/*
 * XREFs of Bulk_ProcessTransferEventWithHaltedCompletion @ 0x14002E4C4
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x140017A48 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x140018CF0 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_Release @ 0x140018DCC (Bulk_Stage_Release.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x140018F80 (Bulk_Transfer_CompleteCancelable.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 */

void __fastcall Bulk_ProcessTransferEventWithHaltedCompletion(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  KSPIN_LOCK *v4; // r15
  size_t v5; // rbp
  KIRQL v9; // al
  _QWORD *v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rax
  KIRQL v13; // dl
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx

  v4 = (KSPIN_LOCK *)(a1 + 96);
  v5 = a4;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(a1 + 332) |= 4u;
  *(_BYTE *)(a1 + 104) = v9;
  *(_DWORD *)(a1 + 360) = 1;
  KeReleaseSpinLock(v4, v9);
  v10 = *(_QWORD **)(a1 + 56);
  _m_prefetchw(v10 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)v10 + 8, 0x20u) & 0x20) != 0 )
    Controller_HwVerifierBreakIfEnabled(
      *v10,
      v10[1],
      v10[3],
      0x2000000LL,
      "Received duplicate Transfer Event TRB with Halted Completion Code",
      0LL,
      0LL);
  else
    ESM_AddEvent(v10 + 37, 154);
  v11 = *(_QWORD *)a2;
  *(_DWORD *)(v11 + 108) += v5;
  v12 = *(_QWORD *)(v11 + 48);
  *(_DWORD *)(v11 + 68) = a3;
  if ( (*(_DWORD *)(v12 + 32) & 1) != 0 && *(_DWORD *)(v11 + 76) == 2 )
    memmove(*(void **)(a2 + 64), *(const void **)(*(_QWORD *)(a2 + 72) + 16LL), v5);
  Bulk_Stage_FreeScatterGatherList(a1, a2);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v4);
  Bulk_Stage_Release(a1, (unsigned __int8 *)a2);
  ++*(_DWORD *)(v11 + 116);
  Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v11, -1, 0);
  v13 = *(_BYTE *)(a1 + 104);
  --*(_DWORD *)(a1 + 356);
  --*(_DWORD *)(a1 + 360);
  v14 = *(_DWORD *)(a1 + 332);
  KeReleaseSpinLock(v4, v13);
  if ( (v14 & 2) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v15 + 37)
      || (v16 = *(_QWORD *)(v15 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 20)) == *(_DWORD *)(v16 + 8)) )
    {
      ESM_AddEsmEvent(v15);
    }
  }
}
