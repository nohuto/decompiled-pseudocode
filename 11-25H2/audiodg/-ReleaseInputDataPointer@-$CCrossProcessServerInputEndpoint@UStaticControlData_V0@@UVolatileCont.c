/*
 * XREFs of ?ReleaseInputDataPointer@?$CCrossProcessServerInputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAXI_K@Z @ 0x140086AA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4CC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?IsValidOffset@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAA_N_J@Z @ 0x14008595C (-IsValidOffset@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UCont.c)
 */

char __fastcall CCrossProcessServerInputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::ReleaseInputDataPointer(
        __int64 a1,
        __int64 a2)
{
  int v2; // edi
  __int64 v3; // rsi
  signed __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbp
  signed __int64 v8; // rax
  signed __int64 v9; // rbp
  signed __int64 v10; // rtt

  v2 = a2;
  v3 = a1 - 480;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(a1, a2, a1 - 480, 7, a2, 0, 0);
  v5 = *(_QWORD *)(a1 - 392);
  v6 = *(unsigned int *)(v5 + 164);
  if ( v2 && ((v6 & 1) != 0 || (*(_BYTE *)(a1 - 288) & 1) != 0) )
  {
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 24LL), 0LL, 0LL);
    LOBYTE(v5) = CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::IsValidOffset(
                   v3,
                   v7);
    if ( (_BYTE)v5 )
    {
      v6 = *(unsigned int *)(a1 + 16);
      a2 = (unsigned int)(*(_DWORD *)(a1 - 376) * v2 - *(_DWORD *)(a1 + 80));
      if ( (unsigned int)v6 <= 1 )
      {
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 - 392) + 16LL), 0LL, 0LL);
        v6 = (unsigned int)a2;
        a2 = *(_QWORD *)(a1 - 392);
        v9 = v6 + v7;
        if ( v9 > v8 )
          v9 = v8;
        v10 = *(_QWORD *)(a2 + 24);
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), v9, v10);
        if ( v10 != v5 )
        {
          do
          {
            v6 = v5;
            v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 24), v9, v5);
          }
          while ( v5 != v6 );
        }
      }
    }
  }
  if ( (byte_1400C45C1 & 4) != 0 )
    LOBYTE(v5) = McTemplateU0pqxxx_EventWriteTransfer(v6, a2, v3, 8, v2, *(_DWORD *)(a1 + 16), 0);
  *(_DWORD *)(a1 + 16) = 3;
  return v5;
}
