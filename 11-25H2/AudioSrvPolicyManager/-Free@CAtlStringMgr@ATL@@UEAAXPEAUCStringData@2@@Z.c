/*
 * XREFs of ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180049CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlStringMgr::Free(ATL::CAtlStringMgr *this, struct ATL::CStringData *a2)
{
  (*(void (__fastcall **)(_QWORD, struct ATL::CStringData *))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1), a2);
}
