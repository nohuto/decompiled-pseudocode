/*
 * XREFs of McTemplateU0q_EtwEventWriteTransfer @ 0x1400495FC
 * Callers:
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140048F00 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400210E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0q_EtwEventWriteTransfer(int a1, __int64 a2, int a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  int v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = a3;
  v4[2] = &v7;
  v6 = 0;
  v5 = 4;
  return McGenEventWrite_EtwEventWriteTransfer(a1, (unsigned int)"\r", a3, 2, (__int64)v4);
}
