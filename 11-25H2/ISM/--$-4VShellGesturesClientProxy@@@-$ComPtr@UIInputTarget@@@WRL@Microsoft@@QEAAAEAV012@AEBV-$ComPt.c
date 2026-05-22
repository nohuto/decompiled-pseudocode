/*
 * XREFs of ??$?4VShellGesturesClientProxy@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VShellGesturesClientProxy@@@12@@Z @ 0x18008060C
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180088DB0 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<IInputTarget>::operator=<ShellGesturesClientProxy>(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx

  v3 = *a2 + 128LL;
  v4 = -*a2;
  v5 = v3 & -(__int64)(*a2 != 0LL);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v5 + 8LL))(v3 & -(__int64)(*a2 != 0LL), a2, v4);
  v6 = *a1;
  *a1 = v5;
  if ( v6 )
    (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v6 + 16LL))(v6, a2, v4);
  return a1;
}
