/*
 * XREFs of ?SetPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CB318
 * Callers:
 *     ?xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CD6E0 (-xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x1402C9BEC (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 */

void __fastcall CInterceptWindowProp::SetPendingDisplayChangeInfo(
        struct tagWND *a1,
        const struct AdvancedWindowPos::WindowAction *a2)
{
  struct CInterceptWindowProp *v3; // rax
  struct CInterceptWindowProp *v4; // rbx
  CMonitorTopology *v5; // rcx
  volatile signed __int32 *v6; // rax

  v3 = CInterceptWindowProp::GetOrCreate(a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = (CMonitorTopology *)*((_QWORD *)v3 + 8);
    if ( v5 )
      CMonitorTopology::Release(v5);
    v6 = (volatile signed __int32 *)*((_QWORD *)a2 + 21);
    *((_QWORD *)v4 + 8) = v6;
    _InterlockedIncrement(v6);
    *((_BYTE *)v4 + 57) = *((_BYTE *)a2 + 6) & 1;
    *((_BYTE *)v4 + 56) = (*((_DWORD *)a2 + 1) & 0x1000) != 0;
    if ( (*((_DWORD *)a2 + 1) & 0x4000) != 0 )
      *(_OWORD *)((char *)v4 + 72) = *(_OWORD *)((char *)a2 + 76);
    if ( (*((_DWORD *)a2 + 1) & 0x8000) != 0 )
      *((_DWORD *)v4 + 22) = *((_DWORD *)a2 + 23);
  }
}
