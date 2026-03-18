/*
 * XREFs of KiIntSteerSetDestination @ 0x1403551F8
 * Callers:
 *     KiIntSteerDistributeInterrupts @ 0x140353750 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerConnect @ 0x1403B7680 (KiIntSteerConnect.c)
 * Callees:
 *     KiIntSteerVerifyDestination @ 0x140355278 (KiIntSteerVerifyDestination.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIntSteerSetDestination(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v5; // r9
  ULONG_PTR v6; // r8
  int v7; // ecx
  __int64 result; // rax
  __int64 v9; // rcx

  v3 = KiIntSteerVerifyDestination(a1, a2, a3, a1);
  v6 = 0LL;
  if ( v3 < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x101uLL, v5, BugCheckParameter4);
  v7 = *(_DWORD *)(v5 + 128);
  result = (unsigned int)(v7 - 1);
  if ( (result & 0xFFFFFFFD) != 0 )
  {
    if ( v7 == 2 )
    {
      v9 = *(_QWORD *)(v5 + 200);
      *(_WORD *)(v9 + 8) = *(_WORD *)(BugCheckParameter4 + 8);
      result = *(_QWORD *)BugCheckParameter4;
      *(_QWORD *)v9 = *(_QWORD *)BugCheckParameter4;
    }
  }
  else
  {
    if ( *(_DWORD *)(v5 + 32) != -1 )
      v6 = v5 + 32;
    return guard_dispatch_icall_no_overrides(v5 + 40, BugCheckParameter4, v6, v5);
  }
  return result;
}
