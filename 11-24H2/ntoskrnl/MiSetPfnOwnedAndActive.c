/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x14045B630
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiInitializeFoundLargeNodePage @ 0x1404F869C (MiInitializeFoundLargeNodePage.c)
 *     MiRemoveMdlPages @ 0x1407EB5D8 (MiRemoveMdlPages.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(unsigned __int64 a1, char a2, __int64 a3, unsigned int a4, int a5)
{
  volatile signed __int32 *v5; // rdi
  unsigned __int8 v10; // bp
  unsigned int v11; // esi
  __int64 result; // rax
  unsigned int v13; // [rsp+70h] [rbp+28h]

  v5 = (volatile signed __int32 *)(a1 + 24);
  if ( (a2 & 4) != 0 )
  {
    v10 = 17;
    v11 = 0;
    while ( _interlockedbittestandset64(v5, 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v5 < 0 );
    }
  }
  else
  {
    v10 = MiLockPageInline(a1);
  }
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_QWORD *)a1 = 0LL;
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6 != a4 )
    MiChangePageAttribute(a1, a4);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)v5 & 0xC000000000000000uLL | 1;
  if ( (_WORD)a5 )
  {
    HIWORD(a5) = HIWORD(*(_DWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 32) = a5;
  }
  *(_QWORD *)(a1 + 8) = a3;
  v13 = *(_DWORD *)(a1 + 32);
  BYTE2(v13) = BYTE2(v13) & 0xF8 | 6;
  result = v13;
  *(_DWORD *)(a1 + 32) = v13;
  if ( (a2 & 3) != 0 )
  {
    MiSetPfnContainingFrame(a1, 0x3FFFFFFFFELL);
    if ( (a2 & 8) == 0 )
      *(_QWORD *)(a1 + 16) = MiMakeDemandZeroPte(4);
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    result = *(_QWORD *)v5 | 0x4000000000000000LL;
    *(_QWORD *)(a1 + 24) = result;
  }
  if ( v10 != 17 )
    return MiUnlockPage(a1, v10);
  _InterlockedAnd64((volatile signed __int64 *)v5, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
