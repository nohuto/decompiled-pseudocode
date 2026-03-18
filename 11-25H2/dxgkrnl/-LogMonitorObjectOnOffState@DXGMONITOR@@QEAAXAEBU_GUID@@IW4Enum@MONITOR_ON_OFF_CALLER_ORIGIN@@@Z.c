/*
 * XREFs of ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x140357B14
 * Callers:
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14026CAB0 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403566BC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403577FC (-LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIG.c)
 *     ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x14035790C (-_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@U4@U4@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@6677@Z @ 0x14003F7BC (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 */

__int64 __fastcall DXGMONITOR::LogMonitorObjectOnOffState(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char *v4; // r10
  char v6; // di
  char *v7; // r14
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // [rsp+70h] [rbp+17h] BYREF
  char v14; // [rsp+71h] [rbp+18h] BYREF
  __int16 v15; // [rsp+72h] [rbp+19h] BYREF
  int v16; // [rsp+74h] [rbp+1Bh] BYREF
  int v17; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+80h] [rbp+27h] BYREF
  __int64 v19; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+90h] [rbp+37h] BYREF
  __int64 v21; // [rsp+98h] [rbp+3Fh] BYREF
  char v22; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = (char *)(a1 + 344);
  if ( (_BYTE)a4 == 1 )
  {
    v6 = 2 - (a3 != 0);
    if ( v6 == *v4 )
      return result;
    v7 = (char *)(a1 + 344);
  }
  else
  {
    v6 = *v4;
    v7 = (char *)(a1 + 344);
  }
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + 16LL) + 412LL);
  LODWORD(v18) = v9;
  result = HIDWORD(v9);
  HIDWORD(v18) = result;
  if ( (_BYTE)a4 == 1 )
  {
    if ( (unsigned int)dword_14015B5B8 > 5 && (qword_14015B5C8 & 0x400000000010LL) != 0 )
    {
      result = qword_14015B5D0 & 0x400000000010LL;
      if ( (qword_14015B5D0 & 0x400000000010LL) == qword_14015B5D0 )
      {
        v12 = (unsigned int)dword_14015E4C8;
        v22 = *v4;
        v19 = *(_QWORD *)(a1 + 352);
        v16 = *(_DWORD *)(a1 + 180);
        ++dword_14015E4C8;
        v21 = a2;
        v13 = v6;
        v20 = MEMORY[0xFFFFF78000000014];
        v14 = 1;
        v17 = v12;
        v15 = 1;
        result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                   v12,
                   (__int64)&unk_14013D841,
                   a2,
                   a4,
                   (__int64)&v15,
                   (__int64)&v17,
                   &v21,
                   (__int64)&v18,
                   (__int64)&v16,
                   (__int64)&v14,
                   (__int64)&v20,
                   (__int64)&v19,
                   (__int64)&v13,
                   (__int64)&v22);
      }
    }
    *(_QWORD *)(a1 + 352) = v8;
    *v7 = v6;
  }
  else if ( (unsigned int)dword_14015B5B8 > 5 && (qword_14015B5C8 & 0x10) != 0 )
  {
    result = qword_14015B5D0 & 0x10;
    if ( result == qword_14015B5D0 )
    {
      v11 = (unsigned int)dword_14015E4C8;
      v22 = *v7;
      v21 = *(_QWORD *)(a1 + 352);
      v17 = *(_DWORD *)(a1 + 180);
      v19 = v18;
      ++dword_14015E4C8;
      v18 = a2;
      v14 = v6;
      v20 = MEMORY[0xFFFFF78000000014];
      v13 = a4;
      v16 = v11;
      v15 = 1;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
               v11,
               (__int64)&unk_14013D7A3,
               a2,
               a4,
               (__int64)&v15,
               (__int64)&v16,
               &v18,
               (__int64)&v19,
               (__int64)&v17,
               (__int64)&v13,
               (__int64)&v20,
               (__int64)&v21,
               (__int64)&v14,
               (__int64)&v22);
    }
  }
  return result;
}
