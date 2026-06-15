/*
 * XREFs of ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140045370
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x1400453AC (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CStreamGroup *__fastcall ATL::CComObject<CStreamGroup>::`vector deleting destructor'(CStreamGroup *Block, char a2)
{
  ATL::CComObject<CStreamGroup>::~CComObject<CStreamGroup>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
