/*
 * XREFs of ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000C81C
 * Callers:
 *     DxgkModifyVSyncWaiterInternal @ 0x1401ADA80 (DxgkModifyVSyncWaiterInternal.c)
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401AEE90 (DxgkOpenVerticalBlankEventInternal.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402BCA10 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14030BDEC (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( *((_BYTE *)this + 49) )
  {
    *((_BYTE *)this + 49) = 0;
    if ( *((_BYTE *)this + 16) )
    {
      *((_BYTE *)this + 16) = 0;
      v2 = *((_QWORD *)this + 1) + 136LL;
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 16));
      ExReleasePushLockSharedEx(v2, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 1), *(_QWORD *)this);
    }
    if ( !*((_BYTE *)this + 48) )
    {
      if ( !*((_BYTE *)this + 40) )
        goto LABEL_7;
      v5 = *((_QWORD *)this + 4) + 136LL;
      *((_BYTE *)this + 40) = 0;
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 16));
      ExReleasePushLockSharedEx(v5, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 4), *((_QWORD *)this + 3));
    }
  }
  if ( *((_BYTE *)this + 40) )
  {
    v3 = *((_QWORD *)this + 4) + 136LL;
    *((_BYTE *)this + 40) = 0;
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 16));
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 4), *((_QWORD *)this + 3));
  }
LABEL_7:
  if ( *((_BYTE *)this + 16) )
  {
    v4 = *((_QWORD *)this + 1) + 136LL;
    *((_BYTE *)this + 16) = 0;
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 16));
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 1), *(_QWORD *)this);
  }
}
