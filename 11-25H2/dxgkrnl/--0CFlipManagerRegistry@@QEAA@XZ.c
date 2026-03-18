/*
 * XREFs of ??0CFlipManagerRegistry@@QEAA@XZ @ 0x14007220C
 * Callers:
 *     ?GetFlipManagerRegistry@DXGSESSIONDATA@@QEAAJPEAPEAUIFlipManagerRegistry@@@Z @ 0x1401F4594 (-GetFlipManagerRegistry@DXGSESSIONDATA@@QEAAJPEAPEAUIFlipManagerRegistry@@@Z.c)
 * Callees:
 *     <none>
 */

CFlipManagerRegistry *__fastcall CFlipManagerRegistry::CFlipManagerRegistry(CFlipManagerRegistry *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CFlipManagerRegistry::`vftable';
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  return this;
}
