/*
 * XREFs of ?ReportViewDragGesture@?$consume_Windows_Internal_Shell_Animations_IEdgeAnimationRelationshipManager@UIEdgeAnimationRelationshipManager@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4EdgeLocation@Animations@Shell@Internal@Windows@3@AEBW4ShellView@6UI@WindowsUdk@3@AEBUGestureAnimationData@Input@UI@WindowsUdk@3@AEBUPoint@Foundation@83@@Z @ 0x1805942E0
 * Callers:
 *     ?ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUShellViewGestureReportedArgs@3456@@Z @ 0x180594348 (-ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_Shell_Animations_IEdgeAnimationRelationshipManager<winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager>::ReportViewDragGesture(
        __int64 **a1,
        unsigned int *a2,
        unsigned int *a3,
        __int128 *a4,
        _QWORD *a5)
{
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64 *, __int64, __int64, __int128 *, _QWORD); // rax
  int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-28h] BYREF
  __int128 v14; // [rsp+48h] [rbp-20h]

  v5 = *a1;
  v6 = *a3;
  v7 = *a2;
  v13 = 0;
  v8 = *v5;
  v14 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int128 *, _QWORD))(v8 + 56);
  v12 = *a4;
  v10 = v9(v5, v7, v6, &v12, *a5);
  return winrt::check_hresult((int *)&a5, v10, (__int64)&v13);
}
