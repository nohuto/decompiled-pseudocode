/*
 * XREFs of ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x140042090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x1400420CC (--1-$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CProcessSubmix *__fastcall ATL::CComObject<CProcessSubmix>::`scalar deleting destructor'(
        CProcessSubmix *Block,
        char a2)
{
  ATL::CComObject<CProcessSubmix>::~CComObject<CProcessSubmix>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
