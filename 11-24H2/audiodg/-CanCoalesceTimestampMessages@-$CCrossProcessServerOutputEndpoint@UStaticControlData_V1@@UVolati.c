/*
 * XREFs of ?CanCoalesceTimestampMessages@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@IEAAIIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x1400528E8
 * Callers:
 *     ?AddTimestampMessage@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x1400523D0 (-AddTimestampMessage@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::CanCoalesceTimestampMessages(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // r11
  int v7; // eax
  unsigned __int64 v8; // r10
  int v10; // ecx
  int v11; // edx
  __int64 v12; // rdi
  int v13; // ecx
  unsigned int v14; // r8d

  v6 = *(_QWORD *)(a1 + 136);
  v7 = 0;
  v8 = (unsigned __int64)a2 << 6;
  if ( a3 != 1 || *(_DWORD *)(v8 + v6) != 1 )
    v7 = 1;
  if ( *(_DWORD *)(a1 + 176) || a6 != 1 || *(_DWORD *)(a5 + 36) != 2 )
    v7 |= 2u;
  v10 = v7 | 4;
  if ( *(_DWORD *)(v8 + v6 + 8) == 1 )
    v10 = v7;
  v11 = v10 | 8;
  if ( (*(_DWORD *)(v8 + v6 + 52) & 0xFFFFFFFC) == 0 )
    v11 = v10;
  if ( *(float *)(v8 + v6 + 48) != *(float *)(a5 + 32) )
    v11 |= 0x10u;
  v12 = *(unsigned int *)(v8 + v6 + 56);
  v13 = v11 | 0x20;
  if ( (unsigned int)v12 < *(_DWORD *)(a1 + 112) )
    v13 = v11;
  v14 = v13 | 0x40;
  if ( *(_DWORD *)(v8 + v6 + 4) + *(_DWORD *)(a1 + 104) * (_DWORD)v12 == a4 )
    v14 = v13;
  if ( v12 + *(_QWORD *)(v8 + v6 + 16) != *(_QWORD *)a5 || v12 + *(_QWORD *)(v8 + v6 + 24) != *(_QWORD *)(a5 + 8) )
    v14 |= 0x80u;
  return v14;
}
