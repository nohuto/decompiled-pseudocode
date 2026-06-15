/*
 * XREFs of McTemplateU0pq_EtwEventWriteTransfer @ 0x140020060
 * Callers:
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001F050 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140020130 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400213E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pq_EtwEventWriteTransfer(int a1, int a2, __int64 a3, int a4)
{
  _QWORD v5[6]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+90h] [rbp+18h] BYREF
  int v7; // [rsp+98h] [rbp+20h] BYREF

  v7 = a4;
  v6 = a3;
  v5[3] = 8LL;
  v5[2] = &v6;
  v5[5] = 4LL;
  v5[4] = &v7;
  return McGenEventWrite_EtwEventWriteTransfer(a1, a2, a3, 3, (__int64)v5);
}
