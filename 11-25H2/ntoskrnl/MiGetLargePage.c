/*
 * XREFs of MiGetLargePage @ 0x140222688
 * Callers:
 *     MiGetLargePagesForChain @ 0x140222408 (MiGetLargePagesForChain.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404D2FFC (MiGetClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5F34 (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x14068184C (MiProcessVaContiguityInformation.c)
 * Callees:
 *     MiAssignDefaultChannel @ 0x140222A5C (MiAssignDefaultChannel.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x140223AC0 (MiPerformOnDemandLargePageCoalesce.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetFreeZeroPfnCold @ 0x140438788 (MiSetFreeZeroPfnCold.c)
 *     MiAddPageToHeatList @ 0x14044047C (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned int v11; // esi
  __int64 v12; // r15
  unsigned int v13; // r11d
  char v14; // al
  char v15; // r11
  unsigned int v16; // r8d
  volatile signed __int32 *v17; // rcx
  unsigned int v18; // edi
  __int64 Page; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // eax
  _DWORD *v27; // r14
  unsigned __int8 v28; // bl
  unsigned int v29; // esi
  int v31; // r15d
  int v32; // [rsp+30h] [rbp-D0h]
  int v33; // [rsp+30h] [rbp-D0h]
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-C8h]
  __int64 v36; // [rsp+40h] [rbp-C0h]
  __int64 v37; // [rsp+48h] [rbp-B8h]
  __int128 v38; // [rsp+50h] [rbp-B0h]
  _DWORD v39[36]; // [rsp+60h] [rbp-A0h] BYREF

  v37 = a8;
  v9 = a3;
  v35 = a2;
  v36 = a7;
  v10 = a4;
  memset_0(v39, 0, sizeof(v39));
  v34 = 0;
  v32 = 0;
  v11 = (a6 & 0x10 | 0x334000) >> 4;
  v38 = 0LL;
  if ( (a6 & 2) != 0 || (a6 & 4) == 0 )
    v11 |= 0x10u;
  v12 = MiPageSizes[v9];
  if ( (_DWORD)v10 == -1 )
    v13 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
  else
    v13 = v10;
  v14 = MiAssignDefaultChannel(v13);
  DWORD2(v38) = ((2 * (v15 & 0x3F | ((v9 & 3 | (4 * (a5 & 3u))) << 7))) | v14 & 1) << 8;
  if ( v35 )
  {
    v17 = &v34;
    v34 = v35 / (v12 << 12);
  }
  else
  {
    v17 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 1280 * v9 + 57216 * v10);
  }
  *(_QWORD *)&v38 = v17;
  v16 = ((2 * (v15 & 0x3F | ((v9 & 3 | (4 * (a5 & 3u))) << 7))) | v14 & 1) << 8;
  v18 = v16 | (unsigned __int8)(_InterlockedExchangeAdd(v17, 1u)
                              % (unsigned int)dword_140E2D980[((unsigned __int64)v16 >> 16) & 3]);
  while ( 1 )
  {
    Page = MiGetPage(a1, v18, v11);
    if ( Page != -1 )
      break;
    v31 = (v18 >> 15) & 1;
    if ( v36 && !v32 && (unsigned int)MiPerformOnDemandLargePageCoalesce(a1, v9, v10, v31, v36) )
    {
      v32 = 1;
    }
    else
    {
      if ( v31 || (a6 & 1) != 0 )
        return 0LL;
      v18 |= 0x8000u;
    }
  }
  v22 = 48 * Page - 0x220000000000LL;
  if ( !(unsigned int)MiIsFreeZeroPfnCold(v22, v20, v21, Page) || (v26 = 1, (HvlEnlightenments & 0x200000) == 0) )
    v26 = 0;
  v39[0] = 129;
  v27 = v39;
  if ( v26 )
  {
    v27 = v39;
    if ( v37 )
      v27 = (_DWORD *)v37;
    MiAddPageToHeatList(v27, v25, (unsigned int)v9);
    if ( v27[1] && v27 == v39 )
      MiIssuePageHeatList(v27);
    MiSetFreeZeroPfnCold(v22, 0LL);
  }
  if ( (a6 & 4) == 0 && (*(_QWORD *)(v22 + 16) & 0x3E0LL) != 0 )
  {
    if ( v27[1] )
      MiIssuePageHeatList(v27);
    MiZeroLargePage(0, v22, v9, a5, (a6 >> 4) & 1);
    *(_QWORD *)(v22 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  if ( (v11 & 1) != 0 )
  {
    v28 = 17;
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v29 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v24) )
        {
          HvlNotifyLongSpinWait(v29);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
  }
  else
  {
    v28 = MiLockPageInline(v22);
  }
  *(_QWORD *)(v22 + 24) = *(_QWORD *)(v22 + 24) & 0xC000000000000000uLL | 1;
  HIWORD(v33) = HIWORD(*(_DWORD *)(v22 + 32));
  LOWORD(v33) = 2;
  *(_DWORD *)(v22 + 32) = v33;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v28 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v23) = v28;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
    }
    __writecr8(v28);
  }
  return v22;
}
