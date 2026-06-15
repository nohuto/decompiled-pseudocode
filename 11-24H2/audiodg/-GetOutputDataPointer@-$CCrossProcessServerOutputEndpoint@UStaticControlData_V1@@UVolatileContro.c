/*
 * XREFs of ?GetOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x1400529D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4FC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x14000FDE8 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x14002FE8C (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqqq_EventWriteTransfer @ 0x14004D3EC (McTemplateU0pqqq_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140052878 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140085574 (McTemplateU0p_EventWriteTransfer.c)
 *     McTemplateU0pxqxq_EventWriteTransfer @ 0x14008749C (McTemplateU0pxqxq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetOutputDataPointer(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  signed __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // xmm0_8
  unsigned int v17; // r13d
  int v18; // edx
  unsigned int v19; // r8d
  int v20; // eax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // r8
  int v25; // r10d
  __int64 v26; // rcx
  int v27; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-71h]
  __int64 v29; // [rsp+50h] [rbp-69h] BYREF
  __int64 v30; // [rsp+58h] [rbp-61h] BYREF
  __int64 v31; // [rsp+60h] [rbp-59h] BYREF
  __int64 v32; // [rsp+68h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+70h] [rbp-49h] BYREF
  __int64 *v34; // [rsp+80h] [rbp-39h]
  __int64 v35; // [rsp+88h] [rbp-31h]
  int *v36; // [rsp+90h] [rbp-29h]
  __int64 v37; // [rsp+98h] [rbp-21h]
  __int64 *v38; // [rsp+A0h] [rbp-19h]
  __int64 v39; // [rsp+A8h] [rbp-11h]
  __int64 *v40; // [rsp+B0h] [rbp-9h]
  __int64 v41; // [rsp+B8h] [rbp-1h]
  __int64 *v42; // [rsp+C0h] [rbp+7h]
  __int64 v43; // [rsp+C8h] [rbp+Fh]

  v3 = a2;
  v4 = a1 - 480;
  v5 = 0LL;
  *(_DWORD *)(a1 + 20) = v3;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 16) = 2;
  v28 = v3;
  if ( (byte_1400C4541 & 4) != 0 )
  {
    v31 = *(unsigned int *)(a1 - 368);
    v34 = &v29;
    v36 = &v27;
    v38 = &v30;
    v40 = &v31;
    v42 = &v32;
    v32 = 0LL;
    v30 = v3;
    v27 = 9;
    v29 = a1 - 480;
    v35 = 8LL;
    v37 = 4LL;
    v39 = 8LL;
    v41 = 8LL;
    v43 = 8LL;
    McGenEventWrite_EventWriteTransfer(a1, &AudioCore_AEData, a3, 6u, &v33);
    v5 = 0LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 - 392) + 164LL) & 1) == 0 || !(_DWORD)v3 )
    goto LABEL_10;
  v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 16LL), 0LL, 0LL);
  v9 = *(_QWORD *)(a1 - 392);
  v10 = v8;
  v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), 0LL, 0LL);
  v12 = v11;
  if ( v10 < 0 || v11 < 0 )
  {
    if ( (byte_1400C4541 & 4) != 0 )
      McTemplateU0p_EventWriteTransfer(v9, 0LL, v4);
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v4 + 88) + 164LL), 0xFFFFFFFE);
    AudCPTraceLoggingErrorHelper(
      "CCrossProcessBaseEndpoint<struct StaticControlData_V1,struct VolatileControlData_V0,struct ControlData_V1>::IsValidOffset");
    goto LABEL_10;
  }
  if ( v10 < v11 )
  {
LABEL_10:
    _InterlockedExchange((volatile __int32 *)(a1 - 304), 1);
    v4 = a1 - 480;
LABEL_11:
    v13 = *(_QWORD *)(a1 - 352);
    goto LABEL_12;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 480) + 80LL))(v4, a3, v10);
  v15 = *(_QWORD *)(a1 - 392);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 16);
  v16 = *(_QWORD *)(a3 + 32);
  v17 = *(_DWORD *)(a1 - 376) * v3;
  *(_QWORD *)(a1 + 128) = v16;
  v18 = *(_DWORD *)(v15 + 4) + 1;
  v19 = **(_DWORD **)(a1 - 392);
  v20 = 0;
  if ( v18 != *(_DWORD *)(*(_QWORD *)(a1 - 384) + 132LL) )
    v20 = v18;
  if ( v20 == v19 )
  {
    v21 = (unsigned __int64)(v19 + 1 < *(_DWORD *)(*(_QWORD *)(a1 - 384) + 132LL) ? v19 + 1 : 0) << 6;
    _InterlockedExchange(
      *(volatile __int32 **)(a1 - 392),
      v19 + 1 < *(_DWORD *)(*(_QWORD *)(a1 - 384) + 132LL) ? v19 + 1 : 0);
    *(_DWORD *)(v21 + *(_QWORD *)(a1 - 344) + 52) = 1;
    if ( (byte_1400C4541 & 1) != 0 )
      McTemplateU0pxqxq_EventWriteTransfer(
        v19 << 6,
        v21,
        v4,
        v10,
        *(_DWORD *)(((unsigned __int64)v19 << 6) + *(_QWORD *)(a1 - 344) + 4),
        v12,
        v17);
    CCrossProcessEndpointTraceLogger::Glitch(
      a1 - 264,
      6u,
      (const unsigned __int16 *)"CpGlitchEvent::SERVER_OUTPUT_QUEUE_FULL_PACKET_DROP");
  }
  v22 = *(unsigned int *)(a1 - 312);
  if ( (unsigned int)v22 >= (int)v10 - (int)v12 )
    v23 = v12 + v22 - v10;
  else
    v23 = v17;
  v24 = *(_QWORD *)(a1 - 384);
  v5 = v10 % v22;
  v25 = *(_DWORD *)(v24 + 160);
  v26 = v25 + (unsigned int)(v10 % v22);
  if ( v23 < v17 )
  {
    if ( (byte_1400C4541 & 1) != 0 )
      McTemplateU0pqqq_EventWriteTransfer(
        v26,
        v25 + (unsigned int)(v12 % *(unsigned int *)(a1 - 312)),
        v4,
        v26,
        v25 + v12 % *(unsigned int *)(a1 - 312),
        v17);
    if ( v12 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch(
        a1 - 264,
        7u,
        (const unsigned __int16 *)"CpGlitchEvent::SERVER_OUTPUT_READ_POINTER_OVERWRITE");
    if ( v23 )
    {
      *(_DWORD *)(a1 + 88) = v23;
      *(_DWORD *)(a1 + 16) = 1;
    }
    goto LABEL_10;
  }
  if ( (unsigned int)v26 + v17 > *(_DWORD *)(v24 + 168) )
  {
    *(_DWORD *)(a1 + 16) = 1;
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 16) = 0;
  v13 = *(_QWORD *)(a1 - 400) + (unsigned int)v26;
LABEL_12:
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v28, v5, v4, 10, v28, 0, 0);
  return v13;
}
