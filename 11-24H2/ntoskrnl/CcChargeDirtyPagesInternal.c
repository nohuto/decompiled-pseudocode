/*
 * XREFs of CcChargeDirtyPagesInternal @ 0x140442A90
 * Callers:
 *     CcSetDirtyPinnedData @ 0x1402769E0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1404AF700 (CcAddDirtyPagesToExternalCache.c)
 *     CcUpdateExternalCacheInfoEx @ 0x140578190 (CcUpdateExternalCacheInfoEx.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1402638AC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1402650BC (CcNotifyWriteBehindVolume.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14049AF6C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall CcChargeDirtyPagesInternal(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rsi
  _BYTE *v7; // r15
  _QWORD *v8; // rbp
  _QWORD *v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // edx

  if ( CcEnablePerVolumeLazyWriter )
  {
    v6 = (_BYTE *)(a6 + 708);
    v7 = (_BYTE *)(a6 + 1172);
    v8 = (_QWORD *)(a6 + 992);
  }
  else
  {
    v6 = (_BYTE *)(a5 + 780);
    v7 = (_BYTE *)(a5 + 1292);
    v8 = (_QWORD *)(a5 + 1056);
  }
  *(_QWORD *)(a5 + 1056) += a4;
  if ( a6 )
    *(_QWORD *)(a6 + 992) += a4;
  if ( a2 )
    *(_DWORD *)(a2 + 8) += a4;
  if ( a3 )
    *(_DWORD *)(a3 + 32) += a4;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 112) += a4;
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 512) + 40LL), a4);
    v9 = *(_QWORD **)(a1 + 512);
    v9[31] += v9[5];
    v10 = v9[32];
    v11 = *(_QWORD *)(a1 + 512);
    if ( v10 <= *(_QWORD *)(v11 + 40) )
      v10 = *(_QWORD *)(v11 + 40);
    v9[32] = v10;
    if ( a6 )
    {
      v9[33] += *(_QWORD *)(a6 + 1016);
      v9[34] = *(_QWORD *)(a6 + 1024);
      v9[35] = *(_QWORD *)(a6 + 1032);
    }
    ++v9[36];
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 248) + 24LL), a4);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 248) + 136LL) == -1LL )
        *(_QWORD *)(*(_QWORD *)(a1 + 248) + 136LL) = MEMORY[0xFFFFF78000000320];
    }
  }
  if ( *v7 && *v8 >= 0x2000uLL )
  {
    v12 = 16;
    if ( CcEnablePerVolumeLazyWriter )
    {
      if ( !*(_BYTE *)(a6 + 1172) )
        LOBYTE(v12) = 4;
      CcNotifyWriteBehindVolume(a6, v12);
      if ( !*(_BYTE *)(a6 + 1172) )
        *(_BYTE *)(a6 + 985) = 1;
    }
    else
    {
      if ( !*(_BYTE *)(a5 + 1292) )
        v12 = 4;
      CcNotifyWriteBehindInternal(a5, v12);
      if ( !*(_BYTE *)(a5 + 1292) )
        *(_BYTE *)(a5 + 1049) = 1;
    }
  }
  if ( *v6 )
  {
    if ( CcEnablePerVolumeLazyWriter )
    {
      if ( !*(_BYTE *)(a6 + 1172) )
      {
        if ( !*(_BYTE *)(a6 + 985) )
        {
          if ( !*(_BYTE *)(a6 + 984) )
            KeBugCheckEx(0x34u, 0x7CBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          KiSetTimerEx(a6 + 920, CcFirstDelay, 0, 0, 0LL);
        }
        if ( !*(_BYTE *)(a6 + 1172) )
          *(_BYTE *)(a6 + 985) = 1;
      }
    }
    else if ( !*(_BYTE *)(a5 + 1292) )
    {
      if ( !*(_BYTE *)(a5 + 1049) )
      {
        if ( !*(_BYTE *)(a5 + 1048) )
          KeBugCheckEx(0x34u, 0x371uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        KiSetTimerEx(a5 + 984, CcFirstDelay, 0, 0, 0LL);
      }
      if ( !*(_BYTE *)(a5 + 1292) )
        *(_BYTE *)(a5 + 1049) = 1;
    }
    *v6 = 0;
  }
  if ( !CcEnablePerVolumeLazyWriter )
    CcAdjustWriteBehindThreadPoolIfNeeded(a5, 0LL);
}
