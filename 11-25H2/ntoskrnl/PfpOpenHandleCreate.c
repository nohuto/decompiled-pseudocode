/*
 * XREFs of PfpOpenHandleCreate @ 0x1408C2D6C
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140739C28 (PfpQueryFileExtentsRequest.c)
 *     PfSnGetSectionObject @ 0x1408C237C (PfSnGetSectionObject.c)
 *     PfpVolumeOpenAndVerify @ 0x1408E9330 (PfpVolumeOpenAndVerify.c)
 *     PfSnQueryVolumeInfo @ 0x1408EC988 (PfSnQueryVolumeInfo.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1408ECD5C (PfSnOpenVolumesForPrefetch.c)
 *     PfpPrefetchDirectoryStream @ 0x1409C6DF4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x1409C745C (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x1409C7864 (PfpFileBuildReadSupport.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     PfpCheckPrefetchAbort @ 0x1404871EC (PfpCheckPrefetchAbort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  unsigned int v16; // r8d
  _QWORD v18[2]; // [rsp+28h] [rbp-59h] BYREF
  int v19; // [rsp+38h] [rbp-49h]
  __int64 v20; // [rsp+40h] [rbp-41h]
  __int64 v21; // [rsp+48h] [rbp-39h]
  int v22; // [rsp+50h] [rbp-31h]
  __int128 v23; // [rsp+58h] [rbp-29h]
  int v24; // [rsp+68h] [rbp-19h]
  int v25; // [rsp+6Ch] [rbp-15h]
  int v26; // [rsp+70h] [rbp-11h]
  __int64 v27; // [rsp+78h] [rbp-9h]
  __int64 v28; // [rsp+80h] [rbp-1h]
  __int64 v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+90h] [rbp+Fh]
  int v31; // [rsp+94h] [rbp+13h]
  LARGE_INTEGER Interval; // [rsp+D0h] [rbp+4Fh] BYREF

  memset_0(v18, 0, 0x70uLL);
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
    memset_0(v18, 0, 0x70uLL);
    v19 = 48;
    v18[0] = a2 + 40;
    v24 = a5;
    v26 = a6;
    v20 = a4;
    v22 = 576;
    v21 = a3;
    v23 = 0LL;
    v25 = v14;
    if ( v13 )
      v18[1] = *(_QWORD *)(v13 + 8);
    v16 = guard_dispatch_icall_no_overrides(v18);
    if ( (v16 & 0x80000000) == 0 )
    {
      *(_QWORD *)(a1 + 8) = v28;
      *(_QWORD *)a1 = v27;
      *(_QWORD *)(a1 + 16) = v29;
      *(_DWORD *)(a1 + 24) = v31;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 76));
      *(_QWORD *)(a1 + 24) |= 0x400000000uLL;
      return 0;
    }
    ++*(_DWORD *)(a2 + 80);
    if ( v30 == 2 )
      break;
    if ( v30 == 5 )
    {
      *(_DWORD *)(a2 + 72) = 1;
      return v16;
    }
    if ( v30 != 11 && v30 != 12 && v30 != 13 && v30 != 16
      || v30 == 16 && v12 > 1
      || *(_DWORD *)(a2 + 60) <= *(_DWORD *)(a2 + 64) )
    {
      return v16;
    }
    KeDelayExecutionThread(0, 0, &Interval);
    *(_DWORD *)(a2 + 64) += *(_DWORD *)(a2 + 56);
    ++v12;
  }
  if ( v16 != -1073741790 )
    *(_QWORD *)(a1 + 24) |= 0x100000000uLL;
  return v16;
}
