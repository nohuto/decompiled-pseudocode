/*
 * XREFs of MiGetSystemPage @ 0x140454030
 * Callers:
 *     MiGetPageForHeader @ 0x140453C9C (MiGetPageForHeader.c)
 * Callees:
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // esi
  unsigned int v6; // ebx
  __int64 Page; // rax
  __int64 v8; // rbx
  volatile signed __int32 *v9; // rdi
  unsigned __int8 v10; // bp
  int v11; // esi

  v3 = *(_DWORD *)(a3 + 8);
  v5 = (a2 != 0) + 48;
  v6 = v3 ^ (unsigned __int8)(v3 ^ (_InterlockedExchangeAdd(*(volatile signed __int32 **)a3, 1u)
                                  % (unsigned int)dword_140E2D980[HIWORD(v3) & 3]));
  while ( 1 )
  {
    Page = MiGetPage(a1, v6, v5);
    if ( Page != -1 )
      break;
    if ( KeGetCurrentIrql() == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      return 0LL;
    MiWaitForFreePage(a1, 0);
  }
  v8 = 48 * Page - 0x220000000000LL;
  v9 = (volatile signed __int32 *)(v8 + 24);
  if ( (v5 & 1) != 0 )
  {
    v10 = 17;
    v11 = 0;
    while ( _interlockedbittestandset64(v9, 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v9 < 0 );
    }
  }
  else
  {
    v10 = MiLockPageInline(v8);
  }
  *(_QWORD *)(v8 + 24) = *(_QWORD *)v9 & 0xC000000000000000uLL;
  MiUnlockPage(v8, v10);
  return v8;
}
