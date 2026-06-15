/*
 * XREFs of ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14005C61C
 * Callers:
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x1400382C0 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400416E0 (-CreateInstance@-$CComCreator@V-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAA@XZ @ 0x14005C158 (--1-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAA@XZ.c)
 */

void *__fastcall ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(void *Block)
{
  ATL::CComObjectCached<ATL::CComClassFactory>::~CComObjectCached<ATL::CComClassFactory>((__int64)Block);
  operator delete(Block);
  return Block;
}
