/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x140C5B14C
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140C5B698 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140690750 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiActOnLargeKernelHalPages @ 0x1407E79F8 (MiActOnLargeKernelHalPages.c)
 */

__int64 __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // r12
  __int64 *i; // r14
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  _QWORD *v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // rdi

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); i != v1; i = (__int64 *)*i )
  {
    v3 = i[6];
    v4 = (_QWORD *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v5 = ((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
    {
      if ( (MiFlags & 0x8000) != 0 )
        MiActOnLargeKernelHalPages(v3, (__int64)MiValidateKernelHalLargePageRange, 0);
      v6 = (unsigned __int64)(unsigned int)dword_140E374AC >> 12;
      if ( v6 )
        MiInitializeBootLoadedDriverPfnRange(&v4[(v5 + 511) & 0xFFFFFFFFFFFFFE00uLL], v6, 1);
    }
    else
    {
      v7 = &v4[v5];
      v8 = MiInitializeBootLoadedDriverPfnRange(v4, v5, 0);
      if ( v3 == PsNtosImageBase || v3 == PsHalImageBase )
        v9 = (unsigned int)dword_140E374AC;
      else
        v9 = (unsigned int)(dword_140E374B0 + dword_140E374AC);
      v10 = v9 >> 12;
      if ( v10 )
      {
        v5 += v10;
        MiInitializeBootLoadedDriverPfnRange(v7, v10, 1);
        v7 += v10;
      }
      if ( v3 != PsNtosImageBase && v3 != PsHalImageBase && dword_140E2D738 )
      {
        v5 += (unsigned int)dword_140E2D738;
        MiInitializeBootLoadedDriverPfnRange(v7, (unsigned int)dword_140E2D738, 0);
      }
      if ( v8 )
      {
        if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, v8, 0LL, 0) < 0 )
          return 0LL;
        _InterlockedAdd64(&qword_140E375D8, v8);
      }
      if ( v3 != PsNtosImageBase && v3 != PsHalImageBase )
      {
        _InterlockedAdd(&dword_140E375F0, v5);
        _InterlockedAdd64(&qword_140E375D8, -(__int64)v5);
      }
    }
  }
  return 1LL;
}
