/*
 * XREFs of MiGetLargePage @ 0x1402517B0
 * Callers:
 *     MiGetLargePagesForChain @ 0x140251524 (MiGetLargePagesForChain.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404CEA68 (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x14068E20C (MiProcessVaContiguityInformation.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x140250EDC (MiIsFreeZeroPfnCold.c)
 *     MiAssignDefaultChannel @ 0x140251B50 (MiAssignDefaultChannel.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1402640DC (MiPerformOnDemandLargePageCoalesce.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiSetFreeZeroPfnCold @ 0x140423EE0 (MiSetFreeZeroPfnCold.c)
 *     MiAddPageToHeatList @ 0x140435B9C (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiGetLargePage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned int v12; // r15d
  unsigned int v13; // ebx
  unsigned int v14; // r9d
  char v15; // al
  __int64 v16; // r10
  char v17; // r9
  __int64 v18; // r9
  unsigned int v19; // r11d
  volatile signed __int32 *v20; // rcx
  unsigned int v21; // edi
  __int64 Page; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _DWORD *v28; // rbp
  unsigned __int8 v29; // bl
  int v30; // eax
  int v32; // r14d
  int v33; // [rsp+30h] [rbp-118h]
  int v34; // [rsp+34h] [rbp-114h] BYREF
  __int64 v35; // [rsp+38h] [rbp-110h]
  __int64 v36; // [rsp+40h] [rbp-108h]
  __int128 v37; // [rsp+48h] [rbp-100h]
  _DWORD v38[36]; // [rsp+60h] [rbp-E8h] BYREF

  v36 = a8;
  v10 = a3;
  v35 = a7;
  v11 = a4;
  memset_0(v38, 0, sizeof(v38));
  v12 = 0;
  v34 = 0;
  v33 = 0;
  v13 = (a6 & 0x10 | 0x334000) >> 4;
  v37 = 0LL;
  if ( (a6 & 2) != 0 || (a6 & 4) == 0 )
    v13 |= 0x10u;
  if ( (_DWORD)v11 == -1 )
    v14 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
  else
    v14 = v11;
  v15 = MiAssignDefaultChannel(v14, 0x140000000uLL);
  v18 = v17 & 0x3F;
  DWORD2(v37) = ((2 * ((unsigned int)v18 | ((v10 & 3 | (4 * (a5 & 3u))) << 7))) | v15 & 1) << 8;
  if ( a2 )
  {
    v20 = &v34;
    v34 = a2 / (v16 << 12);
  }
  else
  {
    v20 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 1280 * v10 + 57216 * v11);
  }
  *(_QWORD *)&v37 = v20;
  v19 = ((2 * ((unsigned int)v18 | ((v10 & 3 | (4 * (a5 & 3u))) << 7))) | v15 & 1) << 8;
  v21 = v19 | (unsigned __int8)(_InterlockedExchangeAdd(v20, 1u)
                              % (unsigned int)dword_140E2DD00[((unsigned __int64)v19 >> 16) & 3]);
  while ( 1 )
  {
    Page = MiGetPage(a1, v21, v13, v18);
    v18 = Page;
    if ( Page != -1 )
      break;
    v32 = (v21 >> 15) & 1;
    if ( v35 && !v33 && (unsigned int)MiPerformOnDemandLargePageCoalesce(a1, v10, v11, v32, v35) )
    {
      v33 = 1;
    }
    else
    {
      if ( v32 || (a6 & 1) != 0 )
        return 0LL;
      v21 |= 0x8000u;
    }
  }
  v23 = 48 * Page - 0x220000000000LL;
  if ( (unsigned int)MiIsFreeZeroPfnCold(v23) && (HvlEnlightenments & 0x200000) != 0 )
  {
    v28 = v38;
    v38[0] = 129;
    if ( v36 )
      v28 = (_DWORD *)v36;
    MiAddPageToHeatList(v28, v27, (unsigned int)v10);
    if ( v28[1] && v28 == v38 )
      MiIssuePageHeatList(v28);
    MiSetFreeZeroPfnCold(v23, 0LL);
  }
  else
  {
    v38[0] = 129;
    v28 = v38;
  }
  if ( (a6 & 4) == 0 && (*(_QWORD *)(v23 + 16) & 0x3E0LL) != 0 )
  {
    if ( v28[1] )
      MiIssuePageHeatList(v28);
    MiZeroLargePage(0, v23, v10, a5, (a6 >> 4) & 1);
    *(_QWORD *)(v23 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  if ( (v13 & 1) != 0 )
  {
    v29 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v25, v24, v26, v27) )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v23 + 24) < 0 );
    }
  }
  else
  {
    v29 = MiLockPageInline(v23);
  }
  *(_QWORD *)(v23 + 24) = *(_QWORD *)(v23 + 24) & 0xC000000000000000uLL | 1;
  v30 = *(_DWORD *)(v23 + 32);
  LOWORD(v30) = 2;
  *(_DWORD *)(v23 + 32) = v30;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v29 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29);
    __writecr8(v29);
  }
  return v23;
}
