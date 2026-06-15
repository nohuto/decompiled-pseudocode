/*
 * XREFs of McTemplateU0pqit_EtwEventWriteTransfer @ 0x14001FC40
 * Callers:
 *     ?SetDeadlineForNextProcessingPass@CAudioPump@@AEAAXXZ @ 0x14001F380 (-SetDeadlineForNextProcessingPass@CAudioPump@@AEAAXXZ.c)
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140021494 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400210E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pqit_EtwEventWriteTransfer(int a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  _QWORD v7[10]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+18h] BYREF
  int v9; // [rsp+B8h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  v7[3] = 8LL;
  v7[2] = &v8;
  v7[5] = 4LL;
  v7[4] = &v9;
  v7[6] = &a5;
  v7[8] = &a6;
  v7[7] = 8LL;
  v7[9] = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(a1, a2, a3, 5, (__int64)v7);
}
