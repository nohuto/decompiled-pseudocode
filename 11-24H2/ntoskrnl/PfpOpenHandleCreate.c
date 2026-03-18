/*
 * XREFs of PfpOpenHandleCreate @ 0x14096B99C
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140745C48 (PfpQueryFileExtentsRequest.c)
 *     PfpVolumeOpenAndVerify @ 0x140950C88 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x140953524 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x140953B8C (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x140953F94 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x14096AFAC (PfSnGetSectionObject.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14096BF6C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x14096E298 (PfSnQueryVolumeInfo.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     PfpCheckPrefetchAbort @ 0x1404864EC (PfpCheckPrefetchAbort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PfpOpenHandleCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int v12; // esi
  __int64 v13; // r14
  int v14; // r13d
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r8d
  _QWORD v21[2]; // [rsp+28h] [rbp-59h] BYREF
  int v22; // [rsp+38h] [rbp-49h]
  __int64 v23; // [rsp+40h] [rbp-41h]
  __int64 v24; // [rsp+48h] [rbp-39h]
  int v25; // [rsp+50h] [rbp-31h]
  __int128 v26; // [rsp+58h] [rbp-29h]
  int v27; // [rsp+68h] [rbp-19h]
  int v28; // [rsp+6Ch] [rbp-15h]
  int v29; // [rsp+70h] [rbp-11h]
  __int64 v30; // [rsp+78h] [rbp-9h]
  __int64 v31; // [rsp+80h] [rbp-1h]
  __int64 v32; // [rsp+88h] [rbp+7h]
  int v33; // [rsp+90h] [rbp+Fh]
  int v34; // [rsp+94h] [rbp+13h]
  LARGE_INTEGER Interval; // [rsp+D0h] [rbp+4Fh] BYREF

  memset_0(v21, 0, 0x70uLL);
  v12 = 0;
  v13 = a8;
  v14 = a7;
  Interval.QuadPart = -10000LL * *(unsigned int *)(a2 + 56);
  while ( 1 )
  {
    if ( (*(_DWORD *)(a2 + 68) & 4) != 0 )
      return (unsigned int)-1073741431;
    v15 = *(_QWORD **)(a2 + 24);
    if ( v15 && (unsigned int)PfpCheckPrefetchAbort(v15) )
      return (unsigned int)-1073741248;
    memset_0(v21, 0, 0x70uLL);
    v22 = 48;
    v21[0] = a2 + 40;
    v27 = a5;
    v29 = a6;
    v23 = a4;
    v25 = 576;
    v24 = a3;
    v26 = 0LL;
    v28 = v14;
    if ( v13 )
      v21[1] = *(_QWORD *)(v13 + 8);
    v19 = guard_dispatch_icall_no_overrides(v21, v16, v17, v18);
    if ( (v19 & 0x80000000) == 0 )
    {
      *(_QWORD *)(a1 + 8) = v31;
      *(_QWORD *)a1 = v30;
      *(_QWORD *)(a1 + 16) = v32;
      *(_DWORD *)(a1 + 24) = v34;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 76));
      *(_QWORD *)(a1 + 24) |= 0x400000000uLL;
      return 0;
    }
    ++*(_DWORD *)(a2 + 80);
    if ( v33 == 2 )
      break;
    if ( v33 == 5 )
    {
      *(_DWORD *)(a2 + 72) = 1;
      return v19;
    }
    if ( v33 != 11 && v33 != 12 && v33 != 13 && v33 != 16
      || v33 == 16 && v12 > 1
      || *(_DWORD *)(a2 + 60) <= *(_DWORD *)(a2 + 64) )
    {
      return v19;
    }
    KeDelayExecutionThread(0, 0, &Interval);
    *(_DWORD *)(a2 + 64) += *(_DWORD *)(a2 + 56);
    ++v12;
  }
  if ( v19 != -1073741790 )
    *(_QWORD *)(a1 + 24) |= 0x100000000uLL;
  return v19;
}
