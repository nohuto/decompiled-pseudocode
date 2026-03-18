/*
 * XREFs of MiGetLargePage @ 0x1402F35A0
 * Callers:
 *     MiGetLargePagesForChain @ 0x1402F32E0 (MiGetLargePagesForChain.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404D2DE4 (MiGetClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1404D5620 (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x14068D0DC (MiProcessVaContiguityInformation.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x14022418C (MiIsFreeZeroPfnCold.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAssignDefaultChannel @ 0x1402F3560 (MiAssignDefaultChannel.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiZeroLargePage @ 0x140308BDC (MiZeroLargePage.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1403D5278 (MiPerformOnDemandLargePageCoalesce.c)
 *     MiSetFreeZeroPfnCold @ 0x1404319A0 (MiSetFreeZeroPfnCold.c)
 *     MiAddPageToHeatList @ 0x14043F8DC (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x14043F9FC (MiIssuePageHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  unsigned __int8 v15; // al
  char v16; // r9
  __int64 v17; // r10
  unsigned int v18; // r11d
  volatile signed __int32 *v19; // rcx
  unsigned int v20; // edi
  __int64 Page; // rax
  __int64 v22; // rdi
  __int64 v23; // r9
  _DWORD *v24; // rbp
  unsigned __int8 v25; // bl
  int v26; // eax
  int v28; // r14d
  int v29; // [rsp+30h] [rbp-118h]
  int v30; // [rsp+34h] [rbp-114h] BYREF
  __int64 v31; // [rsp+38h] [rbp-110h]
  __int64 v32; // [rsp+40h] [rbp-108h]
  __int128 v33; // [rsp+48h] [rbp-100h]
  _DWORD v34[36]; // [rsp+60h] [rbp-E8h] BYREF

  v32 = a8;
  v10 = a3;
  v31 = a7;
  v11 = a4;
  memset_0(v34, 0, sizeof(v34));
  v12 = 0;
  v30 = 0;
  v29 = 0;
  v13 = (a6 & 0x10 | 0x334000) >> 4;
  v33 = 0LL;
  if ( (a6 & 2) != 0 || (a6 & 4) == 0 )
    v13 |= 0x10u;
  if ( (_DWORD)v11 == -1 )
    v14 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
  else
    v14 = v11;
  v15 = MiAssignDefaultChannel(v14);
  DWORD2(v33) = ((2 * (v16 & 0x3F | ((v10 & 3 | (4 * (a5 & 3u))) << 7))) | v15 & 1) << 8;
  if ( a2 )
  {
    v19 = &v30;
    v30 = a2 / (v17 << 12);
  }
  else
  {
    v19 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 1280 * v10 + 57216 * v11);
  }
  *(_QWORD *)&v33 = v19;
  v18 = ((2 * (v16 & 0x3F | ((v10 & 3 | (4 * (a5 & 3u))) << 7))) | v15 & 1) << 8;
  v20 = v18 | (unsigned __int8)(_InterlockedExchangeAdd(v19, 1u)
                              % (unsigned int)dword_140E2DBC0[((unsigned __int64)v18 >> 16) & 3]);
  while ( 1 )
  {
    Page = MiGetPage(a1, v20, v13);
    if ( Page != -1 )
      break;
    v28 = (v20 >> 15) & 1;
    if ( v31 && !v29 && (unsigned int)MiPerformOnDemandLargePageCoalesce(a1, v10, v11, v28, v31) )
    {
      v29 = 1;
    }
    else
    {
      if ( v28 || (a6 & 1) != 0 )
        return 0LL;
      v20 |= 0x8000u;
    }
  }
  v22 = 48 * Page - 0x220000000000LL;
  if ( (unsigned int)MiIsFreeZeroPfnCold(v22) && (HvlEnlightenments & 0x200000) != 0 )
  {
    v24 = v34;
    v34[0] = 129;
    if ( v32 )
      v24 = (_DWORD *)v32;
    MiAddPageToHeatList(v24, v23, (unsigned int)v10);
    if ( v24[1] && v24 == v34 )
      MiIssuePageHeatList(v24);
    MiSetFreeZeroPfnCold(v22, 0LL);
  }
  else
  {
    v34[0] = 129;
    v24 = v34;
  }
  if ( (a6 & 4) == 0 && (*(_QWORD *)(v22 + 16) & 0x3E0LL) != 0 )
  {
    if ( v24[1] )
      MiIssuePageHeatList(v24);
    MiZeroLargePage(0, v22, v10, a5, (a6 >> 4) & 1);
    *(_QWORD *)(v22 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  if ( (v13 & 1) != 0 )
  {
    v25 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v12);
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
    v25 = MiLockPageInline(v22);
  }
  *(_QWORD *)(v22 + 24) = *(_QWORD *)(v22 + 24) & 0xC000000000000000uLL | 1;
  v26 = *(_DWORD *)(v22 + 32);
  LOWORD(v26) = 2;
  *(_DWORD *)(v22 + 32) = v26;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v25 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
    __writecr8(v25);
  }
  return v22;
}
