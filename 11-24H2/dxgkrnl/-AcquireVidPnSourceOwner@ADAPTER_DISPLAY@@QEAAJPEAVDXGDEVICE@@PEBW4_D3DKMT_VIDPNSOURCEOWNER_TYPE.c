/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x140406F60
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C9B44 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004174C (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1400631BC (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x14019A39C (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireVidPnSourceOwnership@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@@Z @ 0x140281634 (-AcquireVidPnSourceOwnership@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14028F114 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14028FB10 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1403D4B2C (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z @ 0x1403E2B84 (-HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z.c)
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
  __int64 v11; // r12
  const wchar_t *v12; // r9
  struct DXGPROCESS *Current; // rbx
  struct _LUID *v14; // rdx
  DXGADAPTER *v16; // rcx
  bool IsAdapterSessionized; // al
  __int64 v18; // r11
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rbx
  unsigned int *v33; // r13
  signed __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r12
  __int64 v39; // rdx
  __int64 v40; // r11
  __int64 v41; // r10
  __int64 v42; // rax
  struct DXGDEVICE *v43; // r9
  int v44; // r8d
  __int64 v45; // r9
  __int64 v46; // rax
  struct DXGDEVICE *v47; // rax
  unsigned int v48; // ebx
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // rdx
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 v55; // ebx
  signed __int64 v56; // rbp
  __int64 v57; // r13
  __int64 v58; // rdx
  __int64 v59; // rcx
  struct DXGDEVICE *v60; // r9
  int v61; // eax
  int v62; // r8d
  __int64 v63; // rdx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v65; // [rsp+28h] [rbp-60h]
  __int64 v66; // [rsp+30h] [rbp-58h]
  __int64 v67; // [rsp+38h] [rbp-50h]
  __int64 v68; // [rsp+40h] [rbp-48h]
  int v69; // [rsp+50h] [rbp-38h] BYREF
  signed __int64 v70; // [rsp+58h] [rbp-30h]
  unsigned int v71; // [rsp+90h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2045;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      2045LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = a5;
  if ( *((_DWORD *)this + 24) < a5 )
  {
    WdLogSingleEntry3(2LL, a2, a5, -1073741811LL);
    v68 = 0LL;
    v12 = L"Device 0x%I64x: Invalid Output (0x%I64x) specified, returning 0x%I64x";
    v67 = 0LL;
    v66 = -1073741811LL;
    v65 = v11;
    WdLogGlobalForLineNumber = 2052;
    goto LABEL_100;
  }
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry5(2LL, a2, a3, a4, a3, -1073741811LL);
    v68 = -1073741811LL;
    v12 = L"Device 0x%I64x: Invalid parameter (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
    v67 = (__int64)a3;
    v66 = (__int64)a4;
    v65 = (__int64)a3;
    WdLogGlobalForLineNumber = 2069;
    goto LABEL_100;
  }
  v69 = 0;
  Current = DXGPROCESS::GetCurrent(v10);
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2079;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProcess", 2079LL, 0LL, 0LL, 0LL, 0LL);
  }
  (*(void (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 11) + 240LL))(&v69, 0LL, 0LL);
  if ( !v69 )
  {
    WdLogSingleEntry2(3LL, a2, -1073741790LL);
    WdLogGlobalForLineNumber = 2088;
    return 3221225506LL;
  }
  v16 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v71 = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v16, v14, &v71, 0LL);
  if ( IsAdapterSessionized )
  {
    if ( !(_DWORD)v18 )
    {
      v19 = v71;
      v20 = IsAdapterSessionized;
      WdLogSingleEntry5(2LL, a2, 0LL, IsAdapterSessionized, v71, -1073741790LL);
      WdLogGlobalForLineNumber = 2108;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Console session is trying to acquire ownership of a session adapter, device 0x%I64x, RemoteSession = 0x%I64x, bI"
         "sAdapterSessionized = 0x%I64x, AdapterSessionId = 0x%I64x, returning 0x%I64x",
        (__int64)a2,
        0LL,
        v20,
        v19,
        -1073741790LL);
      if ( !(unsigned __int8)WdIsDebuggerPresent(1LL) )
        return 3221225506LL;
      DbgPrintEx(0x65u, 0, "Breaking in so rcoote can check why console app is taking sessionized output ownership");
LABEL_19:
      __debugbreak();
      return 3221225506LL;
    }
    CurrentProcess = PsGetCurrentProcess(IsAdapterSessionized);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    v24 = v71;
    if ( v71 != ProcessSessionId )
    {
      v25 = PsGetCurrentProcess(v23);
      v26 = PsGetProcessSessionId(v25);
      WdLogSingleEntry4(2LL, a2, (unsigned int)v24, v26, -1073741790LL);
      WdLogGlobalForLineNumber = 2129;
      v28 = PsGetCurrentProcess(v27);
      v29 = PsGetProcessSessionId(v28);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Remote session trying acquire ownership of a different sessions adapter, device 0x%I64x, AdapterSession  = 0x%I6"
         "4x, Current Session  = 0x%I64x",
        (__int64)a2,
        v24,
        v29,
        -1073741790LL,
        0LL);
      LOBYTE(v30) = 1;
      if ( !(unsigned __int8)WdIsDebuggerPresent(v30) )
        return 3221225506LL;
      DbgPrintEx(
        0x65u,
        0,
        "Breaking in so rcoote can check why remote app is trying to take ownership of a remote session ouput");
      goto LABEL_19;
    }
  }
  else if ( (_DWORD)v18 )
  {
    WdLogSingleEntry5(3LL, a2, v18, IsAdapterSessionized, v71, -1073741790LL);
    WdLogGlobalForLineNumber = 2153;
    return 3221225506LL;
  }
  v31 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v31 || !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*(ADAPTER_RENDER **)(v31 + 3128)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2161;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pRenderAdapter != NULL) && (pRenderAdapter->GetRenderCore()->IsCoreResourceExclusiveOwner())",
      2161LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v32 = 0LL;
  if ( !(_DWORD)v11 )
    goto LABEL_73;
  v33 = (unsigned int *)a4;
  v34 = (char *)a3 - a4;
  v70 = (char *)a3 - a4;
  while ( 2 )
  {
    v35 = *(int *)((char *)v33 + v34);
    if ( *(unsigned int *)((char *)v33 + v34) != 1
      && *(unsigned int *)((char *)v33 + v34) != 2
      && *(unsigned int *)((char *)v33 + v34) - 3 > 1 )
    {
      WdLogSingleEntry5(2LL, a2, v32, *(unsigned int *)&a4[4 * v32], v35, -1073741811LL);
      v12 = L"Device 0x%I64x: Invalid OwnerType (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
      v68 = -1073741811LL;
      v67 = a3[v32];
      v66 = *(unsigned int *)&a4[4 * v32];
      v65 = v32;
      WdLogGlobalForLineNumber = 2181;
      goto LABEL_100;
    }
    if ( *((_DWORD *)this + 24) <= *v33 )
    {
      WdLogSingleEntry5(2LL, a2, v32, *v33, v35, -1073741811LL);
      v12 = L"Device 0x%I64x: Invalid VidPnSourceId (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
      v68 = -1073741811LL;
      v67 = a3[v32];
      v66 = *(unsigned int *)&a4[4 * v32];
      v65 = v32;
      WdLogGlobalForLineNumber = 2196;
      goto LABEL_100;
    }
    if ( *((_QWORD *)a2 + 237) != *((_QWORD *)this + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2201;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pDevice->GetDisplayAdapter(pVidPnSourceId[i]) == this->GetAdapter()",
        2201LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 4024LL * *v33)) )
    {
      v54 = *(unsigned int *)&a4[4 * v32];
      v48 = -1071774910;
      WdLogSingleEntry2(3LL, v54, -1071774910LL);
      WdLogGlobalForLineNumber = 2211;
      return v48;
    }
    v36 = 0LL;
    if ( !(_DWORD)v32 )
      goto LABEL_38;
    do
    {
      v37 = *(unsigned int *)&a4[4 * v36];
      v38 = (unsigned int)v36;
      if ( *v33 == (_DWORD)v37 )
      {
        WdLogSingleEntry5(2LL, a2, v32, (unsigned int)v36, v37, -1073741811LL);
        v12 = L"Device 0x%I64x: All VidPnSourceId have to be distinct but entry 0x%I64x and 0x%I64x have identical value o"
               "f 0x%I64x, returning 0x%I64x";
        v68 = -1073741811LL;
        v67 = *(unsigned int *)&a4[4 * v38];
        v66 = v38;
        v65 = v32;
        WdLogGlobalForLineNumber = 2228;
        goto LABEL_100;
      }
      v36 = (unsigned int)(v36 + 1);
    }
    while ( (unsigned int)v36 < (unsigned int)v32 );
    v11 = a5;
