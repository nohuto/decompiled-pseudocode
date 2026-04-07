/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009BD74
 * Callers:
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x18000AB58 (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18009BA3C (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
}
