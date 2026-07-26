/*
 * XREFs of ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14016BDD0
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401556B0 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035D30 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140051FC0 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1400565A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x140056EA0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x140059A10 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x140084490 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1401541F0 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

__int64 __fastcall ndisBindLegacyProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct NDIS_BIND_PROTOCOL_LINK *a3)
{
  struct _NDIS_PROTOCOL_BLOCK *v4; // rbx
  NTSTATUS v6; // eax
  int v7; // edx
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _NDIS_BIND_PATHS *BindPaths; // r15
  UNICODE_STRING *Paths; // r15
  UNICODE_STRING v11; // xmm0
  __int16 v12; // ax
  int v13; // r9d
  _NDIS_MINIPORT_BLOCK **p_BindingAdapter; // r14
  void *m_AdditionalContext; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  _NDIS_MINIPORT_BLOCK **v19; // rsi
  unsigned int v20; // eax
  NTSTATUS v21; // eax
  int v22; // r9d
  int Timeout; // [rsp+20h] [rbp-E0h]
  char P; // [rsp+30h] [rbp-D0h]
  void *v27; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  __int128 v31; // [rsp+90h] [rbp-70h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING v33; // [rsp+B0h] [rbp-50h]
  __int128 v34; // [rsp+C0h] [rbp-40h]
  __int128 v35; // [rsp+D0h] [rbp-30h]
  __int128 v36; // [rsp+E0h] [rbp-20h]
  struct _KEVENT Event[4]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+168h] [rbp+68h] BYREF
  _DEVICE_OBJECT *PhysicalDeviceObject; // [rsp+178h] [rbp+78h]

  v38 = -1073741823;
  v31 = 0LL;
  v4 = a2;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  memset(Event, 0, 48);
  Destination = 0LL;
  Source = 0LL;
  DestinationString = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    P = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      10,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      (char)a1,
      P);
  }
  v6 = KeWaitForSingleObject(&v4->Mutex, Executive, 0, 0, 0LL);
  if ( v6 )
    ndisBugCheckEx(0x24uLL, 1uLL, v6, 1uLL);
  ++v4->MutexOwnerCount;
  v4->MutexOwnerThread = KeGetCurrentThread();
  if ( !ndisIsMiniportStarted(a1)
    || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
    || PnPDeviceState == NdisPnPDeviceStopped )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        6,
        11,
        (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
        (char)a1,
        (char)v4);
    }
  }
  else
  {
    mem::ReadNoFence<unsigned long,void>(&a1->Flags);
    if ( a1->EthDB )
    {
      BindPaths = a1->BindPaths;
      v4->BindDeviceName = &a1->MiniportName;
      Paths = BindPaths->Paths;
      v4->RootDeviceName = Paths;
      PhysicalDeviceObject = a1->PhysicalDeviceObject;
      if ( ndisReferenceProtocol(v4, 7u) )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
        Source = *Paths;
        v11 = Source;
        Source.MaximumLength -= ndisDeviceStr.Length;
        Source.Length = _mm_cvtsi128_si32((__m128i)v11) - ndisDeviceStr.Length;
        v12 = v4->Name.Length - ndisDeviceStr.Length;
        Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
        Destination.MaximumLength = DestinationString.Length + Paths->Length + v12 + 2;
        Destination.Length = 0;
        Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination.MaximumLength, 538985550LL);
        if ( Destination.Buffer )
        {
          RtlCopyUnicodeString(&Destination, &v4->Name);
          RtlAppendUnicodeStringToString(&Destination, &DestinationString);
          RtlAppendUnicodeStringToString(&Destination, &Source);
          ndisUpdateMinimumStackVersion(a1, v4->MajorNdisVersion, v4->MinorNdisVersion);
          *((_QWORD *)&v31 + 1) = v4;
          *((_QWORD *)&v32 + 1) = a1;
          v33 = Destination;
          *(_QWORD *)&v34 = Paths;
          KeInitializeEvent(Event, NotificationEvent, 0);
          if ( !v4->Ref.Closing )
          {
            v38 = 0;
            p_BindingAdapter = &v4->BindingAdapter;
            v4->BindingAdapter = a1;
            m_AdditionalContext = a3->BindState.m_AdditionalContext;
            if ( m_AdditionalContext )
            {
              a3->BindState.m_AdditionalContext = 0LL;
              ndisOpenAdapterLegacyProtocol(
                *(int **)m_AdditionalContext,
                0LL,
                *((void ***)m_AdditionalContext + 1),
                *((unsigned int **)m_AdditionalContext + 2),
                *((enum _NDIS_MEDIUM **)m_AdditionalContext + 3),
                *((_DWORD *)m_AdditionalContext + 8),
                *((unsigned __int16 **)m_AdditionalContext + 5),
                *((void **)m_AdditionalContext + 6),
                *((struct _UNICODE_STRING **)m_AdditionalContext + 7),
                0,
                0LL,
                (int *)&v38);
              v18 = *((_QWORD *)m_AdditionalContext + 1);
              v19 = &v4->BindingAdapter;
              if ( *(_QWORD *)v18 )
              {
                v19 = &v4->BindingAdapter;
                *(_DWORD *)(*(_QWORD *)v18 + 224LL) |= 0x20000000u;
              }
            }
            else
            {
              v4->BindAdapterHandler((int *)&v38, &v31, Paths, &Destination, PhysicalDeviceObject);
              v19 = &v4->BindingAdapter;
            }
            v20 = v38;
            if ( v38 == 259 )
            {
              v21 = KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
              if ( v21 )
                ndisBugCheckEx(0x24uLL, 1uLL, v21, 1uLL);
              v20 = DWORD2(v36);
              p_BindingAdapter = v19;
              v38 = DWORD2(v36);
            }
            *p_BindingAdapter = 0LL;
            if ( !v20 )
              ndisNotifyWmiBindUnbind(a1, v4, 1u);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_ZZL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v16,
                v17,
                0xCu,
                Timeout,
                &v4->Name.Length,
                &a1->pAdapterInstanceName->Length);
          }
          ExFreePoolWithTag(Destination.Buffer, 0);
          v4->BindDeviceName = 0LL;
          ndisDereferenceProtocol(v4, 0, 7u, v22);
        }
        else
        {
          ndisDereferenceProtocol(v4, 0, 7u, v13);
        }
      }
    }
  }
  if ( v4->MutexOwnerCount-- == 1 )
    v4->MutexOwnerThread = 0LL;
  KeReleaseMutex(&v4->Mutex, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v27) = v38;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xDu,
      (struct _GUID *)&WPP_253e38cb1efe38fa547bfa360b554d29_Traceguids,
      (char)a1,
      (char)v4,
      v27);
  }
  return v38;
}
