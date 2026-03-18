/*
 * XREFs of ExchangeW32ThreadLock @ 0x1C00AD5D8
 * Callers:
 *     LockExchangeW32Thread @ 0x1C0016D8C (LockExchangeW32Thread.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0030E84 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxDoPaint @ 0x1C00619B8 (xxxDoPaint.c)
 *     xxxSendMessageBSM @ 0x1C00AF630 (xxxSendMessageBSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExchangeW32ThreadLock(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(a2 + 16))(v2);
  return result;
}
