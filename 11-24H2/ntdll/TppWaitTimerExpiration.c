/*
 * XREFs of TppWaitTimerExpiration @ 0x18006A560
 * Callers:
 *     TppSingleTimerExpiration @ 0x18006BE80 (TppSingleTimerExpiration.c)
 * Callees:
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppSimplepFree @ 0x18006A2D0 (TppSimplepFree.c)
 *     TppRaiseHandleStatus @ 0x18006A9B8 (TppRaiseHandleStatus.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     ZwCancelWaitCompletionPacket @ 0x180162F60 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TppWaitTimerExpiration(__int64 a1)
{
  unsigned int v2; // eax
  void (__fastcall *v3)(__int64); // rax

  v2 = ZwCancelWaitCompletionPacket(*(_QWORD *)(a1 + 368), 0LL);
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
        TppWorkpFree(a1);
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
