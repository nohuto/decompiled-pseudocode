/*
 * XREFs of HalpContinueProcessingWaitQueue @ 0x14038C65C
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x14038C148 (HalPutScatterGatherListV3.c)
 *     IoFreeAdapterChannelV3 @ 0x14038C4E0 (IoFreeAdapterChannelV3.c)
 * Callees:
 *     HalpAllocateDmaResourcesInternal @ 0x14038C280 (HalpAllocateDmaResourcesInternal.c)
 *     IoFreeAdapterChannelV3Internal @ 0x14038C534 (IoFreeAdapterChannelV3Internal.c)
 *     HalpDmaGetNextWcb @ 0x14038C6B8 (HalpDmaGetNextWcb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpContinueProcessingWaitQueue(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 NextWcb; // rcx
  char v7; // bp
  int v8; // eax
  __int64 v9; // rdx
  char v10; // r14
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  v3 = 0;
  NextWcb = ((__int64 (*)(void))HalpDmaGetNextWcb)();
  if ( NextWcb )
  {
    while ( 1 )
    {
      *(_QWORD *)(a1 + 352) = NextWcb;
      v7 = 0;
      *(_DWORD *)(a1 + 248) = *(_DWORD *)(NextWcb + 40);
      v8 = *(_DWORD *)(NextWcb + 16);
      *(_DWORD *)(a1 + 624) = 0;
      *(_DWORD *)(a1 + 388) = v8;
      if ( CurrentIrql < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v4) = 2;
          LOBYTE(NextWcb) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(NextWcb, v4);
        }
        v7 = 1;
      }
      v11 = 1;
      v10 = HalpAllocateDmaResourcesInternal(a1, 0, &v11);
      if ( !v10 || v11 == 1 )
        goto LABEL_13;
      if ( v11 == 2 )
        goto LABEL_12;
      if ( v11 == 3 )
        break;
LABEL_13:
      if ( v7 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
        }
        __writecr8(CurrentIrql);
      }
      if ( v10 )
      {
        ++v3;
        NextWcb = HalpDmaGetNextWcb(a1);
        if ( NextWcb )
          continue;
      }
      return v3;
    }
    *(_DWORD *)(a1 + 248) = 0;
LABEL_12:
    IoFreeAdapterChannelV3Internal(a1);
    goto LABEL_13;
  }
  return v3;
}
