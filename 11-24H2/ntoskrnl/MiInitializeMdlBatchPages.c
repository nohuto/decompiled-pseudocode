/*
 * XREFs of MiInitializeMdlBatchPages @ 0x140393678
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 *     MiReturnMdlExcess @ 0x1406730E0 (MiReturnMdlExcess.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14034F90C (MiConvertSmallPageRangeToLarge.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiInitializeMdlSinglePage @ 0x140393930 (MiInitializeMdlSinglePage.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140393A14 (MiInitializeMdlOneNodeBatchPages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LOGICAL __fastcall MiInitializeMdlBatchPages(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v4; // edi
  __int64 v5; // rsi
  __int64 *v6; // rcx
  unsigned __int64 v7; // r12
  ULONG_PTR *v8; // r14
  ULONG_PTR *v9; // rbp
  unsigned __int64 v10; // r15
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // r14d
  int v14; // eax
  int DemandZeroPte; // ebx
  LOGICAL result; // eax
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v18; // rbp
  __int64 *v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 *v23; // rsi
  unsigned __int64 v24; // rbp
  __int64 *v25; // [rsp+70h] [rbp+8h]
  __int64 v26; // [rsp+78h] [rbp+10h]
  __int64 v27; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 64);
  v26 = v2;
  v4 = 0;
  v5 = 0LL;
  v6 = (__int64 *)(v2 + 48);
  v7 = (unsigned __int64)*(unsigned int *)(v2 + 40) >> 12;
  v8 = (ULONG_PTR *)(v2 + 48);
  v9 = (ULONG_PTR *)(v2 + 48);
  v25 = (__int64 *)(v2 + 48);
  if ( !v7 )
  {
    v13 = 0;
    goto LABEL_10;
  }
  v10 = (unsigned __int64)*(unsigned int *)(v2 + 40) >> 12;
  do
  {
    v11 = MiPageToNode(*v8);
    v12 = v11;
    if ( v5 )
    {
      if ( v11 == v4 )
      {
        ++v5;
        goto LABEL_6;
      }
      MiInitializeMdlOneNodeBatchPages(a1, v9, v5);
    }
    v5 = 1LL;
    v4 = v12;
    v9 = v8;
LABEL_6:
    ++v8;
    --v10;
  }
  while ( v10 );
  v13 = 0;
  if ( v5 )
    MiInitializeMdlOneNodeBatchPages(a1, v9, v5);
  v2 = v26;
  v6 = v25;
LABEL_10:
  v27 = *(_QWORD *)(a1 + 72);
  v14 = *(_DWORD *)(a1 + 56);
  if ( (v14 & 0x80000200) != 0 )
  {
    DemandZeroPte = 0;
    if ( *(_QWORD *)(a1 + 48) != 1LL )
    {
      v22 = 3;
      if ( (v14 & 0x1000) != 0 )
      {
        v22 = 2;
      }
      else if ( (v14 & 0x1000000) != 0 )
      {
        v22 = 1;
      }
      else if ( (v14 & 0x2000000) != 0 )
      {
        v22 = 0;
      }
      v23 = v6;
      if ( v7 )
      {
        v24 = v7;
        do
        {
          MiConvertSmallPageRangeToLarge(*v23++, v22);
          --v24;
        }
        while ( v24 );
      }
    }
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(4);
  }
  result = *(_DWORD *)(a1 + 148);
  if ( (result & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(v6) = CurrentIrql;
      result = KiRaiseIrqlProcessIrqlFlags(v6, a2);
    }
  }
  v18 = 0LL;
  if ( v7 )
  {
    v19 = v25;
    do
    {
      v20 = 48 * *v19 - 0x220000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      MiInitializeMdlSinglePage(v20, v20, v27, DemandZeroPte, *(_DWORD *)(a1 + 56));
      result = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql >= 2u || (v18 & 0xF) != 0 )
      {
        v13 = 0;
      }
      else
      {
        result = KeShouldYieldProcessor();
        v13 = 0;
        if ( result )
        {
          if ( KiIrqlFlags )
          {
            LOBYTE(a2) = CurrentIrql;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
          }
          result = CurrentIrql;
          __writecr8(CurrentIrql);
          v21 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(a2) = 2;
            result = KiRaiseIrqlProcessIrqlFlags(v21, a2);
          }
        }
      }
      ++v18;
      ++v19;
    }
    while ( v18 < v7 );
    v2 = v26;
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  *(_WORD *)(v2 + 10) |= 2u;
  *(_QWORD *)(v2 + 16) = 0LL;
  return result;
}
