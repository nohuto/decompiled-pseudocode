/*
 * XREFs of ViAdapterCallback @ 0x140B87B50
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 *     ViIsActiveChannelWcb @ 0x140610DD0 (ViIsActiveChannelWcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B84B24 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B84E20 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140B88B9C (ViFreeMapRegisterFile.c)
 */

__int64 __fastcall ViAdapterCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // esi
  char v12; // cl
  _DWORD *v14; // rdx
  KIRQL v15; // al
  __int64 v16; // r9
  _QWORD *v17; // r8

  v4 = *((_QWORD *)a4 + 7);
  v6 = a3;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 224) < 3u )
    {
      v9 = *((_QWORD *)a4 + 12);
      if ( v9 && *(_DWORD *)v9 == -1393569779 )
      {
        *(_QWORD *)(v9 + 48) = a3;
        v6 = *((_QWORD *)a4 + 12);
      }
      else if ( !a3 )
      {
        v6 = -559026163LL;
      }
    }
    if ( *(_BYTE *)(v4 + 228) )
      DECREMENT_ADAPTER_CHANNELS(v4);
  }
  v10 = *(_QWORD *)a4;
  *((_QWORD *)a4 + 11) = v6;
  v11 = guard_dispatch_icall_no_overrides(a1, a2, v6, v10);
  if ( !v4 || !ViIsActiveChannelWcb(v4, (__int64)a4) )
    return v11;
  a4[13] = v11;
  v12 = *(_BYTE *)(v4 + 228);
  if ( v11 != 1 )
  {
    if ( !v12 )
      DECREMENT_ADAPTER_CHANNELS(v4);
    if ( v11 == 3 )
      return 3LL;
    SUBTRACT_MAP_REGISTERS(v4, a4[12]);
    v14 = (_DWORD *)*((_QWORD *)a4 + 12);
    if ( v14 && *v14 == -1393569779 )
    {
      ViFreeMapRegisterFile(v4);
      *((_QWORD *)a4 + 12) = 0LL;
    }
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 176));
    v16 = *((_QWORD *)a4 + 9);
    if ( *(_DWORD **)(v16 + 8) != a4 + 18 || (v17 = (_QWORD *)*((_QWORD *)a4 + 10), (_DWORD *)*v17 != a4 + 18) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 176), v15);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, a4);
    return v11;
  }
  if ( v12 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 216));
    VfUtilDbgPrint("Driver at address %p has a problem\n", *(const void **)(v4 + 80));
    VfUtilDbgPrint("Master devices should return DeallocateObjectKeepRegisters\n");
  }
  *(_DWORD *)(v4 + 288) = a4[12];
  return 1LL;
}
