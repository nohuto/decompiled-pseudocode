/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1402C532C
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402C51C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14001CBEC (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x14001D2D0 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x14003ED88 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x14003EE44 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x14003EF00 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x14004135C (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNTARGETSET@@@@QEAAXPEAVDMMVIDPNTARGETSET@@@Z @ 0x14004A83C (-reset@-$auto_ptr@VDMMVIDPNTARGETSET@@@@QEAAXPEAVDMMVIDPNTARGETSET@@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAAXPEAVDMMVIDPNSOURCESET@@@Z @ 0x14004A880 (-reset@-$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAAXPEAVDMMVIDPNSOURCESET@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x14004CBF0 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1402C58F0 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1402C5AC4 (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402D12C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402D1388 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2, unsigned __int8 a3)
{
  unsigned __int8 (__fastcall ***v3)(_QWORD); // r14
  struct DMMVIDPNSOURCESET *const *v6; // r15
  struct DMMVIDPNTARGETSET *const *v7; // r13
  __int64 v8; // r9
  DMMVIDPNSOURCESET *v9; // rax
  DMMVIDPNSOURCESET *v10; // rax
  __int64 v11; // r9
  DMMVIDPNTARGETSET *v12; // rax
  DMMVIDPNTARGETSET *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // r14
  DMMVIDPNSOURCE *v17; // rsi
  struct DMMVIDEOPRESENTSOURCE *v18; // r14
  DMMVIDPNSOURCE *v19; // rax
  struct DMMVIDPNSOURCESET *v20; // rcx
  int v21; // esi
  __int64 v22; // rax
  struct VIDPN_MGR *v23; // rbx
  __int64 v24; // r14
  struct DMMVIDEOPRESENTTARGET *v25; // r14
  DMMVIDPNTARGET *v26; // rax
  __int64 v27; // r9
  DMMVIDPNTARGET *v28; // rsi
  struct DMMVIDPNTARGETSET *v29; // rcx
  int v30; // esi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int v37; // eax
  struct DMMVIDPNSOURCESET *v38; // rax
  DMMVIDPNTARGET *v39; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v40[32]; // [rsp+48h] [rbp-20h] BYREF
  DMMVIDPNTARGET *v41; // [rsp+B0h] [rbp+48h] BYREF
  struct VIDPN_MGR *v42; // [rsp+B8h] [rbp+50h]
  DMMVIDPNSOURCE *v43; // [rsp+C0h] [rbp+58h] BYREF
  DMMVIDPNSOURCE *v44; // [rsp+C8h] [rbp+60h] BYREF

  v42 = a2;
  *(_QWORD *)this = &SetElement::`vftable';
  v3 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 96);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
  *((_DWORD *)this + 8) = 1;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 1833172997;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96), (unsigned __int8)a2, a3);
  v6 = (struct DMMVIDPNSOURCESET *const *)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v7 = (struct DMMVIDPNTARGETSET *const *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 34;
  }
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)this + 40, (__int64)a2);
  if ( !(**v3)(v3) )
  {
    WdLogSingleEntry1(7LL, this);
    v37 = *((_DWORD *)this + 28);
    WdLogGlobalForLineNumber = 45;
    if ( v37 >= 0 )
      v37 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 20) = v37;
    return this;
  }
  v9 = (DMMVIDPNSOURCESET *)operator new(0x60uLL, 0x4E506456u, 256LL, v8);
  if ( v9 )
    v10 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v9, this);
  else
    v10 = 0LL;
  auto_ptr<DMMVIDPNSOURCESET>::reset((__int64 *)this + 38, (__int64)v10);
  if ( !*v6 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 58;
LABEL_50:
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(***(unsigned __int8 (__fastcall ****)(struct DMMVIDPNSOURCESET *const))v6)(*v6) )
  {
    WdLogSingleEntry1(7LL, this);
    v38 = *v6;
    WdLogGlobalForLineNumber = 67;
LABEL_60:
    *((_DWORD *)this + 20) = *((_DWORD *)v38 + 4);
    return this;
  }
  v12 = (DMMVIDPNTARGETSET *)operator new(0x60uLL, 0x4E506456u, 256LL, v11);
  if ( v12 )
    v13 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v12, this);
  else
    v13 = 0LL;
  auto_ptr<DMMVIDPNTARGETSET>::reset((__int64 *)this + 39, (__int64)v13);
  if ( !*v7 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 81;
    goto LABEL_50;
  }
  if ( !(***(unsigned __int8 (__fastcall ****)(struct DMMVIDPNTARGETSET *const))v7)(*v7) )
  {
    WdLogSingleEntry1(7LL, this);
    v38 = *v7;
    WdLogGlobalForLineNumber = 90;
    goto LABEL_60;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 14) + 72LL));
  v15 = *((_QWORD *)a2 + 14);
  v16 = *(_QWORD *)(v15 + 24);
  if ( v16 == v15 + 24 )
  {
    v17 = 0LL;
    v18 = 0LL;
  }
  else
  {
    v18 = (struct DMMVIDEOPRESENTSOURCE *)(v16 - 8);
    v17 = 0LL;
  }
  while ( v18 )
  {
    v19 = (DMMVIDPNSOURCE *)operator new(0xB8uLL, 0x4E506456u, 256LL, v14);
    if ( v19 )
      v17 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v19, *v6, v18);
    v43 = v17;
    if ( !v17 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 115;
LABEL_43:
      *((_DWORD *)this + 20) = -1073741801;
      goto LABEL_44;
    }
    if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v17 + 8))((__int64)v17 + 64) )
    {
      WdLogSingleEntry1(7LL, this);
      WdLogGlobalForLineNumber = 124;
      *((_DWORD *)this + 20) = *((_DWORD *)v17 + 18);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v43);
LABEL_44:
      if ( v15 )
        ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
      return this;
    }
    v20 = *v6;
    v43 = 0LL;
    v44 = v17;
    v21 = DMMVIDPNSOURCESET::AddSource(v20, &v44);
    if ( v21 < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 139;
      *((_DWORD *)this + 20) = v21;
      goto LABEL_44;
    }
    v22 = *((_QWORD *)v18 + 1);
    v17 = 0LL;
    v18 = (struct DMMVIDEOPRESENTSOURCE *)(v22 - 8);
    if ( v22 == v15 + 24 )
      v18 = 0LL;
  }
  if ( v15 )
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
  v23 = v42;
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v42 + 15) + 72LL), 1u);
  v15 = *((_QWORD *)v23 + 15);
  v24 = *(_QWORD *)(v15 + 24);
  if ( v24 == v15 + 24 )
    v25 = 0LL;
  else
    v25 = (struct DMMVIDEOPRESENTTARGET *)(v24 - 8);
  while ( v25 )
  {
    v26 = (DMMVIDPNTARGET *)operator new(0x80uLL, 0x4E506456u, 256LL, v14);
    if ( v26 )
      v28 = DMMVIDPNTARGET::DMMVIDPNTARGET(v26, *v7, v25, v27);
    else
      v28 = 0LL;
    v41 = v28;
    if ( !v28 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 165;
      goto LABEL_43;
    }
    if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v28 + 8))((__int64)v28 + 64) )
    {
      WdLogSingleEntry1(7LL, this);
      WdLogGlobalForLineNumber = 174;
      *((_DWORD *)this + 20) = *((_DWORD *)v28 + 18);
      goto LABEL_65;
    }
    v29 = *v7;
    v41 = 0LL;
    v39 = v28;
    v30 = DMMVIDPNTARGETSET::AddTarget(v29, &v39);
    if ( v30 < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 189;
      *((_DWORD *)this + 20) = v30;
LABEL_65:
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v41);
      goto LABEL_44;
    }
    v31 = *((_QWORD *)v25 + 1);
    v25 = (struct DMMVIDEOPRESENTTARGET *)(v31 - 8);
    if ( v31 == v15 + 24 )
      v25 = 0LL;
  }
  if ( v15 )
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
  if ( ((unsigned __int16)((2 << *((_BYTE *)this + 172)) - 1) & *((_WORD *)this + 87)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 201;
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    v40,
    ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 96) >> 64),
    0LL);
  DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v40);
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v33, v32, v34, v35) + 24) = this;
  WdLogGlobalForLineNumber = 215;
  return this;
}
