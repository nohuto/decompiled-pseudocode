/*
 * XREFs of ?Reset@?$DynArray@PEAVCChannelContext@@$00@@QEAAXH@Z @ 0x1801DAC98
 * Callers:
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1800ED728 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DynArray<CChannelContext *,1>::Reset(__int64 a1, int a2)
{
  void *v3; // rdi
  HANDLE ProcessHeap; // rax

  *(_DWORD *)(a1 + 24) = 0;
  if ( a2 )
  {
    v3 = *(void **)a1;
    if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
    {
      if ( v3 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v3);
      }
      *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 16);
    }
  }
}
