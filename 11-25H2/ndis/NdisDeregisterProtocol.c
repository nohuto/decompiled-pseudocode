/*
 * XREFs of NdisDeregisterProtocol @ 0x14017D630
 * Callers:
 *     NdisDeregisterProtocolDriver @ 0x1400BFA70 (NdisDeregisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140071400 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1400860B0 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x14015CE30 (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall NdisDeregisterProtocol(_DWORD *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  KIRQL v4; // al
  struct _NDIS_PROTOCOL_BLOCK *i; // rdi
  _NDIS_M_DRIVER_BLOCK *AssociatedMiniDriver; // rax
  int v7; // r9d
  __int64 v8; // [rsp+30h] [rbp-38h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      5u,
      0x12u,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a2,
      &a2->Name.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  for ( i = (struct _NDIS_PROTOCOL_BLOCK *)ndisProtocolList; i && i != a2; i = i->NextProtocol )
    ;
  KeReleaseSpinLock(&ndisProtocolListLock, v4);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( !i )
  {
    *a1 = 0;
    return;
  }
  NDIS_BIND_PROTOCOL_DRIVER::SetRunningDriver(&a2->Bind._p->_t, 0LL, RunSynchronous);
  if ( ndisCloseRef(&a2->Ref.SpinLock) )
  {
    AssociatedMiniDriver = a2->AssociatedMiniDriver;
    if ( AssociatedMiniDriver )
    {
      AssociatedMiniDriver->AssociatedProtocol = 0LL;
      a2->AssociatedMiniDriver = 0LL;
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    a2->DeregEvent = &Event;
    ndisDereferenceProtocol(a2, 0, 0xFFu, v7);
    ndisWaitForKernelObject(&Event);
    *a1 = 0;
  }
  else
  {
    *a1 = -1073741823;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    LODWORD(v8) = -1073741823;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x13u,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a2,
      v8);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = *a1;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x14u,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)a2,
      v8);
  }
}
