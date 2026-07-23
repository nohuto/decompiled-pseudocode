/*
 * XREFs of TppWaitTimerExpiration @ 0x180086C50
 * Callers:
 *     TppSingleTimerExpiration @ 0x180088760 (TppSingleTimerExpiration.c)
 * Callees:
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     TppSimplepFree @ 0x1800869C0 (TppSimplepFree.c)
 *     TppRaiseHandleStatus @ 0x1800870A8 (TppRaiseHandleStatus.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     ZwCancelWaitCompletionPacket @ 0x180161320 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TppWaitTimerExpiration(__int64 a1)
{
  unsigned __int32 v2; // eax
  void (__fastcall *v3)(__int64); // rax

  v2 = ZwCancelWaitCompletionPacket(*(HANDLE *)(a1 + 368), 0);
  if ( v2 )
  {
    if ( v2 != -1073741536 && v2 != 259 )
      TppRaiseHandleStatus(v2, *(_QWORD *)(a1 + 360), a1);
    return 0;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
    {
      v3 = **(void (__fastcall ***)(__int64))(a1 + 8);
      if ( (char *)v3 == (char *)TppSimplepFree )
      {
        TppSimplepFree((_QWORD *)a1);
      }
      else if ( (char *)v3 == (char *)TppAlpcpFree )
      {
        TppAlpcpFree(a1);
      }
      else if ( (char *)v3 == (char *)TppWorkpFree )
      {
        TppWorkpFree((void *)a1);
      }
      else
      {
        v3(a1);
      }
    }
    *(_QWORD *)(a1 + 360) = 0LL;
    return 1;
  }
}
