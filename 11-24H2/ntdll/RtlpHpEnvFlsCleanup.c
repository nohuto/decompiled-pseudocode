/*
 * XREFs of RtlpHpEnvFlsCleanup @ 0x1800AB420
 * Callers:
 *     LdrShutdownThread @ 0x1800AB0D0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x1800ABBC0 (LdrShutdownProcess.c)
 * Callees:
 *     RtlpFlsDataCleanup @ 0x180064800 (RtlpFlsDataCleanup.c)
 */

void __fastcall RtlpHpEnvFlsCleanup(char a1)
{
  __int64 *v1; // rdx
  int v2; // ebx
  char v3; // r8
  int v4; // edi
  struct _TEB *v5; // rax

  v1 = (__int64 *)((unsigned __int64)NtCurrentTeb()->HeapFlsData & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v1 )
  {
    v2 = a1 & 1;
    v3 = v2 | 2;
    v4 = a1 & 2;
    if ( (a1 & 2) == 0 )
      v3 = a1 & 1;
    RtlpFlsDataCleanup(&RtlpHpEnvFlsContext, v1, v3);
    if ( v2 )
    {
      v5 = NtCurrentTeb();
      v5->HeapFlsData = (void *)((unsigned __int64)v5->HeapFlsData | 1);
    }
    if ( v4 )
      NtCurrentTeb()->HeapFlsData = (void *)1;
  }
}
