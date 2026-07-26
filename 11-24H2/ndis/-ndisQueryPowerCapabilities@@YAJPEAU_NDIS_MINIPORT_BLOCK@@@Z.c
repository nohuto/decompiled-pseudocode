/*
 * XREFs of ?ndisQueryPowerCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400670C0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     NdisWriteErrorLogEntry @ 0x14005BCE0 (NdisWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisQueryPowerCapabilities(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // edi
  PIRP Irp; // rax
  _IRP *v4; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v6; // rax
  __int32 v7; // eax
  __int32 v8; // ecx
  __int128 v9; // xmm3
  __m128i v10; // xmm2
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __int64 i; // rax
  PULONG RequiredSize; // [rsp+30h] [rbp-59h]
  _BYTE Data[4]; // [rsp+40h] [rbp-49h] BYREF
  ULONG Type; // [rsp+44h] [rbp-45h] BYREF
  ULONG v18; // [rsp+48h] [rbp-41h] BYREF
  _BYTE Event[32]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v20; // [rsp+70h] [rbp-19h] BYREF
  __m128i v21; // [rsp+80h] [rbp-9h] BYREF
  __m128i v22; // [rsp+90h] [rbp+7h] BYREF
  __m128i v23; // [rsp+A0h] [rbp+17h] BYREF

  v1 = 0;
  v20 = 0LL;
  Data[0] = 0;
  v21 = 0LL;
  v18 = 0;
  v22 = 0LL;
  Type = 0;
  v23 = 0LL;
  memset(Event, 0, sizeof(Event));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      13,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1);
  a1->PnPFlags &= ~1u;
  if ( a1->NextDeviceObject )
  {
    if ( IoGetDevicePropertyData(
           a1->PhysicalDeviceObject,
           &DEVPKEY_PciDevice_S0WakeupSupported,
           0,
           0,
           1u,
           Data,
           &v18,
           &Type) >= 0
      && Type == 17 )
    {
      a1->S0WakeupSupported = Data[0] != 0;
    }
    Irp = IoAllocateIrp(a1->NextDeviceObject->StackSize + 1, 0);
    v4 = Irp;
    if ( Irp )
    {
      *(_QWORD *)&v20 = 65600LL;
      v21 = 0LL;
      v23 = 0LL;
      v22 = 0LL;
      *((_QWORD *)&v20 + 1) = -1LL;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = 0LL;
      *(_OWORD *)&CurrentStackLocation[-1].FileObject = 0LL;
      CurrentStackLocation[-1].Context = 0LL;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&v20;
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2331;
      v4->IoStatus.Status = -1073741637;
      KeInitializeEvent((PRKEVENT)Event, NotificationEvent, 0);
      v6 = v4->Tail.Overlay.CurrentStackLocation;
      v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisCompletionRoutine;
      v6[-1].Context = Event;
      v6[-1].Control = -32;
      v1 = IofCallDriver(a1->NextDeviceObject, v4);
      if ( v1 == 259 )
        ndisWaitForKernelObject(Event);
      if ( *(int *)&Event[24] < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(RequiredSize) = *(_DWORD *)&Event[24];
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0xFu,
            (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
            (char)a1,
            RequiredSize);
        }
      }
      else
      {
        if ( (a1->DriverHandle->MiniportDriverCharacteristics.Flags & 8) != 0 )
        {
          DWORD1(v20) |= 0x3C00u;
          v7 = 4;
          v8 = 6;
          v23.m128i_i32[0] = 4;
          v21.m128i_i64[1] = 0x400000004LL;
          v22.m128i_i64[0] = 0x400000004LL;
          v22.m128i_i64[1] = 0x600000004LL;
        }
        else
        {
          v7 = v23.m128i_i32[0];
          v8 = v22.m128i_i32[3];
        }
        v9 = v20;
        v10 = _mm_load_si128(&v21);
        v11 = _mm_load_si128(&v22);
        v12 = _mm_load_si128(&v23);
        *(_OWORD *)&a1->DeviceCaps.Size = v20;
        *(_OWORD *)&a1->OriginalDeviceCaps.Size = v9;
        *(__m128i *)a1->DeviceCaps.DeviceState = v10;
        *(__m128i *)a1->OriginalDeviceCaps.DeviceState = v10;
        *(__m128i *)&a1->DeviceCaps.DeviceState[4] = v11;
        *(__m128i *)&a1->OriginalDeviceCaps.DeviceState[4] = v11;
        *(__m128i *)&a1->DeviceCaps.DeviceWake = v12;
        *(__m128i *)&a1->OriginalDeviceCaps.DeviceWake = v12;
        if ( a1->BusType == Isa )
        {
          if ( v7 && v8 )
LABEL_20:
            a1->PnPFlags |= 1u;
        }
        else
        {
          for ( i = 2LL; i < 7; ++i )
          {
            if ( v21.m128i_i32[i] )
              goto LABEL_20;
          }
        }
      }
      IoFreeIrp(v4);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2,
          14,
          14,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a1);
      NdisWriteErrorLogEntry(a1, 0xC0001389, 0);
      v1 = -1073741670;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(RequiredSize) = v1;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x10u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a1,
      RequiredSize);
  }
  return v1;
}
