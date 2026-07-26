/*
 * XREFs of ndisHandleProtocolUnloadNotification @ 0x1400AB36C
 * Callers:
 *     ndisHandleUModePnPOp @ 0x140089FC0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Z @ 0x14006CDE0 (WPP_RECORDER_SF_Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x140071400 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisInvokeUninstall@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14014B080 (-ndisInvokeUninstall@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x14017D448 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 */

__int64 __fastcall ndisHandleProtocolUnloadNotification(PCUNICODE_STRING SourceString)
{
  int v2; // eax
  int v3; // edx
  int v4; // r9d
  struct _NDIS_PROTOCOL_BLOCK *v5; // rbx
  unsigned int v6; // edi
  void (*UnloadHandler)(void); // rax
  struct _NDIS_PROTOCOL_BLOCK *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x15u,
      (struct _GUID *)&WPP_d2b6eda2588e3a9c075e152401def421_Traceguids,
      &SourceString->Length);
  v2 = ndisReferenceProtocolByName(SourceString, &v9, 0, PTREF_UNLOADNOTIFY);
  v5 = v9;
  v6 = v2;
  if ( v2 >= 0 )
  {
    ndisDereferenceProtocol(v9, 0, 5u, v4);
    UnloadHandler = v5->UnloadHandler;
    if ( UnloadHandler )
    {
      UnloadHandler();
    }
    else if ( v5->UninstallHandler )
    {
      ndisInvokeUninstall(v5);
    }
    else
    {
      v6 = -1073741823;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      5,
      22,
      (struct _GUID *)&WPP_d2b6eda2588e3a9c075e152401def421_Traceguids,
      (char)v5);
  }
  return v6;
}
