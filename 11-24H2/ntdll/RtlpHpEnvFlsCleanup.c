/*
 * XREFs of RtlpHpEnvFlsCleanup @ 0x1800041C8
 * Callers:
 *     LdrShutdownProcess @ 0x180002B70 (LdrShutdownProcess.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 * Callees:
 *     RtlpFlsDataCleanup @ 0x18004EC20 (RtlpFlsDataCleanup.c)
 */

struct _TEB *__fastcall RtlpHpEnvFlsCleanup(char a1)
{
  unsigned __int64 v1; // rdx
  int v2; // ebx
  __int64 v3; // r8
  int v4; // edi
  struct _TEB *result; // rax

  v1 = (unsigned __int64)NtCurrentTeb()->HeapFlsData & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v1 )
  {
    v2 = a1 & 1;
    v3 = v2 | 2u;
    v4 = a1 & 2;
    if ( (a1 & 2) == 0 )
      v3 = a1 & 1;
    result = (struct _TEB *)RtlpFlsDataCleanup(&RtlpHpEnvFlsContext, v1, v3);
    if ( v2 )
    {
      result = NtCurrentTeb();
      result->HeapFlsData = (void *)((unsigned __int64)result->HeapFlsData | 1);
    }
    if ( v4 )
    {
      result = NtCurrentTeb();
      result->HeapFlsData = (void *)1;
    }
  }
  return result;
}
