/*
 * XREFs of TppWaitTimerExpiration @ 0x1800D6A74
 * Callers:
 *     TppSingleTimerExpiration @ 0x18003F720 (TppSingleTimerExpiration.c)
 * Callees:
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     TppSimplepFree @ 0x1800D6F60 (TppSimplepFree.c)
 *     TppRaiseHandleStatus @ 0x1800D71E8 (TppRaiseHandleStatus.c)
 *     ZwCancelWaitCompletionPacket @ 0x1801644F0 (ZwCancelWaitCompletionPacket.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall TppWaitTimerExpiration(__int64 a1)
{
  unsigned __int32 v2; // eax
  __int64 v3; // rdx
  void (__fastcall *v4)(__int64); // rax

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
      v4 = **(void (__fastcall ***)(__int64))(a1 + 8);
      if ( (char *)v4 == (char *)TppSimplepFree )
      {
        TppSimplepFree(a1, v3);
      }
      else if ( (char *)v4 == (char *)TppAlpcpFree )
      {
        TppAlpcpFree((_QWORD *)a1);
      }
      else if ( (char *)v4 == (char *)TppWorkpFree )
      {
        TppWorkpFree((void *)a1);
      }
      else
      {
        v4(a1);
      }
    }
    *(_QWORD *)(a1 + 360) = 0LL;
    return 1;
  }
}
