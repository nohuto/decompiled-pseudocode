/*
 * XREFs of ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x14003B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x14003B62C (--1-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAPOWrapperSrv *__fastcall ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor'(
        CAPOWrapperSrv *Block,
        char a2)
{
  ATL::CComObject<CAPOWrapperSrv>::~CComObject<CAPOWrapperSrv>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
