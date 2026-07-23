/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x140450A30
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiInitializeFoundLargeNodePage @ 0x1404F5F7C (MiInitializeFoundLargeNodePage.c)
 *     MiRemoveMdlPages @ 0x1407EBBA8 (MiRemoveMdlPages.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  volatile signed __int32 *v5; // rdi
  unsigned int v6; // r15d
  char v8; // r14
  unsigned __int8 v10; // bp
  unsigned int v11; // esi
  __int64 result; // rax
  unsigned int v13; // [rsp+70h] [rbp+28h]

  v5 = (volatile signed __int32 *)(a1 + 24);
  v6 = a4;
  v8 = a2;
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
    v10 = MiLockPageInline(a1, a2, a3, a4);
  }
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_QWORD *)a1 = 0LL;
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6 != v6 )
    MiChangePageAttribute(a1, v6);
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
  if ( (v8 & 3) != 0 )
  {
    MiSetPfnContainingFrame(a1, 0x3FFFFFFFFELL);
    if ( (v8 & 8) == 0 )
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
