/*
 * XREFs of MiAllocateTopLevelPage @ 0x140A51BBC
 * Callers:
 *     MiAllocateProcessShadow @ 0x140A51A70 (MiAllocateProcessShadow.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiInitializeSelfmap @ 0x1402EF544 (MiInitializeSelfmap.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiInitializePfnForOtherProcess @ 0x14038FF2C (MiInitializePfnForOtherProcess.c)
 *     MiGetNextPageColor @ 0x1404317F0 (MiGetNextPageColor.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiSetPageTablePfnBuddy @ 0x140492B70 (MiSetPageTablePfnBuddy.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 ProcessPartition; // r14
  int v4; // r8d
  unsigned int NextPageColor; // ebx
  char v6; // r12
  unsigned __int8 v7; // al
  char v8; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SlabPage; // rdi
  __int64 v11; // r9
  _OWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF

  v13[0] = 0LL;
  ProcessPartition = MiGetProcessPartition(a1);
  MiInitializePageColorBase(v2 + 1024, 3, v4, (__int64)v13);
  NextPageColor = MiGetNextPageColor((__int64)v13);
  v6 = 0;
  v7 = *(_BYTE *)(a1 + 1774);
  v8 = -1;
  CurrentThread = 0LL;
  if ( v7 != 0xFF )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 2;
    v8 = CurrentThread[1].SavedApcStateFill[15];
    CurrentThread[1].SavedApcStateFill[15] = v7;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 1774) != 0xFF )
    {
      SlabPage = MiGetSlabPage(ProcessPartition, 8, NextPageColor, 0xCu, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
      if ( SlabPage != -1 )
        break;
    }
    SlabPage = MiGetPage(ProcessPartition, NextPageColor, 0x30u);
    if ( SlabPage != -1 )
      break;
    MiWaitForFreePage(ProcessPartition, v6);
  }
  if ( *(_BYTE *)(a1 + 1774) != 0xFF )
    CurrentThread[1].SavedApcStateFill[15] = v8;
  MiSetPfnContainingFrame(48 * SlabPage - 0x220000000000LL, SlabPage);
  *(_QWORD *)(48 * SlabPage - 0x220000000000LL) = 0LL;
  MiInitializePfnForOtherProcess(SlabPage, 0xFFFFF6FB7DBEDF68uLL, SlabPage, 512LL);
  MiSetPageTablePfnBuddy(48 * SlabPage - 0x220000000000LL, a1, 0LL, v11);
  MiInitializeSelfmap(SlabPage);
  return SlabPage;
}
