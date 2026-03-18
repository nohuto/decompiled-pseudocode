/*
 * XREFs of DestroyWindowSmIcon @ 0x14008DCFC
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1401DCE70 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     xxxRecreateSmallIcons @ 0x14021F460 (xxxRecreateSmallIcons.c)
 * Callees:
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DestroyWindowSmIcon(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  struct tagCURSOR *v7; // rbx

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL);
  if ( !v5 )
    return 0LL;
  LOBYTE(a2) = 3;
  v6 = HMValidateHandleNoRip(v5, a2, a3, a4);
  v7 = (struct tagCURSOR *)v6;
  if ( !v6 || (*(_DWORD *)(v6 + 80) & 0x80u) == 0 )
    return 0LL;
  SetOrClrWF(0, a1, 0x720u, 1);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL) = 0LL;
  _DestroyCursor(v7, 0LL);
  return 1LL;
}
