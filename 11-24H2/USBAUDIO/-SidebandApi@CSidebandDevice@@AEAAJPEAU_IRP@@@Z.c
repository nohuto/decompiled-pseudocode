/*
 * XREFs of ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140009420
 * Callers:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x140006504 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005138 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140006AA8 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007508 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007FD8 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008700 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000A350 (-GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsPowerRequiredForIo@CSidebandDevice@@AEAA_NK@Z @ 0x1400123D8 (-IsPowerRequiredForIo@CSidebandDevice@@AEAA_NK@Z.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400148E4 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140014B90 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14001522C (-GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400154D4 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400156C4 (-GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140015858 (-GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400159EC (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140015BDC (-GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140015E84 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400166DC (-GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400168CC (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140016E5C (-SetSidebandClaimed@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140016FD0 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017588 (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400179EC (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017F7C (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400182C4 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     DeviceRequestPowerUp @ 0x14004007C (DeviceRequestPowerUp.c)
 *     IsDevicePoweredUp @ 0x1400415E4 (IsDevicePoweredUp.c)
 */

__int64 __fastcall CSidebandDevice::SidebandApi(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _IRP *v3; // rbp
  char v5; // di
  char v6; // r8
  int v7; // edx
  CSidebandDevice *v8; // rcx
  NTSTATUS v9; // ebx
  int v10; // edx
  int v11; // edx
  ULONG *v12; // r8
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rbx
  unsigned int LowPart; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  int SupportedFormats; // eax
  PDEVICE_OBJECT v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  int v34; // edx
  int v35; // r8d
  void *v36; // r8

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = a2;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v6 = 0;
  }
  if ( (_BYTE)a2 || v6 )
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v6, WPP_GLOBAL_Control->DeviceExtension);
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)this + 5) + 8LL), 0LL, File, 1u, 0x20u);
  if ( v9 >= 0 )
  {
    if ( CSidebandDevice::IsPowerRequiredForIo(v8, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart)
      && !(unsigned int)IsDevicePoweredUp(*((_QWORD *)this + 4)) )
    {
      v9 = DeviceRequestPowerUp();
      if ( v9 < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v13) = 0;
        }
        if ( (_BYTE)v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qd(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v14,
            WPP_GLOBAL_Control->DeviceExtension);
        }
        v3->IoStatus.Status = -1073741661;
        goto LABEL_20;
      }
      v15 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          WPP_GLOBAL_Control->DeviceExtension);
      KeWaitForSingleObject((PVOID)(v15 + 560), Executive, 0, 0, 0LL);
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart > 0x220037 )
    {
      if ( LowPart <= 0x22004F )
      {
        if ( LowPart == 2228303 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          SupportedFormats = CSidebandDevice::GetSupportedFormats(this, v3);
          goto LABEL_247;
        }
        v27 = LowPart - 2228283;
        if ( !v27 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          SupportedFormats = CSidebandDevice::StreamOpen(this, v3, (__int64)v12);
          goto LABEL_247;
        }
        v28 = v27 - 4;
        if ( !v28 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          SupportedFormats = CSidebandDevice::StreamClose(this, v3);
          goto LABEL_247;
        }
        v29 = v28 - 4;
        if ( !v29 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          SupportedFormats = CSidebandDevice::StreamStart(this, v3);
          goto LABEL_247;
        }
        v30 = v29 - 4;
        if ( !v30 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          SupportedFormats = CSidebandDevice::StreamSuspend(this, v3, (__int64)v12);
          goto LABEL_247;
        }
        if ( v30 == 4 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          SupportedFormats = CSidebandDevice::GetStreamStatusUpdate(this, v3);
          goto LABEL_247;
        }
        goto LABEL_209;
      }
      v31 = LowPart - 2228307;
      if ( !v31 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            (_DWORD)v12,
            WPP_GLOBAL_Control->DeviceExtension);
        SupportedFormats = CSidebandDevice::GetSiop(this, v3, v12);
        goto LABEL_247;
      }
      v32 = v31 - 12;
      if ( !v32 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            (_DWORD)v12,
            WPP_GLOBAL_Control->DeviceExtension);
        }
        SupportedFormats = CSidebandDevice::SetSiop(this, v3);
        goto LABEL_247;
      }
      v33 = v32 - 4;
      if ( !v33 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            (_DWORD)v12,
            WPP_GLOBAL_Control->DeviceExtension);
        }
        SupportedFormats = CSidebandDevice::SetSidebandClaimed(this, v3);
        goto LABEL_247;
      }
      if ( v33 != 4 )
        goto LABEL_209;
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v11) = 0;
      }
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
LABEL_71:
        WPP_RECORDER_AND_TRACE_SF_(v22->AttachedDevice, v11, (_DWORD)v12, v22->DeviceExtension);
    }
    else
    {
      if ( LowPart == 2228279 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            (_DWORD)v12,
            WPP_GLOBAL_Control->DeviceExtension);
        }
        SupportedFormats = CSidebandDevice::SetSidetone(this, v3);
        goto LABEL_247;
      }
      if ( LowPart > 0x22001F )
      {
        v23 = LowPart - 2228259;
        if ( !v23 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          SupportedFormats = CSidebandDevice::GetMutePropertyValues(this, v3);
          goto LABEL_247;
        }
        v24 = v23 - 4;
        if ( !v24 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          SupportedFormats = CSidebandDevice::SetMute(this, v3);
          goto LABEL_247;
        }
        v25 = v24 - 4;
        if ( !v25 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          SupportedFormats = CSidebandDevice::GetMuteStatusUpdate(this, v3);
          goto LABEL_247;
        }
        v26 = v25 - 4;
        if ( !v26 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          SupportedFormats = CSidebandDevice::GetSidetoneVolumePropertyValues(this, v3);
          goto LABEL_247;
        }
        if ( v26 == 4 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          SupportedFormats = CSidebandDevice::GetSidetoneStatusUpdate(this, v3);
          goto LABEL_247;
        }
        goto LABEL_209;
      }
      if ( LowPart == 2228255 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            (_DWORD)v12,
            WPP_GLOBAL_Control->DeviceExtension);
        }
        SupportedFormats = CSidebandDevice::GetVolumeStatusUpdate(this, v3);
        goto LABEL_247;
      }
      v17 = LowPart - 2228231;
      if ( !v17 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            (_DWORD)v12,
            WPP_GLOBAL_Control->DeviceExtension);
        }
        SupportedFormats = CSidebandDevice::GetDeviceDescriptor(this, v3);
        goto LABEL_247;
      }
      v18 = v17 - 4;
      if ( !v18 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            (_DWORD)v12,
            WPP_GLOBAL_Control->DeviceExtension);
        }
        SupportedFormats = CSidebandDevice::GetErrorStatusUpdate(this, v3);
        goto LABEL_247;
      }
      v19 = v18 - 4;
      if ( v19 )
      {
        v20 = v19 - 8;
        if ( !v20 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          SupportedFormats = CSidebandDevice::GetVolumePropertyValues(this, v3);
          goto LABEL_247;
        }
        if ( v20 == 4 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v12,
              WPP_GLOBAL_Control->DeviceExtension);
          }
          SupportedFormats = CSidebandDevice::SetVolume(this, v3);
          goto LABEL_247;
        }
LABEL_209:
        v9 = -1073741437;
        v3->IoStatus.Information = 0LL;
        v3->IoStatus.Status = -1073741437;
        IofCompleteRequest(v3, 0);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
          || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v34) = 0;
        }
        if ( (_BYTE)v34 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v35) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v34, v35, WPP_GLOBAL_Control->DeviceExtension);
        }
        goto LABEL_248;
      }
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v11) = 0;
      }
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        goto LABEL_71;
    }
    SupportedFormats = CSidebandDevice::GetEndpointDescriptor(this, v3);
LABEL_247:
    v9 = SupportedFormats;
LABEL_248:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)this + 5) + 8LL), 0LL, 0x20u);
    goto LABEL_249;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  v3->IoStatus.Status = v9;
LABEL_20:
  v3->IoStatus.Information = 0LL;
  IofCompleteRequest(v3, 0);
LABEL_249:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)v10 || v5 )
  {
    v36 = &WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids;
    LOBYTE(v36) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      (_DWORD)v36,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v9;
}
