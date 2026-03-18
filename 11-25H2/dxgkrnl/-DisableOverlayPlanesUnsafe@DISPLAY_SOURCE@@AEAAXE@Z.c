/*
 * XREFs of ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x140314E34
 * Callers:
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140314C90 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140314D10 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x14004FE90 (McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x140315254 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1403153AC (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x140315444 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x140315A64 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x140315C1C (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 */

void __fastcall DISPLAY_SOURCE::DisableOverlayPlanesUnsafe(DISPLAY_SOURCE *this, char a2)
{
  unsigned int i; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  int NextConfigIndex; // eax
  _DWORD *v7; // rdx
  int v8; // ecx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  struct tagRECT v13; // [rsp+D0h] [rbp-18h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 640LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10169;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      10169LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_BYTE *)this + 3752) || a2 )
  {
    DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
    for ( i = a2 == 0; i < *((_DWORD *)this + 936); ++i )
    {
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
      if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
      {
        if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 640LL) != KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10037;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"m_DisplayCore->IsDisplayStateMutexOwner()",
            10037LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 42 * i + 282));
        v8 = v7[1];
        v9 = NextConfigIndex;
        *v7 = NextConfigIndex;
        if ( NextConfigIndex == v8 || v8 == -1 )
        {
          v10 = GetNextConfigIndex(v8);
          v7[1] = v10;
        }
        v11 = 10 * v9;
        v7[2 * v11 + 4] = 0;
        *(_QWORD *)&v7[2 * v11 + 2] = 0LL;
        *(_OWORD *)&v7[2 * v11 + 5] = 0uLL;
        *(_QWORD *)&v7[2 * v11 + 18] = 0LL;
        *(_OWORD *)&v7[2 * v11 + 9] = 0uLL;
        v7[2 * v11 + 17] = 1;
        *(_OWORD *)&v7[2 * v11 + 13] = 0uLL;
        v7[2 * v11 + 20] = 0;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqqtqqqqqqqqqqqqqqqq_EtwWriteTransfer(
            v11,
            (__int64)v7,
            v9,
            *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
            *((_DWORD *)this + 4),
            i,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0);
      }
    }
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(this);
    if ( LatestPostCompositionConfigInternal )
    {
      if ( *(_BYTE *)LatestPostCompositionConfigInternal )
      {
        v13 = 0LL;
        DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, 0, &v13, &v13);
      }
    }
    *((_BYTE *)this + 3752) = 0;
  }
}
