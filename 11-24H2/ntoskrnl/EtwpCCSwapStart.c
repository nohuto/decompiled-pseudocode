/*
 * XREFs of EtwpCCSwapStart @ 0x140ABA320
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x14048A210 (EtwpUpdateSelectedGroupMasks.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCCSwapStart(unsigned int a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdi
  unsigned int i; // esi
  __int64 v4; // rbx
  __int64 Pool2; // rax
  unsigned int j; // ebp
  __int64 v7; // rbx

  v1 = KeNumberProcessors_0;
  v2 = a1;
  if ( !CCSwapNumLoggersPerClockType[a1] )
  {
    for ( i = 0; i < v1; ++i )
    {
      v4 = *(_QWORD *)(KeGetPrcb(i) + 35752);
      if ( *(_QWORD *)(v4 + 8 * v2 + 408) )
      {
        *(_BYTE *)(v2 + v4 + 400) = 0;
      }
      else
      {
        Pool2 = ExAllocatePool2(0x40uLL, 0x400uLL, 0x77734343u);
        *(_QWORD *)(v4 + 8 * v2 + 408) = Pool2;
        if ( !Pool2 )
        {
          for ( j = 0; j < i; ++j )
          {
            v7 = *(_QWORD *)(KeGetPrcb(j) + 35752);
            ExFreePoolWithTag(*(PVOID *)(v7 + 8 * v2 + 408), 0);
            *(_QWORD *)(v7 + 8 * v2 + 408) = 0LL;
          }
          return 3221225495LL;
        }
      }
      **(_DWORD **)(v4 + 8 * v2 + 408) = 0;
    }
  }
  ++CCSwapNumLoggersPerClockType[v2];
  return 0LL;
}
