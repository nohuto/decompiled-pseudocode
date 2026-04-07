/*
 * XREFs of ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180009090
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x1800092D8 (--0CDCompVirtualDesktopThumbnailData@@QEAA@XZ.c)
 *     ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18001FBBC (-SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x180036D24 (--$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetP.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18004CE14 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18004F93C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterSharedVirtualDesktopVisual(
        CWindowList *this,
        HWND a2,
        union _LARGE_INTEGER a3,
        void *a4)
{
  CBaseObject *v7; // r14
  struct CVisual *v8; // r15
  int SyncedWindowDataByHwnd; // eax
  unsigned int v10; // edi
  struct CWindowData *v11; // r13
  struct CWindowData *v12; // rax
  CDCompVirtualDesktopThumbnailData *v13; // rax
  struct CWindowData *v14; // rsi
  int v15; // eax
  int v16; // eax
  _QWORD *v17; // r10
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // ebx
  int v24; // r9d
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-30h]
  CVisualTargetProxy *v28; // [rsp+30h] [rbp-20h] BYREF
  struct CVisual *v29; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v30; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+48h] [rbp-8h] BYREF

  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = 0LL;
  v28 = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v30);
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v27 = 4797;
  }
  else
  {
    v11 = v30;
    if ( !v30 )
    {
      v10 = -2147024809;
      goto LABEL_15;
    }
    v12 = (struct CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                                  WPF::g_pProcessHeap,
                                  208LL);
    v30 = v12;
    if ( !v12 || (v13 = CDCompVirtualDesktopThumbnailData::CDCompVirtualDesktopThumbnailData(v12), (v14 = v13) == 0LL) )
    {
      v10 = -2147024882;
      v27 = 4808;
      v24 = -2147024882;
      goto LABEL_36;
    }
    *((union _LARGE_INTEGER *)v13 + 1) = a3;
    *((_QWORD *)v13 + 2) = v11;
    *((_QWORD *)v13 + 3) = 0LL;
    *((_WORD *)v13 + 16) = 0;
    *((_BYTE *)v13 + 34) = 1;
    *((_DWORD *)v13 + 30) = 2;
    v15 = CCompositor::CreateProxyFromSharedHandle<CVisualTargetProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
            a4,
            &v28);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x12D4u, 0LL);
      v7 = v28;
      goto LABEL_15;
    }
    v16 = CVisual::Create(&v29);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x12D5u, 0LL);
      v7 = v28;
      v8 = v29;
      goto LABEL_15;
    }
    v8 = v29;
    v7 = v28;
    SyncedWindowDataByHwnd = CVisualTargetProxy::SetRoot(v28, *((struct CVisualProxy **)v29 + 2));
    v10 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd >= 0 )
    {
      *((_QWORD *)v14 + 12) = v7;
      *((_QWORD *)v14 + 13) = v8;
      v17 = (_QWORD *)((char *)this + 384);
      v30 = v14;
      v18 = *((_DWORD *)this + 102);
      v19 = v18 + 1;
      if ( v18 + 1 < v18 )
      {
        v22 = -2147024362;
        v10 = -2147024362;
        v25 = 181;
      }
      else
      {
        if ( v19 <= *((_DWORD *)this + 101) )
        {
          *(_QWORD *)(*v17 + 8LL * v18) = v14;
          *((_DWORD *)this + 102) = v19;
LABEL_11:
          v7 = 0LL;
          v8 = 0LL;
          v30 = v14;
          v20 = *((_DWORD *)v11 + 140);
          v21 = v20 + 1;
          if ( v20 + 1 < v20 )
          {
            v22 = -2147024362;
            v10 = -2147024362;
            v26 = 181;
          }
          else
          {
            v22 = 0;
            if ( v21 <= *((_DWORD *)v11 + 139) )
            {
              *(_QWORD *)(*((_QWORD *)v11 + 67) + 8LL * v20) = v14;
              *((_DWORD *)v11 + 140) = v21;
LABEL_14:
              v10 = v22;
              goto LABEL_15;
            }
            v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)v11 + 536, 8LL, 1LL, &v30);
            v10 = v22;
            if ( v22 >= 0 )
              goto LABEL_14;
            v26 = 192;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, v26, 0LL);
          v27 = 4836;
          goto LABEL_33;
        }
        v22 = DynArrayImpl<0>::AddMultipleAndSet(v17, 8LL, 1LL, &v30);
        v10 = v22;
        if ( v22 >= 0 )
          goto LABEL_11;
        v25 = 192;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, v25, 0LL);
      v27 = 4829;
LABEL_33:
      v24 = v22;
      goto LABEL_36;
    }
    v27 = 4822;
  }
  v24 = SyncedWindowDataByHwnd;
LABEL_36:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v27, 0LL);
LABEL_15:
  CloseHandle(a4);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v8 )
    CBaseObject::Release(v8);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return v10;
}
