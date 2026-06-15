/*
 * XREFs of ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x140041D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x140041DCC (--1-$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
