/*
 * XREFs of ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015E7A0
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140161F20 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140054D20 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140071400 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x140071B10 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x140074690 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400768C0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140160710 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140160750 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x140160A60 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

__int64 __fastcall ndisBindLegacyProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct NDIS_BIND_PROTOCOL_LINK *a3)
{
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _NDIS_BIND_PATHS *BindPaths; // rsi
  _UNICODE_STRING *Paths; // rsi
  _DEVICE_OBJECT *PhysicalDeviceObject; // r12
  __m128i v10; // xmm0
  int v11; // r9d
  void *m_AdditionalContext; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 result; // rax
  __int64 v17; // rcx
  int v18; // [rsp+28h] [rbp-E0h]
  void *v19; // [rsp+40h] [rbp-C8h]
  _UNICODE_STRING Destination_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING Source_8; // [rsp+78h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int128 v23; // [rsp+98h] [rbp-70h] BYREF
  __int128 v24; // [rsp+A8h] [rbp-60h]
  _UNICODE_STRING v25; // [rsp+B8h] [rbp-50h]
  __int128 v26; // [rsp+C8h] [rbp-40h]
  __int128 v27; // [rsp+D8h] [rbp-30h]
  __int128 v28; // [rsp+E8h] [rbp-20h]
  struct _KEVENT Event[3]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+170h] [rbp+68h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v30 = -1073741823;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  memset(Event, 0, 48);
  Destination_8 = 0LL;
  Source_8 = 0LL;
  DestinationString = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xAu,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      (char)a1,
      a2);
  WAIT_FOR_PROTO_MUTEX(a2);
  if ( !ndisIsMiniportStarted(a1)
    || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
    || PnPDeviceState == NdisPnPDeviceStopped )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        6u,
        0xBu,
        (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
        (char)a1,
        a2);
  }
  else if ( a1->EthDB )
  {
    BindPaths = a1->BindPaths;
    a2->BindDeviceName = &a1->MiniportName;
    Paths = BindPaths->Paths;
    a2->RootDeviceName = Paths;
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    if ( ndisReferenceProtocol(a2, 7u) )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
      Source_8 = *Paths;
      v10 = (__m128i)Source_8;
      Source_8.MaximumLength -= ndisDeviceStr.Length;
      Source_8.Length = _mm_cvtsi128_si32(v10) - ndisDeviceStr.Length;
      Source_8.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
      Destination_8.MaximumLength = a2->Name.Length
                                  + DestinationString.Length
                                  + Paths->Length
                                  - ndisDeviceStr.Length
                                  + 2;
      Destination_8.Length = 0;
      Destination_8.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination_8.MaximumLength, 538985550);
      if ( Destination_8.Buffer )
      {
        RtlCopyUnicodeString(&Destination_8, &a2->Name);
        RtlAppendUnicodeStringToString(&Destination_8, &DestinationString);
        RtlAppendUnicodeStringToString(&Destination_8, &Source_8);
        ndisUpdateMinimumStackVersion(a1, a2->MajorNdisVersion, a2->MinorNdisVersion);
        *((_QWORD *)&v23 + 1) = a2;
        *((_QWORD *)&v24 + 1) = a1;
        v25 = Destination_8;
        *(_QWORD *)&v26 = Paths;
        KeInitializeEvent(Event, NotificationEvent, 0);
        if ( !a2->Ref.Closing )
        {
          a2->BindingAdapter = a1;
          m_AdditionalContext = a3->BindState.m_AdditionalContext;
          v30 = 0;
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
              *((struct _NDIS_PROTOCOL_BLOCK **)m_AdditionalContext + 5),
              *((void **)m_AdditionalContext + 6),
              *((struct _UNICODE_STRING **)m_AdditionalContext + 7),
              0,
              0LL,
              (int *)&v30);
            v17 = **((_QWORD **)m_AdditionalContext + 1);
            if ( v17 )
              *(_DWORD *)(v17 + 224) |= 0x20000000u;
          }
          else
          {
            a2->BindAdapterHandler((int *)&v30, &v23, Paths, &Destination_8, PhysicalDeviceObject);
          }
          v15 = v30;
          if ( v30 == 259 )
          {
            ndisWaitForKernelObject(Event);
            v15 = DWORD2(v28);
            v30 = DWORD2(v28);
          }
          a2->BindingAdapter = 0LL;
          if ( !v15 )
            ndisNotifyWmiBindUnbind(a1, a2, 1u);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ZZL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v13,
              v14,
              0xCu,
              v18,
              &a2->Name.Length,
              &a1->pAdapterInstanceName->Length);
        }
        ExFreePoolWithTag(Destination_8.Buffer, 0);
        a2->BindDeviceName = 0LL;
      }
      ndisDereferenceProtocol(a2, 0, 7u, v11);
    }
  }
  RELEASE_PROT_MUTEX(a2);
  result = v30;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = v30;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xDu,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      (char)a1,
      (char)a2,
      v19);
    return v30;
  }
  return result;
}
