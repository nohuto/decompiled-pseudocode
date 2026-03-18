/*
 * XREFs of ??$_Emplace@AEAPEAVCProjectedShadowCaster@@@?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAAPEAU?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@1@QEAU21@AEAPEAVCProjectedShadowCaster@@@Z @ 0x180249D98
 * Callers:
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x1800E7FAC (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::list<CProjectedShadowScene::CasterEntry>::_Emplace<CProjectedShadowCaster * &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x1745D1745D1745DLL )
    std::_Xlength_error("list too long");
  v6 = operator new(0xB0uLL);
  v7 = *a3;
  v8 = v6;
  v6[2] = *a3;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8[3] = 0LL;
  *((_DWORD *)v8 + 24) = 0;
  *((_DWORD *)v8 + 41) = 0;
  *((_BYTE *)v8 + 168) = 0;
  ++*(_QWORD *)(a1 + 8);
  v9 = *(_QWORD **)(a2 + 8);
  *v8 = a2;
  v8[1] = v9;
  *(_QWORD *)(a2 + 8) = v8;
  *v9 = v8;
  return v8;
}
