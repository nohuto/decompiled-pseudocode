/*
 * XREFs of PiIommuFreeExtension @ 0x140735F88
 * Callers:
 *     PiIommuAllocateExtension @ 0x140735DB4 (PiIommuAllocateExtension.c)
 *     PipDmgDestroyIommuExtension @ 0x1409C45C8 (PipDmgDestroyIommuExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
