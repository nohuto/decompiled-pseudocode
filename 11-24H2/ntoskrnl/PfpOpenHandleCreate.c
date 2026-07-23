/*
 * XREFs of PfpOpenHandleCreate @ 0x1409543F8
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140743F38 (PfpQueryFileExtentsRequest.c)
 *     PfpVolumeOpenAndVerify @ 0x140934634 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x140936ED4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x14093753C (PfpPrefetchEntireDirectory.c)
 *     PfpFileBuildReadSupport @ 0x140937944 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x140953A3C (PfSnGetSectionObject.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1409549CC (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x140957B7C (PfSnQueryVolumeInfo.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     PfpCheckPrefetchAbort @ 0x140481ADC (PfpCheckPrefetchAbort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  unsigned int v17; // r8d
  _QWORD v19[2]; // [rsp+28h] [rbp-59h] BYREF
  int v20; // [rsp+38h] [rbp-49h]
  __int64 v21; // [rsp+40h] [rbp-41h]
  __int64 v22; // [rsp+48h] [rbp-39h]
  int v23; // [rsp+50h] [rbp-31h]
  __int128 v24; // [rsp+58h] [rbp-29h]
  int v25; // [rsp+68h] [rbp-19h]
  int v26; // [rsp+6Ch] [rbp-15h]
  int v27; // [rsp+70h] [rbp-11h]
  __int64 v28; // [rsp+78h] [rbp-9h]
  __int64 v29; // [rsp+80h] [rbp-1h]
  __int64 v30; // [rsp+88h] [rbp+7h]
  int v31; // [rsp+90h] [rbp+Fh]
  int v32; // [rsp+94h] [rbp+13h]
  LARGE_INTEGER Interval; // [rsp+D0h] [rbp+4Fh] BYREF

  memset_0(v19, 0, 0x70uLL);
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
    memset_0(v19, 0, 0x70uLL);
    v20 = 48;
    v19[0] = a2 + 40;
    v25 = a5;
    v27 = a6;
    v21 = a4;
    v23 = 576;
    v22 = a3;
    v24 = 0LL;
    v26 = v14;
    if ( v13 )
      v19[1] = *(_QWORD *)(v13 + 8);
    v17 = guard_dispatch_icall_no_overrides(v19, v16);
    if ( (v17 & 0x80000000) == 0 )
    {
      *(_QWORD *)(a1 + 8) = v29;
      *(_QWORD *)a1 = v28;
      *(_QWORD *)(a1 + 16) = v30;
      *(_DWORD *)(a1 + 24) = v32;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 76));
      *(_QWORD *)(a1 + 24) |= 0x400000000uLL;
      return 0;
    }
    ++*(_DWORD *)(a2 + 80);
    if ( v31 == 2 )
      break;
    if ( v31 == 5 )
    {
      *(_DWORD *)(a2 + 72) = 1;
      return v17;
    }
    if ( v31 != 11 && v31 != 12 && v31 != 13 && v31 != 16
      || v31 == 16 && v12 > 1
      || *(_DWORD *)(a2 + 60) <= *(_DWORD *)(a2 + 64) )
    {
      return v17;
    }
    KeDelayExecutionThread(0, 0, &Interval);
    *(_DWORD *)(a2 + 64) += *(_DWORD *)(a2 + 56);
    ++v12;
  }
  if ( v17 != -1073741790 )
    *(_QWORD *)(a1 + 24) |= 0x100000000uLL;
  return v17;
}
