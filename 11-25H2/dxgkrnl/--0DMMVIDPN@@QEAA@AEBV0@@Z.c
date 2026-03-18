/*
 * XREFs of ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402D0358
 * Callers:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x140057CB8 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402D0178 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403DA174 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14001CBEC (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x14001D244 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x14003EF00 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x14003F050 (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x14004135C (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x140048080 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x14004A99C (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNTARGET@@@@QEAAXPEAVDMMVIDPNTARGET@@@Z @ 0x14004AB94 (-reset@-$auto_ptr@VDMMVIDPNTARGET@@@@QEAAXPEAVDMMVIDPNTARGET@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1402C58F0 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402CE380 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402D12C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402D1388 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, const struct DMMVIDPNSOURCESET **a2, unsigned __int8 a3)
{
  DMMVIDPNPRESENTPATH *v3; // r13
  unsigned __int8 (__fastcall ***v4)(_QWORD); // r14
  __int64 v7; // r9
  DMMVIDPNSOURCESET *v8; // rax
  DMMVIDPNSOURCESET *v9; // rbx
  DMMVIDPNSOURCESET *v10; // rcx
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rcx
  const struct DMMVIDPNSOURCESET *v16; // rbx
  __int64 v17; // rbx
  DMMVIDPNTARGETSET *v18; // rax
  DMMVIDPNTARGETSET *v19; // rdi
  DMMVIDPNTARGETSET *v20; // rcx
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rdi
  _QWORD *v24; // r15
  int v25; // r12d
  __int64 v26; // r14
  _QWORD *v27; // r14
  _QWORD *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rdi
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  DMMVIDPNTARGET *v35; // rax
  __int64 v36; // r9
  DMMVIDPNTARGET *v37; // rax
  const struct DMMVIDPNSOURCESET **v38; // r12
  const struct DMMVIDPNSOURCESET *v39; // rdi
  __int64 v40; // r8
  __int64 v41; // r9
  const struct DMMVIDPNSOURCESET **v42; // r15
  const struct DMMVIDPNPRESENTPATH *v43; // r15
  _QWORD *v44; // rcx
  __int64 v45; // r14
  _QWORD *v46; // rcx
  __int64 v47; // rdi
  _QWORD *v48; // rax
  DMMVIDPNPRESENTPATH *v49; // rax
  __int64 v50; // r9
  int v51; // eax
  int v52; // r12d
  const struct DMMVIDPNSOURCESET **v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v61; // r9
  int v62; // eax
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 (__fastcall ***v66)(_QWORD, __int64); // r14
  _QWORD *v67; // rcx
  int v68; // r14d
  _QWORD *v69; // rax
  _BYTE v70[24]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v71[32]; // [rsp+58h] [rbp-20h] BYREF
  __int64 (__fastcall ***v72)(_QWORD, __int64); // [rsp+C0h] [rbp+48h] BYREF
  const struct DMMVIDPNSOURCESET **v73; // [rsp+C8h] [rbp+50h]
  DMMVIDPNPRESENTPATH *v74; // [rsp+D0h] [rbp+58h] BYREF
  __int64 (__fastcall ***v75)(_QWORD, __int64); // [rsp+D8h] [rbp+60h] BYREF

  v73 = a2;
  v3 = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  v4 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 96);
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
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 22) = 1;
  if ( (**v4)(v4) )
  {
    v8 = (DMMVIDPNSOURCESET *)operator new(0x60uLL, 0x4E506456u, 256LL, v7);
    if ( v8 )
      v9 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v8, a2[38]);
    else
      v9 = 0LL;
    v10 = (DMMVIDPNSOURCESET *)*((_QWORD *)this + 38);
    if ( v9 != v10 && v10 )
      (*(void (__fastcall **)(DMMVIDPNSOURCESET *, __int64))(*(_QWORD *)v10 + 16LL))(v10, 1LL);
    *((_QWORD *)this + 38) = v9;
    if ( v9 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(DMMVIDPNSOURCESET *))v9)(v9) )
      {
        ContainedBy<DMMVIDPN>::SetContainer(*((_QWORD *)this + 38) + 64LL, (__int64)this);
        v12 = (_QWORD *)(*((_QWORD *)this + 38) + 24LL);
        if ( (_QWORD *)*v12 == v12 )
          v13 = 0LL;
        else
          v13 = *v12 - 8LL;
        while ( v13 )
        {
          if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v13 + 64))(v13 + 64) )
          {
            WdLogSingleEntry1(7LL, v13);
            v63 = *(_DWORD *)(v13 + 72);
            WdLogGlobalForLineNumber = 270;
            goto LABEL_106;
          }
          v14 = *((_QWORD *)this + 38);
          if ( v14 )
          {
            if ( *(_QWORD *)(v13 + 40) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 86;
            }
            *(_QWORD *)(v13 + 40) = v14;
          }
          else
          {
            WdLogSingleEntry2(2LL, v13 + 32, *(_QWORD *)(v13 + 40));
            WdLogGlobalForLineNumber = 79;
          }
          v15 = *(_QWORD *)(v13 + 8);
          v13 = v15 - 8;
          if ( v15 == *((_QWORD *)this + 38) + 24LL )
            v13 = 0LL;
        }
        v16 = a2[6];
        _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v16 + 15) + 72LL), 1u);
        v17 = *((_QWORD *)v16 + 15);
        v18 = (DMMVIDPNTARGETSET *)operator new(0x60uLL, 0x4E506456u, 256LL, v11);
        if ( v18 )
          v19 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v18, a2[39]);
        else
          v19 = 0LL;
        v20 = (DMMVIDPNTARGETSET *)*((_QWORD *)this + 39);
        if ( v19 != v20 && v20 )
          (*(void (__fastcall **)(DMMVIDPNTARGETSET *, __int64))(*(_QWORD *)v20 + 16LL))(v20, 1LL);
        *((_QWORD *)this + 39) = v19;
        if ( v19 )
        {
          if ( (**(unsigned __int8 (__fastcall ***)(DMMVIDPNTARGETSET *))v19)(v19) )
          {
            ContainedBy<DMMVIDPN>::SetContainer(*((_QWORD *)this + 39) + 64LL, (__int64)this);
            v22 = (_QWORD *)(*((_QWORD *)this + 39) + 24LL);
            if ( (_QWORD *)*v22 == v22 )
              v23 = 0LL;
            else
              v23 = *v22 - 8LL;
            v24 = (_QWORD *)(v17 + 24);
            while ( v23 )
            {
              if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v23 + 64))(v23 + 64) )
              {
                WdLogSingleEntry1(7LL, v23);
                *((_DWORD *)this + 20) = *(_DWORD *)(v23 + 72);
                WdLogGlobalForLineNumber = 318;
                goto LABEL_94;
              }
              v25 = *(_DWORD *)(v23 + 24);
              if ( v25 == -1 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1025;
              }
              v24 = (_QWORD *)(v17 + 24);
              v26 = *(_QWORD *)(v17 + 24);
              if ( v26 != v17 + 24 )
              {
                v27 = (_QWORD *)(v26 - 8);
                if ( v27 )
                {
                  while ( *((_DWORD *)v27 + 6) != v25 )
                  {
                    v28 = (_QWORD *)v27[1];
                    v27 = v28 - 1;
                    if ( v28 == v24 )
                      v27 = 0LL;
                    if ( !v27 )
                      goto LABEL_42;
                  }
                  _InterlockedIncrement((volatile signed __int32 *)v27 + 18);
                  ReferenceCounted::Release((ReferenceCounted *)(*(_QWORD *)(v23 + 96) + 64LL));
                  *(_QWORD *)(v23 + 96) = v27;
                }
              }
LABEL_42:
              v29 = *((_QWORD *)this + 39);
              if ( v29 )
              {
                if ( *(_QWORD *)(v23 + 40) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 86;
                }
                *(_QWORD *)(v23 + 40) = v29;
              }
              else
              {
                WdLogSingleEntry2(2LL, v23 + 32, *(_QWORD *)(v23 + 40));
                WdLogGlobalForLineNumber = 79;
              }
              v30 = *(_QWORD *)(v23 + 8);
              v23 = v30 - 8;
              if ( v30 == *((_QWORD *)this + 39) + 24LL )
                v23 = 0LL;
            }
            if ( (_QWORD *)*v24 == v24 )
              v31 = 0LL;
            else
              v31 = *v24 - 8LL;
            while ( v31 )
            {
              v32 = (_QWORD *)(*((_QWORD *)this + 39) + 24LL);
              if ( (_QWORD *)*v32 == v32 || (v33 = *v32 - 8LL, *v32 == 8LL) )
              {
LABEL_58:
                v72 = 0LL;
                v35 = (DMMVIDPNTARGET *)operator new(0x80uLL, 0x4E506456u, 256LL, v21);
                if ( v35 )
                  v37 = DMMVIDPNTARGET::DMMVIDPNTARGET(
                          v35,
                          *((struct DMMVIDPNTARGETSET *const *)this + 39),
                          (struct DMMVIDEOPRESENTTARGET *const)v31,
                          v36);
                else
                  v37 = 0LL;
                auto_ptr<DMMVIDPNTARGET>::reset(&v72, (__int64 (__fastcall ***)(_QWORD, __int64))v37);
                v66 = v72;
                if ( !v72 )
                {
                  WdLogSingleEntry0(6LL);
                  WdLogGlobalForLineNumber = 355;
                  *((_DWORD *)this + 20) = -1073741801;
                  goto LABEL_127;
                }
                if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v72[8])(v72 + 8) )
                {
                  WdLogSingleEntry1(7LL, this);
                  WdLogGlobalForLineNumber = 364;
                  *((_DWORD *)this + 20) = *((_DWORD *)v66 + 18);
                  goto LABEL_127;
                }
                v67 = (_QWORD *)*((_QWORD *)this + 39);
                v72 = 0LL;
                v75 = v66;
                v68 = DMMVIDPNTARGETSET::AddTarget(v67, &v75);
                if ( v68 < 0 )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 379;
                  *((_DWORD *)this + 20) = v68;
LABEL_127:
                  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v72);
                  goto LABEL_94;
                }
                auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v72);
              }
              else
              {
                while ( *(_DWORD *)(v33 + 24) != *(_DWORD *)(v31 + 24) )
                {
                  v34 = *(_QWORD **)(v33 + 8);
                  v33 = (__int64)(v34 - 1);
                  if ( v34 == v32 )
                    v33 = 0LL;
                  if ( !v33 )
                    goto LABEL_58;
                }
              }
              v69 = *(_QWORD **)(v31 + 8);
              v31 = (__int64)(v69 - 1);
              if ( v69 == v24 )
                v31 = 0LL;
            }
            v38 = v73;
            v39 = v73[6];
            if ( v39 && *((_QWORD *)this + 6) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 140;
            }
            *((_QWORD *)this + 6) = v39;
            if ( ((unsigned __int16)((2 << *((_BYTE *)this + 172)) - 1) & *((_WORD *)this + 87)) != 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 396;
            }
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              v71,
              ((unsigned __int64)this + 152) & -(__int64)((DMMVIDPN *)((char *)this + 96) != 0LL),
              0LL);
            DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v71);
            LOBYTE(v40) = 1;
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              v70,
              ((unsigned __int64)this + 152) & -(__int64)((DMMVIDPN *)((char *)this + 96) != 0LL),
              v40);
            v42 = (const struct DMMVIDPNSOURCESET **)v38[15];
            if ( v42 == v38 + 15 )
              v43 = 0LL;
            else
              v43 = (const struct DMMVIDPNPRESENTPATH *)(v42 - 1);
            while ( 1 )
            {
              if ( !v43 )
              {
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v70);
                *((_DWORD *)this + 22) = 2;
                v59 = WdLogNewEntry5_WdTrace(v56, v55, v57, v58);
                *(_QWORD *)(v59 + 24) = this;
                *(_QWORD *)(v59 + 32) = v38;
                WdLogGlobalForLineNumber = 509;
                goto LABEL_94;
              }
              v44 = (_QWORD *)(*((_QWORD *)this + 38) + 24LL);
              if ( (_QWORD *)*v44 == v44 )
              {
                v45 = 0LL;
              }
              else
              {
                v45 = *v44 - 8LL;
                if ( *v44 != 8LL )
                {
                  do
                  {
                    if ( *(_DWORD *)(v45 + 24) == *(_DWORD *)(*((_QWORD *)v43 + 11) + 24LL) )
                      break;
                    v54 = *(_QWORD **)(v45 + 8);
                    v45 = (__int64)(v54 - 1);
                    if ( v54 == v44 )
                      v45 = 0LL;
                  }
                  while ( v45 );
                }
              }
              v46 = (_QWORD *)(*((_QWORD *)this + 39) + 24LL);
              if ( (_QWORD *)*v46 == v46 )
              {
                v47 = 0LL;
              }
              else
              {
                v47 = *v46 - 8LL;
                if ( *v46 != 8LL )
                {
                  do
                  {
                    if ( *(_DWORD *)(v47 + 24) == *(_DWORD *)(*((_QWORD *)v43 + 12) + 24LL) )
                      break;
                    v48 = *(_QWORD **)(v47 + 8);
                    v47 = (__int64)(v48 - 1);
                    if ( v48 == v46 )
                      v47 = 0LL;
                  }
                  while ( v47 );
                }
              }
              v49 = (DMMVIDPNPRESENTPATH *)operator new(0xC0uLL, 0x4E506456u, 256LL, v41);
              if ( v49 )
                v3 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
                       v49,
                       (struct DMMVIDPNSOURCE *)v45,
                       (struct DMMVIDPNTARGET *)v47,
                       v43);
              v74 = v3;
              if ( !v3 )
              {
                WdLogSingleEntry0(6LL);
                WdLogGlobalForLineNumber = 448;
                *((_DWORD *)this + 20) = -1073741801;
                goto LABEL_100;
              }
              if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v3 + 7))((__int64)v3 + 56) )
                break;
              v51 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPN *)((char *)this + 96), v3, 2LL, v50);
              v52 = v51;
              if ( v51 == -1071774920 )
              {
                WdLogSingleEntry4(7LL, *(unsigned int *)(v45 + 24), *(unsigned int *)(v47 + 24), this, v73 + 12);
                WdLogGlobalForLineNumber = 475;
                v62 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPN *)((char *)this + 96), v3, 1LL, v61);
                v3 = 0LL;
                v52 = v62;
                if ( v62 < 0 )
                {
                  WdLogSingleEntry5(2LL, *(unsigned int *)(v45 + 24), *(unsigned int *)(v47 + 24), this, v73 + 12, v62);
                  WdLogGlobalForLineNumber = 484;
LABEL_130:
                  *((_DWORD *)this + 20) = v52;
                  goto LABEL_132;
                }
              }
              else
              {
                v3 = 0LL;
                if ( v51 < 0 )
                {
                  WdLogSingleEntry5(2LL, *(unsigned int *)(v45 + 24), *(unsigned int *)(v47 + 24), this, v73 + 12, v51);
                  WdLogGlobalForLineNumber = 493;
                  goto LABEL_130;
                }
              }
              v53 = (const struct DMMVIDPNSOURCESET **)*((_QWORD *)v43 + 1);
              v38 = v73;
              v74 = 0LL;
              v43 = (const struct DMMVIDPNPRESENTPATH *)(v53 - 1);
              if ( v53 == v73 + 15 )
                v43 = 0LL;
            }
            WdLogSingleEntry4(7LL, *(unsigned int *)(v45 + 24), *(unsigned int *)(v47 + 24), this, v38 + 12);
            WdLogGlobalForLineNumber = 457;
            *((_DWORD *)this + 20) = *((_DWORD *)v3 + 16);
LABEL_132:
            auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v74);
LABEL_100:
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v70);
          }
          else
          {
            WdLogSingleEntry1(7LL, this);
            v64 = *((_QWORD *)this + 39);
            WdLogGlobalForLineNumber = 301;
            *((_DWORD *)this + 20) = *(_DWORD *)(v64 + 16);
          }
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 292;
          *((_DWORD *)this + 20) = -1073741801;
        }
LABEL_94:
        if ( v17 )
          ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
      }
      else
      {
        WdLogSingleEntry1(7LL, this);
        v65 = *((_QWORD *)this + 38);
        WdLogGlobalForLineNumber = 253;
        *((_DWORD *)this + 20) = *(_DWORD *)(v65 + 16);
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 244;
      *((_DWORD *)this + 20) = -1073741801;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, this);
    v63 = *((_DWORD *)this + 28);
    WdLogGlobalForLineNumber = 230;
    if ( v63 >= 0 )
      v63 = *((_DWORD *)this + 40);
LABEL_106:
    *((_DWORD *)this + 20) = v63;
  }
  return this;
}
