/*
 * XREFs of _dynamic_atexit_destructor_for__SadMap__ @ 0x140096FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14002A01C (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

void dynamic_atexit_destructor_for__SadMap__()
{
  _QWORD *v0; // rcx
  int i; // ebx

  v0 = SadMap;
  if ( SadMap )
  {
    for ( i = 0; i < dword_1400C4758; ++i )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'(&v0[i]);
      v0 = SadMap;
    }
    free(v0);
    SadMap = 0LL;
  }
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_1400C4758 = 0;
}
