/*
 * XREFs of MiGroupZeroHugeRange @ 0x14067A224
 * Callers:
 *     MiHugePageOperation @ 0x14067A330 (MiHugePageOperation.c)
 * Callees:
 *     MiDereferencePageChains @ 0x1402259E4 (MiDereferencePageChains.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiCreatePageChains @ 0x14038D9F0 (MiCreatePageChains.c)
 *     MiZeroInParallel @ 0x140418028 (MiZeroInParallel.c)
 *     KeIsThreadedDpcThread @ 0x14044EA9C (KeIsThreadedDpcThread.c)
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
