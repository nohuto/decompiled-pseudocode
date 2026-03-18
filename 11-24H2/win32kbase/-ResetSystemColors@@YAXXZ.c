/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x1400A0E38
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140060DA0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140060DC8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxSetSysColors @ 0x1400A0834 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall ResetSystemColors(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rcx
  _DWORD v4[1103]; // [rsp+0h] [rbp-1274h]
  _BYTE v5[16]; // [rsp+114Ch] [rbp-128h] BYREF
  char v6[128]; // [rsp+115Ch] [rbp-118h] BYREF
  char v7[128]; // [rsp+11DCh] [rbp-98h] BYREF

  v1 = 0;
  v2 = 1111LL;
  do
  {
    v4[v2 + 32] = v1++;
    a1 = *(_QWORD *)(W32GetUserSessionState(a1) + 19928);
    v4[v2] = *(_DWORD *)(v2 * 4 + a1);
    ++v2;
  }
  while ( v1 < 0x1F );
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v5);
  xxxSetSysColors(v3, v1, v7, v6, 6u);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v5);
}
