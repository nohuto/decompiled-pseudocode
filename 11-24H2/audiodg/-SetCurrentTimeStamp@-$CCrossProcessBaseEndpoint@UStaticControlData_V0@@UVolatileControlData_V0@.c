/*
 * XREFs of ?SetCurrentTimeStamp@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z @ 0x140052270
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqqxxxx_EventWriteTransfer @ 0x14000F3BC (McTemplateU0pqqxxxx_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::SetCurrentTimeStamp(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  int v6; // r11d
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 result; // rax
  char v17; // r9

  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 160LL);
  v7 = 32LL;
  if ( !v6 )
    v7 = 72LL;
  v8 = *a2;
  v9 = 56LL;
  *(_QWORD *)(v7 + *(_QWORD *)(a1 + 88)) = v8;
  v10 = *(_QWORD *)(a1 + 88);
  if ( !v6 )
    v9 = 96LL;
  *(_QWORD *)(v9 + v10) = a2[3];
  v11 = 64LL;
  if ( !v6 )
    v11 = 104LL;
  *(_DWORD *)(v11 + *(_QWORD *)(a1 + 88)) = *((_DWORD *)a2 + 8);
  v12 = 40LL;
  if ( !v6 )
    v12 = 80LL;
  *(_QWORD *)(v12 + *(_QWORD *)(a1 + 88)) = a2[1];
  v13 = 48LL;
  if ( !v6 )
    v13 = 88LL;
  *(_QWORD *)(v13 + *(_QWORD *)(a1 + 88)) = a2[2];
  v14 = 68LL;
  if ( !v6 )
    v14 = 108LL;
  *(_DWORD *)(v14 + *(_QWORD *)(a1 + 88)) = *((_DWORD *)a2 + 9);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 88) + 160LL), v6 == 0);
  v15 = *(_QWORD *)(a1 + 88);
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v15 + 164), 0, 0);
  v17 = result;
  if ( (result & 2) == 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 112LL) = *a2;
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 128LL) = a2[2];
    v14 = *(_QWORD *)(a1 + 88);
    v15 = a2[3];
    *(_QWORD *)(v14 + 136) = v15;
    _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 88) + 152LL), a3);
    result = *(_QWORD *)(a1 + 88);
    _InterlockedOr((volatile signed __int32 *)(result + 164), 6u);
  }
  if ( (byte_1400C4541 & 4) != 0 )
    return McTemplateU0pqqxxxx_EventWriteTransfer(v15, v14, a1, *((_DWORD *)a2 + 9), v17, a2[2], a2[3], *a2, a2[1]);
  return result;
}
