/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x14040E0D4
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140285A10 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140041DBC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1400628CC (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     Feature_DisableBreakForRemoteVidPnCheck__private_IsEnabledDeviceUsageNoInline @ 0x140067D24 (Feature_DisableBreakForRemoteVidPnCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x140197F10 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D74E8 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1402D8EE4 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1403328FC (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1403CFB5C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z @ 0x1403E9824 (-HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        char *a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  __int64 v10; // rcx
  signed __int64 v11; // r12
  const wchar_t *v12; // r9
  struct DXGPROCESS *Current; // rbx
  struct _LUID *v14; // rdx
  DXGADAPTER *v16; // rcx
  bool IsAdapterSessionized; // al
  __int64 v18; // r11
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rbx
  unsigned int *v35; // rdi
  signed __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r12
  __int64 v41; // rdx
  __int64 v42; // r11
  __int64 v43; // r10
  __int64 v44; // rax
  struct DXGDEVICE *v45; // r9
  int v46; // r8d
  __int64 v47; // r9
  __int64 v48; // rax
  struct DXGDEVICE *v49; // rax
  unsigned int v50; // ebx
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // rdx
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 v58; // ebx
  signed __int64 v59; // rbp
  int v60; // edi
  __int64 v61; // rdx
  __int64 v62; // rcx
  struct DXGDEVICE *v63; // r9
  int v64; // eax
  int v65; // r8d
  __int64 v66; // rcx
  __int64 v67; // rdi
  struct DXGDEVICE **v68; // r12
  BLTQUEUE *v69; // rcx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v71; // [rsp+28h] [rbp-70h]
  __int64 v72; // [rsp+30h] [rbp-68h]
  __int64 v73; // [rsp+38h] [rbp-60h]
  __int64 v74; // [rsp+40h] [rbp-58h]
  int v75; // [rsp+50h] [rbp-48h] BYREF
  signed __int64 v76; // [rsp+58h] [rbp-40h]
  __int64 v77; // [rsp+60h] [rbp-38h]
  unsigned int v78; // [rsp+A0h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2042;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 2042LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = a5;
  if ( *((_DWORD *)this + 24) < a5 )
  {
    WdLogSingleEntry3(2LL, a2, a5, -1073741811LL);
    v74 = 0LL;
    v12 = L"Device 0x%I64x: Invalid Output (0x%I64x) specified, returning 0x%I64x";
    v73 = 0LL;
    v72 = -1073741811LL;
    v71 = v11;
    WdLogGlobalForLineNumber = 2049;
    goto LABEL_112;
  }
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry5(2LL, a2, a3, a4, a3, -1073741811LL);
    v74 = -1073741811LL;
    v12 = L"Device 0x%I64x: Invalid parameter (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
    v73 = (__int64)a3;
    v72 = (__int64)a4;
    v71 = (__int64)a3;
    WdLogGlobalForLineNumber = 2066;
    goto LABEL_112;
  }
  v75 = 0;
  Current = DXGPROCESS::GetCurrent(v10);
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2076;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProcess", 2076LL, 0LL, 0LL, 0LL, 0LL);
  }
  (*(void (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 11) + 240LL))(&v75, 0LL, 0LL);
  if ( !v75 )
  {
    WdLogSingleEntry2(3LL, a2, -1073741790LL);
    WdLogGlobalForLineNumber = 2085;
    return 3221225506LL;
  }
  v16 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v78 = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v16, v14, &v78, 0LL);
  if ( IsAdapterSessionized )
  {
    if ( !(_DWORD)v18 )
    {
      v19 = v78;
      v20 = IsAdapterSessionized;
      WdLogSingleEntry5(2LL, a2, 0LL, IsAdapterSessionized, v78, -1073741790LL);
      WdLogGlobalForLineNumber = 2105;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Console session is trying to acquire ownership of a session adapter, device 0x%I64x, RemoteSession = 0x%I64x, bI"
         "sAdapterSessionized = 0x%I64x, AdapterSessionId = 0x%I64x, returning 0x%I64x",
        (__int64)a2,
        0LL,
        v20,
        v19,
        -1073741790LL);
      LOBYTE(v21) = 1;
      if ( !(unsigned __int8)WdIsDebuggerPresent(v21) )
        return 3221225506LL;
      DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why console app is taking sessionized output ownership");
LABEL_23:
      __debugbreak();
      return 3221225506LL;
    }
    CurrentProcess = PsGetCurrentProcess(IsAdapterSessionized);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    v25 = v78;
    if ( v78 != ProcessSessionId )
    {
      v26 = PsGetCurrentProcess(v24);
      v27 = PsGetProcessSessionId(v26);
      WdLogSingleEntry4(2LL, a2, (unsigned int)v25, v27, -1073741790LL);
      WdLogGlobalForLineNumber = 2126;
      v29 = PsGetCurrentProcess(v28);
      v30 = PsGetProcessSessionId(v29);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Remote session trying acquire ownership of a different sessions adapter, device 0x%I64x, AdapterSession  = 0x%I6"
         "4x, Current Session  = 0x%I64x",
        (__int64)a2,
        v25,
        v30,
        -1073741790LL,
        0LL);
      LOBYTE(v31) = 1;
      if ( !(unsigned __int8)WdIsDebuggerPresent(v31) )
        return 3221225506LL;
      DbgPrintEx(
        0x65u,
        0,
        "Breaking in so rcoote can check why remote app is trying to take ownership of a remote session ouput");
      goto LABEL_23;
    }
  }
  else if ( (_DWORD)v18 )
  {
    WdLogSingleEntry5(3LL, a2, v18, IsAdapterSessionized, v78, -1073741790LL);
    WdLogGlobalForLineNumber = 2150;
    if ( (unsigned int)Feature_DisableBreakForRemoteVidPnCheck__private_IsEnabledDeviceUsageNoInline() )
      return 3221225506LL;
    LOBYTE(v32) = 1;
    if ( !(unsigned __int8)WdIsDebuggerPresent(v32) )
      return 3221225506LL;
    DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why remote app is taking console output ownership");
    goto LABEL_23;
  }
  v33 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v33 || !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*(ADAPTER_RENDER **)(v33 + 3128)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2170;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(pRenderAdapter != NULL) && (pRenderAdapter->GetRenderCore()->IsCoreResourceExclusiveOwner())",
      2170LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v34 = 0LL;
  if ( !(_DWORD)v11 )
    goto LABEL_77;
  v35 = (unsigned int *)a4;
  v36 = (char *)a3 - a4;
  v76 = (char *)a3 - a4;
  while ( 2 )
  {
    v37 = *(int *)((char *)v35 + v36);
    if ( *(unsigned int *)((char *)v35 + v36) == 1
      || *(unsigned int *)((char *)v35 + v36) == 2
      || *(unsigned int *)((char *)v35 + v36) - 3 <= 1 )
    {
      if ( *((_DWORD *)this + 24) <= *v35 )
      {
        WdLogSingleEntry5(2LL, a2, v34, *v35, v37, -1073741811LL);
        v12 = L"Device 0x%I64x: Invalid VidPnSourceId (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
        WdLogGlobalForLineNumber = 2205;
      }
      else
      {
        if ( *((_QWORD *)a2 + 235) != *((_QWORD *)this + 2) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2210;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"pDevice->GetDisplayAdapter(pVidPnSourceId[i]) == this->GetAdapter()",
            2210LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 3984LL * *v35)) )
        {
          v57 = *(unsigned int *)&a4[4 * v34];
          v50 = -1071774910;
          WdLogSingleEntry2(3LL, v57, -1071774910LL);
          WdLogGlobalForLineNumber = 2220;
          return v50;
        }
        v38 = 0LL;
        if ( !(_DWORD)v34 )
          goto LABEL_40;
        do
        {
          v39 = *(unsigned int *)&a4[4 * v38];
          v40 = (unsigned int)v38;
          if ( *v35 == (_DWORD)v39 )
          {
            WdLogSingleEntry5(2LL, a2, v34, (unsigned int)v38, v39, -1073741811LL);
            v12 = L"Device 0x%I64x: All VidPnSourceId have to be distinct but entry 0x%I64x and 0x%I64x have identical val"
                   "ue of 0x%I64x, returning 0x%I64x";
            v74 = -1073741811LL;
            v73 = *(unsigned int *)&a4[4 * v40];
            v72 = v40;
            WdLogGlobalForLineNumber = 2237;
            goto LABEL_67;
          }
          v38 = (unsigned int)(v38 + 1);
        }
        while ( (unsigned int)v38 < (unsigned int)v34 );
        v11 = a5;
LABEL_40:
        if ( !ADAPTER_DISPLAY::IsPartOfDesktop(this, *v35) )
        {
          v55 = *(unsigned int *)&a4[4 * v34];
          v56 = (unsigned int)v34;
          v50 = -1071774972;
          WdLogSingleEntry4(3LL, a2, v56, v55, -1071774972LL);
          WdLogGlobalForLineNumber = 2255;
          return v50;
        }
        v41 = *(int *)((char *)v35 + v76);
        if ( (_DWORD)v41 == 1 )
        {
          if ( !*((_DWORD *)a2 + 116) )
          {
            WdLogSingleEntry5(2LL, a2, v34, *(unsigned int *)&a4[4 * v34], v41, -1073741811LL);
            v12 = L"Device 0x%I64x: Legacy device can't acquire D3DKMT_VIDPNSOURCEOWNER_SHARED (0x%I64x 0x%I64x 0x%I64x), "
                   "returning 0x%I64x";
            WdLogGlobalForLineNumber = 2271;
            break;
          }
LABEL_46:
          v42 = *v35;
          v43 = *((_QWORD *)this + 16);
          v44 = 3984 * v42;
          v45 = *(struct DXGDEVICE **)(3984 * v42 + v43 + 728);
          if ( !v45 )
          {
            if ( *(_DWORD *)(v44 + v43 + 736) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2387;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType",
                2387LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            goto LABEL_63;
          }
          v46 = *(_DWORD *)(v44 + v43 + 736);
          if ( v45 == a2 )
          {
            if ( v46 != (_DWORD)v41 )
            {
              WdLogSingleEntry5(
                2LL,
                a2,
                *(unsigned int *)&a4[4 * v34],
                *(int *)(3984LL * *(unsigned int *)&a4[4 * v34] + v43 + 736),
                v41,
                -1073741811LL);
              v47 = *(unsigned int *)&a4[4 * v34];
              v48 = *((_QWORD *)this + 16);
              v74 = -1073741811LL;
              v73 = a3[v34];
              WdLogGlobalForLineNumber = 2309;
              v72 = *(int *)(3984 * v47 + v48 + 736);
              v71 = v47;
              goto LABEL_50;
            }
LABEL_63:
            v34 = (unsigned int)(v34 + 1);
            ++v35;
            if ( (unsigned int)v34 < (unsigned int)v11 )
            {
              v36 = v76;
              continue;
            }
LABEL_77:
            if ( DXGDEVICE::HasContextWithHintType((ADAPTER_RENDER **)a2, D3DKMT_CLIENTHINT_OPENGL) )
            {
              WdLogSingleEntry1(4LL, a2);
              WdLogGlobalForLineNumber = 2398;
            }
            if ( !(_DWORD)v11 )
              return 0LL;
            v58 = a6.0;
            v59 = (char *)a3 - a4;
            v77 = (unsigned int)v11;
            v76 = (unsigned int)v11;
            while ( 2 )
            {
              v60 = 1;
              v61 = *((_QWORD *)this + 16);
              v62 = 3984LL * *(unsigned int *)a4;
              v63 = *(struct DXGDEVICE **)(v62 + v61 + 728);
              if ( v63 )
              {
                v64 = *(_DWORD *)&a4[v59];
                if ( v64 == 4 )
                  goto LABEL_86;
                v65 = *(_DWORD *)(v62 + v61 + 736);
                if ( v63 == a2 )
                {
                  if ( v65 != v64 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 2426;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType == pVidPnSourceOwnerType[i]",
                      2426LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
LABEL_86:
                  v60 = 0;
                }
                else
                {
                  if ( v65 != 1 || v64 == 1 )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 2436;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      0xFFFFFFFFLL,
                      L"(D3DKMT_VIDPNSOURCEOWNER_SHARED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType) && "
                       "(D3DKMT_VIDPNSOURCEOWNER_SHARED != pVidPnSourceOwnerType[i])",
                      2436LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
                    (PERESOURCE **)this,
                    *(ADAPTER_RENDER ***)(3984LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 728),
                    *(_DWORD *)a4);
                }
                if ( v60 )
LABEL_95:
                  OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((_QWORD *)this + 15), *(_DWORD *)a4, 0LL, 0, 0, 1);
                if ( *(_DWORD *)&a4[v59] == 4 )
                {
                  *(_QWORD *)(3984LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 744) = a2;
                }
                else
                {
                  v66 = *((_QWORD *)this + 57);
                  if ( v66 )
                  {
                    v67 = *(_QWORD *)(v66 + 8) + 2968LL * *(unsigned int *)a4;
                    v68 = (struct DXGDEVICE **)(v67 + 376);
                    if ( (*(_DWORD *)(v67 + 1000) & 1) == 0 || a2 != *v68 )
                    {
                      v69 = (BLTQUEUE *)(*(_QWORD *)(v66 + 8) + 2968LL * *(unsigned int *)a4);
                      *(_QWORD *)(v67 + 624) = a2;
                      *(_BYTE *)(v67 + 600) = 1;
                      if ( (int)BLTQUEUE::IssueCommand(v69) >= 0 && a2 != *v68 )
                      {
                        *v68 = a2;
                        *(_OWORD *)(v67 + 320) = 0LL;
                        *(_OWORD *)(v67 + 336) = 0LL;
                        *(_DWORD *)(v67 + 1000) &= ~4u;
                      }
                    }
                    v11 = v76;
                  }
                  *(_QWORD *)(3984LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 728) = a2;
                  *(_DWORD *)(3984LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 736) = *(_DWORD *)&a4[v59];
                  *(struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *)(3984LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 740) = v58;
                }
                *(_QWORD *)(3984LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 752) = *((_QWORD *)a2 + 5);
                ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, *(_DWORD *)a4);
                WdLogSingleEntry4(4LL, a2, *(unsigned int *)a4, *(int *)&a4[v59], v77);
                WdLogGlobalForLineNumber = 2483;
                if ( *(_DWORD *)&a4[v59] == 3 )
                {
                  CddInterface = ADAPTER_DISPLAY::GetCddInterface(this, *(_DWORD *)a4);
                  if ( CddInterface )
                    (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
                }
                a4 += 4;
                v76 = --v11;
                if ( !v11 )
                  return 0LL;
                continue;
              }
              break;
            }
            if ( *(_DWORD *)(v62 + v61 + 736) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2446;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType",
                2446LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            goto LABEL_95;
          }
          if ( v46 != 1 )
          {
LABEL_72:
            v53 = a3[v34];
            v54 = *(unsigned int *)&a4[4 * v34];
            v50 = -1071774910;
            WdLogSingleEntry5(3LL, a2, *(int *)(3984 * v54 + v43 + 736), v54, v53, -1071774910LL);
            WdLogGlobalForLineNumber = 2354;
            return v50;
          }
          if ( (_DWORD)v41 == 1 )
          {
            if ( (*(_DWORD *)(*((_QWORD *)a2 + 5) + 408LL) & 4) == 0
              || (*(_DWORD *)(*((_QWORD *)v45 + 5) + 408LL) & 4) == 0 )
            {
              goto LABEL_72;
            }
            v51 = *(unsigned int *)&a4[4 * v34];
            v50 = -1071774910;
            WdLogSingleEntry5(3LL, a2, *(int *)(3984 * v51 + v43 + 736), v51, v41, -1071774910LL);
            LOBYTE(v52) = 1;
            WdLogGlobalForLineNumber = 2333;
            if ( (unsigned __int8)WdIsDebuggerPresent(v52) )
            {
              DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
              __debugbreak();
            }
            return v50;
          }
          v49 = *(struct DXGDEVICE **)(3984 * v42 + v43 + 744);
          if ( v49 != a2 )
          {
            if ( !v49 )
              goto LABEL_63;
            v50 = -1071774910;
            WdLogSingleEntry4(3LL, a2, v42, *(int *)((char *)v35 + v76), -1071774910LL);
            WdLogGlobalForLineNumber = 2379;
            return v50;
          }
          if ( (_DWORD)v41 == 4 )
            goto LABEL_63;
          WdLogSingleEntry5(2LL, a2, *(unsigned int *)&a4[4 * v34], 4LL, v41, -1073741811LL);
          v74 = -1073741811LL;
          v73 = a3[v34];
          v72 = 4LL;
          v71 = *(unsigned int *)&a4[4 * v34];
          WdLogGlobalForLineNumber = 2367;
LABEL_50:
          v12 = L"Device 0x%I64x: VidPn 0x%I64x can't change owner type from 0x%I64x to 0x%I64x, returning 0x%I64x";
          goto LABEL_112;
        }
        if ( (_DWORD)v41 != 3 || !*((_DWORD *)a2 + 116) )
          goto LABEL_46;
        WdLogSingleEntry5(2LL, a2, v34, *(unsigned int *)&a4[4 * v34], v41, -1073741811LL);
        v12 = L"Device 0x%I64x: No-Legacy device can't acquire D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI(0x%I64x 0x%I64x 0x%I64"
               "x), returning 0x%I64x";
        WdLogGlobalForLineNumber = 2287;
      }
    }
    else
    {
      WdLogSingleEntry5(2LL, a2, v34, *(unsigned int *)&a4[4 * v34], v37, -1073741811LL);
      v12 = L"Device 0x%I64x: Invalid OwnerType (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
      WdLogGlobalForLineNumber = 2190;
    }
    break;
  }
  v74 = -1073741811LL;
  v73 = a3[v34];
  v72 = *(unsigned int *)&a4[4 * v34];
LABEL_67:
  v71 = v34;
LABEL_112:
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v12, (__int64)a2, v71, v72, v73, v74);
  return 3221225485LL;
}
