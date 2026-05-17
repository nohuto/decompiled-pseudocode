/*
 * XREFs of RtlpWaitOnAddressWakeEntireList @ 0x180007734
 * Callers:
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x1800070A0 (RtlpOptimizeWaitOnAddressWaitList.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x180007100 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpWakeByAddress @ 0x18007C470 (RtlpWakeByAddress.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x180164030 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWakeEntireList(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v1 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v1 + 40), 2);
      if ( !(_DWORD)result )
        result = ZwAlertThreadByThreadId(*(_QWORD *)(v1 + 8));
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
