/*
 * XREFs of PiIommuFreeExtension @ 0x140729CF8
 * Callers:
 *     PiIommuAllocateExtension @ 0x140729B24 (PiIommuAllocateExtension.c)
 *     PipDmgDestroyIommuExtension @ 0x14082C4C0 (PipDmgDestroyIommuExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiIommuFreeExtension(_BYTE *P)
{
  void *v2; // rcx

  if ( (P[16] & 2) != 0 )
    KeBugCheckEx(0xCAu, 0x11uLL, (ULONG_PTR)P, *((unsigned __int16 *)P + 8), 0x1001uLL);
  v2 = *(void **)P;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x64706E50u);
    *(_QWORD *)P = 0LL;
  }
  ExFreePoolWithTag(P, 0x64706E50u);
}
