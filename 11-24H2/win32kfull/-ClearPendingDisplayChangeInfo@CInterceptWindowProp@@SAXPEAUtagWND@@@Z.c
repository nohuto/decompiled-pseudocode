/*
 * XREFs of ?ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402C91A0
 * Callers:
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CC61C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CCFF0 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x1402C9BEC (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 */

void __fastcall CInterceptWindowProp::ClearPendingDisplayChangeInfo(struct tagWND *a1)
{
  struct CInterceptWindowProp *v1; // rax
  struct CInterceptWindowProp *v2; // rbx
  CMonitorTopology *v3; // rcx

  v1 = CInterceptWindowProp::GetOrCreate(a1);
  v2 = v1;
  if ( v1 )
  {
    v3 = (CMonitorTopology *)*((_QWORD *)v1 + 8);
    if ( v3 )
    {
      CMonitorTopology::Release(v3);
      *((_QWORD *)v2 + 8) = 0LL;
    }
    *((_WORD *)v2 + 28) = 0;
    *((_DWORD *)v2 + 22) = 0;
    *(_OWORD *)((char *)v2 + 72) = 0LL;
  }
}
