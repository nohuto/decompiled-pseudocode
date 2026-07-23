/*
 * XREFs of PiIommuFreeExtension @ 0x140733EB8
 * Callers:
 *     PiIommuAllocateExtension @ 0x140733CE4 (PiIommuAllocateExtension.c)
 *     PipDmgDestroyIommuExtension @ 0x14098237C (PipDmgDestroyIommuExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
