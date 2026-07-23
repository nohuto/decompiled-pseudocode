/*
 * XREFs of PspRecheckThreadOptionalXStateFeatures @ 0x1408FCA64
 * Callers:
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1404163D0 (KeInitializeApc.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x14042D440 (KeGetProcessorNodeNumberByIndex.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspRecheckThreadOptionalXStateFeatures(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  _QWORD *Pool2; // rsi
  int KernelStack; // ebp
  __int64 v8; // rcx
  __int128 v9; // [rsp+40h] [rbp-38h] BYREF
  __int128 v10; // [rsp+50h] [rbp-28h]
  __int128 v11; // [rsp+60h] [rbp-18h]

  v2 = ~*(_QWORD *)(a1 + 408);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v4 = *(_QWORD *)(a2 + 1064) & v2;
  if ( !v4 )
    return 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x88uLL, 0x58457350u);
  if ( Pool2 )
  {
    if ( (*(_DWORD *)(a2 + 116) & 0x800000) == 0 )
    {
      DWORD2(v9) = (unsigned __int16)KeGetProcessorNodeNumberByIndex(*(_DWORD *)(a2 + 588));
      *(_QWORD *)&v9 = 0x500000020LL;
      *(_QWORD *)&v10 = a2;
      KernelStack = MmCreateKernelStack((int *)&v9);
      if ( KernelStack < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return (unsigned int)KernelStack;
      }
      v8 = *((_QWORD *)&v10 + 1) - (unsigned int)KeDecoupledStateSaveAreaLength;
      Pool2[13] = *((_QWORD *)&v10 + 1);
      Pool2[12] = v8;
    }
    Pool2[14] = v4;
    Pool2[15] = a2;
    Pool2[16] = Pool2;
    *(_DWORD *)Pool2 = 1;
    KeInitializeApc((__int64)(Pool2 + 1), a2, 0, (__int64)KeEnableOptionalXStateFeaturesApc, 0LL, 0LL, 0, 0LL);
    KeInsertQueueApc((__int64)(Pool2 + 1), 0LL, 0LL, 0);
    return 0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
}
