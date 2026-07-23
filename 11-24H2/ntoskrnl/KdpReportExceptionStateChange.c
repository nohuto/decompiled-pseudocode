/*
 * XREFs of KdpReportExceptionStateChange @ 0x140B7C1E0
 * Callers:
 *     KdpReport @ 0x1404CE548 (KdpReport.c)
 *     KiFreezeTargetExecution @ 0x1405BF250 (KiFreezeTargetExecution.c)
 * Callees:
 *     KdpSetCommonState @ 0x1404CF704 (KdpSetCommonState.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KdpSetContextState @ 0x140B77164 (KdpSetContextState.c)
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 */

__int64 __fastcall KdpReportExceptionStateChange(__int128 *a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rcx
  __int64 result; // rax
  __int128 v17; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v19[32]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+68h] [rbp-A0h]
  __int128 v21; // [rsp+78h] [rbp-90h]
  __int128 v22; // [rsp+88h] [rbp-80h]
  __int128 v23; // [rsp+98h] [rbp-70h]
  __int128 v24; // [rsp+A8h] [rbp-60h]
  __int128 v25; // [rsp+B8h] [rbp-50h]
  __int128 v26; // [rsp+C8h] [rbp-40h]
  __int128 v27; // [rsp+D8h] [rbp-30h]
  __int128 v28; // [rsp+E8h] [rbp-20h]
  __int64 v29; // [rsp+F8h] [rbp-10h]
  BOOL v30; // [rsp+100h] [rbp-8h]

  v18 = 0LL;
  v17 = 0LL;
  memset_0(v19, 0, 0xF0uLL);
  do
  {
    KdpSetCommonState(12336, a2, (__int64)v19);
    v6 = *((_QWORD *)a1 + 18);
    v7 = a1[1];
    v20 = *a1;
    v8 = a1[2];
    v21 = v7;
    v9 = a1[3];
    v22 = v8;
    v10 = a1[4];
    v23 = v9;
    v11 = a1[5];
    v24 = v10;
    v12 = a1[6];
    v25 = v11;
    v13 = a1[7];
    v26 = v12;
    v14 = a1[8];
    v27 = v13;
    v28 = v14;
    v29 = v6;
    v30 = a3 == 0;
    KdpSetContextState((__int64)v19, a2);
    LOWORD(v17) = 240;
    *((_QWORD *)&v17 + 1) = v19;
    LOWORD(v18) = 0;
    result = KdpSendWaitContinue(v15, &v17, &v18, a2);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
