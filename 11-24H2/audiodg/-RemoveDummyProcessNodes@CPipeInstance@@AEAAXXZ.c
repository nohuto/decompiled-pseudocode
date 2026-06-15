/*
 * XREFs of ?RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ @ 0x1400104D0
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000FF08 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000FEA4 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPipeInstance::RemoveDummyProcessNodes(CPipeInstance *this)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdx
  __int64 v4; // rsi

  v2 = (__int64 *)*((_QWORD *)this + 3);
  while ( v2 )
  {
    v3 = v2;
    v4 = v2[2];
    v2 = (__int64 *)v2[1];
    if ( *(_DWORD *)(v4 + 40) == 4 )
    {
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((__int64 **)this + 2, v3);
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
    }
  }
}
