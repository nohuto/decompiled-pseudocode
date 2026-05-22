/*
 * XREFs of ??$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00@Z @ 0x18003B7EC
 * Callers:
 *     ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x18003B674 (-RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@@Z @ 0x1800573D8 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@Inpu.c)
 *     ??$RemoveObject@UIDropTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x18005D6C8 (--$RemoveObject@UIDropTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 *     ??$RemoveObject@UIActivationListenerInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x18005E764 (--$RemoveObject@UIActivationListenerInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18003B850 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall std::_Move_unchecked<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rdi

  for ( i = a1; i != a2; i += 2 )
  {
    *a3 = *i;
    Microsoft::WRL::ComPtr<IUnknown>::operator=(a3 + 1, i + 1);
    a3 += 2;
  }
  return a3;
}
