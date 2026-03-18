/*
 * XREFs of HalpContinueProcessingWaitQueue @ 0x140331FDC
 * Callers:
 *     IoFreeAdapterChannelV3 @ 0x140331E60 (IoFreeAdapterChannelV3.c)
 *     HalPutScatterGatherListV3 @ 0x14033419C (HalPutScatterGatherListV3.c)
 * Callees:
 *     HalpAllocateDmaResourcesInternal @ 0x140331C00 (HalpAllocateDmaResourcesInternal.c)
 *     IoFreeAdapterChannelV3Internal @ 0x140331EB4 (IoFreeAdapterChannelV3Internal.c)
 *     HalpDmaGetNextWcb @ 0x140332038 (HalpDmaGetNextWcb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpContinueProcessingWaitQueue(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // esi
  __int64 NextWcb; // rcx
  char v6; // bp
  int v7; // eax
  __int64 v8; // rdx
  char v9; // r14
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  v3 = 0;
  NextWcb = ((__int64 (*)(void))HalpDmaGetNextWcb)();
  if ( NextWcb )
  {
    while ( 1 )
    {
      *(_QWORD *)(a1 + 352) = NextWcb;
      v6 = 0;
      *(_DWORD *)(a1 + 248) = *(_DWORD *)(NextWcb + 40);
      v7 = *(_DWORD *)(NextWcb + 16);
      *(_DWORD *)(a1 + 624) = 0;
      *(_DWORD *)(a1 + 388) = v7;
      if ( CurrentIrql < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(NextWcb) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(NextWcb);
        }
        v6 = 1;
      }
      v10 = 1;
      v9 = HalpAllocateDmaResourcesInternal(a1, 0, &v10);
      if ( !v9 || v10 == 1 )
        goto LABEL_13;
      if ( v10 == 2 )
        goto LABEL_12;
      if ( v10 == 3 )
        break;
LABEL_13:
      if ( v6 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v8) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
        }
        __writecr8(CurrentIrql);
      }
      if ( v9 )
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
