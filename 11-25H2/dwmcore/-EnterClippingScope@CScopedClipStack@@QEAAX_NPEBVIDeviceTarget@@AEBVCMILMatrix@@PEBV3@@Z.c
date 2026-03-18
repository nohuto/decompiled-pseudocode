/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAX_NPEBVIDeviceTarget@@AEBVCMILMatrix@@PEBV3@@Z @ 0x180083400
 * Callers:
 *     ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x180081C70 (-DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScopedClipStack@@0@Z @ 0x180083CA0 (--$destruct_range@UClippingScopeState@CScopedClipStack@@@detail@@YAXPEAUClippingScopeState@CScop.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x180083CF8 (--$uninitialized_move@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V-$checked.c)
 *     ??0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z @ 0x180083DA0 (--0ClippingScopeState@CScopedClipStack@@QEAA@$$QEAU01@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@0@0V12@@Z @ 0x180255360 (--$move_backward@V-$move_iterator@PEAUClippingScopeState@CScopedClipStack@@@std@@V-$checked_arra.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScopedClipStack::EnterClippingScope(
        CScopedClipStack *this,
        char a2,
        const struct IDeviceTarget *a3,
        const struct CMILMatrix *a4,
        const struct CMILMatrix *a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v8; // r14
  __int64 v10; // rcx
  const struct IDeviceTarget *v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // r10
  signed __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  __int64 i; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  void *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  void *v25; // rbx
  CScopedClipStack *v26; // rdx
  CScopedClipStack *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  unsigned __int64 v32; // r10
  __int64 v33; // r11
  __int128 v34; // [rsp+20h] [rbp-40h] BYREF
  __int64 v35; // [rsp+30h] [rbp-30h]
  __int128 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+50h] [rbp-10h]

  v6 = *((_QWORD *)this + 1);
  v8 = *(_QWORD *)this;
  v10 = *((_QWORD *)this + 2);
  v11 = a3;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((v6 - v8) >> 6);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v10 - v6) >> 6) )
    goto LABEL_2;
  if ( v12 + 1 >= v12 )
  {
    v21 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)(0xAAAAAAAAAAAAAAABuLL * ((v10 - v8) >> 6)),
            0xAAAAAAAAAAAAAAABuLL * ((v10 - v8) >> 6),
            v12 + 1);
    v22 = operator new[](saturated_mul(v21, 0xC0uLL));
    v23 = *((_QWORD *)this + 1);
    v24 = *(_QWORD *)this;
    *(_QWORD *)&v34 = v22;
    v25 = v22;
    *((_QWORD *)&v34 + 1) = v12;
    v35 = 0LL;
    v36 = v34;
    v37 = 0LL;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>)(
      &v34,
      v24,
      v23,
      &v36);
    detail::destruct_range<CScopedClipStack::ClippingScopeState>(*(_QWORD *)this, *((_QWORD *)this + 1));
    v26 = *(CScopedClipStack **)this;
    v27 = 0LL;
    *(_QWORD *)this = v25;
    if ( v26 != (CScopedClipStack *)((char *)this + 24) )
      v27 = v26;
    operator delete(v27);
    v8 = *(_QWORD *)this;
    v6 = *(_QWORD *)this + 192 * v12;
    v28 = *(_QWORD *)this + 192 * v21;
    *((_QWORD *)this + 1) = v6;
    *((_QWORD *)this + 2) = v28;
LABEL_2:
    v35 = 0LL;
    v13 = 1LL;
    v14 = 0xAAAAAAAAAAAAAAABuLL * ((v6 - v8) >> 6);
    v37 = 0LL;
    *((_QWORD *)&v34 + 1) = 1LL;
    v15 = v14 - v12;
    v5 = v8 + ((v6 - v8) >> 6 << 6);
    *(_QWORD *)&v34 = v5;
    if ( !v5 )
      goto LABEL_15;
    v37 = 1LL;
    v16 = 0xAAAAAAAAAAAAAAABuLL * ((v6 - v8) >> 6) - v12;
    if ( v15 > 1 )
      v16 = 1LL;
    v35 = 1LL;
    if ( v6 == v6 - 192 * v16 )
      goto LABEL_6;
    goto LABEL_27;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_27:
  v29 = v34;
  v30 = v35;
  do
  {
    v31 = v6 - 192;
    if ( !v29 )
      goto LABEL_15;
    if ( !v13 )
      goto LABEL_15;
    v32 = v30 - 1;
    v30 = v32;
    if ( v32 >= *((_QWORD *)&v34 + 1) )
      goto LABEL_15;
    CScopedClipStack::ClippingScopeState::ClippingScopeState(v29 + 192 * v32, v31);
  }
  while ( v6 != v33 );
  v11 = a3;
