/*
 * XREFs of ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140377B54
 * Callers:
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x14031638C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14000D60C (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x14000DCF0 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x14003E778 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x14003E834 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x14003E8F0 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x140040E0C (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNTARGETSET@@@@QEAAXPEAVDMMVIDPNTARGETSET@@@Z @ 0x140049FC0 (-reset@-$auto_ptr@VDMMVIDPNTARGETSET@@@@QEAAXPEAVDMMVIDPNTARGETSET@@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAAXPEAVDMMVIDPNSOURCESET@@@Z @ 0x14004A004 (-reset@-$auto_ptr@VDMMVIDPNSOURCESET@@@@QEAAXPEAVDMMVIDPNSOURCESET@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?SetAggregator@?$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z @ 0x14004C6A0 (-SetAggregator@-$AggregatedBy@VVIDPN_MGR@@@@QEAAXPEAVVIDPN_MGR@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x140318AE0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x140378118 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1403782EC (-AddSource@DMMVIDPNSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCE@@@@@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2, unsigned __int8 a3)
{
  unsigned __int8 (__fastcall ***v3)(_QWORD); // r14
  struct DMMVIDPNSOURCESET *const *v6; // r15
  struct DMMVIDPNTARGETSET *const *v7; // r13
  DMMVIDPNSOURCESET *v8; // rax
  DMMVIDPNSOURCESET *v9; // rax
  DMMVIDPNTARGETSET *v10; // rax
  DMMVIDPNTARGETSET *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r14
  DMMVIDPNSOURCE *v15; // rsi
  struct DMMVIDEOPRESENTSOURCE *v16; // r14
  DMMVIDPNSOURCE *v17; // rax
  struct DMMVIDPNSOURCESET *v18; // rcx
  int v19; // esi
  __int64 v20; // rax
  struct VIDPN_MGR *v21; // rbx
  __int64 v22; // r14
  struct DMMVIDEOPRESENTTARGET *v23; // r14
  DMMVIDPNTARGET *v24; // rax
  DMMVIDPNTARGET *v25; // rsi
  struct DMMVIDPNTARGETSET *v26; // rcx
  int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v34; // eax
  struct DMMVIDPNSOURCESET *v35; // rax
  __int64 v36; // [rsp+20h] [rbp-48h]
  DMMVIDPNTARGET *v37; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v38[32]; // [rsp+48h] [rbp-20h] BYREF
  DMMVIDPNTARGET *v39; // [rsp+B0h] [rbp+48h] BYREF
  struct VIDPN_MGR *v40; // [rsp+B8h] [rbp+50h]
  DMMVIDPNSOURCE *v41; // [rsp+C0h] [rbp+58h] BYREF
  DMMVIDPNSOURCE *v42; // [rsp+C8h] [rbp+60h] BYREF

  v40 = a2;
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
    v34 = *((_DWORD *)this + 28);
    WdLogGlobalForLineNumber = 45;
    if ( v34 >= 0 )
      v34 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 20) = v34;
    return this;
  }
  v8 = (DMMVIDPNSOURCESET *)operator new(0x60uLL, 0x4E506456u, 256LL);
  if ( v8 )
    v9 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v8, this);
  else
    v9 = 0LL;
  auto_ptr<DMMVIDPNSOURCESET>::reset((__int64 *)this + 38, (__int64)v9);
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
    v35 = *v6;
    WdLogGlobalForLineNumber = 67;
LABEL_60:
    *((_DWORD *)this + 20) = *((_DWORD *)v35 + 4);
    return this;
  }
  v10 = (DMMVIDPNTARGETSET *)operator new(0x60uLL, 0x4E506456u, 256LL);
  if ( v10 )
    v11 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v10, this);
  else
    v11 = 0LL;
  auto_ptr<DMMVIDPNTARGETSET>::reset((__int64 *)this + 39, (__int64)v11);
  if ( !*v7 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 81;
    goto LABEL_50;
  }
  if ( !(***(unsigned __int8 (__fastcall ****)(struct DMMVIDPNTARGETSET *const))v7)(*v7) )
  {
    WdLogSingleEntry1(7LL, this);
    v35 = *v7;
    WdLogGlobalForLineNumber = 90;
    goto LABEL_60;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 14) + 72LL));
  v13 = *((_QWORD *)a2 + 14);
  v14 = *(_QWORD *)(v13 + 24);
  if ( v14 == v13 + 24 )
  {
    v15 = 0LL;
    v16 = 0LL;
  }
  else
  {
    v16 = (struct DMMVIDEOPRESENTSOURCE *)(v14 - 8);
    v15 = 0LL;
  }
  while ( v16 )
  {
    v17 = (DMMVIDPNSOURCE *)operator new(0xB8uLL, 0x4E506456u, 256LL);
    if ( v17 )
      v15 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v17, *v6, v16);
    v41 = v15;
    if ( !v15 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 115;
LABEL_43:
      *((_DWORD *)this + 20) = -1073741801;
      goto LABEL_44;
    }
    if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v15 + 8))((__int64)v15 + 64) )
    {
      WdLogSingleEntry1(7LL, this);
      WdLogGlobalForLineNumber = 124;
      *((_DWORD *)this + 20) = *((_DWORD *)v15 + 18);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v41);
LABEL_44:
      if ( v13 )
        ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
      return this;
    }
    v18 = *v6;
    v41 = 0LL;
    v42 = v15;
    v19 = DMMVIDPNSOURCESET::AddSource(v18, &v42);
    if ( v19 < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 139;
      *((_DWORD *)this + 20) = v19;
      goto LABEL_44;
    }
    v20 = *((_QWORD *)v16 + 1);
    v15 = 0LL;
    v16 = (struct DMMVIDEOPRESENTSOURCE *)(v20 - 8);
    if ( v20 == v13 + 24 )
      v16 = 0LL;
  }
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
  v21 = v40;
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v40 + 15) + 72LL), 1u);
  v13 = *((_QWORD *)v21 + 15);
  v22 = *(_QWORD *)(v13 + 24);
  if ( v22 == v13 + 24 )
    v23 = 0LL;
  else
    v23 = (struct DMMVIDEOPRESENTTARGET *)(v22 - 8);
  while ( v23 )
  {
    v24 = (DMMVIDPNTARGET *)operator new(0x80uLL, 0x4E506456u, 256LL);
    if ( v24 )
      v25 = DMMVIDPNTARGET::DMMVIDPNTARGET(v24, *v7, v23);
    else
      v25 = 0LL;
    v39 = v25;
    if ( !v25 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 165;
      goto LABEL_43;
    }
    if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v25 + 8))((__int64)v25 + 64) )
    {
      WdLogSingleEntry1(7LL, this);
      WdLogGlobalForLineNumber = 174;
      *((_DWORD *)this + 20) = *((_DWORD *)v25 + 18);
      goto LABEL_65;
    }
    v26 = *v7;
    v39 = 0LL;
    v37 = v25;
    v27 = DMMVIDPNTARGETSET::AddTarget(v26, &v37);
    if ( v27 < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 189;
      *((_DWORD *)this + 20) = v27;
LABEL_65:
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v39);
      goto LABEL_44;
    }
    v28 = *((_QWORD *)v23 + 1);
    v23 = (struct DMMVIDEOPRESENTTARGET *)(v28 - 8);
    if ( v28 == v13 + 24 )
      v23 = 0LL;
  }
  if ( v13 )
    ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
  if ( ((unsigned __int16)((2 << *((_BYTE *)this + 172)) - 1) & *((_WORD *)this + 87)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 201;
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v38,
    ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 96) >> 64),
    0,
    v12,
    v36,
    1LL);
  DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v38);
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v30, v29, v31, v32) + 24) = this;
  WdLogGlobalForLineNumber = 215;
  return this;
}
