/*
 * XREFs of VPOCONTEXT_rundown @ 0x180112560
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ @ 0x18010B854 (--1-$unique_ptr@VCVpoContextProxy@@U-$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall VPOCONTEXT_rundown(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v2);
}
