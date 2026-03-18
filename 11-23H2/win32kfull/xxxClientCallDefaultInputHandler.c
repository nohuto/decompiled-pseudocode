/*
 * XREFs of xxxClientCallDefaultInputHandler @ 0x1C0210AD8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C02045EC (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z.c)
 */

__int64 __fastcall xxxClientCallDefaultInputHandler(const struct tagMSG *a1)
{
  const struct tagMSG *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  int v10; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+44h] [rbp-34h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+5Ch] [rbp-1Ch]
  int v16; // [rsp+64h] [rbp-14h]
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v1 = a1;
  v19 = 0LL;
  v18 = 0;
  v11 = 0;
  v16 = 0;
  InputTraceLogging::Delivery::CallDefaultInputHandler(a1);
  v9 = *(_QWORD *)v1;
  v10 = *((_DWORD *)v1 + 2);
  v12 = *((_QWORD *)v1 + 2);
  v13 = *((_QWORD *)v1 + 3);
  v14 = *((_DWORD *)v1 + 8);
  v15 = *(_QWORD *)((char *)v1 + 36);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17, v2, v3, v4);
  EtwTraceBeginCallback(116LL);
  LODWORD(v1) = KeUserModeCallback(116LL, &v9, 48LL, &v19, &v18);
  EtwTraceEndCallback(116LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17, v5, v6);
  if ( (int)v1 < 0 || v18 != 24 )
    return 0LL;
  v7 = (__int64 *)v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  result = *v7;
  v17 = *v7;
  return result;
}
