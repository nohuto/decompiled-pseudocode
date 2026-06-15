/*
 * XREFs of McTemplateU0pqq_EtwEventWriteTransfer @ 0x14001FCE0
 * Callers:
 *     ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x1400209C0 (-Yield@CAudioPump@@AEAA-AW4TEventType@1@PEA_K@Z.c)
 *     ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJPEBG@Z @ 0x140054DB4 (-RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJPEBG@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400210E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pqq_EtwEventWriteTransfer(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+A0h] [rbp+18h] BYREF
  int v8; // [rsp+A8h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  v6[3] = 8LL;
  v6[2] = &v7;
  v6[5] = 4LL;
  v6[4] = &v8;
  v6[6] = &a5;
  v6[7] = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(a1, a2, a3, 4, (__int64)v6);
}
