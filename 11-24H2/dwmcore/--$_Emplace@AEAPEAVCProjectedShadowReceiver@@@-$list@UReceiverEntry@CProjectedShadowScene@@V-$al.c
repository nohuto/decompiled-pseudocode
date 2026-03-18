/*
 * XREFs of ??$_Emplace@AEAPEAVCProjectedShadowReceiver@@@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAPEAU?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@1@QEAU21@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x1800E7BA0
 * Callers:
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x1800E7C78 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::list<CProjectedShadowScene::ReceiverEntry>::_Emplace<CProjectedShadowReceiver * &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 *v10; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x222222222222222LL )
    std::_Xlength_error("list too long");
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x78uLL);
  v7 = *a3;
  v8 = v6;
  *(_QWORD *)(v6 + 16) = *a3;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)(v8 + 24) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  v9 = operator new(0x30uLL);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  *(_QWORD *)(v8 + 24) = v9;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_DWORD *)(v8 + 112) = 0;
  *(_BYTE *)(v8 + 116) = 0;
  ++*(_QWORD *)(a1 + 8);
  v10 = *(__int64 **)(a2 + 8);
  *(_QWORD *)v8 = a2;
  *(_QWORD *)(v8 + 8) = v10;
  *(_QWORD *)(a2 + 8) = v8;
  *v10 = v8;
  return v8;
}
