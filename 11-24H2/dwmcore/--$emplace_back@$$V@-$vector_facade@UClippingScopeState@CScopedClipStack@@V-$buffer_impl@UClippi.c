/*
 * XREFs of ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180056680
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180055E00 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800FC014 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ??$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScopedClipStack@@0@Z @ 0x1800F8BD0 (--$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScop.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x1800F8C28 (--$uninitialized_move@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V-$checked.c)
 *     ??0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z @ 0x1800F8CD0 (--0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@Z @ 0x1800FDF68 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x180263ED4 (--4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void *__fastcall detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::emplace_back<>(
        _QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  unsigned __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v6; // rcx
  unsigned __int64 v7; // r12
  __int64 v8; // r11
  signed __int64 v9; // r8
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 i; // rbx
  __int64 v16; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  void *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  void *v24; // rbx
  void *v25; // rdx
  bool v26; // zf
  void *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r14
  __int64 v31; // rdx
  unsigned __int64 v32; // r11
  __int128 v33; // [rsp+20h] [rbp-40h] BYREF
  __int64 v34; // [rsp+30h] [rbp-30h]
  __int128 v35; // [rsp+40h] [rbp-20h] BYREF
  __int64 v36; // [rsp+50h] [rbp-10h]

  v2 = a1[1];
  v3 = 0xAAAAAAAAAAAAAAABuLL;
  v4 = *a1;
  v6 = a1[2];
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - v4) >> 6);
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((v6 - v2) >> 6)) )
  {
    if ( v7 + 1 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_27:
      v29 = v33;
      v30 = v34;
      while ( 1 )
      {
        v31 = v2 - 192;
        if ( !v29 )
          goto LABEL_14;
        if ( !v8 )
          goto LABEL_14;
        v32 = v30 - 1;
        v30 = v32;
        if ( v32 >= *((_QWORD *)&v33 + 1) )
          goto LABEL_14;
        CScopedClipStack::ClippingScopeState::ClippingScopeState(v29 + 192 * v32, v31);
        if ( v2 == v1 )
          goto LABEL_6;
      }
    }
    v20 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)(0xAAAAAAAAAAAAAAABuLL * ((v6 - v4) >> 6)),
            0xAAAAAAAAAAAAAAABuLL * ((v6 - v4) >> 6),
            v7 + 1);
    v21 = operator new[](saturated_mul(v20, 0xC0uLL));
    v22 = a1[1];
    v23 = *a1;
    *(_QWORD *)&v33 = v21;
    v24 = v21;
    *((_QWORD *)&v33 + 1) = v7;
    v34 = 0LL;
    v35 = v33;
    v36 = 0LL;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>)(
      &v33,
      v23,
      v22,
      &v35);
    detail::destruct_range<CScopedClipStack::ClippingScopeState>(*a1, a1[1]);
    v25 = (void *)*a1;
    v26 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v24;
    v27 = 0LL;
    if ( !v26 )
      v27 = v25;
    operator delete(v27);
    v4 = *a1;
    v2 = *a1 + 192 * v7;
    v28 = *a1 + 192 * v20;
    a1[1] = v2;
    a1[2] = v28;
  }
  v34 = 0LL;
  v8 = 1LL;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - v4) >> 6);
  v36 = 0LL;
  *((_QWORD *)&v33 + 1) = 1LL;
  v10 = v9 - v7;
  v11 = (v2 - v4) >> 6 << 6;
  v3 = v11 + v4;
  *(_QWORD *)&v33 = v11 + v4;
  if ( !(v11 + v4) )
    goto LABEL_14;
  v36 = 1LL;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - v4) >> 6) - v7;
  if ( v10 > 1 )
    v12 = 1LL;
  v34 = 1LL;
  v13 = 192 * v12;
  v1 = v2 - v13;
  if ( v2 != v2 - v13 )
    goto LABEL_27;
LABEL_6:
  if ( v10 <= 1 )
    goto LABEL_7;
  if ( v9 && (!v4 || v9 < 0) )
LABEL_14:
    _invalid_parameter_noinfo_noreturn();
  *(_QWORD *)&v33 = v4;
  *((_QWORD *)&v33 + 1) = v9;
  v34 = v9;
  v18 = v4 + v11 - 192;
  v19 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *> &,__int64>(
          &v33,
          0x5555555555555555LL * ((__int64)(v11 - 192 - 192 * v7) >> 6))
      - v18;
  while ( v4 + 192 * v7 != v18 )
  {
    v18 -= 192LL;
    CScopedClipStack::ClippingScopeState::operator=(v18 + v19, v18);
  }
LABEL_7:
  v14 = v4 + 192 * (v7 + 1);
  if ( v3 < v14 )
    v14 = v3;
  for ( i = v4 + 192 * v7; i != v14; i += 192LL )
  {
    v16 = *(_QWORD *)(i + 176);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  }
  a1[1] += 192LL;
  return memset_0((void *)(v4 + 192 * v7), 0, 0xC0uLL);
}
