/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x140C49DC0
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140C4A30C (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x1406852F0 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiActOnLargeKernelHalPages @ 0x1407D7B40 (MiActOnLargeKernelHalPages.c)
 */

__int64 __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // r12
  __int64 *i; // r14
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rt1
  _QWORD *v9; // r15
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rt1
  __int64 v14; // rt1

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
      v6 = (unsigned __int64)(unsigned int)dword_140E3726C >> 12;
      if ( v6 )
        MiInitializeBootLoadedDriverPfnRange(&v4[(v5 + 511) & 0xFFFFFFFFFFFFFE00uLL], v6, 1);
    }
    else
    {
      v7 = MiInitializeBootLoadedDriverPfnRange(v4, v5, 0);
      v8 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
      v9 = &v4[v5];
      v10 = v7;
      if ( v3 == v8 || (PVOID)v3 == PsHalImageBase )
        v11 = (unsigned int)dword_140E3726C;
      else
        v11 = (unsigned int)(dword_140E37270 + dword_140E3726C);
      v12 = v11 >> 12;
      if ( v12 )
      {
        v5 += v12;
        MiInitializeBootLoadedDriverPfnRange(v9, v12, 1);
        v9 += v12;
      }
      v13 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
      if ( v3 != v13 && (PVOID)v3 != PsHalImageBase && dword_140E2D4F8 )
      {
        v5 += (unsigned int)dword_140E2D4F8;
        MiInitializeBootLoadedDriverPfnRange(v9, (unsigned int)dword_140E2D4F8, 0);
      }
      if ( v10 )
      {
        if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, v10, 0LL, 0LL) < 0 )
          return 0LL;
        _InterlockedAdd64(&qword_140E37398, v10);
      }
      v14 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
      if ( v3 != v14 && (PVOID)v3 != PsHalImageBase )
      {
        _InterlockedAdd(&dword_140E373B0, v5);
        _InterlockedAdd64(&qword_140E37398, -(__int64)v5);
      }
    }
  }
  return 1LL;
}
