/*
 * XREFs of ?QueryInterface@?$CComObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140044A30
 * Callers:
 *     ?QueryInterface@?$CComObject@VCProcessSubmix@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006CC80 (-QueryInterface@-$CComObject@VCProcessSubmix@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006CC90 (-QueryInterface@-$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComObject<CProcessSubmix>::QueryInterface(
        CProcessSubmix *this,
        const struct _GUID *a2,
        char **a3)
{
  return CProcessSubmix::_InternalQueryInterface(this, a2, a3);
}
