/*
 * XREFs of ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14000E780
 * Callers:
 *     DxgkModifyVSyncWaiterInternal @ 0x1401ADA80 (DxgkModifyVSyncWaiterInternal.c)
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401AEE90 (DxgkOpenVerticalBlankEventInternal.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402BCA10 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14030BDEC (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 */

DXGPAIREDADAPTERSTOPRESETLOCKSHARED *__fastcall DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER *a3)
{
  char *v4; // rcx
  struct DXGADAPTER *v5; // rax
  char v6; // al
  __int64 v7; // rbx
  DXGPAIREDADAPTERSTOPRESETLOCKSHARED *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
  v4 = (char *)this + 24;
  v5 = a2;
  if ( a3 )
    v5 = a3;
  v4[16] = 0;
  *((_QWORD *)v4 + 1) = v5;
  if ( !a3 || (v6 = 0, a3 == a2) )
    v6 = 1;
  *((_BYTE *)this + 48) = v6;
  *((_BYTE *)this + 49) = 0;
  if ( !v6 )
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v4);
  if ( !*((_BYTE *)this + 16) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 24LL));
    *(_QWORD *)this = -1LL;
    v7 = *((_QWORD *)this + 1);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v7 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 152));
    *((_BYTE *)this + 16) = 1;
  }
  result = this;
  *((_BYTE *)this + 49) = 1;
  return result;
}