LABEL_38:
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(this, *v33) )
    {
      v52 = *(unsigned int *)&a4[4 * v32];
      v53 = (unsigned int)v32;
      v48 = -1071774972;
      WdLogSingleEntry4(3LL, a2, v53, v52, -1071774972LL);
      WdLogGlobalForLineNumber = 2246;
      return v48;
    }
    v39 = *(int *)((char *)v33 + v70);
    if ( (_DWORD)v39 != 1 )
    {
      if ( (_DWORD)v39 != 3 || !*((_DWORD *)a2 + 116) )
        goto LABEL_44;
      WdLogSingleEntry5(2LL, a2, v32, *(unsigned int *)&a4[4 * v32], v39, -1073741811LL);
      v12 = L"Device 0x%I64x: No-Legacy device can't acquire D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI(0x%I64x 0x%I64x 0x%I64x)"
             ", returning 0x%I64x";
      v68 = -1073741811LL;
      v67 = a3[v32];
      v66 = *(unsigned int *)&a4[4 * v32];
      v65 = v32;
      WdLogGlobalForLineNumber = 2278;
      goto LABEL_100;
    }
    if ( !*((_DWORD *)a2 + 116) )
    {
      WdLogSingleEntry5(2LL, a2, v32, *(unsigned int *)&a4[4 * v32], v39, -1073741811LL);
      v12 = L"Device 0x%I64x: Legacy device can't acquire D3DKMT_VIDPNSOURCEOWNER_SHARED (0x%I64x 0x%I64x 0x%I64x), returning 0x%I64x";
      v68 = -1073741811LL;
      v67 = a3[v32];
      v66 = *(unsigned int *)&a4[4 * v32];
      v65 = v32;
      WdLogGlobalForLineNumber = 2262;
      goto LABEL_100;
    }
