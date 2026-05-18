/*
 * XREFs of sub_18000E29C @ 0x18000E29C
 * Callers:
 *     sub_18000DD94 @ 0x18000DD94 (sub_18000DD94.c)
 * Callees:
 *     <none>
 */

__int64 sub_18000E29C()
{
  __int64 v0; // rbx
  DWORD CurrentThreadId; // r9d
  __int64 result; // rax

  v0 = qword_1801C4318;
  CurrentThreadId = GetCurrentThreadId();
  for ( result = *(_QWORD *)(v0 + 8 * (CurrentThreadId % 0xAuLL)); result; result = *(_QWORD *)(result + 8) )
  {
    if ( *(_DWORD *)result == CurrentThreadId )
    {
      result += 16LL;
      return result;
    }
  }
  return result;
}
