/*
 * XREFs of HalpDmaPowerCriticalTransitionCallback @ 0x140550840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaPowerCriticalTransitionCallback(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    *(_BYTE *)(a1 + 216) = 1;
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 64), a2);
  }
  else
  {
    *(_BYTE *)(a1 + 216) = 0;
  }
  return result;
}
