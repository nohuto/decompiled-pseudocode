/*
 * XREFs of PspWow64SetupUserStack @ 0x140A14418
 * Callers:
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpWow64CreateUserStack @ 0x140A144C8 (RtlpWow64CreateUserStack.c)
 */

__int64 __fastcall PspWow64SetupUserStack(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  bool v5; // zf
  int UserStack; // edi
  char v9; // cl
  _OWORD v11[3]; // [rsp+30h] [rbp-48h] BYREF

  v5 = (*(_BYTE *)a4 & 1) == 0;
  memset(v11, 0, sizeof(v11));
  if ( !v5 )
  {
    v9 = 0;
    goto LABEL_4;
  }
  KiStackAttachProcess(a1, 0, (__int64)v11);
  UserStack = RtlpWow64CreateUserStack(*(_QWORD *)(a4 + 16), *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 8), a5, a3);
  if ( UserStack >= 0 )
  {
    KiUnstackDetachProcess((__int64)v11, 0LL);
    v9 = 4;
LABEL_4:
    *(_BYTE *)a4 = v9 | *(_BYTE *)a4 & 0xFB;
    return 0LL;
  }
  KiUnstackDetachProcess((__int64)v11, 0LL);
  return (unsigned int)UserStack;
}
