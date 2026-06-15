/*
 * XREFs of ?SetEventHandle@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAX@Z @ 0x140085110
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140081D00 (--_EHandleSendReceiveClient@@UEAAPEAXI@Z.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x140090FF8 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 *     ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x140091030 (-Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z.c)
 *     ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x14009108C (-SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::SetEventHandle(
        __int64 a1,
        __int64 a2)
{
  int v2; // esi
  int v5; // ebx
  HandleSendReceiveClient *v6; // r14
  __int64 v7; // rdx
  int v8; // eax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 464) )
    goto LABEL_2;
  if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v5 = -2147024809;
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(a1 + 192) & 0x40000) == 0 || *(_QWORD *)(a1 + 96) == -4LL )
  {
LABEL_2:
    v5 = -2147418113;
  }
  else
  {
    v6 = (HandleSendReceiveClient *)operator new(0x10uLL);
    *((_QWORD *)v6 + 1) = 0LL;
    *(_QWORD *)v6 = &HandleSendReceiveClient::`vftable';
    v5 = HandleSendReceiveClient::Initialize(v6, (unsigned __int16 *)(*(_QWORD *)(a1 + 96) + 4LL));
    if ( v5 >= 0 )
    {
      v8 = HandleSendReceiveClient::SendHandle(v6, v7, a2);
      v5 = v8;
      if ( v8 == -2147023537 )
      {
        v5 = -2004287484;
      }
      else if ( v8 >= 0 )
      {
        *(_DWORD *)(a1 + 464) = 1;
      }
      v2 = HandleSendReceiveClient::CloseConnection(v6);
    }
    if ( v5 == -2147023537 )
    {
      v5 = -2004287484;
    }
    else if ( v5 >= 0 && v2 < 0 )
    {
      v5 = v2;
      AudCPTraceLoggingErrorHelper(
        "CCrossProcessBaseClientEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>"
        "::SetEventHandle");
    }
    if ( v6 )
      HandleSendReceiveClient::`vector deleting destructor'(v6, 1);
  }
LABEL_20:
  memset_0((void *)(*(_QWORD *)(a1 + 96) + 4LL), 0, 0x80uLL);
  return (unsigned int)v5;
}
