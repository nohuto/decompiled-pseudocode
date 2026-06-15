/*
 * XREFs of ?AddTimestampMessage@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140086E40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxxxx_EventWriteTransfer @ 0x14000F228 (McTemplateU0pqxxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqx_EventWriteTransfer @ 0x14000F2E0 (McTemplateU0pqqqx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400528A8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsValidQueueIndex@@YA_NII@Z @ 0x140053264 (-IsValidQueueIndex@@YA_NII@Z.c)
 *     ?CanCoalesceTimestampMessages@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@IEAAIIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x1400544AC (-CanCoalesceTimestampMessages@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V0@@UVolati.c)
 *     ?AEWMILOG_DROP@@YAXKPEAXE_K1@Z @ 0x1400980A4 (-AEWMILOG_DROP@@YAXKPEAXE_K1@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::AddTimestampMessage(
        unsigned int **a1,
        int a2,
        int a3,
        int a4,
        float *a5,
        unsigned int a6,
        int a7)
{
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  unsigned __int64 v10; // r14
  unsigned int v11; // r15d
  unsigned __int8 v12; // r8
  __int32 v13; // r12d
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // esi
  int CanCoalesceTimestampMessages; // eax
  __int64 v18; // r9
  int v19; // esi
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  double v23; // xmm1_8
  __int64 v24; // rcx
  double v25; // xmm0_8
  __int64 v26; // r8
  __int64 v27; // rdx
  double v28; // xmm0_8
  __int64 *v29; // r15
  unsigned int *v30; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int *v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int128 v39; // xmm1
  __int64 *v40; // r14
  bool v41; // zf
  __int32 v42; // edx
  __int64 v43; // rdx
  unsigned int v45; // [rsp+50h] [rbp-68h]
  char v46; // [rsp+54h] [rbp-64h]
  unsigned int v47; // [rsp+58h] [rbp-60h]
  char v48; // [rsp+60h] [rbp-58h]
  unsigned int v49; // [rsp+C0h] [rbp+8h]

  v8 = 0;
  v46 = 0;
  v9 = a1[11][1];
  v10 = *a1[11];
  v11 = a1[12][33];
  v49 = v11;
  if ( !IsValidQueueIndex(v9, v11) || !IsValidQueueIndex(v10, v11) )
    goto LABEL_41;
  v13 = 0;
  v14 = a1[12][33];
  if ( v9 + 1 != v14 )
    v13 = v9 + 1;
  if ( v13 == (_DWORD)v10 )
  {
    AEWMILOG_DROP(v9 + 1, a1, v12, v9, v10);
    v8 = -2005139385;
LABEL_42:
    AudCPTraceLoggingErrorHelper(
      "CCrossProcessServerOutputEndpoint<struct StaticControlData_V0,struct VolatileControlData_V0,struct ControlData_V0>"
      "::AddTimestampMessage");
    return v8;
  }
  if ( a7 != 1 )
  {
    v19 = a7 != 1 ? 4 : 0;
    if ( v14 > 5 )
      goto LABEL_23;
LABEL_22:
    v19 |= 8u;
    goto LABEL_23;
  }
  if ( v14 <= 5 )
  {
    v19 = 0;
    goto LABEL_22;
  }
  if ( (unsigned int)v10 > v9 )
    v15 = v9 + v14 - v10;
  else
    v15 = v9 - v10;
  if ( v15 < 5 )
  {
    v19 = 2;
LABEL_23:
    v18 = 0LL;
    goto LABEL_24;
  }
  v16 = v9 - 1;
  if ( !v9 )
    v16 = v14 - 1;
  CanCoalesceTimestampMessages = CCrossProcessServerOutputEndpoint<StaticControlData_V0,VolatileControlData_V0,ControlData_V0>::CanCoalesceTimestampMessages(
                                   (__int64)a1,
                                   v16,
                                   a2,
                                   a3,
                                   (__int64)a5,
                                   a6);
  v46 = CanCoalesceTimestampMessages;
  v18 = 0LL;
  if ( CanCoalesceTimestampMessages )
    v16 = v9;
  else
    v13 = v9;
  v9 = v16;
  LOBYTE(v18) = CanCoalesceTimestampMessages == 0;
  v19 = CanCoalesceTimestampMessages != 0;
LABEL_24:
  v20 = *(_QWORD *)a5;
  v21 = *((_QWORD *)a5 + 1);
  v22 = *((_QWORD *)a5 + 3);
  v23 = a5[8];
  if ( *(_QWORD *)a5 < v21 )
  {
    v27 = v21 - v20;
    if ( v27 < 0 )
      v28 = (double)(int)(v27 & 1 | ((unsigned __int64)v27 >> 1))
          + (double)(int)(v27 & 1 | ((unsigned __int64)v27 >> 1));
    else
      v28 = (double)(int)v27;
    v26 = (unsigned int)(int)(v28 * 10000000.0 / v23 + 0.5) + v22;
  }
  else
  {
    v24 = v20 - v21;
    if ( v24 < 0 )
      v25 = (double)(int)(v24 & 1 | ((unsigned __int64)v24 >> 1))
          + (double)(int)(v24 & 1 | ((unsigned __int64)v24 >> 1));
    else
      v25 = (double)(int)v24;
    v26 = v22 - (unsigned int)(int)(v25 * 10000000.0 / v23 + 0.5);
  }
  v29 = (__int64 *)(a1 + 17);
  v30 = a1[17];
  v31 = (unsigned __int64)v9 << 6;
  v48 = v26;
  v32 = v9;
  if ( (_DWORD)v18 )
  {
    *(unsigned int *)((char *)v30 + v31 + 56) += a4;
    v33 = *v29;
    *(_QWORD *)(*v29 + v31 + 32) += *((_QWORD *)a5 + 2);
  }
  else
  {
    *(unsigned int *)((char *)v30 + v31) = a2;
    *(_DWORD *)(*v29 + v31 + 4) = a3;
    *(_DWORD *)(*v29 + v31 + 56) = a4;
    v33 = a6;
    *(_DWORD *)(v31 + *v29 + 8) = a6;
    v34 = *v29;
    *(_OWORD *)(v31 + v34 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(v31 + v34 + 32) = *((_OWORD *)a5 + 1);
    *(_QWORD *)(v31 + v34 + 48) = *((_QWORD *)a5 + 4);
    *(_QWORD *)(v31 + *v29 + 40) = v26;
  }
  if ( _InterlockedExchange((volatile __int32 *)a1 + 44, 0) == 1 )
  {
    v35 = *v29;
    v29 = (__int64 *)(a1 + 17);
    *(_DWORD *)(v31 + v35 + 52) = 1;
  }
  if ( a1[12][38] == -1 )
  {
    v40 = v29;
  }
  else
  {
    v47 = a1[11][3];
    v45 = a1[11][2];
    if ( !IsValidQueueIndex(v47, v49) || !IsValidQueueIndex(v45, v49) )
    {
LABEL_41:
      v8 = -2005139387;
      goto LABEL_42;
    }
    LODWORD(v26) = 0;
    v36 = a1[19];
    if ( v47 + 1 != a1[12][33] )
      LODWORD(v26) = v47 + 1;
    v37 = *v29;
    v38 = (unsigned __int64)v47 << 6;
    *(_OWORD *)((char *)v36 + v38) = *(_OWORD *)(*v29 + ((unsigned __int64)v9 << 6));
    *(_OWORD *)((char *)v36 + v38 + 16) = *(_OWORD *)(v37 + v31 + 16);
    *(_OWORD *)((char *)v36 + v38 + 32) = *(_OWORD *)(v37 + v31 + 32);
    v39 = *(_OWORD *)(v37 + v31 + 48);
    v40 = v29;
    *(_OWORD *)((char *)v36 + v38 + 48) = v39;
    v33 = (__int64)a1[11];
    _InterlockedExchange((volatile __int32 *)(v33 + 12), v26);
    v41 = (_DWORD)v26 == v45;
    LOBYTE(v26) = v48;
    if ( v41 )
    {
      v33 = v45 + 1;
      v42 = 0;
      v40 = (__int64 *)(a1 + 17);
      if ( (_DWORD)v33 != a1[12][33] )
        v42 = v45 + 1;
      _InterlockedExchange((volatile __int32 *)a1[11] + 2, v42);
    }
    v32 = v9;
  }
  _InterlockedExchange((volatile __int32 *)a1[11] + 1, v13);
  if ( (byte_1400C45C1 & 4) != 0 )
  {
    v43 = *(int *)((v32 << 6) + *v29 + 52);
    McTemplateU0pqxxxxx_EventWriteTransfer(
      v33,
      v43,
      (__int64)a1,
      v18,
      v43,
      *((_QWORD *)a5 + 2),
      v26,
      *(_QWORD *)a5,
      *((_QWORD *)a5 + 1));
    if ( (byte_1400C45C1 & 4) != 0 )
      McTemplateU0pqqqx_EventWriteTransfer(
        *v40,
        *(_QWORD *)(((unsigned __int64)v9 << 6) + *v40 + 40),
        (__int64)a1,
        v19,
        v9,
        v46,
        *(_QWORD *)(((unsigned __int64)v9 << 6) + *v40 + 40));
  }
  return v8;
}
