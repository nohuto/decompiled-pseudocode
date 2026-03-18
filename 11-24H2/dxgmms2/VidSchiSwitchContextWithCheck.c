/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1400193A0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140018790 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     VidSchiBlockContextOnPendingFlips @ 0x140019A70 (VidSchiBlockContextOnPendingFlips.c)
 *     VidSchiCheckPreemptionPolicy @ 0x140019B60 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiUpdateContextStatus @ 0x14001AC80 (VidSchiUpdateContextStatus.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140020F30 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140020FC4 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiSwitchContextWithCheck(unsigned __int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // r14
  int v5; // r13d
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  LARGE_INTEGER v10; // r8
  unsigned __int128 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r15
  void (__fastcall *v16)(_QWORD); // rax
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  LARGE_INTEGER v25; // r8
  unsigned __int64 v26; // r9
  __int64 v27; // r8
  void (__fastcall *v28)(_QWORD); // rax
  __int64 *v29; // rdx
  __int64 v30; // rcx
  __int64 **v31; // rax
  void *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rdx
  __int64 v36; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D0h] [rbp+8h] BYREF
  union _LARGE_INTEGER v38; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v39; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v40; // [rsp+E8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 96);
  v2 = a1;
  v3 = 1;
  v4 = *(_QWORD *)(v1 + 24);
  if ( *(_DWORD *)(v4 + 3244) || (*(_BYTE *)(v4 + 3268) & 1) != 0 )
    goto LABEL_30;
  if ( (unsigned __int8)VidSchiBlockContextOnPendingFlips(*(_QWORD *)(a1 + 648)) )
  {
    if ( !*(_QWORD *)(v2 + 48) )
    {
      v29 = (__int64 *)(v2 + 40);
      v30 = *(_QWORD *)(*(_QWORD *)(v2 + 96) + 24LL) + 3752LL;
      v31 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(v2 + 96) + 24LL) + 3760LL);
      if ( *v31 != (__int64 *)v30 )
        goto LABEL_64;
      *v29 = v30;
      *(_QWORD *)(v2 + 48) = v31;
      *v31 = v29;
      *(_QWORD *)(v30 + 8) = v29;
    }
    VidSchiUpdateContextStatus(v2, 3LL, 16695LL);
    return 3LL;
  }
  v5 = *(_DWORD *)(v1 + 16520);
  v6 = *(_DWORD *)(v2 + 644);
  v39 = 0LL;
  if ( (v6 & 0xF) != 0 )
    goto LABEL_30;
  if ( (*(_DWORD *)(v2 + 112) & 0x10) == 0 )
    goto LABEL_30;
  v7 = *(_QWORD *)(v2 + 104);
  if ( *(_BYTE *)(v7 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0) )
    goto LABEL_30;
  if ( !(unsigned int)VidSchiCheckPreemptionPolicy(v2, &v39) )
  {
    v9 = v39;
    if ( v39 != -1 )
    {
      PerformanceFrequency.QuadPart = 0LL;
      v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v11 = (unsigned __int64)v10.QuadPart * (unsigned __int128)0x989680uLL;
      v40 = *((_QWORD *)&v11 + 1);
      if ( is_mul_ok(v10.QuadPart, 0x989680uLL) )
        v12 = v11 / (unsigned __int64)PerformanceFrequency.QuadPart;
      else
        v12 = 10000000 * (v10.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
            + 10000000
            * (v10.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
            / PerformanceFrequency.QuadPart;
      v13 = *(_QWORD *)(v1 + 96);
      *(_QWORD *)(v1 + 128) = v12 + v9;
      *(_QWORD *)(v1 + 136) = v13;
      WdLogSingleEntry2(4LL, *(unsigned __int16 *)(v1 + 4), v13);
      WdLogGlobalForLineNumber = 16745;
    }
    v14 = *(_QWORD *)(v1 + 8LL * *(unsigned int *)(v1 + 1576) + 1584);
    if ( v9 == -1 && !*(_DWORD *)(v1 + 3024) && (*(_DWORD *)(v1 + 3004) > 1u || v14 && v2 != v14) )
    {
      v38.QuadPart = 0LL;
      v25 = KeQueryPerformanceCounter(&v38);
      if ( is_mul_ok(v25.QuadPart, 0x989680uLL) )
        v26 = (unsigned __int64)v25.QuadPart * (unsigned __int128)0x989680uLL / (unsigned __int64)v38.QuadPart;
      else
        v26 = 10000000 * (v25.QuadPart / (unsigned __int64)v38.QuadPart)
            + 10000000 * (v25.QuadPart % (unsigned __int64)v38.QuadPart) / v38.QuadPart;
      v27 = *(_QWORD *)(v1 + 96);
      *(_QWORD *)(v1 + 128) = v26 + *(_QWORD *)(v2 + 480);
      *(_QWORD *)(v1 + 144) = v27;
      WdLogSingleEntry2(4LL, *(unsigned __int16 *)(v1 + 4), v27);
      WdLogGlobalForLineNumber = 16772;
    }
    if ( *(int *)(v1 + 3000) > 0
      && *(_DWORD *)(v1 + 3016) < *(_DWORD *)(v4 + 244)
      && !*(_DWORD *)(v1 + 3024)
      && (!v14
       || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 96) + 24LL) + 7063LL)
       || *(_DWORD *)(v14 + 404) <= *(_DWORD *)(v2 + 404)) )
    {
      goto LABEL_23;
    }
    RtlClearBitEx(v4 + 544, *(unsigned __int16 *)(v1 + 4), v8);
    RtlCopyBitMapEx(v4 + 496, v4 + 592, 0LL);
    RtlIntersectBitMapsEx(v4 + 592, v4 + 544);
    if ( (unsigned __int8)RtlAreBitsClearEx(v4 + 592, 0LL, *(_QWORD *)(v4 + 592)) )
    {
      if ( v5 != -1 && (*(_DWORD *)(*(_QWORD *)(v2 + 648) + 80LL) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v1 + 16520) != -1 )
        {
          v28 = *(void (__fastcall **)(_QWORD))(v4 + 3312);
          if ( v28 )
            v28(*(_QWORD *)(v4 + 3352));
        }
        *(_DWORD *)(*(_QWORD *)(v2 + 648) + 80LL) |= 0x10u;
      }
      return 2LL;
    }
    return 3LL;
  }
  v3 = 4;
