/*
 * XREFs of ViAdapterCallback @ 0x140B89B50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     VfUtilDbgPrint @ 0x14060E85C (VfUtilDbgPrint.c)
 *     ViIsActiveChannelWcb @ 0x14060F390 (ViIsActiveChannelWcb.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B86B24 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B86E20 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140B8AB9C (ViFreeMapRegisterFile.c)
 */

__int64 __fastcall ViAdapterCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rax
  unsigned int v10; // esi
  char v11; // cl
  _DWORD *v13; // rdx
  KIRQL v14; // al
  __int64 v15; // r9
  _QWORD *v16; // r8

  v4 = *(_QWORD *)(a4 + 56);
  v6 = a3;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 224) < 3u )
    {
      v9 = *(_QWORD *)(a4 + 96);
      if ( v9 && *(_DWORD *)v9 == -1393569779 )
      {
        *(_QWORD *)(v9 + 48) = a3;
        v6 = *(_QWORD *)(a4 + 96);
      }
      else if ( !a3 )
      {
        v6 = -559026163LL;
      }
    }
    if ( *(_BYTE *)(v4 + 228) )
      DECREMENT_ADAPTER_CHANNELS(v4);
  }
  *(_QWORD *)(a4 + 88) = v6;
  v10 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( !v4 || !ViIsActiveChannelWcb(v4, a4) )
    return v10;
  *(_DWORD *)(a4 + 52) = v10;
  v11 = *(_BYTE *)(v4 + 228);
  if ( v10 != 1 )
  {
    if ( !v11 )
      DECREMENT_ADAPTER_CHANNELS(v4);
    if ( v10 == 3 )
      return 3LL;
    SUBTRACT_MAP_REGISTERS(v4, *(_DWORD *)(a4 + 48));
    v13 = *(_DWORD **)(a4 + 96);
    if ( v13 && *v13 == -1393569779 )
    {
      ViFreeMapRegisterFile(v4);
      *(_QWORD *)(a4 + 96) = 0LL;
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 176));
    v15 = *(_QWORD *)(a4 + 72);
    if ( *(_QWORD *)(v15 + 8) != a4 + 72 || (v16 = *(_QWORD **)(a4 + 80), *v16 != a4 + 72) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 176), v14);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)a4);
    return v10;
  }
  if ( v11 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 216));
    VfUtilDbgPrint("Driver at address %p has a problem\n", *(const void **)(v4 + 80));
    VfUtilDbgPrint("Master devices should return DeallocateObjectKeepRegisters\n");
  }
  *(_DWORD *)(v4 + 288) = *(_DWORD *)(a4 + 48);
  return 1LL;
}
