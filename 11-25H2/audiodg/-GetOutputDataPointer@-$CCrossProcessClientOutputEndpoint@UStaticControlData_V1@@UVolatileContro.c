/*
 * XREFs of ?GetOutputDataPointer@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140051550
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4CC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x14003018C (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x14004B470 (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAA_N_J@Z @ 0x140051CC8 (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UCont.c)
 *     McTemplateU0pxxq_EventWriteTransfer @ 0x140088CB8 (McTemplateU0pxxq_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::GetOutputDataPointer(
        __int64 a1,
        __int64 a2)
{
  int v2; // r12d
  __int64 v4; // rcx
  unsigned int v5; // esi
  signed __int64 v6; // rax
  __int64 v7; // rcx
  signed __int64 v8; // rbp
  signed __int64 v9; // rax
  signed __int64 v10; // r14
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // edi
  __int64 v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // r10d
  unsigned int v18; // r8d
  _DWORD *v19; // rax
  __int64 v20; // rdi
  _DWORD *v22; // [rsp+70h] [rbp+8h]

  v2 = a2;
  *(_DWORD *)(a1 + 20) = a2;
  v22 = (_DWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 - 384);
  v5 = 0;
  *v22 = 2;
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), 0LL, 0LL);
  v7 = *(_QWORD *)(a1 - 384);
  v8 = v6;
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), 0LL, 0LL);
  v10 = v9;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v7, a2, a1 - 472, 17, a2, v8, v9);
  if ( !(unsigned __int8)CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::IsValidOffset(
                           a1 - 472,
                           v8)
    || !(unsigned __int8)CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::IsValidOffset(
                           a1 - 472,
                           v10)
    || !v2 )
  {
    goto LABEL_15;
  }
  v13 = *(_DWORD *)(a1 - 368) * v2;
  if ( v8 >= v10 )
  {
    v15 = *(_DWORD *)(a1 - 304);
    v14 = a1 - 256;
    v5 = v10 + v15 - v8;
  }
  else
  {
    if ( (byte_1400C45C1 & 1) != 0 )
      McTemplateU0pxxq_EventWriteTransfer(v12, v11, a1 - 472, v8, v10, *(_BYTE *)(a1 - 368) * v2);
    v14 = a1 - 256;
    CCrossProcessEndpointTraceLogger::Glitch(
      a1 - 256,
      3u,
      (const unsigned __int16 *)"CpGlitchEvent::CLIENT_OUTPUT_SERVER_OVERREAD");
    v5 = *(_DWORD *)(a1 - 304);
    v15 = v5;
  }
  v16 = *(_QWORD *)(a1 - 376);
  v17 = *(_DWORD *)(v16 + 160);
  v18 = v17 + v8 % v15;
  if ( v5 < v13 )
  {
    if ( (byte_1400C45C1 & 1) != 0 )
      McTemplateU0pqqqq_EventWriteTransfer(
        v16,
        &EVT_GLITCH_CP_CLIENT_OUTPUT_READ_POINTER_OVERWRITE,
        a1 - 472,
        v18,
        v17 + v10 % v15,
        v13,
        *(_DWORD *)(v16 + 164));
    CCrossProcessEndpointTraceLogger::Glitch(
      v14,
      4u,
      (const unsigned __int16 *)"CpGlitchEvent::CLIENT_OUTPUT_READ_POINTER_OVERWRITE");
LABEL_15:
    v19 = v22;
LABEL_16:
    v20 = *(_QWORD *)(a1 - 344);
    goto LABEL_17;
  }
  v19 = v22;
  if ( v13 + v18 > *(_DWORD *)(v16 + 164) )
  {
    *v22 = 1;
    goto LABEL_16;
  }
  *v22 = 0;
  v20 = *(_QWORD *)(a1 - 392) + v18;
LABEL_17:
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      v5 / *(_DWORD *)(a1 - 368),
      v5 % *(_DWORD *)(a1 - 368),
      a1 - 472,
      18,
      v2,
      v5 / *(_DWORD *)(a1 - 368),
      *v19);
  return v20;
}
