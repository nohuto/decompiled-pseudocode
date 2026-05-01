/*
 * XREFs of ?IsPinned@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@@Z @ 0x1806927E0
 * Callers:
 *     ?IsPinned@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@@Z @ 0x1806882D0 (-IsPinned@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@@Z.c)
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180688CA8 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 *     ?_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG@Z @ 0x180688FE4 (-_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPE.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1CPinList@@QEAA@XZ @ 0x18068AEEC (--1CPinList@@QEAA@XZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18068DAA8 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180692D90 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::IsPinned(CPinnedList *this, const struct _ITEMIDLIST *a2)
{
  int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  v3 = CPinList::Load((CPinList *)&v5, (CPinnedList *)((char *)this - 16));
  if ( v3 >= 0 )
    v3 = CPinList::FindPidlOrAppID((HDSA *)&v5, a2, 0, 0LL) == 0LL;
  CPinList::~CPinList((CPinList *)&v5);
  return (unsigned int)v3;
}
