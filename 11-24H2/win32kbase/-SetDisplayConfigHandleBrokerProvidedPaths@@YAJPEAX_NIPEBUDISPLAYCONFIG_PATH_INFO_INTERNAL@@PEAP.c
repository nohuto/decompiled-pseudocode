/*
 * XREFs of ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14008CA1C
 * Callers:
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x140153090 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N11PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x14008D04C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14008D940 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x14008E088 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x14008EE9C (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622 @ 0x1401C64D0 (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyButNotVirtualMod.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622 @ 0x1401C65B4 (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyBut_ea_1401C65B4.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SetDisplayConfigHandleBrokerProvidedPaths(
        void *a1,
        char a2,
        unsigned int a3,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        struct D3DKMT_GETPATHSMODALITY **a5,
        bool *a6,
        enum _DXGK_DIAG_SDC_STAGE *a7)
{
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v7; // r13
  void *v10; // rsi
  int PathsModality; // ebx
  struct D3DKMT_GETPATHSMODALITY *v12; // rax
  unsigned __int16 *v13; // rbx
  unsigned __int16 *v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // r11d
  unsigned int v19; // esi
  __int64 DxgkWin32kInterface; // rax
  int v21; // edi
  unsigned int v22; // r9d
  unsigned int i; // r8d
  __int64 v25; // rcx
  int v26; // r10d
  unsigned int j; // edx
  unsigned int v28; // ecx
  unsigned int v29; // r10d
  struct D3DKMT_GETPATHSMODALITY *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r11
  unsigned int k; // edx
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int16 *v39; // rsi
  _OWORD *v40; // rcx
  __int128 v41; // xmm1
  __int64 v42; // rcx
  __int64 v43; // r9
  PVOID Buffer; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v45[24]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v47; // [rsp+A8h] [rbp+48h]

  v7 = a4;
  Buffer = 0LL;
  v10 = a1;
  if ( a2 )
  {
    v30 = AllocPathsModality(a3);
    v13 = (unsigned __int16 *)v30;
    if ( !v30 )
    {
      *(_DWORD *)a7 = 45;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 14613;
      v21 = -1073741801;
LABEL_40:
      FreePathsModality(Buffer);
      FreePathsModality(v13);
      return (unsigned int)v21;
    }
    *((_WORD *)v30 + 10) = 0;
LABEL_10:
    SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622(
      v45,
      v13);
    v19 = 0;
    v47 = v13[10];
    while ( 1 )
    {
      if ( v19 >= a3 )
      {
        v22 = v47;
        for ( i = v47; ; i += v18 )
        {
          if ( i >= v13[10] )
          {
            *a5 = (struct D3DKMT_GETPATHSMODALITY *)v13;
            SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622(v45);
            FreePathsModality(Buffer);
            FreePathsModality(0LL);
            return 0LL;
          }
          v25 = 148LL * i;
          v26 = *(_DWORD *)&v13[v25 + 40];
          if ( v26 != -2 )
            break;
          *(_DWORD *)&v13[v25 + 40] = 0;
LABEL_23:
          for ( j = 0; j < v13[10]; j += v18 )
          {
            if ( j != i )
            {
              v35 = 148LL * j;
              if ( *(_DWORD *)&v13[v35 + 36] == *(_DWORD *)&v13[v25 + 36]
                && *(_DWORD *)&v13[v35 + 38] == *(_DWORD *)&v13[v25 + 38] )
              {
                v36 = *(_DWORD *)&v13[v25 + 40];
                if ( *(_DWORD *)&v13[v35 + 40] == v36 )
                {
                  *(_DWORD *)&v13[v25 + 40] = v36 + 1;
                  goto LABEL_23;
                }
              }
            }
          }
          v22 = v47;
LABEL_28:
          if ( (*(_QWORD *)&v13[148 * i + 28] & 0x4000000000000LL) == 0 )
          {
            v28 = i + 1;
            v29 = i | 0xFE500000;
            if ( i + 1 < v13[10] )
            {
              v31 = 148LL * i;
              do
              {
                v32 = 148LL * v28;
                v33 = *(_QWORD *)&v13[v32 + 28];
                if ( (v33 & 0x4000000000000LL) == 0 && *(_DWORD *)&v13[v32 + 120] == *(_DWORD *)&v13[v31 + 120] )
                {
                  *(_DWORD *)&v13[v32 + 120] = v29;
                  *(_QWORD *)&v13[v32 + 28] = v33 | 0x4000000000000LL;
                  if ( !HIBYTE(v13[v31 + 92]) || LOBYTE(v13[v31 + 172]) )
                    *(_DWORD *)&v13[v32 + 40] = *(_DWORD *)&v13[v31 + 40];
                }
                v18 = 1;
                ++v28;
              }
              while ( v28 < v13[10] );
              v22 = v47;
            }
            *(_DWORD *)&v13[148 * i + 120] = v29;
            *(_QWORD *)&v13[148 * i + 28] |= 0x4000000000000uLL;
          }
        }
        for ( k = 0; ; k += v18 )
        {
          if ( k >= v22 )
          {
            *(_QWORD *)&v13[v25 + 32] |= 0x200000000000uLL;
            goto LABEL_28;
          }
          v43 = 148LL * k;
          if ( *(_DWORD *)&v13[v43 + 36] == *(_DWORD *)&v13[v25 + 36]
            && *(_DWORD *)&v13[v43 + 38] == *(_DWORD *)&v13[v25 + 38]
            && *(_DWORD *)&v13[v43 + 40] == v26 )
          {
            break;
          }
          v22 = v47;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 14677;
        *(_DWORD *)a7 = 48;
        goto LABEL_39;
      }
      if ( !a2 )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
        if ( !(*(unsigned __int8 (__fastcall **)(void *, _QWORD, _QWORD))(DxgkWin32kInterface + 736))(
                a1,
                *((_QWORD *)v7 + 27 * v19 + 2),
                *((unsigned int *)v7 + 54 * v19 + 7)) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 14632;
          *(_DWORD *)a7 = 43;
LABEL_39:
          SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622(v45);
          v21 = -1073741790;
          goto LABEL_40;
        }
      }
      v21 = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
              (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v7 + 216 * v19),
              v13[10],
              v19,
              0,
              1,
              1,
              (struct D3DKMT_GETPATHSMODALITY *)v13,
              a6);
      if ( v21 < 0 )
        break;
      if ( !_bittest64((const signed __int64 *)&v13[148 * v13[10] + 28], 0x32u) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 14656;
      }
      v18 = 1;
      *(_QWORD *)&v13[148 * v13[10]++ + 28] &= ~0x4000000000000uLL;
      ++v19;
    }
    *(_DWORD *)a7 = 46;
    SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14622(v45);
    goto LABEL_40;
  }
  PathsModality = GetPathsModality(a1, &Buffer, 16777280LL, 0LL);
  if ( PathsModality < 0 )
  {
    *(_DWORD *)a7 = 44;
    FreePathsModality(Buffer);
    FreePathsModality(0LL);
    return (unsigned int)PathsModality;
  }
  else
  {
    v12 = AllocPathsModality(*((_WORD *)Buffer + 10) + (unsigned __int16)a3);
    v13 = (unsigned __int16 *)v12;
    if ( v12 )
    {
      *((_WORD *)v12 + 10) = 0;
      v14 = (unsigned __int16 *)Buffer;
      v15 = 0;
      if ( *((_WORD *)Buffer + 10) )
      {
        do
        {
          v16 = (__int64)&v14[148 * v15 + 28];
          if ( _bittest64((const signed __int64 *)v16, 0x38u) )
          {
            v17 = DxDdGetDxgkWin32kInterface();
            if ( (*(unsigned __int8 (__fastcall **)(void *, _QWORD, _QWORD))(v17 + 736))(
                   v10,
                   *(_QWORD *)(v16 + 16),
                   *(unsigned int *)(v16 + 28)) )
            {
              v14 = (unsigned __int16 *)Buffer;
            }
            else
            {
              v37 = v13[10];
              v38 = 2LL;
              v39 = &v13[148 * v37];
              v13[10] = v37 + 1;
              v40 = v39 + 28;
              do
              {
                *v40 = *(_OWORD *)v16;
                v40[1] = *(_OWORD *)(v16 + 16);
                v40[2] = *(_OWORD *)(v16 + 32);
                v40[3] = *(_OWORD *)(v16 + 48);
                v40[4] = *(_OWORD *)(v16 + 64);
                v40[5] = *(_OWORD *)(v16 + 80);
                v40[6] = *(_OWORD *)(v16 + 96);
                v40 += 8;
                v41 = *(_OWORD *)(v16 + 112);
                v16 += 128LL;
                *(v40 - 1) = v41;
                --v38;
              }
              while ( v38 );
              *v40 = *(_OWORD *)v16;
              v40[1] = *(_OWORD *)(v16 + 16);
              *((_QWORD *)v40 + 4) = *(_QWORD *)(v16 + 32);
              if ( !_bittest64((const signed __int64 *)v39 + 7, 0x32u)
                || (*((_DWORD *)v39 + 60) & 0xFFFF0000) == 0xFE500000 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 14594;
              }
              v42 = *((_QWORD *)v39 + 7);
              *((_QWORD *)v39 + 38) = 0LL;
              *((_QWORD *)v39 + 8) = v42 & 0x18001820B8FLL;
              *((_QWORD *)v39 + 7) = v42 | 0x80000000000000LL;
              v14 = (unsigned __int16 *)Buffer;
              v10 = a1;
            }
          }
          ++v15;
        }
        while ( v15 < v14[10] );
        v7 = a4;
      }
      goto LABEL_10;
    }
    *(_DWORD *)a7 = 45;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 14562;
    FreePathsModality(Buffer);
    FreePathsModality(0LL);
    return 3221225495LL;
  }
}
