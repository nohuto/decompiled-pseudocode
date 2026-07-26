/*
 * XREFs of ndisMDpcX @ 0x1400D75DC
 * Callers:
 *     ndis5InterruptDpc @ 0x1400D72D0 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1400D7370 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140040D60 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x140074C20 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMDpcX(__int64 a1, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  __int64 Clock; // rbp
  void (__fastcall *v5)(void *); // r14
  char v6; // si
  PKINTERRUPT *p_InterruptObject; // rcx
  KSYNCHRONIZE_ROUTINE *EnableInterruptHandler; // rdx
  __int64 v9; // rax

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 104);
  Clock = 0LL;
  v5 = *(void (__fastcall **)(void *))(a2 + 32);
  if ( HIBYTE(dword_14011D060) )
  {
    v6 = 1;
    ndisTraceDpcStart(v2, 1);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v6 = 0;
  }
  if ( *(_BYTE *)(a2 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    v5(v2->MiniportAdapterContext);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 && *(_BYTE *)(a2 + 8) )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    p_InterruptObject = &v2->Interrupt->InterruptObject;
    if ( p_InterruptObject )
    {
      EnableInterruptHandler = (KSYNCHRONIZE_ROUTINE *)v2->EnableInterruptHandler;
      if ( EnableInterruptHandler )
        KeSynchronizeExecution(*p_InterruptObject, EnableInterruptHandler, v2->MiniportAdapterContext);
    }
  }
  if ( v6 )
  {
    v9 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(v2, 1, v9 - Clock);
  }
}
