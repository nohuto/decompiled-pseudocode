/*
 * XREFs of IopSetIrpPriorityHintFromFileObject @ 0x1404023F0
 * Callers:
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetIrpPriorityHintFromFileObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // rdx
  int v5; // eax
  unsigned __int64 v6; // rcx
  int v7; // ecx
  __int64 result; // rax
  int v9; // ecx

  v2 = *(_QWORD *)(a1 + 208);
  if ( v2 && (v9 = *(_DWORD *)(v2 + 88)) != 0 )
  {
    result = *(_DWORD *)(a2 + 16) & 0xFFF1FFFF;
    *(_DWORD *)(a2 + 16) = result | (v9 << 17);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v5 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
    v6 = CurrentThread->Process[1].Padding[3];
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 1084);
      if ( v5 >= v7 )
        v5 = v7;
    }
    if ( v5 < 2 && CurrentThread == KeGetCurrentThread() )
    {
      if ( LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
        v5 = 2;
    }
    result = *(_DWORD *)(a2 + 16) & 0xFFF1FFFF | ((v5 << 17) + 0x20000);
    *(_DWORD *)(a2 + 16) = result;
  }
  return result;
}
