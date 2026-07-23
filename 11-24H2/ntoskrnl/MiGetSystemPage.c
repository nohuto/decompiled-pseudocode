/*
 * XREFs of MiGetSystemPage @ 0x1403F462C
 * Callers:
 *     MiGetPageForHeader @ 0x1403F2A54 (MiGetPageForHeader.c)
 * Callees:
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // esi
  unsigned int v6; // ebx
  __int64 Page; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rdi
  unsigned __int8 v13; // bp
  unsigned int v14; // esi

  v3 = *(_DWORD *)(a3 + 8);
  v5 = (a2 != 0) + 48;
  v6 = v3 ^ (unsigned __int8)(v3 ^ (_InterlockedExchangeAdd(*(volatile signed __int32 **)a3, 1u)
                                  % (unsigned int)dword_140E2DD00[HIWORD(v3) & 3]));
  while ( 1 )
  {
    Page = MiGetPage(a1, v6, v5);
    if ( Page != -1 )
      break;
    if ( KeGetCurrentIrql() == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      return 0LL;
    MiWaitForFreePage(a1, 0);
  }
  v11 = 48 * Page - 0x220000000000LL;
  v12 = (volatile signed __int32 *)(v11 + 24);
  if ( (v5 & 1) != 0 )
  {
    v13 = 17;
    v14 = 0;
    while ( _interlockedbittestandset64(v12, 0x3FuLL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v14);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v12 < 0 );
    }
  }
  else
  {
    v13 = MiLockPageInline(v11, v8, v9, v10);
  }
  *(_QWORD *)(v11 + 24) = *(_QWORD *)v12 & 0xC000000000000000uLL;
  MiUnlockPage(v11, v13);
  return v11;
}
