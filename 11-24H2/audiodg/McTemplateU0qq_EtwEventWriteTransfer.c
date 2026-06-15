/*
 * XREFs of McTemplateU0qq_EtwEventWriteTransfer @ 0x140066A00
 * Callers:
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAKPEAPEAX@Z @ 0x14004624C (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAKPEAPEAX@Z.c)
 *     ?ResetEngineThreadPriority@@YAJPEAPEAXK@Z @ 0x140056340 (-ResetEngineThreadPriority@@YAJPEAPEAXK@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1400210E0 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qq_EtwEventWriteTransfer(__int64 a1, int a2, int a3, int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  int *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  int v11; // [rsp+90h] [rbp+18h] BYREF
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v5[2] = &v11;
  v7 = 0;
  v6 = 4;
  v8 = &v12;
  v10 = 0;
  v9 = 4;
  return McGenEventWrite_EtwEventWriteTransfer(4, a2, a3, 3, (__int64)v5);
}
