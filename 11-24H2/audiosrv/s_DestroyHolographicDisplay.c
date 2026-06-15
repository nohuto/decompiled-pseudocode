/*
 * XREFs of s_DestroyHolographicDisplay @ 0x1800FD890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCHMDManager@@U?$default_delete@VCHMDManager@@@std@@@std@@QEAA@XZ @ 0x1800FD2F8 (--1-$unique_ptr@VCHMDManager@@U-$default_delete@VCHMDManager@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall s_DestroyHolographicDisplay(CHMDManager **a1)
{
  CHMDManager *v1; // rax
  CHMDManager *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  *a1 = 0LL;
  v3 = v1;
  std::unique_ptr<CHMDManager>::~unique_ptr<CHMDManager>(&v3);
  return 0LL;
}
