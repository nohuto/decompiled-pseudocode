/*
 * XREFs of ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1802B7A4C
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180060F2C (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801BEBA0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1802B7BE4 (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall CDeviceManager::GetWarpDevice(CDeviceManager *this, struct CD3DDevice **a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rcx
  __int64 i; // rax
  struct _LUID *WarpAdapterLuid; // rax
  int Device; // eax
  int v8; // edi
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v10 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  for ( i = qword_1803FAAE8; i != (_QWORD)xmmword_1803FAAF0; i += 16LL )
  {
    v4 = *(_QWORD **)i;
    if ( !*(_DWORD *)(*(_QWORD *)i + 1112LL) && v4[71] )
    {
      *a2 = (struct CD3DDevice *)v4;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 1));
      goto LABEL_10;
    }
  }
  WarpAdapterLuid = (struct _LUID *)CDisplayManager::GetWarpAdapterLuid((CDisplayManager *)v4);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *WarpAdapterLuid, a2);
  v8 = Device;
  if ( Device < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AFF8, 2u, Device, 0x13Eu, 0LL);
  v2 = v8;
LABEL_10:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v2;
}
