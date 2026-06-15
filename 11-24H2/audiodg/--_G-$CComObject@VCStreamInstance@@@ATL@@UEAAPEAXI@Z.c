/*
 * XREFs of ??_G?$CComObject@VCStreamInstance@@@ATL@@UEAAPEAXI@Z @ 0x140040520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCStreamInstance@@@ATL@@UEAA@XZ @ 0x14004055C (--1-$CComObject@VCStreamInstance@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CStreamInstance *__fastcall ATL::CComObject<CStreamInstance>::`scalar deleting destructor'(
        CStreamInstance *Block,
        char a2)
{
  ATL::CComObject<CStreamInstance>::~CComObject<CStreamInstance>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
