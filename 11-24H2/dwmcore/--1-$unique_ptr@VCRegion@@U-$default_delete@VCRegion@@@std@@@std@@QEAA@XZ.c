/*
 * XREFs of ??1?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@QEAA@XZ @ 0x1801FE5D0
 * Callers:
 *     ??1?$CTargetDirtyBase@$07@@QEAA@XZ @ 0x1801E4E90 (--1-$CTargetDirtyBase@$07@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::unique_ptr<CRegion>::~unique_ptr<CRegion>(CRegion **a1)
{
  CRegion *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return CRegion::`scalar deleting destructor'(v1, 1u);
  return result;
}
