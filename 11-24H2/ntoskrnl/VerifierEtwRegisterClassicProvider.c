/*
 * XREFs of VerifierEtwRegisterClassicProvider @ 0x140BA1510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetEtwRegister @ 0x140B8B4AC (VfTargetEtwRegister.c)
 */

__int64 __fastcall VerifierEtwRegisterClassicProvider(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int v5; // ebx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  v5 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( v5 >= 0 )
    VfTargetEtwRegister(*a5, retaddr);
  return (unsigned int)v5;
}
