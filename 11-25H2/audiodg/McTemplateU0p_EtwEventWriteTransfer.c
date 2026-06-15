/*
 * XREFs of McTemplateU0p_EtwEventWriteTransfer @ 0x1400200D0
 * Callers:
 *     ?UpdatePresentationTimestamp@CAudioPump@@AEAAXXZ @ 0x14001EBD0 (-UpdatePresentationTimestamp@CAudioPump@@AEAAXXZ.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001F050 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140020130 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400213E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0p_EtwEventWriteTransfer(int a1, int a2, __int64 a3)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+80h] [rbp+18h] BYREF

  v5 = a3;
  v4[3] = 8LL;
  v4[2] = &v5;
  return McGenEventWrite_EtwEventWriteTransfer(a1, a2, a3, 2, (__int64)v4);
}
