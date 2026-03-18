/*
 * XREFs of ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1402FE24C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x14036F49C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1402FEAA4 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 */

void __fastcall DISPLAY_SOURCE::InitializeQueryStateUnsafe(DISPLAY_SOURCE *this)
{
  unsigned int v2; // eax
  __int64 i; // rdi
  char *v4; // r14
  char *v5; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 648LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9994;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9994LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *((_DWORD *)this + 946);
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i < v2
      && (v4 = (char *)this + 168 * (unsigned int)i,
          !IsDisplayPlaneConfigQueueEmpty((struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v4 + 1168)))
      && (v5 = (char *)this + 168 * (unsigned int)i + 80 * *((int *)v4 + 292) + 1176) != 0LL
      && (*((_DWORD *)v5 + 2) & 1) != 0 )
    {
      *((_BYTE *)this + i + 2928) = 1;
      memset((char *)this + 80 * i + 2944, 0, 0x50uLL);
    }
    else
    {
      *((_BYTE *)this + i + 2928) = 0;
    }
    v2 = *((_DWORD *)this + 946);
  }
  *((_DWORD *)this + 947) = v2;
  *((_BYTE *)this + 3744) = 1;
  *(_OWORD *)((char *)this + 3748) = 0LL;
  *(_OWORD *)((char *)this + 3764) = 0LL;
  *((_DWORD *)this + 945) = 0;
}
