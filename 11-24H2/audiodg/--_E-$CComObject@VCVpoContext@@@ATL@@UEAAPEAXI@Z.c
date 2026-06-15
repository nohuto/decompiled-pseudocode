/*
 * XREFs of ??_E?$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x1400738D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x1400737D8 (--1-$CComObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 */

CVpoContext *__fastcall ATL::CComObject<CVpoContext>::`vector deleting destructor'(CVpoContext *Block, char a2)
{
  ATL::CComObject<CVpoContext>::~CComObject<CVpoContext>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
