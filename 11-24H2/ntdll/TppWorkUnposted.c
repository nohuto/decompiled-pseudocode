/*
 * XREFs of TppWorkUnposted @ 0x180068B90
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppETWCallbackDequeue @ 0x180069454 (TppETWCallbackDequeue.c)
 *     TppSimplepFree @ 0x18006A2D0 (TppSimplepFree.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppWorkUnposted(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned __int32 v4; // eax
  __int64 v5; // rdx
  unsigned __int32 v6; // ecx
  __int64 result; // rax
  __int64 (__fastcall *v8)(__int64); // rax

  v1 = a1;
  v2 = a1 - 200;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
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
      TppBarrierAdjust((volatile signed __int64 *)(v2 + 56), -(int)v5, 0);
      break;
    }
  }
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v8 = **(__int64 (__fastcall ***)(__int64))(v2 + 8);
    if ( (char *)v8 == (char *)TppSimplepFree )
    {
      return TppSimplepFree(v2, v5);
    }
    else if ( v8 == TppAlpcpFree )
    {
      return TppAlpcpFree(v2);
    }
    else if ( v8 == TppWorkpFree )
    {
      return TppWorkpFree(v2);
    }
    else
    {
      return ((__int64 (__fastcall *)(__int64, __int64))v8)(v2, v5);
    }
  }
  return result;
}
