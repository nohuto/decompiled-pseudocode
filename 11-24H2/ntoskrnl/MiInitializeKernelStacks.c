/*
 * XREFs of MiInitializeKernelStacks @ 0x140C595E8
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiMarkBootGuardPage @ 0x1406810CC (MiMarkBootGuardPage.c)
 *     MiInitializeDynamicRegion @ 0x140C5708C (MiInitializeDynamicRegion.c)
 *     MiMarkBootKernelStack @ 0x140C59774 (MiMarkBootKernelStack.c)
 *     MiInitializePteInfo @ 0x140C5BF50 (MiInitializePteInfo.c)
 */

__int64 MiInitializeKernelStacks()
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // rbx
  int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r14

  CurrentThread = KeGetCurrentThread();
  v1 = ((((unsigned __int64)KeGetPcr()->Prcb.DpcStack - (unsigned int)KeKernelStackSize + 80) >> 9) & 0x7FFFFFFFF8LL)
     - 0x98000000000LL;
  MiMarkBootKernelStack(v1);
  v2 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v2);
  MiMarkBootGuardPage(v2 - 8);
  MiMarkBootGuardPage(v1 - 8);
  v3 = 13;
  byte_140E35FE4 = (unsigned int)KeKernelStackSize >> 12;
  v4 = 0LL;
  v5 = qword_140E35E58 + 216LL * (unsigned __int16)KeNumberNodes;
  v6 = 9LL;
  while ( (unsigned int)v4 < 2 )
  {
    v7 = 2 * v6;
    v8 = qword_140E38BE8[v7 + 1];
    v9 = qword_140E38BE8[v7];
    if ( !(unsigned int)MiInitializeDynamicRegion(v3)
      || !(unsigned int)MiInitializePteInfo((unsigned int)&unk_140E35F20 + 96 * v4, v3, 0, 5, v9, v8, 1, v5) )
    {
      return 0LL;
    }
    v4 = (unsigned int)(v4 + 1);
    v6 = 15LL;
    v3 = 15;
    v5 += 72LL * (unsigned __int16)KeNumberNodes;
  }
  return 1LL;
}
