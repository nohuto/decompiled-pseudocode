/*
 * XREFs of AppModelFreeUnicodeString @ 0x1404ABDC0
 * Callers:
 *     KIsSideloadingEnabled @ 0x1407C9DF8 (KIsSideloadingEnabled.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall AppModelFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4D707041u);
    *(_OWORD *)a1 = 0LL;
  }
}
