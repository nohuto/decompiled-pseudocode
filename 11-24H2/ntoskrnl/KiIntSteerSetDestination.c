/*
 * XREFs of KiIntSteerSetDestination @ 0x1402B2F28
 * Callers:
 *     KiIntSteerDistributeInterrupts @ 0x1402B1520 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerConnect @ 0x1402B3934 (KiIntSteerConnect.c)
 * Callees:
 *     KiIntSteerVerifyDestination @ 0x1402B2FA8 (KiIntSteerVerifyDestination.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIntSteerSetDestination(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v4; // r9
  int v5; // ecx
  __int64 result; // rax
  __int64 v7; // rcx

  if ( (int)KiIntSteerVerifyDestination(a1, a2, a3, a1) < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x101uLL, v4, BugCheckParameter4);
  v5 = *(_DWORD *)(v4 + 128);
  result = (unsigned int)(v5 - 1);
  if ( (result & 0xFFFFFFFD) == 0 )
    return guard_dispatch_icall_no_overrides(v4 + 40, BugCheckParameter4);
  if ( v5 == 2 )
  {
    v7 = *(_QWORD *)(v4 + 200);
    *(_WORD *)(v7 + 8) = *(_WORD *)(BugCheckParameter4 + 8);
    result = *(_QWORD *)BugCheckParameter4;
    *(_QWORD *)v7 = *(_QWORD *)BugCheckParameter4;
  }
  return result;
}
