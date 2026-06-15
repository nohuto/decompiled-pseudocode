/*
 * XREFs of ?AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z @ 0x14006CE14
 * Callers:
 *     ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x14006D340 (-Release@CVirtualProtectedOutput@@UEAAKXZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14000EB34 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProtectedOutputController::AdviseVpoDeletion(__int64 **this, struct CVirtualProtectedOutput *a2)
{
  __int64 *i; // rdx
  __int64 v5; // rax
  __int64 v6; // rax

  ((void (__fastcall *)(__int64 **, struct CVirtualProtectedOutput *, _QWORD))(*this)[6])(this, a2, 0LL);
  for ( i = this[2]; i && (struct CVirtualProtectedOutput *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( !i )
    ATL::AtlThrowImpl(-2147467259);
  v5 = *i;
  if ( i == this[2] )
    this[2] = (__int64 *)v5;
  else
    *(_QWORD *)i[1] = v5;
  v6 = i[1];
  if ( i == this[3] )
    this[3] = (__int64 *)v6;
  else
    *(_QWORD *)(*i + 8) = v6;
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode((__int64)(this + 2), i);
}
