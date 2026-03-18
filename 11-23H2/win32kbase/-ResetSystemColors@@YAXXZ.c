/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x1C00121BC
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxSetSysColors @ 0x1C005F814 (xxxSetSysColors.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 */

void ResetSystemColors(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  int v2; // ecx
  _BYTE v3[16]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v4[128]; // [rsp+40h] [rbp-118h] BYREF
  _DWORD v5[32]; // [rsp+C0h] [rbp-98h] BYREF

  v0 = 0;
  memmove(v4, (char *)gpsi + 4444, 0x7CuLL);
  v1 = 0LL;
  do
    v5[v1++] = v0++;
  while ( v0 < 0x1F );
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v3);
  xxxSetSysColors(v2, v0, (unsigned int)v5, (unsigned int)v4, 6);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v3);
}
