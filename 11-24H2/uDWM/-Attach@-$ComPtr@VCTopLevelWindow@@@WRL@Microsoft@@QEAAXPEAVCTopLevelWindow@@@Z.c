/*
 * XREFs of ?Attach@?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@QEAAXPEAVCTopLevelWindow@@@Z @ 0x180072658
 * Callers:
 *     ??$attach_to_smart_pointer@VCTopLevelWindow@@@wil@@YAXAEAV?$ComPtr@VCTopLevelWindow@@@WRL@Microsoft@@PEAVCTopLevelWindow@@@Z @ 0x1800C7A48 (--$attach_to_smart_pointer@VCTopLevelWindow@@@wil@@YAXAEAV-$ComPtr@VCTopLevelWindow@@@WRL@Micros.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CTopLevelWindow>::Attach(CBaseObject **a1, CBaseObject *a2)
{
  CBaseObject *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = CBaseObject::Release(v4);
  *a1 = a2;
  return result;
}
