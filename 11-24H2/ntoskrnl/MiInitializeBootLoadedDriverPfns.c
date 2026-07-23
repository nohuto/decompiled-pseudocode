/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x140C5D2DC
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140C5D828 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140691820 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiActOnLargeKernelHalPages @ 0x1407E7FC8 (MiActOnLargeKernelHalPages.c)
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
        MiActOnLargeKernelHalPages((char *)v3);
      v6 = (unsigned __int64)(unsigned int)dword_140E375EC >> 12;
      if ( v6 )
        MiInitializeBootLoadedDriverPfnRange(&v4[(v5 + 511) & 0xFFFFFFFFFFFFFE00uLL], v6, 1);
    }
    else
    {
      v7 = &v4[v5];
      v8 = MiInitializeBootLoadedDriverPfnRange(v4, v5, 0);
      if ( (PVOID)v3 == PsNtosImageBase || (PVOID)v3 == PsHalImageBase )
        v9 = (unsigned int)dword_140E375EC;
      else
        v9 = (unsigned int)(dword_140E375F0 + dword_140E375EC);
      v10 = v9 >> 12;
      if ( v10 )
      {
        v5 += v10;
        MiInitializeBootLoadedDriverPfnRange(v7, v10, 1);
        v7 += v10;
      }
      if ( (PVOID)v3 != PsNtosImageBase && (PVOID)v3 != PsHalImageBase && dword_140E2D878 )
      {
        v5 += (unsigned int)dword_140E2D878;
        MiInitializeBootLoadedDriverPfnRange(v7, (unsigned int)dword_140E2D878, 0);
      }
      if ( v8 )
      {
        if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, v8, 0LL, 0LL) < 0 )
          return 0LL;
        _InterlockedAdd64(&qword_140E37718, v8);
      }
      if ( (PVOID)v3 != PsNtosImageBase && (PVOID)v3 != PsHalImageBase )
      {
        _InterlockedAdd(&dword_140E37730, v5);
        _InterlockedAdd64(&qword_140E37718, -(__int64)v5);
      }
    }
  }
  return 1LL;
}
