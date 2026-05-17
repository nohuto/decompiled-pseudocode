/*
 * XREFs of TpCancelAsyncIoOperation @ 0x1800D6E40
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppSimplepFree @ 0x1800D6F60 (TppSimplepFree.c)
 */

void __fastcall TpCancelAsyncIoOperation(__int64 a1, __int64 a2)
{
  int v3; // eax
  signed __int32 v4; // ecx
  bool v5; // zf
  signed __int32 v6; // eax
  void (__fastcall *v7)(__int64); // rax

  if ( !a1
    || (v3 = *(_DWORD *)(a1 + 168), (v3 & 0x10000) != 0)
    || (v3 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppIopCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    _m_prefetchw((const void *)(a1 + 280));
    v4 = *(_DWORD *)(a1 + 280);
    while ( v4 > 0 )
    {
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), v4 - 1, v4);
      v5 = v4 == v6;
      v4 = v6;
      if ( v5 )
      {
        TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -1, 0);
        break;
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
    {
      v7 = **(void (__fastcall ***)(__int64))(a1 + 8);
      if ( (char *)v7 == (char *)TppSimplepFree )
      {
        TppSimplepFree(a1, a2);
      }
      else if ( (char *)v7 == (char *)TppAlpcpFree )
      {
        TppAlpcpFree((_QWORD *)a1);
      }
      else if ( (char *)v7 == (char *)TppWorkpFree )
      {
        TppWorkpFree(a1);
      }
      else
      {
        v7(a1);
      }
    }
  }
}
