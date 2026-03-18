/*
 * XREFs of ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x140187894
 * Callers:
 *     ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x14027C870 (-StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402831E4 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     DxgkAttemptOpmVmBusRedirect @ 0x1403B389C (DxgkAttemptOpmVmBusRedirect.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall REMOTEMONITORMAPPING::FindMappingFromGuestId(
        struct _KTHREAD **this,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *a2,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *a3)
{
  struct _KTHREAD *i; // r9
  unsigned int v7; // ebx
  int v8; // eax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, this + 2, 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v10);
  for ( i = *this; i != (struct _KTHREAD *)this; i = *(struct _KTHREAD **)i )
  {
    if ( *((_DWORD *)i + 7) == *(_DWORD *)a2
      && *((_DWORD *)i + 8) == *((_DWORD *)a2 + 1)
      && *((_DWORD *)i + 9) == *((_DWORD *)a2 + 2) )
    {
      v7 = 0;
      v8 = *((_DWORD *)i + 6);
      *(_QWORD *)a3 = *((_QWORD *)i + 2);
      *((_DWORD *)a3 + 2) = v8;
      goto LABEL_9;
    }
  }
  v7 = -1073741275;
LABEL_9:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  return v7;
}
