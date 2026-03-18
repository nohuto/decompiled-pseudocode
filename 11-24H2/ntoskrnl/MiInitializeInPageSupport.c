/*
 * XREFs of MiInitializeInPageSupport @ 0x1402E44F8
 * Callers:
 *     MiGetInPageSupportBlock @ 0x1402E42D0 (MiGetInPageSupportBlock.c)
 *     MiPfIssueCoalescedSupport @ 0x14047E5A4 (MiPfIssueCoalescedSupport.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 *     MiGetReadyInPageBlock @ 0x140AA3298 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiInitializeInPageSupport(__int64 a1, char a2, volatile signed __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  int v8; // edx
  char v9; // r8
  int v10; // ecx
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x110uLL);
  *(_DWORD *)(a1 + 36) = 0;
  *(_WORD *)(a1 + 33) = 1536;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  *(_WORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 58) = 6;
  *(_QWORD *)(a1 + 72) = a1 + 64;
  *(_QWORD *)(a1 + 64) = a1 + 64;
  *(_DWORD *)(a1 + 176) = 1;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 152) = CurrentThread;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v9 = 5;
  if ( EffectivePagePriorityThread > 5 )
  {
    LOBYTE(EffectivePagePriorityThread) = 5;
  }
  else
  {
    v8 |= 0x100000u;
    v9 = EffectivePagePriorityThread;
    if ( EffectivePagePriorityThread )
      LOBYTE(EffectivePagePriorityThread) = EffectivePagePriorityThread - 1;
  }
  v10 = EffectivePagePriorityThread & 7;
  result = v9 & 7;
  *(_DWORD *)(a1 + 192) = v8 | (((unsigned int)result | (8 * v10)) << 11);
  if ( (a2 & 2) != 0 )
  {
    result = KeAbPreAcquire(a1, 0LL, 0LL);
    if ( result )
    {
      *(_BYTE *)(result + 10) = 1;
      a3 = (volatile signed __int64 *)a1;
    }
  }
  else if ( a3 )
  {
    result = _InterlockedIncrement64(a3);
    if ( result <= 1 )
      __fastfail(0xEu);
  }
  *(_QWORD *)(a1 + 216) = a3;
  return result;
}
