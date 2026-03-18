/*
 * XREFs of ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x140264B4C
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x14040B2DC (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1400345DC (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x140182AD4 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1401862CC (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     DxgkIsMonitorConnected @ 0x1401AB1A0 (DxgkIsMonitorConnected.c)
 *     _lambda_58ec37c2392282bb0e6e3e53197351b6_::operator() @ 0x1402640EC (_lambda_58ec37c2392282bb0e6e3e53197351b6_--operator().c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x140264450 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x140265210 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x14026524C (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026531C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1402653D8 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x140325E40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x140373D4C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x140373EE8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x140374BE0 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403796C4 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x140379754 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x140400CFC (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1404098D0 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(BTL_TOPOLOGY_CONSTRUCTOR *this, unsigned int *a2)
{
  unsigned int v2; // r15d
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // xmm0
  int v11; // r12d
  unsigned __int16 v12; // r13
  DXGPROCESS *Current; // rax
  struct CCD_BTL *v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  unsigned int v19; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rcx
  __int64 v21; // rax
  __int128 v22; // xmm1
  unsigned int v23; // r14d
  unsigned int j; // r14d
  unsigned __int16 v25; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // r15
  unsigned int k; // edi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rax
  unsigned int v29; // edi
  CCD_TOPOLOGY *v30; // rcx
  int v31; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // r14
  bool *v33; // r15
  const struct _LUID *v34; // r13
  int IsVirtualizationDisabledForTarget; // eax
  bool v36; // dl
  bool v37; // zf
  bool v38; // al
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  __int128 v42; // xmm0
  CCD_TOPOLOGY *v43; // rcx
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  int v46; // esi
  _WORD *v47; // r13
  int v48; // eax
  CCD_TOPOLOGY *v49; // rcx
  int v50; // esi
  int v51; // eax
  _BYTE *v52; // rax
  CCD_TOPOLOGY *v53; // rcx
  __int16 v55; // [rsp+40h] [rbp-89h]
  _BYTE *v56; // [rsp+40h] [rbp-89h]
  CCD_TOPOLOGY *i; // [rsp+48h] [rbp-81h] BYREF
  __int128 v58; // [rsp+50h] [rbp-79h]
  __int128 v59; // [rsp+60h] [rbp-69h]
  __int128 v60; // [rsp+70h] [rbp-59h]
  _BYTE v61[64]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-9h]
  unsigned __int8 v63; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned __int16 v64; // [rsp+140h] [rbp+77h]
  char *v65; // [rsp+148h] [rbp+7Fh]

  v2 = 0;
  *a2 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304856)
    || (v7 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(this), v7 < 0) )
  {
    v10 = *(_OWORD *)((char *)this + 12);
    v11 = *((_DWORD *)this + 15);
    LODWORD(v65) = v11;
    v58 = v10;
    v59 = *(_OWORD *)((char *)this + 28);
    v60 = *(_OWORD *)((char *)this + 44);
    v64 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
    v55 = v64;
    v12 = v64;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v61, 8u, 0);
    Current = DXGPROCESS::GetCurrent();
    if ( DXGPROCESS::IsRemoteConnection(Current)
      || (v14 = CCD_BTL::Global(),
          (int)CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v61, (struct CCD_BTL *)((char *)v14 + 8)) >= 0) )
    {
      *a2 = 0;
      v15 = 0;
LABEL_7:
      v16 = v62;
      while ( 1 )
      {
        v17 = v16 ? *(_WORD *)(v16 + 20) : 0;
        if ( v2 >= v17 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v61, v2);
        v63 = 0;
        if ( (int)DxgkIsMonitorConnected(
                    *(struct _LUID *)((char *)PathDescriptor + 16),
                    *((_DWORD *)PathDescriptor + 7),
                    0,
                    0,
                    &v63) >= 0
          && v63 )
        {
          v19 = *a2;
          *((_QWORD *)PathDescriptor + 1) = 0LL;
          if ( v2 != v19 )
          {
            v20 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v61, v19);
            v21 = 2LL;
            do
            {
              *(_OWORD *)v20 = *(_OWORD *)PathDescriptor;
              *((_OWORD *)v20 + 1) = *((_OWORD *)PathDescriptor + 1);
              *((_OWORD *)v20 + 2) = *((_OWORD *)PathDescriptor + 2);
              *((_OWORD *)v20 + 3) = *((_OWORD *)PathDescriptor + 3);
              *((_OWORD *)v20 + 4) = *((_OWORD *)PathDescriptor + 4);
              *((_OWORD *)v20 + 5) = *((_OWORD *)PathDescriptor + 5);
              *((_OWORD *)v20 + 6) = *((_OWORD *)PathDescriptor + 6);
              v20 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v20 + 128);
              v22 = *((_OWORD *)PathDescriptor + 7);
              PathDescriptor = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)PathDescriptor + 128);
              *((_OWORD *)v20 - 1) = v22;
              --v21;
            }
            while ( v21 );
            *(_OWORD *)v20 = *(_OWORD *)PathDescriptor;
            *((_OWORD *)v20 + 1) = *((_OWORD *)PathDescriptor + 1);
            *((_QWORD *)v20 + 4) = *((_QWORD *)PathDescriptor + 4);
          }
          v15 = ++*a2;
          ++v2;
          goto LABEL_7;
        }
        v23 = 0;
        for ( i = (CCD_TOPOLOGY *)v61; v23 < *a2; ++v23 )
          lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()(&i, (__int64)PathDescriptor, v23);
        for ( j = ++v2; ; ++j )
        {
          v16 = v62;
          v25 = v62 ? *(_WORD *)(v62 + 20) : 0;
          if ( j >= v25 )
            break;
          lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()(&i, (__int64)PathDescriptor, j);
        }
        v15 = *a2;
      }
      v12 = v64;
      v11 = (int)v65;
      *(_WORD *)(v16 + 20) = *(_WORD *)a2;
      if ( v15 )
      {
        do
        {
          v26 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v61, v15 - 1);
          if ( (*(_QWORD *)v26 & 0x4000000000000LL) != 0 )
          {
            for ( k = 0; k < v15; ++k )
            {
              v28 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v61, k);
              if ( (*(_QWORD *)v28 & 0x4000000000000LL) != 0 && *((_DWORD *)v26 + 46) == *((_DWORD *)v28 + 46) )
              {
                v29 = k | 0xFE530000;
                goto LABEL_37;
              }
            }
          }
          else
          {
            v29 = (v15 - 1) | 0xFE530000;
            *(_QWORD *)v26 |= 0x4000000000000uLL;
LABEL_37:
            *((_DWORD *)v26 + 46) = v29;
          }
          --v15;
        }
        while ( v15 );
        v12 = v64;
      }
      if ( *a2 && (unsigned __int16)(v55 - 1) > 1u )
      {
        v30 = *(CCD_TOPOLOGY **)this;
        *((_WORD *)this + 4) = *(_WORD *)a2;
        v31 = CCD_TOPOLOGY::CopyInheritScope(v30, (const struct CCD_TOPOLOGY *)v61);
        if ( v31 >= 0 )
        {
          if ( *a2 != 1 )
            v55 = 4;
          v32 = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, 0);
          v33 = (bool *)this + 60;
          v34 = (const struct _LUID *)((char *)v32 + 16);
          *(_QWORD *)((char *)this + 12) = *((_QWORD *)v32 + 2);
          *((_DWORD *)this + 5) = *((_DWORD *)v32 + 6);
          *((_DWORD *)this + 6) = *((_DWORD *)v32 + 7);
          *((_DWORD *)this + 7) = *((_DWORD *)v32 + 22);
          *((_DWORD *)this + 8) = *((_DWORD *)v32 + 23);
          IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                                *(struct _LUID *)((char *)v32 + 16),
                                                *((_DWORD *)v32 + 7),
                                                (__int64)this + 54,
                                                0LL,
                                                0LL,
                                                0LL);
          if ( IsVirtualizationDisabledForTarget >= 0 )
          {
            v36 = *v33;
            v37 = !*v33;
            *((_BYTE *)this + 53) = *((_BYTE *)this + 53) == 0;
            *v33 = v37;
            *((_BYTE *)this + 54) = *((_BYTE *)this + 54) == 0;
            *((_BYTE *)this + 11) = v55 == 3;
            v38 = v55 == 3 && !v36;
            *((_BYTE *)this + 10) = v38;
            if ( v37 || v55 != 3 )
            {
              v41 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, 0);
              v7 = v41;
              if ( v41 >= 0 )
                goto LABEL_80;
              WdLogSingleEntry4(2LL, *((unsigned int *)v32 + 7), *((int *)v32 + 5), *((unsigned int *)v32 + 4), v41);
              WdLogGlobalForLineNumber = 1440;
            }
            else
            {
              *((_BYTE *)this + 10) = 0;
              v39 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
                      (CCD_TOPOLOGY **)this,
                      0,
                      v34,
                      *((_DWORD *)v32 + 6));
              v7 = v39;
              if ( v39 >= 0 )
              {
                if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v32 + 22)) )
                {
                  v40 = *(_QWORD *)(*(_QWORD *)this + 64LL);
                  if ( v40 )
                  {
                    if ( *(_WORD *)(v40 + 20) >= 2u )
                      CCD_TOPOLOGY::SwapPathsDescriptors(*(CCD_TOPOLOGY **)this, 0, 1u);
                  }
                }
                goto LABEL_80;
              }
              WdLogSingleEntry5(
                2LL,
                v39,
                *((int *)v32 + 5),
                *((unsigned int *)v32 + 4),
                *((unsigned int *)v32 + 6),
                *(_QWORD *)(*(_QWORD *)this + 64LL));
              WdLogGlobalForLineNumber = 1458;
            }
          }
          else
          {
            WdLogSingleEntry4(
              2LL,
              *((unsigned int *)v32 + 7),
              *((int *)v32 + 5),
              v34->LowPart,
              IsVirtualizationDisabledForTarget);
            WdLogGlobalForLineNumber = 1419;
          }
          v12 = v64;
          v11 = (int)v65;
        }
        else
        {
          WdLogSingleEntry1(2LL, v31);
          WdLogGlobalForLineNumber = 1362;
        }
      }
    }
    v42 = v58;
    v43 = *(CCD_TOPOLOGY **)this;
    v44 = v59;
    *a2 = 0;
    *(_OWORD *)((char *)this + 12) = v42;
    *((_WORD *)this + 4) = 0;
    v45 = v60;
    *((_BYTE *)this + 10) = 0;
    *(_OWORD *)((char *)this + 28) = v44;
    *(_OWORD *)((char *)this + 44) = v45;
    *((_DWORD *)this + 15) = v11;
    *((_BYTE *)this + 11) = 0;
    CCD_TOPOLOGY::Clear(v43);
    v46 = v12;
    switch ( v12 )
    {
      case 1u:
        v48 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
        break;
      case 2u:
        v48 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
        break;
      case 3u:
        v48 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
        break;
      default:
        if ( (unsigned int)v12 - 4 >= 2 )
        {
          WdLogSingleEntry1(1LL, v12);
          WdLogGlobalForLineNumber = 1515;
          v7 = -1073741823;
          v65 = (char *)this + 10;
          v47 = (_WORD *)((char *)this + 8);
          v56 = (char *)this + 11;
LABEL_74:
          v49 = *(CCD_TOPOLOGY **)this;
          *((_WORD *)this + 4) = 0;
          *((_BYTE *)this + 10) = 0;
          *((_BYTE *)this + 11) = 0;
          CCD_TOPOLOGY::Clear(v49);
          v50 = v46 - 3;
          if ( v50 )
          {
            if ( (unsigned int)(v50 - 1) > 1 )
            {
LABEL_79:
              WdLogSingleEntry3(3LL, v7, *(_QWORD *)this, v64);
              v52 = v65;
              v53 = *(CCD_TOPOLOGY **)this;
              WdLogGlobalForLineNumber = 1548;
              *v47 = 0;
              *v52 = 0;
              *v56 = 0;
              CCD_TOPOLOGY::Clear(v53);
              v7 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
              goto LABEL_80;
            }
            v51 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
          }
          else
          {
            v51 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
          }
          v7 = v51;
          if ( v51 < 0 )
            goto LABEL_79;
LABEL_80:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v61);
          return (unsigned int)v7;
        }
        v7 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
        v47 = (_WORD *)((char *)this + 8);
        v65 = (char *)this + 10;
        v56 = (char *)this + 11;
LABEL_73:
        if ( v7 >= 0 )
          goto LABEL_80;
        goto LABEL_74;
    }
    v7 = v48;
    v65 = (char *)this + 10;
    v47 = (_WORD *)((char *)this + 8);
    v56 = (char *)this + 11;
    goto LABEL_73;
  }
  WdLogNewEntry5_WdTrace(v6, v5, v8, v9);
  WdLogGlobalForLineNumber = 1104;
  return (unsigned int)v7;
}
