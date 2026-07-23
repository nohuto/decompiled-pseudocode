/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x140477210
 * Callers:
 *     PspCreateThread @ 0x1408FA8F0 (PspCreateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

bool __fastcall PspIsProcessReadyForRemoteThread(__int64 a1)
{
  bool v2; // bl
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  _OWORD v7[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = 1;
  if ( PsNoRemoteThreadBeforeProcessInit )
  {
    v4 = *(_DWORD *)(a1 + 1532);
    if ( (v4 & 1) == 0 && (v4 & 0x1000) == 0 && (*(_BYTE *)(a1 + 368) & 1) == 0 )
    {
      KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v7);
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 736) + 24LL) != 0LL;
      KiUnstackDetachProcess((__int64)v7, 0, v5, v6);
    }
  }
  return v2;
}
