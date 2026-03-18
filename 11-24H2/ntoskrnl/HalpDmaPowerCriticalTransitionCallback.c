/*
 * XREFs of HalpDmaPowerCriticalTransitionCallback @ 0x140552F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaPowerCriticalTransitionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (_BYTE)a3 )
  {
    *(_BYTE *)(a1 + 216) = 1;
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64), a2, a3, a4);
  }
  else
  {
    *(_BYTE *)(a1 + 216) = 0;
  }
  return result;
}
