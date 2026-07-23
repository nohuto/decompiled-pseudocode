/*
 * XREFs of EtwpProcessPerfCtrsRundown @ 0x1408F0418
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1408EF230 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObGetProcessHandleCount @ 0x14085E360 (ObGetProcessHandleCount.c)
 */

int __fastcall EtwpProcessPerfCtrsRundown(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rdx
  _DWORD v8[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v9; // [rsp+40h] [rbp-29h]
  __int64 v10; // [rsp+48h] [rbp-21h]
  __int64 v11; // [rsp+50h] [rbp-19h]
  __int64 v12; // [rsp+58h] [rbp-11h]
  __int64 v13; // [rsp+60h] [rbp-9h]
  __int64 v14; // [rsp+68h] [rbp-1h]
  __int64 v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+78h] [rbp+Fh]
  __int64 v17; // [rsp+80h] [rbp+17h]
  __int64 v18; // [rsp+88h] [rbp+1Fh]
  __int64 v19; // [rsp+90h] [rbp+27h]
  _DWORD *v20; // [rsp+A0h] [rbp+37h] BYREF
  int v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  v8[3] = 0;
  v8[0] = *(_DWORD *)(a1 + 464);
  v8[2] = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)a1, 0LL);
  v8[1] = *(_DWORD *)(a1 + 1028);
  v14 = *(_QWORD *)(a1 + 552);
  v9 = *(_QWORD *)(a1 + 544);
  v15 = *(_QWORD *)(a1 + 1152) << 12;
  v10 = *(_QWORD *)(a1 + 1184) << 12;
  v17 = *(_QWORD *)(a1 + 520);
  v12 = *(_QWORD *)(a1 + 536);
  v18 = *(_QWORD *)(a1 + 512);
  v13 = *(_QWORD *)(a1 + 528);
  v16 = *(_QWORD *)(a1 + 984) << 12;
  v4 = *(_QWORD *)(a1 + 992);
  v22 = 0;
  v5 = *(_DWORD *)a2;
  v6 = *(_QWORD *)(a2 + 1360);
  v11 = v4 << 12;
  v19 = v16;
  v20 = v8;
  v21 = 104;
  return EtwpLogKernelEvent((__int64)&v20, v6, v5, 1u, 801, 0x501802u);
}
