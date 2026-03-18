/*
 * XREFs of ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1402BA40C
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019D7E8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1401CE918 (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BA244 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BD4A4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x14004A814 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ADAPTER_RENDER::EnableClockCalibration(ADAPTER_RENDER *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  char v6; // al
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
  {
    v5 = v4 + 1168;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    v6 = *((_BYTE *)this + 1026);
    if ( a2 )
    {
      if ( !v6
        && (qword_14015B4C0 & 0x461C8ED7) != 0
        && (qword_14015B4C8 & 0xFFFFFFFFB9E37128uLL) == 0
        && (qword_14015B4C0 & 0x4000) != 0 )
      {
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
          (DXGAUTOPUSHLOCKSHARED *)v7,
          (struct _KTHREAD **)(*((_QWORD *)this + 2) + 104LL));
        if ( !*(_DWORD *)(*((_QWORD *)this + 2) + 160LL) )
        {
          KeSetTimerEx(
            (PKTIMER)((char *)this + 1040),
            *(LARGE_INTEGER *)((char *)this + 1032),
            50,
            (PKDPC)((char *)this + 1104));
          *((_BYTE *)this + 1026) = 1;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7);
      }
    }
    else if ( v6 )
    {
      KeCancelTimer((PKTIMER)((char *)this + 1040));
      KeFlushQueuedDpcs();
      *((_BYTE *)this + 1026) = 0;
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v5 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
