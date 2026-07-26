/*
 * XREFs of NdisRegisterProtocol @ 0x1400BFF60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x140068440 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140068470 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x14006CDE0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x140071780 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140090C40 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1400BF8B8 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x140140CA0 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x14016A440 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x14016B120 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14016B1A0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1401737F0 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140173D80 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 */

__int64 __fastcall NdisRegisterProtocol(
        int *a1,
        struct _NDIS_PROTOCOL_BLOCK **a2,
        struct _NDIS50_PROTOCOL_CHARACTERISTICS *a3,
        unsigned int a4)
{
  int v4; // ebx
  struct _NDIS_PROTOCOL_BLOCK *v6; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v15; // eax
  __int64 v16; // r8
  _UNICODE_STRING *p_Name; // r14
  __int64 ProtocolDriver; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  USHORT v21; // bp
  __int64 Pool2; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  unsigned int Reserved; // eax
  unsigned __int8 MajorNdisVersion; // cl
  _QWORD v27[2]; // [rsp+40h] [rbp-38h] BYREF
  char v28; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  LOBYTE(v6) = 0;
  v27[0] = 0LL;
  ndisIfEnsureNsiInitialized();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0xEu,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      &a3->Ndis40Chars.Name.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a3->Ndis40Chars.MajorNdisVersion < 4u )
  {
    DbgPrint("Ndis: NdisRegisterProtocol Ndis 3.0 protocols are not supported.\n");
LABEL_5:
    v4 = -1073676284;
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
  if ( a4 >= v15 && ndisValidateLegacyProtocols(a3, v10, v11) )
  {
    p_Name = &a3->Ndis40Chars.Name;
    LOBYTE(v16) = 1;
    ProtocolDriver = ndisBindGetProtocolDriver(&v28, (char *)&a3->2 + 88, v16);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(v27, ProtocolDriver);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v28, v19, v20);
    if ( v27[0]
      && (v21 = p_Name->Length + 890,
          Pool2 = ExAllocatePool2(64LL, v21, 1651524686),
          (v6 = (struct _NDIS_PROTOCOL_BLOCK *)Pool2) != 0LL) )
    {
      v23 = (_QWORD *)(Pool2 + 824);
      v24 = Pool2 + 832;
      *v23 = 0LL;
      *(_QWORD *)(v24 + 40) = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
      *(_QWORD *)(v24 + 32) = v6;
      *(_QWORD *)(v24 + 16) = KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
      *(_QWORD *)(v24 + 24) = v24;
      *(_QWORD *)v24 = 0LL;
      *(_DWORD *)(v24 + 48) = 0;
      if ( v23 != v27 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(v23, v27[0]);
      KeInitializeMutex(&v6->Mutex, 0xFFFFu);
      v6->MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
      v6->MinorNdisVersion = a3->Ndis40Chars.MinorNdisVersion;
      *(_WORD *)&v6->Header.Type = 259;
      v6->Name.Buffer = (wchar_t *)&v6[1].Header.Type;
      Reserved = a3->Ndis40Chars.Reserved;
      v6->Reserved = Reserved;
      v6->Flags = Reserved & 0xF0000000;
      LOWORD(Reserved) = p_Name->Length;
      v6->Name.Length = p_Name->Length;
      v6->Name.MaximumLength = Reserved;
      v6->Header.Size = v21;
      RtlUpcaseUnicodeString(&v6->Name, &a3->Ndis40Chars.Name, 0);
      MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
      v6->OpenAdapterCompleteHandler = a3->Ndis40Chars.OpenAdapterCompleteHandler;
      v6->CloseAdapterCompleteHandler = a3->Ndis40Chars.CloseAdapterCompleteHandler;
      v6->SendCompleteHandler = a3->Ndis40Chars.SendCompleteHandler;
      v6->TransferDataCompleteHandler = a3->Ndis40Chars.TransferDataCompleteHandler;
      v6->ResetCompleteHandler = a3->Ndis40Chars.ResetCompleteHandler;
      v6->RequestCompleteHandler = a3->Ndis40Chars.RequestCompleteHandler;
      v6->ReceiveHandler = a3->Ndis40Chars.ReceiveHandler;
      v6->ReceiveCompleteHandler = a3->Ndis40Chars.ReceiveCompleteHandler;
      v6->StatusHandlerEx = (void (__fastcall *)(void *, _NDIS_STATUS_INDICATION *))a3->Ndis40Chars.StatusHandler;
      v6->StatusCompleteHandler = a3->Ndis40Chars.StatusCompleteHandler;
      if ( MajorNdisVersion >= 4u )
      {
        v6->ReceivePacketHandler = a3->Ndis40Chars.ReceivePacketHandler;
        v6->BindAdapterHandler = a3->Ndis40Chars.BindAdapterHandler;
        v6->UnbindAdapterHandler = a3->Ndis40Chars.UnbindAdapterHandler;
        v6->PnPEventHandler = a3->Ndis40Chars.PnPEventHandler;
        v6->UnloadHandler = a3->Ndis40Chars.UnloadHandler;
      }
      if ( MajorNdisVersion == 5 )
      {
        v6->CoSendCompleteHandler = a3->CoSendCompleteHandler;
        v6->CoStatusHandlerEx = (void (__fastcall *)(void *, void *, _NDIS_STATUS_INDICATION *))a3->CoStatusHandler;
        v6->CoReceivePacketHandler = a3->CoReceivePacketHandler;
        v6->CoAfRegisterNotifyHandler = a3->CoAfRegisterNotifyHandler;
      }
      *a2 = v6;
      ndisInitializeRef(&v6->Ref, 0x10u);
      ndisRegisterProtocolDriverCommon(v6);
      ndisWriteDriverNDISVersionToServiceKey(v6->MajorNdisVersion, v6->MinorNdisVersion, 0, 0, 0, &v6->Name);
    }
    else
    {
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073676283;
  }
LABEL_6:
  *a1 = v4;
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      5u,
      0xFu,
      (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
      (char)v6,
      &a3->Ndis40Chars.Name.Length,
      v4);
  return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(v27, v12, v13);
}
