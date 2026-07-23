/*
 * XREFs of MiGroupZeroHugeRange @ 0x140686BE4
 * Callers:
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiDereferencePageChains @ 0x140270AC0 (MiDereferencePageChains.c)
 *     MiZeroInParallel @ 0x140271430 (MiZeroInParallel.c)
 *     KeIsThreadedDpcThread @ 0x140442A6C (KeIsThreadedDpcThread.c)
 *     MiCreatePageChains @ 0x14048E910 (MiCreatePageChains.c)
 */

__int64 __fastcall MiGroupZeroHugeRange(__int64 a1, __int64 a2, ULONG_PTR a3, int a4, int a5)
{
  __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v10; // eax
  __int64 PageChains; // rax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx

  v5 = a4;
  if ( !a2 )
    return 0LL;
  if ( KeGetCurrentIrql() == 2 )
    return 0LL;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    return 0LL;
  if ( (MiFlags & 0x30) == 0 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 92) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
    return 0LL;
  if ( KeIsThreadedDpcThread((__int64)CurrentThread) )
    return 0LL;
  v10 = MiPageToNode(a3);
  PageChains = MiCreatePageChains(a1, v10, v5, 112LL);
  v12 = (volatile signed __int32 *)PageChains;
  if ( !PageChains )
    return 0LL;
  v13 = *(_QWORD *)(PageChains + 152);
  *(_DWORD *)v13 = 512;
  *(_QWORD *)(v13 + 8) = v13 + 16;
  *(_DWORD *)(v13 + 104) = a5;
  *(_QWORD *)(v13 + 80) = a2;
  *(_QWORD *)(v13 + 88) = a3;
  *(_DWORD *)(PageChains + 16) |= 0x800u;
  *(_QWORD *)(PageChains + 8 * v5 + 48) = 0x40000LL;
  *(_DWORD *)(PageChains + 40) = *(_DWORD *)(PageChains + 24);
  MiZeroInParallel(PageChains);
  MiDereferencePageChains(v12);
  return 1LL;
}
