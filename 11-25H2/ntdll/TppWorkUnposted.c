/*
 * XREFs of TppWorkUnposted @ 0x1800D5C10
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     TppETWCallbackDequeue @ 0x1800D62F4 (TppETWCallbackDequeue.c)
 *     TppSimplepFree @ 0x1800D6F60 (TppSimplepFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed __int32 __fastcall TppWorkUnposted(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned __int32 v4; // eax
  __int64 v5; // rdx
  unsigned __int32 v6; // ecx
  signed __int32 result; // eax
  __int64 (__fastcall *v8)(__int64, __int64); // rax

  v1 = a1;
  v2 = a1 - 200;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v3 = 2147353478LL;
  if ( *(_BYTE *)v3 )
    TppETWCallbackDequeue(*(_QWORD *)(v2 + 144), v1, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
  _m_prefetchw((const void *)(v2 + 232));
  v4 = *(_DWORD *)(v2 + 232);
  while ( 1 )
  {
    v5 = v4 >> 1;
    if ( !(v4 >> 1) )
      break;
    v6 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 232), 0, v4);
    if ( v4 == v6 )
    {
      TppBarrierAdjust((_RTL_SRWLOCK *)(v2 + 56), -(int)v5, 0);
      break;
    }
  }
  result = _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v8 = **(__int64 (__fastcall ***)(__int64, __int64))(v2 + 8);
    if ( v8 == TppSimplepFree )
    {
      return TppSimplepFree(v2, v5);
    }
    else if ( (char *)v8 == (char *)TppAlpcpFree )
    {
      return TppAlpcpFree((_QWORD *)v2);
    }
    else if ( (char *)v8 == (char *)TppWorkpFree )
    {
      return TppWorkpFree((void *)v2);
    }
    else
    {
      return v8(v2, v5);
    }
  }
  return result;
}
