/*
 * XREFs of PopFxNotifyPostSIrpCompletion @ 0x1405CEF38
 * Callers:
 *     PopSystemIrpCompletion @ 0x140B71950 (PopSystemIrpCompletion.c)
 * Callees:
 *     PopDiagTraceIrpPended @ 0x1404CE754 (PopDiagTraceIrpPended.c)
 */

__int64 __fastcall PopFxNotifyPostSIrpCompletion(__int64 a1, __int64 a2)
{
  signed __int32 i; // eax
  unsigned int v3; // ebx

  for ( i = *(_DWORD *)(a1 + 32); (i & 0x800) != 0; i = *(_DWORD *)(a1 + 32) )
  {
    if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), i | 0x400, i) )
    {
      v3 = 259;
      PopDiagTraceIrpPended(a2);
      return v3;
    }
  }
  v3 = 0;
  if ( *(int *)(*(_QWORD *)(a2 + 72LL * *(char *)(a2 + 66) + 200) + 192LL) > 1
    && (*(_DWORD *)(a1 + 864) & 0x80u) != 0
    && (*(_DWORD *)(a1 + 864) & 1) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 32), 0x800u);
  }
  return v3;
}
