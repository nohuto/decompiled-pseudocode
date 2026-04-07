/*
 * XREFs of ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18004487C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180090650 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180043FD0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x1800449F8 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z @ 0x180044A98 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180044D30 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DesktopCreate(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *a2)
{
  ULONG v4; // r15d
  int RootVisualForDesktop; // eax
  unsigned int v6; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CContactManager *v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-39h]
  __int64 Buffer; // [rsp+30h] [rbp-29h] BYREF
  struct CVisual *v12; // [rsp+38h] [rbp-21h]
  __int128 v13; // [rsp+40h] [rbp-19h]
  __int128 v14; // [rsp+50h] [rbp-9h]
  __int128 v15; // [rsp+60h] [rbp+7h]
  __int64 v16; // [rsp+70h] [rbp+17h]
  char v17; // [rsp+78h] [rbp+1Fh]
  __int128 v18; // [rsp+80h] [rbp+27h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 8));
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v17 = 0;
  v18 = 0LL;
  Buffer = *(_QWORD *)((char *)a2 + 4);
  v16 = -1LL;
  RootVisualForDesktop = CWindowList::CreateRootVisualForDesktop(this, (struct CDesktop *)&Buffer);
  v6 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v10 = 7580;
    goto LABEL_11;
  }
  RootVisualForDesktop = CContainerVisual::AddChild(*((CContainerVisual **)this + 10), v12);
  v6 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v10 = 7581;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RootVisualForDesktop, v10, 0LL);
    goto LABEL_7;
  }
  if ( RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer, 0x60u, 0LL) )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *(_QWORD *)((char *)a2 + 4));
    WindowListForDesktop->Blink = WindowListForDesktop;
    WindowListForDesktop->Flink = WindowListForDesktop;
    if ( !v4 )
      CContactManager::ForceAtlasInitialize(v8, *(_QWORD *)((char *)a2 + 4));
    CWindowList::GetGlobalLightSetForDesktop(this, *(_QWORD *)((char *)a2 + 4));
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1DA0u, 0LL);
  }
LABEL_7:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
