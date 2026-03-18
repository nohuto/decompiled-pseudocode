/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x14047AC00
 * Callers:
 *     PspCreateThread @ 0x1408F1680 (PspCreateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

bool __fastcall PspIsProcessReadyForRemoteThread(__int64 a1)
{
  bool v2; // bl
  int v4; // eax
  _OWORD v5[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = 1;
  if ( PsNoRemoteThreadBeforeProcessInit )
  {
    v4 = *(_DWORD *)(a1 + 1532);
    if ( (v4 & 1) == 0 && (v4 & 0x1000) == 0 && (*(_BYTE *)(a1 + 368) & 1) == 0 )
    {
      KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v5);
      v2 = *(_QWORD *)(*(_QWORD *)(a1 + 736) + 24LL) != 0LL;
      KiUnstackDetachProcess((__int64)v5, 0LL);
    }
  }
  return v2;
}
