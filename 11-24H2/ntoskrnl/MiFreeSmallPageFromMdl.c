/*
 * XREFs of MiFreeSmallPageFromMdl @ 0x140218CC8
 * Callers:
 *     MiZeroAndReleasePages @ 0x140217770 (MiZeroAndReleasePages.c)
 *     MiFreeMdlPageRun @ 0x1402189BC (MiFreeMdlPageRun.c)
 *     MiFreeSecureKernelPage @ 0x140433D48 (MiFreeSecureKernelPage.c)
 * Callees:
 *     MiIsPfnEnclave @ 0x140219470 (MiIsPfnEnclave.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x14039895C (MiReleaseNonPagedResourcesNotExposed.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFreeSmallPageFromMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v6; // r12
  char v7; // r15
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int8 v10; // bp
  unsigned int v11; // edi
  __int64 v12; // r14
  __int64 v13; // rdx
  __int16 v14; // r9
  ULONG_PTR v15; // r10
  __int16 v16; // r11
  __int64 v17; // r15
  bool v18; // zf
  __int64 v19; // rdi
  __int64 *v21; // rcx
  int v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+80h] [rbp+18h]
  int v24; // [rsp+80h] [rbp+18h]
  int v25; // [rsp+80h] [rbp+18h]

  v4 = 48 * a1;
  v6 = a3;
  v7 = a2;
  v8 = 0xFFFFDE0000000000uLL;
  v9 = v4 - 0x220000000000LL;
  v10 = 17;
  v22 = a3 & 2;
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 8) != 0 )
    {
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, a2, a3, a4) )
          {
            HvlNotifyLongSpinWait(v11);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
    }
    else
    {
      v10 = MiLockPageInline(v9);
    }
  }
  v12 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
  if ( (unsigned int)MiIsPfnEnclave(v9, qword_140E300C8, a3, *(unsigned int *)(v9 + 32)) )
  {
    v17 = 0LL;
  }
  else
  {
    if ( ((v7 & 1) != 0 && a4 || (v6 & 4) != 0 && (unsigned int)MiGetPfnSlabType(v9) != 9) && v14 == v16 )
    {
      v19 = 0LL;
      v25 = *(_DWORD *)(v9 + 32);
      BYTE2(v25) = BYTE2(v25) & 0xF8 | 5;
      *(_DWORD *)(v9 + 32) = v25;
      v21 = *(__int64 **)(a4 + 80);
      if ( *v21 != a4 + 72 )
        __fastfail(3u);
      *(_QWORD *)v9 = a4 + 72;
      *(_QWORD *)(v9 + 8) = v21;
      *v21 = v9;
      *(_QWORD *)(a4 + 80) = v9;
      ++*(_QWORD *)(a4 + 88);
      goto LABEL_13;
    }
    v17 = 1LL;
  }
  *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
  v23 = *(_DWORD *)(v9 + 32);
  v18 = (_WORD)v23 == 2;
  LOWORD(v23) = v23 - 2;
  *(_DWORD *)(v9 + 32) = v23;
  if ( v18 )
  {
    MiInsertPageInFreeOrZeroedList(v15);
    v19 = 0LL;
    if ( (v6 & 1) == 0 )
      v19 = v17;
  }
  else
  {
    v24 = *(_DWORD *)(v9 + 32);
    BYTE2(v24) |= 7u;
    *(_DWORD *)(v9 + 32) = v24;
    *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
    v19 = 0LL;
  }
LABEL_13:
  if ( !v22 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v10 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v13) = v10;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      }
      __writecr8(v10);
    }
  }
  if ( v19 )
  {
    if ( (v6 & 0x10) != 0 )
      MiReleaseNonPagedResourcesNotExposed(v12, v19);
    else
      MiReleaseNonPagedResources(v12, v19);
  }
  return v19;
}
