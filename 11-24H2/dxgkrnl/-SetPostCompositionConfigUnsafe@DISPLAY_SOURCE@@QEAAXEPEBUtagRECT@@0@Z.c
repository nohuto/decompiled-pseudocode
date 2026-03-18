/*
 * XREFs of ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1402FDA40
 * Callers:
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x14040154C (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1402FDBE0 (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 */

void __fastcall DISPLAY_SOURCE::SetPostCompositionConfigUnsafe(
        DISPLAY_SOURCE *this,
        unsigned __int8 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int64 v8; // rax
  char *v9; // rdx
  bool v10; // zf

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 648LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9798;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9798LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 712) == -1 && *((_DWORD *)this + 713) != -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9493;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
      9493LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((int *)this + 712);
  if ( (_DWORD)v8 == -1 || (v9 = (char *)this + 32 * v8 + 4 * v8 + 2856) == 0LL )
  {
    v10 = a2 == 0;
  }
  else
  {
    if ( a2 )
    {
      if ( *((_DWORD *)v9 + 1) == a3->left
        && *((_DWORD *)v9 + 3) == a3->right
        && *((_DWORD *)v9 + 2) == a3->top
        && *((_DWORD *)v9 + 4) == a3->bottom
        && *((_DWORD *)v9 + 5) == a4->left
        && *((_DWORD *)v9 + 7) == a4->right
        && *((_DWORD *)v9 + 6) == a4->top
        && *((_DWORD *)v9 + 8) == a4->bottom )
      {
LABEL_18:
        *((_BYTE *)this + 3792) = 1;
        return;
      }
LABEL_17:
      DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, a2, a3, a4);
      if ( !a2 )
        return;
      goto LABEL_18;
    }
    v10 = *v9 == 0;
  }
  if ( !v10 )
    goto LABEL_17;
}