LABEL_44:
    v40 = *v33;
    v41 = *((_QWORD *)this + 16);
    v42 = 4024 * v40;
    v43 = *(struct DXGDEVICE **)(4024 * v40 + v41 + 728);
    if ( !v43 )
    {
      if ( *(_DWORD *)(v42 + v41 + 736) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2378;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType",
          2378LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_61;
    }
    v44 = *(_DWORD *)(v42 + v41 + 736);
    if ( v43 != a2 )
    {
      if ( v44 != 1 )
      {
LABEL_68:
        v50 = a3[v32];
        v51 = *(unsigned int *)&a4[4 * v32];
        v48 = -1071774910;
        WdLogSingleEntry5(3LL, a2, *(int *)(4024 * v51 + v41 + 736), v51, v50, -1071774910LL);
        WdLogGlobalForLineNumber = 2345;
        return v48;
      }
      if ( (_DWORD)v39 == 1 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)a2 + 5) + 408LL) & 4) != 0 && (*(_DWORD *)(*((_QWORD *)v43 + 5) + 408LL) & 4) != 0 )
        {
          v49 = *(unsigned int *)&a4[4 * v32];
          v48 = -1071774910;
          WdLogSingleEntry5(3LL, a2, *(int *)(4024 * v49 + v41 + 736), v49, v39, -1071774910LL);
          WdLogGlobalForLineNumber = 2324;
          if ( (unsigned __int8)WdIsDebuggerPresent(1LL) )
          {
            DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
            __debugbreak();
          }
          return v48;
        }
        goto LABEL_68;
      }
      v47 = *(struct DXGDEVICE **)(4024 * v40 + v41 + 744);
      if ( v47 != a2 )
      {
        if ( !v47 )
          goto LABEL_61;
        v48 = -1071774910;
        WdLogSingleEntry4(3LL, a2, v40, *(int *)((char *)v33 + v70), -1071774910LL);
        WdLogGlobalForLineNumber = 2370;
        return v48;
      }
      if ( (_DWORD)v39 == 4 )
        goto LABEL_61;
      WdLogSingleEntry5(2LL, a2, *(unsigned int *)&a4[4 * v32], 4LL, v39, -1073741811LL);
      v68 = -1073741811LL;
      v67 = a3[v32];
      v66 = 4LL;
      v65 = *(unsigned int *)&a4[4 * v32];
      WdLogGlobalForLineNumber = 2358;
