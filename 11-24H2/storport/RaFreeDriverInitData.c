/*
 * XREFs of RaFreeDriverInitData @ 0x14006C1FC
 * Callers:
 *     RaDeleteDriver @ 0x140181190 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaFreeDriverInitData(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x49486152u);
}
