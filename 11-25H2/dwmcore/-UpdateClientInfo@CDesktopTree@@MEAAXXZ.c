/*
 * XREFs of ?UpdateClientInfo@CDesktopTree@@MEAAXXZ @ 0x1801E6110
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector_facade@PEAVCResponseItemBase@@V?$buffer_impl@PEAVCResponseItemBase@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B814 (-clear@-$vector_facade@PEAVCResponseItemBase@@V-$buffer_impl@PEAVCResponseItemBase@@$01$00Vliber.c)
 *     ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x18013D3B4 (-push_back@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliber.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDesktopTree::UpdateClientInfo(CDesktopTree *this)
{
  detail::liberal_expansion_policy *v1; // rsi
  __int64 (__fastcall ****v3)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rbp
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = (CDesktopTree *)((char *)this + 4496);
  detail::vector_facade<CResponseItemBase *,detail::buffer_impl<CResponseItemBase *,2,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 562);
  *((_QWORD *)this + 569) = 0LL;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 306);
  v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 307);
  while ( v3 != v4 )
  {
    v5 = *v3;
    v9 = 0LL;
    if ( (int)(**v5)(v5, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v9) >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 72LL))(v9);
      if ( v10 )
        detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::push_back(
          v1,
          &v10);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v6 = *v3;
    v9 = 0LL;
    v7 = (**v6)(v6, &GUID_7c976d93_9dfd_4286_b10c_4603653cf4d3, &v9);
    v8 = v9;
    if ( v7 >= 0 )
      *((_QWORD *)this + 569) = v9;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    ++v3;
  }
  CVisualTree::UpdateClientBounds(this);
}
