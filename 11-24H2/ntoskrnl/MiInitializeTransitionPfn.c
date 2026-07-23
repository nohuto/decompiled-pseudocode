/*
 * XREFs of MiInitializeTransitionPfn @ 0x1403F2C1C
 * Callers:
 *     MiInitializeNewImageSectionProtos @ 0x1403F0B48 (MiInitializeNewImageSectionProtos.c)
 *     MiCopyDataPageToImagePage @ 0x1403F1624 (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x1403F26E0 (MiInitializeImageProtos.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047AADC (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 ContainingPageTable; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // eax
  char v11; // al
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 result; // rax
  int v21; // [rsp+60h] [rbp+8h]

  v6 = 48 * a1 - 0x220000000000LL;
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
  *(_QWORD *)v6 = 0LL;
  v8 = ContainingPageTable;
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  if ( (v9 & 0x400) == 0 && (v9 & 0x800) != 0 )
    v9 = *(_QWORD *)(48 * a3 - 0x21FFFFFFFFF0LL);
  *(_QWORD *)(v6 + 16) = v9;
  *(_QWORD *)(v6 + 40) |= 0x8000000000000000uLL;
  MiSetPfnContainingFrame(v6, v8);
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 24) &= ~0x4000000000000000uLL;
  v10 = *(_DWORD *)(v6 + 32);
  v21 = v10;
  if ( (*(_BYTE *)(v6 + 34) & 0x10) != 0 )
    v11 = BYTE2(v10) & 0xF8 | 3;
  else
    v11 = BYTE2(v10) & 0xF8 | 2;
  BYTE2(v21) = v11;
  *(_DWORD *)(v6 + 32) = v21;
  v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  v13 = (v12 >> 5) & 0x1F;
  v14 = MiProtectionToCacheAttribute((v12 >> 5) & 0x1F);
  MiFinalizePageAttribute(v6, v14, 1LL);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  if ( a3 == -1 )
    *a2 = MiMakeTransitionPte(a1, v13);
  v15 = 48 * v8 - 0x220000000000LL;
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v16 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v16);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v15 + 24) < 0 );
  }
  v17 = *(_QWORD *)(v15 + 24);
  v18 = v17 + 1;
  v19 = v17 ^ (v17 + 1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v15 + 24) = v18 ^ v19 & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
