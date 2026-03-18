/*
 * XREFs of PnprMarkOrMirrorPages @ 0x140B54268
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1405A7B30 (PnprMirrorPhysicalMemory.c)
 *     PnprRecopyAddress @ 0x1405A7D30 (PnprRecopyAddress.c)
 *     PnprRecopyMappingReserve @ 0x1405A7D88 (PnprRecopyMappingReserve.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x14037CD40 (RtlClearBits.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnprMarkOrMirrorPages(unsigned __int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 v8; // rax
  RTL_BITMAP *v9; // rsi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v5 = PnprContext;
  v6 = a1 >> 12;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = PnprContext + 152;
  v9 = *(RTL_BITMAP **)(PnprContext + 152);
  v10 = (a2 >> 12) + v6;
  v11 = v10 - 1;
  while ( v9 != (RTL_BITMAP *)v8 )
  {
    v12 = *(_QWORD *)&v9[1].SizeOfBitMap;
    if ( v11 < v12 )
      break;
    v13 = v6;
    v14 = v10;
    if ( v6 <= v12 )
      v13 = *(_QWORD *)&v9[1].SizeOfBitMap;
    if ( (unsigned int *)v11 >= (unsigned int *)((char *)v9[1].Buffer + v12 - 1) )
      v14 = (unsigned __int64)v9[1].Buffer + v12;
    v15 = v14 - 1;
    if ( v13 <= v15 )
    {
      if ( a3 )
      {
        if ( (int)guard_dispatch_icall_no_overrides(
                    *(_QWORD *)(v5 + 33184),
                    v13 << 12,
                    (v15 << 12) - (v13 << 12) + 4096,
                    a4) < 0 )
        {
          v16 = PnprContext;
          v17 = *(_DWORD *)(PnprContext + 33288);
          if ( !v17 )
            v17 = 3434;
          *(_DWORD *)(PnprContext + 33288) = v17;
          v18 = *(_DWORD *)(v16 + 33292);
          if ( !v18 )
            v18 = 8;
          *(_DWORD *)(v16 + 33292) = v18;
        }
      }
      else
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 168), &LockHandle);
        RtlClearBits(v9 + 2, v13 - v12, v15 - v13 + 1);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    v5 = PnprContext;
    v9 = *(RTL_BITMAP **)&v9->SizeOfBitMap;
    v8 = PnprContext + 152;
  }
  return 0LL;
}