LABEL_6:
  if ( v15 <= 1 )
    goto LABEL_7;
  if ( v14 && (!v8 || v14 < 0) )
LABEL_15:
    _invalid_parameter_noinfo_noreturn();
  *((_QWORD *)&v34 + 1) = v14;
  v35 = v14;
  *(_QWORD *)&v34 = v8;
  ((void (__fastcall *)(__int128 *, unsigned __int64, __int64, __int128 *))std::move_backward<std::move_iterator<CScopedClipStack::ClippingScopeState *>,stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>>)(
    &v36,
    v8 + 192 * v12,
    v8 + 192 * v14 - 192,
    &v34);
LABEL_7:
  v17 = v8 + 192 * (v12 + 1);
  if ( v5 < v17 )
    v17 = v5;
  for ( i = v8 + 192 * v12; i != v17; i += 192LL )
  {
    v19 = *(_QWORD *)(i + 176);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  }
  *((_QWORD *)this + 1) += 192LL;
  memset_0((void *)(v8 + 192 * v12), 0, 0xC0uLL);
  v20 = *((_QWORD *)this + 1);
  *(_BYTE *)(v20 - 8) = a2;
  *(_QWORD *)(v20 - 192) = v11;
  if ( a5 )
  {
    *(_OWORD *)(v20 - 152) = *(_OWORD *)a4;
    *(_OWORD *)(v20 - 136) = *((_OWORD *)a4 + 1);
    *(_OWORD *)(v20 - 120) = *((_OWORD *)a4 + 2);
    *(_OWORD *)(v20 - 104) = *((_OWORD *)a4 + 3);
    *(_DWORD *)(v20 - 88) = *((_DWORD *)a4 + 16);
    *(_OWORD *)(v20 - 84) = *(_OWORD *)a5;
    *(_OWORD *)(v20 - 68) = *((_OWORD *)a5 + 1);
    *(_OWORD *)(v20 - 52) = *((_OWORD *)a5 + 2);
    *(_OWORD *)(v20 - 36) = *((_OWORD *)a5 + 3);
    *(_DWORD *)(v20 - 20) = *((_DWORD *)a5 + 16);
  }
  else
  {
    *(_QWORD *)(v20 - 152) = 1065353216LL;
    *(_QWORD *)(v20 - 144) = 0LL;
    *(_DWORD *)(v20 - 136) = 0;
    *(_QWORD *)(v20 - 132) = 1065353216LL;
    *(_QWORD *)(v20 - 124) = 0LL;
    *(_DWORD *)(v20 - 116) = 0;
    *(_QWORD *)(v20 - 112) = 1065353216LL;
    *(_QWORD *)(v20 - 104) = 0LL;
    *(_DWORD *)(v20 - 96) = 0;
    *(_DWORD *)(v20 - 92) = 1065353216;
    *(_BYTE *)(v20 - 87) &= 0xE9u;
    *(_BYTE *)(v20 - 87) |= 0x29u;
    *(_BYTE *)(v20 - 88) = -86;
    *(_QWORD *)(v20 - 84) = 1065353216LL;
    *(_QWORD *)(v20 - 76) = 0LL;
    *(_DWORD *)(v20 - 68) = 0;
    *(_QWORD *)(v20 - 64) = 1065353216LL;
    *(_QWORD *)(v20 - 56) = 0LL;
    *(_DWORD *)(v20 - 48) = 0;
    *(_QWORD *)(v20 - 44) = 1065353216LL;
    *(_QWORD *)(v20 - 36) = 0LL;
    *(_DWORD *)(v20 - 28) = 0;
    *(_DWORD *)(v20 - 24) = 1065353216;
    *(_BYTE *)(v20 - 19) &= 0xE9u;
    *(_BYTE *)(v20 - 19) |= 0x29u;
    *(_BYTE *)(v20 - 20) = -86;
  }
}
