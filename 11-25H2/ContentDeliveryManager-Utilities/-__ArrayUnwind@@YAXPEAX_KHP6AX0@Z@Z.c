/*
 * XREFs of ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x180022530
 * Callers:
 *     ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x1800224C4 (--_M@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x1800226F4 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __ArrayUnwind(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  while ( --a3 >= 0 )
  {
    a1 -= a2;
    a4(a1);
  }
}
