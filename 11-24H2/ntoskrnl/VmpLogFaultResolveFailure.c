/*
 * XREFs of VmpLogFaultResolveFailure @ 0x140AAE3B4
 * Callers:
 *     VmpAccessFaultBatchResolve @ 0x1409F0524 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall VmpLogFaultResolveFailure(__int64 a1, __int64 *a2, int a3, int a4, __int64 a5, int a6)
{
  _UNKNOWN **v6; // rax
  __int64 v7; // rbx
  unsigned int ProcessId; // eax
  __int64 v12; // r8
  int v14; // [rsp+28h] [rbp-E0h]
  int v15; // [rsp+30h] [rbp-D8h]
  unsigned int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A4h] [rbp-64h]
  int *v27; // [rsp+A8h] [rbp-60h]
  int v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B4h] [rbp-54h]
  __int64 *v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C4h] [rbp-44h]
  __int64 *v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D4h] [rbp-34h]
  int *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E4h] [rbp-24h]
  int *v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+104h] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF

  v6 = &retaddr;
  v7 = *(_QWORD *)&VmpTraceLoggingProvider;
  if ( **(_DWORD **)&VmpTraceLoggingProvider > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 64LL);
    if ( (_BYTE)v6 )
    {
      ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v44 = 0;
      v16 = ProcessId;
      v24 = &v16;
      v17 = a6;
      v27 = &v17;
      v20 = *a2;
      v30 = &v20;
      v21 = a2[1];
      v33 = &v21;
      v36 = &v18;
      v39 = &v19;
      v22 = a5;
      v42 = &v22;
      v25 = 4;
      v28 = 4;
      v31 = 8;
      v34 = 8;
      v37 = 4;
      v40 = 4;
      v43 = 8;
      v18 = a3;
      v19 = a4;
      LOBYTE(v6) = tlgWriteEx_EtwWriteEx(v7, (unsigned __int8 *)&dword_1400526FC, v12, 0, v14, v15, 9u, &v23);
    }
  }
  return (char)v6;
}
