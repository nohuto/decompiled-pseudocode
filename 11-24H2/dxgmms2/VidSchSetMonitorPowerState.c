/*
 * XREFs of VidSchSetMonitorPowerState @ 0x140040420
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z @ 0x14000C8BC (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     RtlULongLongMult @ 0x1400348C0 (RtlULongLongMult.c)
 *     ?MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z @ 0x1400408A0 (-MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004A6B4 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     VidSchiControlVSync @ 0x1400D5680 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(__int64 a1, unsigned int a2, char a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rbp
  struct _ERESOURCE *v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  char v13; // cl
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rsi
  void (*v19)(_QWORD, __int64, __int64, const wchar_t *, ...); // rax
  bool v20; // zf
  unsigned __int64 v21; // rcx
  unsigned int v22; // r12d
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdx
  _DWORD *v25; // rcx
  __int64 v26; // rdi
  ULONGLONG v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  ULONGLONG v30; // rdx
  int v31; // ecx
  int v32; // r8d
  _QWORD v33[4]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v34; // [rsp+78h] [rbp-30h]
  ULONGLONG pullResult; // [rsp+B0h] [rbp+8h] BYREF

  v5 = 0;
  v6 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    v19 = (void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 9499;
    v19(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchGlobal, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a2 >= *(_DWORD *)(a1 + 40) )
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 9513;
    return 3221225485LL;
  }
  _mm_lfence();
  v10 = (struct _ERESOURCE *)(a1 + 1344);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1344), 1u);
  v11 = *(unsigned int *)(a1 + 2464);
  v12 = 1 << v6;
  v13 = *(_BYTE *)(a1 + 2468);
  if ( a3 )
  {
    *(_DWORD *)(a1 + 2464) = v11 | v12;
    if ( v13 )
      v20 = *(_DWORD *)(a1 + 4 * v6 + 2080) == 0;
    else
      v20 = *(_DWORD *)(a1 + 2080) == 0;
    if ( v20 )
      goto LABEL_9;
    v15 = (unsigned int)v6;
    v16 = 65538LL;
    if ( !v13 )
      v15 = 4294967293LL;
    LOBYTE(v11) = 1;
    goto LABEL_8;
  }
  v14 = v11 & ~v12;
  *(_DWORD *)(a1 + 2464) = v14;
  if ( v13 )
  {
    v15 = (unsigned int)v6;
    goto LABEL_7;
  }
  if ( !v14 )
  {
    v15 = 4294967293LL;
LABEL_7:
    v11 = 0LL;
    v16 = 2LL;
LABEL_8:
    VidSchiControlVSync(a1, v11, v16, v15);
  }
LABEL_9:
  ExReleaseResourceLite(v10);
  v34 = 0;
  v33[0] = a1 + 1984;
  AcquireSpinLock::Acquire((Acquire *)v33);
  v17 = *(_QWORD *)(a1 + 8 * v6 + 3432);
  if ( *(_BYTE *)(a1 + 59) )
    VSYNC_TIME_STATS::MonitorPowerStateChange(v17 + 78656, 2 - (unsigned int)(a3 != 0));
  if ( a3 )
  {
    v21 = a4[3];
    if ( (_DWORD)v21 )
    {
      v22 = 0x3E8 / (unsigned int)v21;
      v23 = 0x989680 / v21;
      if ( *(_DWORD *)(v17 + 83104) != 0x3E8 / (unsigned int)v21 && *(_BYTE *)(a1 + 7058) )
      {
        v27 = *(_QWORD *)(a1 + 2872);
        pullResult = 0LL;
        if ( RtlULongLongMult(0x989680 / v21, v27, &pullResult) >= 0 )
          v30 = pullResult / 0x989680;
        else
          v30 = v29 * (v23 / 0x989680) + v29 * (v28 - 10000000 * (v23 / 0x989680)) / 0x989680;
        VIDSCH_VSYNC_SMOOTHER::ResetSmoother(*(VIDSCH_VSYNC_SMOOTHER **)(v17 + 44408), *(_QWORD *)(v17 + 83112), v30);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 9592;
      v23 = 160000LL;
      v22 = 0;
    }
    *(_DWORD *)(v17 + 83104) = v22;
    if ( is_mul_ok(v23, *(_QWORD *)(a1 + 2872)) )
      v24 = v23 * *(_QWORD *)(a1 + 2872) / 0x989680;
    else
      v24 = *(_QWORD *)(a1 + 2872) * (v23 / 0x989680) + *(_QWORD *)(a1 + 2872) * (v23 % 0x989680) / 0x989680;
    v25 = a5;
    v26 = a1 + 16;
    *(_QWORD *)(v17 + 83112) = v24;
    if ( v25 && *(int *)(*(_QWORD *)v26 + 3004LL) >= 2600 )
      *(_DWORD *)(v17 + 83108) ^= ((unsigned __int8)*(_DWORD *)(v17 + 83108) ^ (unsigned __int8)(*v25 >> 11)) & 1;
    else
      *(_DWORD *)(v17 + 83108) &= ~1u;
    if ( *(int *)(*(_QWORD *)v26 + 3004LL) >= 2900 )
    {
      if ( a4[15] * a4[4] != a4[14] * a4[5] )
        v5 = 10000000 * (unsigned __int64)a4[5] / a4[4];
      if ( v5 != *(_DWORD *)(v17 + 83096) )
      {
        WdLogSingleEntry4(4LL, v5, v6);
        WdLogGlobalForLineNumber = 9657;
        if ( (byte_140081244 & 4) != 0 )
          McTemplateK0qqqq_EtwWriteTransfer(
            v31,
            (unsigned int)&EventSetBaseDesktopDuration,
            v32,
            v6,
            *(_DWORD *)(v17 + 83096),
            *(_DWORD *)(v17 + 3192),
            v5);
        *(_DWORD *)(v17 + 83096) = v5;
      }
      *(_DWORD *)(v17 + 83092) = 1;
    }
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v33);
  return 0LL;
}
