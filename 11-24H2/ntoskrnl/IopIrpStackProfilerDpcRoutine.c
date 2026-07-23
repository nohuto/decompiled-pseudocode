/*
 * XREFs of IopIrpStackProfilerDpcRoutine @ 0x140464180
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     IopProcessIrpStackProfiler @ 0x1404643CC (IopProcessIrpStackProfiler.c)
 *     _local_unwind @ 0x1404FB730 (_local_unwind.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine2 @ 0x1406B63C0 (KiCustomAccessRoutine2.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IopIrpStackProfilerDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // rdi
  unsigned int i; // ebx
  __int64 Prcb; // rax
  __int64 v11; // rdx
  _DWORD *v12; // r8
  int v13; // edx
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  _DWORD v18[36]; // [rsp+0h] [rbp-218h] BYREF
  _BYTE v19[19]; // [rsp+90h] [rbp-188h] BYREF
  __int64 v20; // [rsp+A3h] [rbp-175h]
  __int64 v21; // [rsp+CBh] [rbp-14Dh]
  __int64 v22; // [rsp+E3h] [rbp-135h]
  _DWORD *v23; // [rsp+148h] [rbp-D0h]
  _QWORD v24[20]; // [rsp+150h] [rbp-C8h] BYREF

  v23 = v18;
  memset_0(v19, 0, 0x5BuLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v18[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v22 = a3;
    v20 = __ROL8__(a2, a3);
    v21 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine2(a2);
  }
  memset_0(v24, 0, sizeof(v24));
  v8 = 0LL;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb )
    {
      v8 += (unsigned int)(*(_DWORD *)(Prcb + 37776) - *(_DWORD *)(Prcb + 37860));
      v11 = 0LL;
      v12 = (_DWORD *)(Prcb + 37696);
      do
      {
        v24[v11++] += (unsigned int)(*v12 - v12[21]);
        ++v12;
      }
      while ( v11 < 20 );
    }
  }
  v13 = 20;
  result = (unsigned int)IopIrpStackProfilerSampleSize;
  if ( v8 > (unsigned int)IopIrpStackProfilerSampleSize )
  {
    v13 = 0;
    v15 = 0LL;
    result = (unsigned int)IopIrpStackProfilerMinSizeThreshold;
    do
    {
      if ( v24[v15] > (unsigned __int64)(unsigned int)IopIrpStackProfilerMinSizeThreshold )
        break;
      ++v13;
      ++v15;
    }
    while ( v15 < 20 );
  }
  if ( v13 != 20 )
  {
    IopProcessIrpStackProfiler(v24);
    IopIrpStackProfilerMinSizeThreshold *= 2;
    if ( (unsigned int)IopIrpStackProfilerMinSizeThreshold > 0x1900 )
      IopIrpStackProfilerMinSizeThreshold = 6400;
    IopIrpStackProfilerSampleSize *= 2;
    if ( (unsigned int)IopIrpStackProfilerSampleSize > 0x7D00 )
      IopIrpStackProfilerSampleSize = 32000;
    v16 = 0;
    for ( result = (unsigned int)KeNumberProcessors_0;
          v16 < (unsigned int)KeNumberProcessors_0;
          result = (unsigned int)KeNumberProcessors_0 )
    {
      v17 = KeGetPrcb(v16);
      if ( v17 )
      {
        *(_OWORD *)(v17 + 37780) = *(_OWORD *)(v17 + 37696);
        *(_OWORD *)(v17 + 37796) = *(_OWORD *)(v17 + 37712);
        *(_OWORD *)(v17 + 37812) = *(_OWORD *)(v17 + 37728);
        *(_OWORD *)(v17 + 37828) = *(_OWORD *)(v17 + 37744);
        *(_OWORD *)(v17 + 37844) = *(_OWORD *)(v17 + 37760);
        *(_DWORD *)(v17 + 37860) = *(_DWORD *)(v17 + 37776);
      }
      ++v16;
    }
  }
  _InterlockedOr(&IopIrpStackProfilerFlags, 4u);
  return result;
}
