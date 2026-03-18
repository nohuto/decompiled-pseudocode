/*
 * XREFs of ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x140315C1C
 * Callers:
 *     ?SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x140314560 (-SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x140314E34 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x140315A80 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x140320278 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqtqqqqqqqq_EtwWriteTransfer @ 0x1400681D8 (McTemplateK0pqtqqqqqqqq_EtwWriteTransfer.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x140315A64 (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall DISPLAY_SOURCE::CreateNewPostCompositionConfig(
        DISPLAY_SOURCE *this,
        unsigned __int8 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  int v6; // ebp
  int NextConfigIndex; // eax
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  LONG v18; // [rsp+48h] [rbp-30h]
  LONG left; // [rsp+50h] [rbp-28h]
  LONG top; // [rsp+58h] [rbp-20h]
  LONG right; // [rsp+60h] [rbp-18h]
  LONG bottom; // [rsp+68h] [rbp-10h]

  v6 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 640LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10083;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      10083LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  NextConfigIndex = GetNextConfigIndex(*((_DWORD *)this + 702));
  v10 = *((_DWORD *)this + 703);
  v11 = NextConfigIndex;
  *((_DWORD *)this + 702) = NextConfigIndex;
  if ( NextConfigIndex == v10 || v10 == -1 )
    *((_DWORD *)this + 703) = GetNextConfigIndex(v10);
  v12 = 9 * v11;
  *((_BYTE *)this + 4 * v12 + 2816) = v6;
  *(struct tagRECT *)((char *)this + 4 * v12 + 2820) = *a3;
  *(struct tagRECT *)((char *)this + 4 * v12 + 2836) = *a4;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    bottom = a4->bottom;
    right = a4->right;
    top = a4->top;
    left = a4->left;
    v18 = a3->bottom;
    LODWORD(v17) = a3->right;
    LODWORD(v16) = a3->top;
    LODWORD(v15) = a3->left;
    LODWORD(v14) = v6;
    LODWORD(v13) = *((_DWORD *)this + 4);
    McTemplateK0pqtqqqqqqqq_EtwWriteTransfer(
      v12,
      v11,
      v9,
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      left,
      top,
      right,
      bottom);
  }
}
