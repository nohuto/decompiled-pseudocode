/*
 * XREFs of RtlpWaitOnAddressWakeEntireList @ 0x1800EDA00
 * Callers:
 *     RtlpWakeByAddress @ 0x180014E60 (RtlpWakeByAddress.c)
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x18009BA30 (RtlpOptimizeWaitOnAddressWaitList.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18009BA90 (RtlpWaitOnAddressRemoveWaitBlock.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x180162AA0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWakeEntireList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 result; // rax

  v4 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 16);
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v4 + 40), 2);
      if ( !(_DWORD)result )
        result = ZwAlertThreadByThreadId(*(_QWORD *)(v4 + 8), a2, a3, a4);
      v4 = v5;
    }
    while ( v5 );
  }
  return result;
}
