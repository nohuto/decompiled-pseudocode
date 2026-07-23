/*
 * XREFs of PspWow64SetupUserStack @ 0x140A13008
 * Callers:
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpWow64CreateUserStack @ 0x140A130B8 (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  bool v5; // zf
  int UserStack; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // cl
  _OWORD v13[3]; // [rsp+30h] [rbp-48h] BYREF

  v5 = (*(_BYTE *)a4 & 1) == 0;
  memset(v13, 0, sizeof(v13));
  if ( !v5 )
  {
    v11 = 0;
    goto LABEL_4;
  }
  KiStackAttachProcess(a1, 0, (__int64)v13);
  UserStack = RtlpWow64CreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), a5, a3);
  if ( UserStack >= 0 )
  {
    KiUnstackDetachProcess((__int64)v13, 0, v9, v10);
    v11 = 4;
LABEL_4:
    *(_BYTE *)a4 = v11 | *(_BYTE *)a4 & 0xFB;
    return 0LL;
  }
  KiUnstackDetachProcess((__int64)v13, 0, v9, v10);
  return (unsigned int)UserStack;
}
