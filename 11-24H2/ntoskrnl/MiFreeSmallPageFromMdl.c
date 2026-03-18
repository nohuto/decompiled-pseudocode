/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x1403A2098
 * Callers:
 *     MiZeroAndReleasePages @ 0x1403A0C10 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x1403A1D8C (MiFreeMdlPageRun.c)
 *     MiFreeSecureKernelPage @ 0x140410B08 (MiFreeSecureKernelPage.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsPfnEnclave @ 0x1403A2840 (MiIsPfnEnclave.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403A9CCC (MiReleaseNonPagedResourcesNotExposed.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiFreeSmallPageFromMdl(__int64 a1, char a2, char a3, __int64 a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  unsigned __int8 v9; // bp
  unsigned int v10; // edi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int16 v13; // r9
  ULONG_PTR v14; // r10
  int v15; // r11d
  int v16; // r15d
  __int64 v17; // r15
  bool v18; // zf
  unsigned __int64 v19; // rdi
  __int64 *v21; // rcx
  int v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+80h] [rbp+18h]
  int v24; // [rsp+80h] [rbp+18h]
  int v25; // [rsp+80h] [rbp+18h]

  v7 = 0;
  v8 = 48 * a1 - 0x220000000000LL;
  v9 = 17;
  v22 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 8) != 0 )
    {
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v10 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v10);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
    }
    else
    {
      v9 = MiLockPageInline(v8);
    }
  }
  v11 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
  if ( (unsigned int)MiIsPfnEnclave(v8) )
  {
    v17 = 0LL;
    v7 = 256;
LABEL_12:
    *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
    v23 = *(_DWORD *)(v8 + 32);
    v18 = (_WORD)v23 == 2;
    LOWORD(v23) = v23 - 2;
    *(_DWORD *)(v8 + 32) = v23;
    if ( v18 )
    {
      MiInsertPageInFreeOrZeroedList(v14, v7);
      v19 = 0LL;
      if ( (a3 & 1) == 0 )
        v19 = v17;
    }
    else
    {
      v24 = *(_DWORD *)(v8 + 32);
      BYTE2(v24) |= 7u;
      *(_DWORD *)(v8 + 32) = v24;
      *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
      v19 = 0LL;
    }
    goto LABEL_14;
  }
  v16 = a2 & 1;
  if ( (!v16 || !a4) && ((a3 & 4) == 0 || (unsigned int)MiGetPfnSlabType(v8) == 9) )
  {
    v7 = v15 - (v16 != 0);
LABEL_10:
    v17 = 1LL;
    goto LABEL_12;
  }
  if ( v13 != (_WORD)v15 )
    goto LABEL_10;
  v19 = 0LL;
  v25 = *(_DWORD *)(v8 + 32);
  BYTE2(v25) = BYTE2(v25) & 0xF8 | 5;
  *(_DWORD *)(v8 + 32) = v25;
  v21 = *(__int64 **)(a4 + 80);
  if ( *v21 != a4 + 72 )
    __fastfail(3u);
  *(_QWORD *)v8 = a4 + 72;
  *(_QWORD *)(v8 + 8) = v21;
  *v21 = v8;
  *(_QWORD *)(a4 + 80) = v8;
  ++*(_QWORD *)(a4 + 88);
LABEL_14:
  if ( !v22 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v9 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = v9;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      }
      __writecr8(v9);
    }
  }
  if ( v19 )
  {
    if ( (a3 & 0x10) != 0 )
      MiReleaseNonPagedResourcesNotExposed(v11, v19);
    else
      MiReleaseNonPagedResources(v11, v19);
  }
  return v19;
}
