/*
 * XREFs of ?Destroy@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1402632C0
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401BB45C (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401C7978 (-Allocate@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1401F7AC4 (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14020208C (-Allocate@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1402B3C10 (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1402E0D34 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1402E10F8 (-Create@-$CSectionEntry@$0HAAA@$0HA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ @ 0x14030E038 (-Create@-$CSectionEntry@$0DKAAA@$0DKA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA@XZ @ 0x1403322A8 (--1-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA@XZ.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1402632EC (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CSectionEntry<36864,144>::Destroy(PVOID P)
{
  NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>();
  ExFreePoolWithTag(P, 0);
}
