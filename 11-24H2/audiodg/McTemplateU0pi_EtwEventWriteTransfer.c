/*
 * XREFs of McTemplateU0pi_EtwEventWriteTransfer @ 0x14001E984
 * Callers:
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001ED50 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400210E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 McTemplateU0pi_EtwEventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  _QWORD v3[3]; // [rsp+30h] [rbp-48h] BYREF
  int v4; // [rsp+48h] [rbp-30h]
  int v5; // [rsp+4Ch] [rbp-2Ch]
  va_list v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+18h]
  va_list va1; // [rsp+98h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy((va_list)&v3[2], va);
  v5 = 0;
  v4 = 8;
  va_copy(v6, va1);
  v8 = 0;
  v7 = 8;
  return McGenEventWrite_EtwEventWriteTransfer(8, (unsigned int)&AudioCore_Pump_ProcPassSkip, v9, 3, (__int64)v3);
}
