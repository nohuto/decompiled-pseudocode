/*
 * XREFs of ?SetCurrentTimeStamp@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z @ 0x140052070
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x14000FDE8 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

int __fastcall CCrossProcessBaseEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::SetCurrentTimeStamp(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // r9d
  int v17; // [rsp+30h] [rbp-79h] BYREF
  int v18; // [rsp+38h] [rbp-71h] BYREF
  __int64 v19; // [rsp+40h] [rbp-69h] BYREF
  __int64 v20; // [rsp+48h] [rbp-61h] BYREF
  __int64 v21; // [rsp+50h] [rbp-59h] BYREF
  __int64 v22; // [rsp+58h] [rbp-51h] BYREF
  __int64 v23; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+70h] [rbp-39h] BYREF
  __int64 *v25; // [rsp+80h] [rbp-29h]
  __int64 v26; // [rsp+88h] [rbp-21h]
  int *v27; // [rsp+90h] [rbp-19h]
  __int64 v28; // [rsp+98h] [rbp-11h]
  int *v29; // [rsp+A0h] [rbp-9h]
  __int64 v30; // [rsp+A8h] [rbp-1h]
  __int64 *v31; // [rsp+B0h] [rbp+7h]
  __int64 v32; // [rsp+B8h] [rbp+Fh]
  __int64 *v33; // [rsp+C0h] [rbp+17h]
  __int64 v34; // [rsp+C8h] [rbp+1Fh]
  __int64 *v35; // [rsp+D0h] [rbp+27h]
  __int64 v36; // [rsp+D8h] [rbp+2Fh]
  __int64 *v37; // [rsp+E0h] [rbp+37h]
  __int64 v38; // [rsp+E8h] [rbp+3Fh]

  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 160LL) == 0;
  v6 = *(_QWORD *)(a1 + 88);
  v7 = 32LL;
  if ( v5 )
    v7 = 72LL;
  v8 = *a2;
  v9 = 56LL;
  *(_QWORD *)(v7 + v6) = v8;
  if ( v5 )
    v9 = 96LL;
  *(_QWORD *)(v9 + *(_QWORD *)(a1 + 88)) = a2[3];
  v10 = 64LL;
  if ( v5 )
    v10 = 104LL;
  *(_DWORD *)(v10 + *(_QWORD *)(a1 + 88)) = *((_DWORD *)a2 + 8);
  v11 = 40LL;
  if ( v5 )
    v11 = 80LL;
  *(_QWORD *)(v11 + *(_QWORD *)(a1 + 88)) = a2[1];
  v12 = 48LL;
  if ( v5 )
    v12 = 88LL;
  *(_QWORD *)(v12 + *(_QWORD *)(a1 + 88)) = a2[2];
  v13 = 68LL;
  if ( v5 )
    v13 = 108LL;
  *(_DWORD *)(v13 + *(_QWORD *)(a1 + 88)) = *((_DWORD *)a2 + 9);
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 88) + 160LL), v5);
  LODWORD(v14) = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 164LL), 0, 0);
  v15 = v14;
  if ( (v14 & 2) == 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 112LL) = *a2;
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 128LL) = a2[2];
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 136LL) = a2[3];
    a3 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 88) + 152LL), a3);
    v14 = *(_QWORD *)(a1 + 88);
    _InterlockedOr((volatile signed __int32 *)(v14 + 164), 6u);
  }
  if ( (byte_1400C4541 & 4) != 0 )
  {
    v23 = a2[1];
    v22 = *a2;
    v21 = a2[3];
    v20 = a2[2];
    v17 = *((_DWORD *)a2 + 9);
    v25 = &v19;
    v27 = &v17;
    v29 = &v18;
    v31 = &v20;
    v33 = &v21;
    v35 = &v22;
    v37 = &v23;
    v18 = v15;
    v19 = a1;
    v26 = 8LL;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 8LL;
    v34 = 8LL;
    v36 = 8LL;
    v38 = 8LL;
    LODWORD(v14) = McGenEventWrite_EventWriteTransfer(4LL, &AudioCore_CrossProcess_SetCurrentTimeStamp, a3, 8u, &v24);
  }
  return v14;
}
