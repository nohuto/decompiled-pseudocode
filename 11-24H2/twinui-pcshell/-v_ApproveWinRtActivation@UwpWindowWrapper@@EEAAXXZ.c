/*
 * XREFs of ?v_ApproveWinRtActivation@UwpWindowWrapper@@EEAAXXZ @ 0x1801B5CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x1801B5D28 (-SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapper::v_ApproveWinRtActivation(UwpWindowWrapper *this)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  v2 = *(_OWORD *)((char *)this + 680);
  UwpWindowWrapper::SetImageLocationNoLock((char *)this - 8, &v2);
}
