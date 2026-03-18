/*
 * XREFs of ??$try_com_query_nothrow@UIHolographicExclusiveModeManagerProxy@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1802DD458
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802DE2A8 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802DEA34 (-ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::try_com_query_nothrow<IHolographicExclusiveModeManagerProxy,IUnknown * &>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, GUID *, _QWORD *))
{
  void (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx

  v3 = *a2;
  *a1 = 0LL;
  (**v3)(v3, &GUID_143f61ed_01bd_4237_b4cb_c9ce1a59f0a0, a1);
  return a1;
}
