/*
 * XREFs of NdisRegisterProtocol @ 0x1400B8C40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14004C300 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1400511B0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x140056920 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140074F20 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ??1_NDIS_PROTOCOL_BLOCK@@QEAA@XZ @ 0x14008DAF0 (--1_NDIS_PROTOCOL_BLOCK@@QEAA@XZ.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140092F58 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     ndisRegisterProtocolTriageData @ 0x1400B8354 (ndisRegisterProtocolTriageData.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1400B85B8 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x140135CA0 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x14015D4F0 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x14015E1D0 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14015E250 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x140167070 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140167330 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 */

__int64 __fastcall NdisRegisterProtocol(
        int *a1,
        _NDIS_PROTOCOL_BLOCK **a2,
        struct _NDIS50_PROTOCOL_CHARACTERISTICS *a3,
        unsigned int a4)
{
  _NDIS_PROTOCOL_BLOCK *v4; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v15; // eax
  __int64 v16; // r8
  _UNICODE_STRING *p_Name; // r14
  __int64 ProtocolDriver; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rbx
  USHORT v22; // bp
  __int64 Pool2; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  unsigned int Reserved; // eax
  unsigned __int8 MajorNdisVersion; // cl
  __int64 v28; // rdx
  TriageData *v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD v33[2]; // [rsp+40h] [rbp-38h] BYREF
  char v34; // [rsp+80h] [rbp+8h] BYREF

  LOBYTE(v4) = 0;
  v33[0] = 0LL;
  ndisIfEnsureNsiInitialized();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0xFu,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      &a3->Ndis40Chars.Name.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a3->Ndis40Chars.MajorNdisVersion < 4u )
  {
    DbgPrint("Ndis: NdisRegisterProtocol Ndis 3.0 protocols are not supported.\n");
LABEL_5:
    v11 = -1073676284;
    goto LABEL_6;
  }
  if ( a3->Ndis40Chars.MajorNdisVersion != 4 || a3->Ndis40Chars.MinorNdisVersion )
  {
    if ( a3->Ndis40Chars.MajorNdisVersion != 5 || a3->Ndis40Chars.MinorNdisVersion > 1u )
      goto LABEL_5;
    v15 = 208;
  }
  else
  {
    v15 = 144;
  }
  if ( a4 >= v15 && ndisValidateLegacyProtocols(a3, v9, v10) )
  {
    p_Name = &a3->Ndis40Chars.Name;
    LOBYTE(v16) = 1;
    ProtocolDriver = ndisBindGetProtocolDriver(&v34, (char *)&a3->2 + 88, v16);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(v33, ProtocolDriver);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v34, v19, v20);
    v21 = v33[0];
    if ( v33[0]
      && (v22 = p_Name->Length + 898,
          Pool2 = ExAllocatePool2(64LL, v22, 1651524686LL),
          (v4 = (_NDIS_PROTOCOL_BLOCK *)Pool2) != 0LL) )
    {
      *(_QWORD *)(Pool2 + 888) = 0LL;
      v24 = (_QWORD *)(Pool2 + 824);
      *(_QWORD *)(Pool2 + 824) = 0LL;
      v25 = Pool2 + 832;
      *(_QWORD *)v25 = 0LL;
      *(_DWORD *)(v25 + 48) = 0;
      *(_QWORD *)(v25 + 40) = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
      *(_QWORD *)(v25 + 16) = KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
      *(_QWORD *)(v25 + 32) = v4;
      *(_QWORD *)(v25 + 24) = v25;
      if ( v24 != v33 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(v24, v21);
      KeInitializeMutex(&v4->Mutex, 0xFFFFu);
      v4->MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
      v4->MinorNdisVersion = a3->Ndis40Chars.MinorNdisVersion;
      v4->Name.Buffer = (wchar_t *)&v4[1].Header.Type;
      Reserved = a3->Ndis40Chars.Reserved;
      v4->Reserved = Reserved;
      v4->Flags = Reserved & 0xF0000000;
      LOWORD(Reserved) = p_Name->Length;
      v4->Name.Length = p_Name->Length;
      v4->Name.MaximumLength = Reserved;
      *(_WORD *)&v4->Header.Type = 259;
      v4->Header.Size = v22;
      RtlUpcaseUnicodeString(&v4->Name, &a3->Ndis40Chars.Name, 0);
      MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
      v4->OpenAdapterCompleteHandler = a3->Ndis40Chars.OpenAdapterCompleteHandler;
      v4->CloseAdapterCompleteHandler = a3->Ndis40Chars.CloseAdapterCompleteHandler;
      v4->SendCompleteHandler = a3->Ndis40Chars.SendCompleteHandler;
      v4->TransferDataCompleteHandler = a3->Ndis40Chars.TransferDataCompleteHandler;
      v4->ResetCompleteHandler = a3->Ndis40Chars.ResetCompleteHandler;
      v4->RequestCompleteHandler = a3->Ndis40Chars.RequestCompleteHandler;
      v4->ReceiveHandler = a3->Ndis40Chars.ReceiveHandler;
      v4->ReceiveCompleteHandler = a3->Ndis40Chars.ReceiveCompleteHandler;
      v4->StatusHandlerEx = (void (__fastcall *)(void *, _NDIS_STATUS_INDICATION *))a3->Ndis40Chars.StatusHandler;
      v4->StatusCompleteHandler = a3->Ndis40Chars.StatusCompleteHandler;
      if ( MajorNdisVersion >= 4u )
      {
        v4->ReceivePacketHandler = a3->Ndis40Chars.ReceivePacketHandler;
        v4->BindAdapterHandler = a3->Ndis40Chars.BindAdapterHandler;
        v4->UnbindAdapterHandler = a3->Ndis40Chars.UnbindAdapterHandler;
        v4->PnPEventHandler = a3->Ndis40Chars.PnPEventHandler;
        v4->UnloadHandler = a3->Ndis40Chars.UnloadHandler;
      }
      if ( MajorNdisVersion == 5 )
      {
        v4->CoSendCompleteHandler = a3->CoSendCompleteHandler;
        v4->CoStatusHandlerEx = (void (__fastcall *)(void *, void *, _NDIS_STATUS_INDICATION *))a3->CoStatusHandler;
        v4->CoReceivePacketHandler = a3->CoReceivePacketHandler;
        v4->CoAfRegisterNotifyHandler = a3->CoAfRegisterNotifyHandler;
      }
      if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline()
        && (v30 = ndisRegisterProtocolTriageData((_LIST_ENTRY *)v4, v28, v29), (v11 = v30) != 0) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x10u,
            (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
            (char)v4,
            v30);
        _NDIS_PROTOCOL_BLOCK::~_NDIS_PROTOCOL_BLOCK(v4, v31, v32);
        ExFreePoolWithTag(v4, 0);
      }
      else
      {
        *a2 = v4;
        ndisInitializeRef(&v4->Ref, 0x10u);
        ndisRegisterProtocolDriverCommon(v4);
        ndisWriteDriverNDISVersionToServiceKey(v4->MajorNdisVersion, v4->MinorNdisVersion, 0, 0, 0, &v4->Name);
        v11 = 0;
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1073676283;
  }
LABEL_6:
  *a1 = v11;
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      5u,
      0x11u,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)v4,
      &a3->Ndis40Chars.Name.Length,
      v11);
  return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(v33, v12, v13);
}
