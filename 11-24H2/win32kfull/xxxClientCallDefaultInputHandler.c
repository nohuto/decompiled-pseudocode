/*
 * XREFs of xxxClientCallDefaultInputHandler @ 0x1401C2748
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x140090074 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCallDefaultInputHandler(const struct tagMSG *a1)
{
  const struct tagMSG *v1; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+38h] [rbp-40h] BYREF
  int v4; // [rsp+40h] [rbp-38h]
  int v5; // [rsp+44h] [rbp-34h]
  __int64 v6; // [rsp+48h] [rbp-30h]
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+5Ch] [rbp-1Ch]
  int v10; // [rsp+64h] [rbp-14h]
  int v11; // [rsp+80h] [rbp+8h] BYREF
  void *Src; // [rsp+88h] [rbp+10h] BYREF
  __int64 v13; // [rsp+90h] [rbp+18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h]

  v1 = a1;
  Src = 0LL;
  v11 = 0;
  v5 = 0;
  v10 = 0;
  InputTraceLogging::Delivery::CallDefaultInputHandler(a1);
  v3 = *(_QWORD *)v1;
  v4 = *((_DWORD *)v1 + 2);
  v6 = *((_QWORD *)v1 + 2);
  v7 = *((_QWORD *)v1 + 3);
  v8 = *((_DWORD *)v1 + 8);
  v9 = *(_QWORD *)((char *)v1 + 36);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  EtwTraceBeginCallback(116LL);
  LODWORD(v1) = KeUserModeCallback(116LL, &v3, 48LL, &Src, &v11);
  EtwTraceEndCallback(116LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  if ( (int)v1 < 0 || v11 != 24 )
    return 0LL;
  v13 = 0LL;
  RtlCopyFromUser(&v13, Src, 8uLL);
  result = v13;
  v14 = v13;
  return result;
}
