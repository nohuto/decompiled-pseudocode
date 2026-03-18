/*
 * XREFs of ?Destroy@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14023E698
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14011E5BC (-Allocate@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401527F8 (-Create@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA@XZ @ 0x14023E410 (--1-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAA@XZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA@XZ @ 0x14023E3B0 (--1-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CSectionEntry<180224,704>::Destroy(_QWORD *P)
{
  NSInstrumentation::CSectionEntry<180224,704>::~CSectionEntry<180224,704>(P);
  ExFreePoolWithTag(P, 0);
}
