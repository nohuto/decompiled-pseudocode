/*
 * XREFs of ApplyPathsModality @ 0x1401C67FC
 * Callers:
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 * Callees:
 *     GreIncrementDisplaySettingsUniqueness @ 0x140087D30 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvNotifyModeChangeStartStop @ 0x140089118 (DrvNotifyModeChangeStartStop.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x140122B28 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1401522D8 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1401A8EC8 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApplyPathsModality(
        __int64 a1,
        unsigned int a2,
        char a3,
        void *a4,
        struct _MDEV *a5,
        _BYTE *a6,
        _BYTE *a7,
        struct _MDEV **a8,
        int *a9,
        enum _DXGK_DIAG_SDC_STAGE *a10,
        __int64 a11)
{
  int v14; // eax
  __int64 v16; // rcx
  unsigned int *v17; // r14
  __int64 *v18; // rsi
  unsigned int *v19; // r15
  __int64 DxgkWin32kInterface; // rax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // ebx
  unsigned int v24; // ecx
  __int64 *v25; // r13
  unsigned int v26; // ebp
  int v27; // ebx
  __int64 v28; // rdx
  unsigned int v29; // r8d
  __int64 v30; // r10
  unsigned int v31; // ebx
  unsigned int v32; // r8d
  const signed __int64 *v33; // rdx
  struct _MDEV *v34; // rbp
  struct _MDEV **v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // r9d
  __int64 v39; // rcx
  unsigned int v40; // edx
  __int64 v41; // r8
  unsigned __int8 v42; // [rsp+50h] [rbp-38h] BYREF
  int v43[3]; // [rsp+54h] [rbp-34h] BYREF

  v43[0] = 0;
  *a6 = 0;
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
    *a7 = 0;
  v14 = ApplyPathModalityToCdsRegistryStore(a1);
  if ( v14 < 0 )
  {
    *a9 = v14;
    *(_DWORD *)a10 = 50;
    return 0xFFFFFFFFLL;
  }
  DrvNotifyModeChangeStartStop(1LL);
  v17 = (unsigned int *)(a1 + 40);
  v18 = (__int64 *)(a1 + 48);
  v19 = (unsigned int *)(a1 + 40);
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( !*v18 )
      goto LABEL_9;
    v19 = (unsigned int *)(a1 + 40);
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 12618;
LABEL_9:
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v16);
  v21 = a2;
  LODWORD(v21) = a2 | 0x20000;
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(DxgkWin32kInterface + 160))(v21, a1, a11);
  if ( v22 >= 0 )
  {
    v24 = *v17;
    v25 = (__int64 *)(a1 + 48);
    if ( *v17 )
    {
      v17 = v19;
      if ( *v18 )
      {
LABEL_15:
        v26 = 0;
        v27 = HIWORD(a2) & 0x40;
        if ( v24 )
        {
          v28 = *v18;
          do
          {
            v29 = v24;
            if ( (v27 & 0x40) != 0 )
            {
              v30 = 340LL * v26;
              if ( *(_DWORD *)(v30 + v28 + 88) != *(_DWORD *)(v30 + v28 + 120) )
              {
                WdLogSingleEntry4(4LL, *(int *)(v30 + v28 + 4), *(unsigned int *)(v30 + v28));
                v29 = *v19;
                v27 &= ~0x40u;
                WdLogGlobalForLineNumber = 12672;
              }
            }
            v28 = *v25;
            v24 = v29;
            if ( *(_BYTE *)(340LL * v26 + *v25 + 76) )
              a3 = 1;
            ++v26;
          }
          while ( v26 < v29 );
        }
        v31 = v27 & 0xFFFFFFF6;
        v32 = 0;
        if ( *(_WORD *)(a1 + 20) )
        {
          v33 = (const signed __int64 *)(a1 + 56);
          while ( _bittest64(v33, 0x24u) )
          {
            ++v32;
            v33 += 37;
            if ( v32 >= *(unsigned __int16 *)(a1 + 20) )
              goto LABEL_27;
          }
          v35 = a8;
          v34 = a5;
          v23 = DrvChangeDisplaySettingsInternal(0LL, 0LL, a1, a4, a5, a8, 0, v31 | (8 * (a3 & 1)) | 0x86, a7);
        }
        else
        {
LABEL_27:
          v34 = a5;
          v35 = a8;
          v42 = 0;
          DrvChangeDisplayFallback(a4, a3, 1, a5, a8, a10, (bool *)&v42, v43);
          v23 = v43[0];
        }
        if ( v23 >= 0 )
        {
          if ( v23 == 1 )
          {
            v23 = -1;
            *(_DWORD *)a10 = 52;
            *a9 = -1073741823;
          }
        }
        else
        {
          *(_DWORD *)a10 = 16;
          *a9 = -1073741823;
          *a6 = 1;
        }
        v37 = DxDdGetDxgkWin32kInterface(v36);
        (*(void (__fastcall **)(__int64))(v37 + 168))(a1);
        if ( v23 == 2 )
        {
          v38 = *(_DWORD *)(a1 + 40);
          if ( v38 )
          {
            v39 = *(_QWORD *)(a1 + 48);
            if ( v39 )
            {
              v40 = 0;
              while ( 1 )
              {
                v41 = 340LL * v40;
                if ( *(_DWORD *)(v41 + v39 + 88)
                  || *(_DWORD *)(v41 + v39 + 92)
                  || *(_DWORD *)(v41 + v39 + 124)
                  || *(_DWORD *)(v41 + v39 + 132) )
                {
                  break;
                }
                if ( ++v40 >= v38 )
                  goto LABEL_44;
              }
              *v35 = v34;
              v23 = 0;
              GreIncrementDisplaySettingsUniqueness(v39);
            }
          }
        }
        goto LABEL_44;
      }
      v25 = (__int64 *)(a1 + 48);
    }
    v19 = v17;
    WdLogSingleEntry0(1LL);
    v24 = *v17;
    WdLogGlobalForLineNumber = 12643;
    goto LABEL_15;
  }
  v23 = -1;
  *a6 = 1;
  *a9 = v22;
  *(_DWORD *)a10 = 51;
LABEL_44:
  DrvNotifyModeChangeStartStop(0LL);
  return (unsigned int)v23;
}
