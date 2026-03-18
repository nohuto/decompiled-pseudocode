/*
 * XREFs of ??1?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA@XZ @ 0x14019996C
 * Callers:
 *     ?Destroy@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140156AD0 (-Destroy@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ @ 0x140118F20 (--1-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAA@XZ.c)
 */

void __fastcall NSInstrumentation::CLookAsideTypeIsolation<36864,144>::~CLookAsideTypeIsolation<36864,144>(__int64 a1)
{
  ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)(a1 + 48));
  NSInstrumentation::CTypeIsolation<81920,160>::~CTypeIsolation<81920,160>(a1);
}