LABEL_48:
      v12 = L"Device 0x%I64x: VidPn 0x%I64x can't change owner type from 0x%I64x to 0x%I64x, returning 0x%I64x";
LABEL_100:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v12, (__int64)a2, v65, v66, v67, v68);
      return 3221225485LL;
    }
    if ( v44 != (_DWORD)v39 )
    {
      WdLogSingleEntry5(
        2LL,
        a2,
        *(unsigned int *)&a4[4 * v32],
        *(int *)(4024LL * *(unsigned int *)&a4[4 * v32] + v41 + 736),
        v39,
        -1073741811LL);
      v45 = *(unsigned int *)&a4[4 * v32];
      v46 = *((_QWORD *)this + 16);
      v68 = -1073741811LL;
      v67 = a3[v32];
      WdLogGlobalForLineNumber = 2300;
      v66 = *(int *)(4024 * v45 + v46 + 736);
      v65 = v45;
      goto LABEL_48;
    }
LABEL_61:
    ++v33;
    v32 = (unsigned int)(v32 + 1);
    if ( (unsigned int)v32 < (unsigned int)v11 )
    {
      v34 = v70;
      continue;
    }
    break;
  }
LABEL_73:
  if ( DXGDEVICE::HasContextWithHintType((ADAPTER_RENDER **)a2, D3DKMT_CLIENTHINT_OPENGL) )
  {
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 2389;
  }
  if ( (_DWORD)v11 )
  {
    v55 = a6.0;
    v56 = (char *)a3 - a4;
    v57 = (unsigned int)v11;
    while ( 1 )
    {
      v58 = *((_QWORD *)this + 16);
      v59 = 4024LL * *(unsigned int *)a4;
      v60 = *(struct DXGDEVICE **)(v59 + v58 + 728);
      if ( !v60 )
        break;
      v61 = *(_DWORD *)&a4[v56];
      if ( v61 != 4 )
      {
        v62 = *(_DWORD *)(v59 + v58 + 736);
        if ( v60 == a2 )
        {
          if ( v62 != v61 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2417;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType == pVidPnSourceOwnerType[i]",
              2417LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          goto LABEL_89;
        }
        if ( v62 != 1 || v61 == 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2427;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"(D3DKMT_VIDPNSOURCEOWNER_SHARED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType) && (D3DKMT_VI"
             "DPNSOURCEOWNER_SHARED != pVidPnSourceOwnerType[i])",
            2427LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
          (PERESOURCE **)this,
          *(ADAPTER_RENDER ***)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 728),
          *(_DWORD *)a4);
        goto LABEL_88;
      }
LABEL_89:
      if ( *(_DWORD *)&a4[v56] == 4 )
      {
        *(_QWORD *)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 744) = a2;
      }
      else
      {
        v63 = *((_QWORD *)this + 58);
        if ( v63 )
          BLTQUEUE::AcquireVidPnSourceOwnership((BLTQUEUE *)(*(_QWORD *)(v63 + 8) + 3040LL * *(unsigned int *)a4), a2);
        *(_QWORD *)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 728) = a2;
        *(_DWORD *)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 736) = *(_DWORD *)&a4[v56];
        *(struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 740) = v55;
      }
      *(_QWORD *)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 752) = *((_QWORD *)a2 + 5);
      ADAPTER_DISPLAY::UpdateGammaRamp((void **)this, *(_DWORD *)a4);
      WdLogSingleEntry4(4LL, a2, *(unsigned int *)a4, *(int *)&a4[v56], v57);
      WdLogGlobalForLineNumber = 2474;
      if ( *(_DWORD *)&a4[v56] == 3 )
      {
        CddInterface = ADAPTER_DISPLAY::GetCddInterface(this, *(_DWORD *)a4);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
      }
      a4 += 4;
      if ( !--v11 )
        return 0LL;
    }
    if ( *(_DWORD *)(v59 + v58 + 736) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2437;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType",
        2437LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_88:
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((_QWORD *)this + 15), *(_DWORD *)a4, 0LL, 0, 0, 1);
    goto LABEL_89;
  }
  return 0LL;
}
