/*
 * XREFs of ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1403142D4
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1402A098C (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x140314C18 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 */

void __fastcall DISPLAY_SOURCE::InitializeQueryStateUnsafe(DISPLAY_SOURCE *this)
{
  unsigned int v2; // eax
  __int64 i; // rdi
  char *v4; // r14
  char *v5; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 640LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9849;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9849LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *((_DWORD *)this + 936);
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i < v2
      && (v4 = (char *)this + 168 * (unsigned int)i,
          !IsDisplayPlaneConfigQueueEmpty((struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v4 + 1128)))
      && (v5 = (char *)this + 168 * (unsigned int)i + 80 * *((int *)v4 + 282) + 1136) != 0LL
      && (*((_DWORD *)v5 + 2) & 1) != 0 )
    {
      *((_BYTE *)this + i + 2888) = 1;
      memset((char *)this + 80 * i + 2904, 0, 0x50uLL);
    }
    else
    {
      *((_BYTE *)this + i + 2888) = 0;
    }
    v2 = *((_DWORD *)this + 936);
  }
  *((_DWORD *)this + 937) = v2;
  *((_BYTE *)this + 3704) = 1;
  *(_OWORD *)((char *)this + 3708) = 0LL;
  *(_OWORD *)((char *)this + 3724) = 0LL;
  *((_DWORD *)this + 935) = 0;
}
