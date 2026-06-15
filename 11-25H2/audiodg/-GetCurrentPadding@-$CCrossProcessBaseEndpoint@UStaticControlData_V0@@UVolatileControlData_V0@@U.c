/*
 * XREFs of ?GetCurrentPadding@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140083D30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA_N_J@Z @ 0x14008595C (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UCont.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x140085FC8 (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140086084 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::GetCurrentPadding(
        __int64 a1,
        _QWORD *a2)
{
  signed __int64 v4; // rsi
  __int64 v5; // rbp
  signed __int64 v6; // rbx
  __int64 result; // rax
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // edi
  int v11; // r8d
  __int64 v12; // rax
  unsigned int v13; // edx
  double v14; // xmm1_8
  __int64 v15; // rcx

  v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 80) + 16LL), 0LL, 0LL);
  v5 = a1 - 8;
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 80) + 24LL), 0LL, 0LL);
  result = CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::IsValidOffset(
             a1 - 8,
             v4);
  if ( (_BYTE)result
    && (result = CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::IsValidOffset(
                   v5,
                   v6),
        (_BYTE)result) )
  {
    if ( v4 >= v6 )
    {
      v10 = v4 - v6;
    }
    else
    {
      if ( (byte_1400C45C1 & 4) != 0 )
        McTemplateU0pqxxxx_EventWriteTransfer(v9, v8, v5, 4, 0, v4, v6, 0);
      v10 = 0;
      ShipAssert(65537LL, 0LL);
    }
    if ( (byte_1400C45C1 & 4) != 0 )
      McTemplateU0pqxxxx_EventWriteTransfer(
        v6 / *(unsigned int *)(a1 + 96),
        v4 % *(unsigned int *)(a1 + 96),
        v5,
        3,
        0,
        v4 / *(unsigned int *)(a1 + 96),
        v6 / *(unsigned int *)(a1 + 96),
        v10 / *(_DWORD *)(a1 + 96));
    v11 = v10 / *(_DWORD *)(a1 + 96);
    v12 = *(_QWORD *)(a1 + 88);
    v13 = *(_DWORD *)(v12 + 188) % (unsigned int)*(unsigned __int16 *)(v12 + 192);
    result = *(_DWORD *)(v12 + 188) / (unsigned int)*(unsigned __int16 *)(v12 + 192);
    v14 = (double)v11 * 10000000.0 / (double)(int)result + 0.5;
    v15 = (unsigned int)(int)v14;
    *a2 = v15;
    if ( (byte_1400C45C1 & 4) != 0 )
      return McTemplateU0pqxxxxffff_EventWriteTransfer(v15, v13, 0, 100, v4, v6, (int)v14, v11, 0, 0, 0, 0);
  }
  else
  {
    *a2 = 0LL;
  }
  return result;
}
