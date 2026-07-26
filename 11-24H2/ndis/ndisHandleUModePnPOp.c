/*
 * XREFs of ndisHandleUModePnPOp @ 0x14006DBD0
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14017F9C0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ndisHandleProtocolUnloadNotification @ 0x1400A31BC (ndisHandleProtocolUnloadNotification.c)
 *     McTemplateK0qzz_EtwWriteTransfer @ 0x1400A34AC (McTemplateK0qzz_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_sZZ @ 0x1400A35A0 (WPP_RECORDER_SF_sZZ.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400CC0E8 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ndisHandleBindNotification @ 0x140138F3C (ndisHandleBindNotification.c)
 *     ndisHandleLegacyBindIoctl @ 0x1401390A8 (ndisHandleLegacyBindIoctl.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x140171ED0 (ndisHandleProtocolReconfigNotification.c)
 */

__int64 __fastcall ndisHandleUModePnPOp(__int64 a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // eax
  const char *v5; // rcx
  void *v6; // rdx
  const char *v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  ndisWaitForKernelObject(&ndisPnPMutex);
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = a1 + 24;
      v5 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v5 = "TDI ";
      v14 = a1 + 40;
      HIDWORD(v13) = HIDWORD(v5);
      WPP_RECORDER_SF_sZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)"TDI ", v3, 23);
    }
    if ( (byte_14011B104 & 1) != 0 )
    {
      v6 = &ProtocolBind;
LABEL_15:
      McTemplateK0qzz_EtwWriteTransfer(v2, (_DWORD)v6, v3, *(_DWORD *)a1, *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 32));
    }
  }
  else if ( v4 == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = a1 + 24;
      v7 = "NDIS";
      if ( *(_DWORD *)a1 != 1 )
        v7 = "TDI ";
      v14 = a1 + 40;
      HIDWORD(v13) = HIDWORD(v7);
      WPP_RECORDER_SF_sZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), (unsigned int)"TDI ", v3, 24);
    }
    if ( (byte_14011B104 & 1) != 0 )
    {
      v6 = &ProtocolUnbind;
      goto LABEL_15;
    }
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    v9 = *(_DWORD *)(a1 + 4);
    switch ( v9 )
    {
      case 1:
      case 2:
        ndisHandleLegacyBindIoctl((struct _UNICODE_STRING *)(a1 + 24));
        goto LABEL_23;
      case 3:
        goto LABEL_27;
      case 5:
        v8 = ndisHandleProtocolUnloadNotification((PCUNICODE_STRING)(a1 + 40));
        break;
      case 6:
        v8 = -1073741637;
        break;
      case 9:
        v10 = *(_DWORD *)(a1 + 16) >> 1;
        if ( v10 >= 2 )
        {
          v11 = *(_QWORD *)(a1 + 8);
          if ( *(_WORD *)(v11 + 2LL * (v10 - 1)) || *(_WORD *)(v11 + 2LL * (v10 - 2)) )
            goto LABEL_31;
        }
LABEL_27:
        v8 = ndisHandleProtocolReconfigNotification((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(a1 + 40), v9);
        break;
      case 10:
      case 11:
      case 15:
LABEL_23:
        v8 = ndisHandleBindNotification((struct _UNICODE_STRING *)(a1 + 24));
        break;
      case 14:
        v8 = ndisIfAliasChange((const struct _UNICODE_STRING *)(a1 + 24), (const struct _UNICODE_STRING *)(a1 + 40));
        break;
      default:
        goto LABEL_31;
    }
  }
  else if ( *(_DWORD *)a1 == 2 )
  {
    if ( ndisTdiPnPHandler )
    {
      LODWORD(v13) = *(_DWORD *)(a1 + 4);
      v8 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _DWORD, __int64, __int64, __int64))ndisTdiPnPHandler)(
             a1 + 40,
             a1 + 24,
             a1 + 56,
             *(_QWORD *)(a1 + 8),
             *(_DWORD *)(a1 + 16),
             v13,
             v14,
             v15);
    }
    else
    {
      v8 = -1073741823;
    }
  }
  else
  {
LABEL_31:
    v8 = -1073741811;
  }
  KeReleaseMutex(&ndisPnPMutex, 0);
  return v8;
}
