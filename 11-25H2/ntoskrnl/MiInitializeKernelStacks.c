/*
 * XREFs of MiInitializeKernelStacks @ 0x140C46178
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiMarkBootGuardPage @ 0x1406746AC (MiMarkBootGuardPage.c)
 *     MiInitializeDynamicRegion @ 0x140C43C7C (MiInitializeDynamicRegion.c)
 *     MiMarkBootKernelStack @ 0x140C46304 (MiMarkBootKernelStack.c)
 *     MiInitializePteInfo @ 0x140C48A90 (MiInitializePteInfo.c)
 */

__int64 MiInitializeKernelStacks()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r14

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned __int64)KeGetPcr()->Prcb.DpcStack + 80;
  v2 = (((v1 - (unsigned int)KeKernelStackSize) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v2, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v3, (((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMarkBootGuardPage(v3 - 8);
  MiMarkBootGuardPage(v2 - 8);
  v4 = 13;
  byte_140E35C64 = (unsigned int)KeKernelStackSize >> 12;
  v5 = 0LL;
  v6 = qword_140E35AD8 + 216LL * (unsigned __int16)KeNumberNodes;
  v7 = 9LL;
  while ( (unsigned int)v5 < 2 )
  {
    v8 = 2 * v7;
    v9 = qword_140E38868[v8 + 1];
    v10 = qword_140E38868[v8];
    if ( !(unsigned int)MiInitializeDynamicRegion(v4)
      || !(unsigned int)MiInitializePteInfo((unsigned int)&unk_140E35BA0 + 96 * v5, v4, 0, 5, v10, v9, 1, v6) )
    {
      return 0LL;
    }
    v5 = (unsigned int)(v5 + 1);
    v7 = 15LL;
    v4 = 15;
    v6 += 72LL * (unsigned __int16)KeNumberNodes;
  }
  return 1LL;
}
