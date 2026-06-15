/*
 * XREFs of ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x14002FE8C
 * Callers:
 *     ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140050DD0 (-GetInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 *     ?GetOutputDataPointer@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140051520 (-GetOutputDataPointer@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileContro.c)
 *     ?GetOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x1400529D0 (-GetOutputDataPointer@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileContro.c)
 *     ?GetInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140085ED0 (-GetInputDataPointer@-$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlD.c)
 *     ?GetOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140086D00 (-GetOutputDataPointer@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileContro.c)
 *     ?GetInputDataPointer@?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140087710 (-GetInputDataPointer@-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlD.c)
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCrossProcessEndpointTraceLogger::Glitch(__int64 a1, unsigned int a2, const unsigned __int16 *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  int v9; // [rsp+30h] [rbp-49h] BYREF
  int v10; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v11[3]; // [rsp+3Ch] [rbp-3Dh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+78h] [rbp-1h]
  int v16; // [rsp+7Ch] [rbp+3h]
  __int64 v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  _DWORD *v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  const unsigned __int16 *v21; // [rsp+A0h] [rbp+27h]
  int v22; // [rsp+A8h] [rbp+2Fh]
  int v23; // [rsp+ACh] [rbp+33h]
  int *v24; // [rsp+B0h] [rbp+37h]
  __int64 v25; // [rsp+B8h] [rbp+3Fh]

  v9 = 1;
  if ( (unsigned int)dword_1400C3478 > 5 && (byte_1400C3488 & 2) != 0 && (qword_1400C3490 & 2) == qword_1400C3490 )
  {
    v11[0] = a2;
    v10 = 1;
    v5 = a1 + 8;
    v24 = &v10;
    v25 = 4LL;
    if ( a3 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( *((_BYTE *)a3 + v6) );
      v7 = v6 + 1;
    }
    else
    {
      a3 = &word_1400A8088;
      v7 = 1;
    }
    v22 = v7;
    v19 = v11;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1400C3480;
    v17 = v5;
    v21 = a3;
    v23 = 0;
    v20 = 4LL;
    v18 = 16LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 2LL;
    UserData.Size = *(unsigned __int16 *)off_1400C3480;
    v14 = &unk_1400B0E07;
    v16 = 1;
    UserData.Reserved = 2;
    v15 = 68;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  (**(void (__fastcall ***)(__int64, _QWORD, int *))(a1 + 104))(a1 + 104, 0LL, &v9);
  return (**(__int64 (__fastcall ***)(__int64, _QWORD, int *))(a1 + 104))(a1 + 104, a2, &v9);
}