LABEL_23:
  if ( v5 == -1 )
    goto LABEL_30;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 648) + 80LL) & 0x10) == 0 )
  {
    if ( *(_DWORD *)(v1 + 16520) != -1 )
    {
      v16 = *(void (__fastcall **)(_QWORD))(v4 + 3312);
      if ( v16 )
        v16(*(_QWORD *)(v4 + 3352));
    }
    *(_DWORD *)(*(_QWORD *)(v2 + 648) + 80LL) |= 0x10u;
  }
  if ( *(_BYTE *)(v1 + 16524) )
  {
LABEL_30:
    v17 = *(_QWORD *)(v2 + 96);
    v18 = *(_QWORD *)(v17 + 216);
    if ( v18 == v2 )
      return v3;
    VidSchiProfilePerformanceTick(3, *(_QWORD *)(v17 + 24), v17, 0LL, v2, 0LL, 0LL, *(_QWORD *)(v17 + 216));
    if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 72)) == 1 )
    {
      if ( !*(_BYTE *)(v2 + 908) )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 3840LL, v2, 0LL, 0LL);
        WdLogGlobalForLineNumber = 906;
        goto LABEL_80;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v2 + 104) + 24LL));
    }
    *(_QWORD *)(v17 + 216) = v2;
    if ( !v18 )
      return v3;
    v2 = -1LL;
    v17 = *(_QWORD *)(*(_QWORD *)(v18 + 96) + 24LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 72), 0xFFFFFFFF) != 1 )
      return v3;
    v19 = *(_QWORD *)(v18 + 96);
    if ( *(_QWORD *)(v19 + 224) == v18 )
      *(_QWORD *)(v19 + 224) = 0LL;
    v20 = *(_QWORD *)(v18 + 8);
    if ( *(_QWORD *)(v20 + 8) != v18 + 8 )
      goto LABEL_64;
    v21 = *(_QWORD **)(v18 + 16);
    if ( *v21 != v18 + 8 )
      goto LABEL_64;
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    v22 = *(_QWORD *)(v18 + 24);
    if ( *(_QWORD *)(v22 + 8) != v18 + 24 )
      goto LABEL_64;
    v23 = *(_QWORD **)(v18 + 32);
    if ( *v23 != v18 + 24 )
      goto LABEL_64;
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    while ( 1 )
    {
      v24 = VidSchiInterlockedRemoveHeadListIfExist(v17 + 1992, v18 + 712, v18 + 728);
      if ( !v24 )
        break;
      ExFreePoolWithTag((PVOID)(v24 - 8), 0);
    }
    if ( (*(_DWORD *)(v18 + 112) & 0x100) == 0 )
    {
LABEL_70:
      if ( bTracingEnabled )
        VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v18);
      v32 = *(void **)(v18 + 992);
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      v33 = *(_QWORD *)(v18 + 104);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 24), v2) != 1 )
        goto LABEL_75;
      v34 = *(_QWORD *)(v33 + 104);
      if ( *(_QWORD *)(v34 + 8) == v33 + 104 )
      {
        v35 = *(_QWORD **)(v33 + 112);
        if ( *v35 == v33 + 104 )
        {
          *v35 = v34;
          *(_QWORD *)(v34 + 8) = v35;
          ExFreePoolWithTag((PVOID)v33, 0);
LABEL_75:
          ExFreePoolWithTag((PVOID)v18, 0);
          return v3;
        }
      }
LABEL_64:
      __fastfail(3u);
    }
LABEL_80:
    while ( 1 )
    {
      v36 = VidSchiInterlockedRemoveHeadListIfExist(v17 + 1992, v18 + 736, v18 + 752);
      if ( !v36 )
        break;
      ExFreePoolWithTag((PVOID)(v36 - 8), 0);
    }
    goto LABEL_70;
  }
  VidSchiUpdateContextStatus(v2, 8LL, 16863LL);
  return 3LL;
}
