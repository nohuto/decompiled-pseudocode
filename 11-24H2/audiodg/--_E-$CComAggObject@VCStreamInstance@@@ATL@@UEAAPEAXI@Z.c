/*
 * XREFs of ??_E?$CComAggObject@VCStreamInstance@@@ATL@@UEAAPEAXI@Z @ 0x14005C4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCStreamInstance@@@ATL@@UEAA@XZ @ 0x14005C024 (--1-$CComAggObject@VCStreamInstance@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CStreamInstance>::`vector deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CStreamInstance>::~CComAggObject<CStreamInstance>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
