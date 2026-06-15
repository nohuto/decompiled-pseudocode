/*
 * XREFs of ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x140058EDC
 * Callers:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x140058E6C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1400594CC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 * Callees:
 *     _o_terminate_0 @ 0x14005A18C (_o_terminate_0.c)
 *     __current_exception_0 @ 0x14005A1B0 (__current_exception_0.c)
 *     __current_exception_context_0 @ 0x14005A1BC (__current_exception_context_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __ArrayUnwind(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    a1 -= a2;
    a4(a1);
  }
}
