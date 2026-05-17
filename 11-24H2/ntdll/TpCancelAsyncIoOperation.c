/*
 * XREFs of TpCancelAsyncIoOperation @ 0x18006A1B0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     TppSimplepFree @ 0x18006A2D0 (TppSimplepFree.c)
 */

__int64 __fastcall TpCancelAsyncIoOperation(__int64 a1, __int64 a2)
{
  int v3; // eax
  signed __int32 v4; // ecx
  bool v5; // zf
  signed __int32 v6; // eax
  __int64 result; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rcx

  if ( !a1
    || (v3 = *(_DWORD *)(a1 + 168), (v3 & 0x10000) != 0)
    || (v3 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppIopCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (__int64)NtCurrentPeb();
    v9 = *(_QWORD *)(result + 24);
    if ( !*(_BYTE *)(v9 + 72) )
      return TppRaiseInvalidParameter(v9);
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
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v8 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
      if ( (char *)v8 == (char *)TppSimplepFree )
      {
        return TppSimplepFree(a1, a2);
      }
      else if ( v8 == TppAlpcpFree )
      {
        return TppAlpcpFree(a1);
      }
      else if ( v8 == TppWorkpFree )
      {
        return TppWorkpFree(a1);
      }
      else
      {
        return v8(a1);
      }
    }
  }
  return result;
}
