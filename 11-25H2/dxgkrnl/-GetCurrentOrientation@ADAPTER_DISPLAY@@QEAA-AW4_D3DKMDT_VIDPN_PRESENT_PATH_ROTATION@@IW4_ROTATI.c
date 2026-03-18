/*
 * XREFs of ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CAA10
 * Callers:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x14006783C (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC238 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1403886A4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x140389D24 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403FAC10 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140412F30 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x140418390 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14008FCCC (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCurrentOrientation(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  char v7; // r14
  unsigned int v8; // esi
  MONITOR_MGR *v9; // r10
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  struct _KTHREAD **v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rbx
  __int64 v21; // r9
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  unsigned int v24; // r14d
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rbx
  struct DXGMONITOR *v40; // rdx
  void *v41; // [rsp+50h] [rbp-30h] BYREF
  __int64 v42; // [rsp+58h] [rbp-28h]
  __int64 v43; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v44[3]; // [rsp+68h] [rbp-18h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v47; // [rsp+D8h] [rbp+58h] BYREF

  v3 = a2;
  if ( a3 == 1 )
  {
    if ( *(_BYTE *)(a1 + 289) )
      return 1LL;
  }
  else if ( (a3 & 0xFFFFFFFD) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8348;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(Type == ROTATION_MODE_TYPE_HARDWARE) || (Type == ROTATION_MODE_TYPE_SOFTWARE) || (Type == ROTATION_MODE_TYPE_OVERALL)",
      8348LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v3 = a2;
  }
  if ( !a3 && !*(_BYTE *)(a1 + 289) )
    return 1LL;
  v34 = 3984 * v3;
  v35 = *(_QWORD *)(a1 + 128);
  switch ( *(_DWORD *)(v35 + v34 + 1020) )
  {
    case 1:
      goto LABEL_51;
    case 2:
      v8 = 2;
      break;
    case 3:
      v8 = 3;
      break;
    case 4:
      v8 = 4;
      break;
    default:
      WdLogSingleEntry2(2LL, *(int *)(v35 + v34 + 1020), *(_QWORD *)(a1 + 16));
      v38 = *(_QWORD *)(a1 + 128);
      WdLogGlobalForLineNumber = 8374;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"m_DisplayModeInfo does not have a valid rotation mode (0x%I64x) on adapter 0x%I64x!",
        *(int *)(v38 + v34 + 1020),
        *(_QWORD *)(a1 + 16),
        0LL,
        0LL,
        0LL);
LABEL_51:
      v8 = 1;
      break;
  }
  if ( a3 == 1 )
    return v8;
  v36 = *(_QWORD *)(a1 + 16);
  if ( !v36 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 9172;
    return v8;
  }
  v37 = *(_QWORD *)(v36 + 3120);
  if ( !v37 )
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(a1 + 16));
    WdLogGlobalForLineNumber = 9186;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      v36,
      0LL,
      0LL,
      0LL,
      0LL);
    return v8;
  }
  v12 = *(_QWORD *)(v37 + 104);
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(a1 + 16));
    WdLogGlobalForLineNumber = 9200;
    return v8;
  }
  v13 = (struct _KTHREAD **)(v12 + 40);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v12 + 40));
  v18 = *(_QWORD *)(v12 + 128);
  if ( v18 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v18 + 32), 1u);
    v19 = *(_QWORD *)(v12 + 128);
    v47 = v19;
    if ( v19 )
    {
      v20 = v19 + 96;
      v21 = v19 + 120;
      v22 = *(_QWORD *)(v19 + 120);
      v23 = 0LL;
      if ( v22 != v19 + 120 )
        v23 = (_QWORD *)(v22 - 8);
      while ( v23 )
      {
        if ( *(_DWORD *)(v23[11] + 24LL) == a2 )
        {
          v24 = *(_DWORD *)(v23[12] + 24LL);
          v25 = _InterlockedDecrement((volatile signed __int32 *)(v19 + 32));
          if ( v25 )
          {
            if ( v25 < 0 )
            {
              v39 = v25;
              WdLogSingleEntry1(2LL, v25);
              WdLogGlobalForLineNumber = 77;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Client is trying to release a destroyed object (ref count = %I64d)!",
                v39,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          else if ( v19 != -24 )
          {
            (**(void (__fastcall ***)(__int64, __int64))(v19 + 24))(v19 + 24, 1LL);
          }
          v47 = 0LL;
          DXGFASTMUTEX::Release(v13);
          v26 = *(_QWORD *)(a1 + 16);
          if ( !v26 || v24 == -1 )
          {
LABEL_19:
            v7 = 0;
          }
          else
          {
            if ( !*(_QWORD *)(v26 + 3120) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 782;
            }
            if ( *(_QWORD *)(*(_QWORD *)(v26 + 3120) + 112LL) )
            {
              v41 = retaddr;
              v42 = 0LL;
              MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v41);
              MONITOR_MGR::_GetMonitorInstance(v9, v24, 1u, (struct MONITOR_REF_ACCESSOR *)&v41);
              v10 = v42;
              v43 = v42;
              if ( v42 )
              {
                KeEnterCriticalRegion();
                ExAcquireResourceSharedLite((PERESOURCE)(v10 + 40), 1u);
              }
              v44[0] = retaddr;
              v11 = 2LL;
              do
              {
                v44[1] = v10;
                --v11;
              }
              while ( v11 );
              MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v44);
              MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v41);
            }
            else
            {
              WdLogSingleEntry1(2LL, v26);
              WdLogGlobalForLineNumber = 791;
              CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR(
                (CONST_MONITOR_REF_LOCK_ACCESSOR *)&v43,
                v40);
              v10 = v43;
            }
            if ( !v10 )
            {
              WdLogSingleEntry1(2LL, -1073741275LL);
              WdLogGlobalForLineNumber = 2643;
              MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v44);
              if ( v43 )
              {
                ExReleaseResourceLite((PERESOURCE)(v43 + 40));
                KeLeaveCriticalRegion();
              }
              goto LABEL_19;
            }
            v7 = 0;
            if ( *(_DWORD *)(v10 + 312) != *(_DWORD *)(v10 + 304) )
              v7 = *(_DWORD *)(v10 + 312);
            ExReleaseResourceLite((PERESOURCE)(v10 + 40));
            KeLeaveCriticalRegion();
            v43 = 0LL;
            MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v44);
            if ( v43 )
            {
              ExReleaseResourceLite((PERESOURCE)(v43 + 40));
              KeLeaveCriticalRegion();
            }
          }
          return ((v7 + (_BYTE)v8 - 1) & 3u) + 1;
        }
        v27 = v23[1];
        v23 = (_QWORD *)(v27 - 8);
        if ( v27 == v21 )
          v23 = 0LL;
      }
      if ( v22 == v21 || v22 == 8 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v22, 0LL, v21) + 24) = v20;
        WdLogGlobalForLineNumber = 195;
      }
      else
      {
        v29 = WdLogNewEntry5_WdTrace(0LL, v22, 0LL, v21);
        v33 = a2;
        *(_QWORD *)(v29 + 24) = a2;
        *(_QWORD *)(v29 + 32) = v20;
        WdLogGlobalForLineNumber = 187;
      }
      v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v33, v31, v32);
      v28[4] = a2;
      v28[3] = 0LL;
      v28[5] = v20;
      v28[6] = -1071774919LL;
      WdLogGlobalForLineNumber = 9239;
      auto_rc<DMMVIDPN const>::reset(&v47, 0LL);
      goto LABEL_38;
    }
  }
  else
  {
    v47 = 0LL;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = v36;
  WdLogGlobalForLineNumber = 9220;
LABEL_38:
  DXGFASTMUTEX::Release(v13);
  return v8;
}
