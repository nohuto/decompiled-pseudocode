/*
 * XREFs of HOLOGRAPHICDISPLAY_rundown @ 0x1800FA4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCHMDManager@@U?$default_delete@VCHMDManager@@@std@@@std@@QEAA@XZ @ 0x1800FA078 (--1-$unique_ptr@VCHMDManager@@U-$default_delete@VCHMDManager@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall HOLOGRAPHICDISPLAY_rundown(CHMDManager *a1)
{
  CHMDManager *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  std::unique_ptr<CHMDManager>::~unique_ptr<CHMDManager>(&v1);
}
