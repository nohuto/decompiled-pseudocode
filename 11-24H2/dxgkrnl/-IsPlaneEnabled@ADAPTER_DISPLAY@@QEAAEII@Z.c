/*
 * XREFs of ?IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z @ 0x1402FFFD4
 * Callers:
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1402FFD84 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1402FFB58 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

bool __fastcall ADAPTER_DISPLAY::IsPlaneEnabled(ADAPTER_DISPLAY *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  bool v6; // si
  DISPLAY_SOURCE *v7; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (ADAPTER_DISPLAY *)((char *)this + 624), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = 0;
  v7 = (DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 4024 * v3);
  if ( a3 < *((_DWORD *)v7 + 946) )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(v7, a3);
    if ( LatestPlaneConfigInternal )
      v6 = (*((_BYTE *)LatestPlaneConfigInternal + 8) & 3) != 0;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  return v6;
}
