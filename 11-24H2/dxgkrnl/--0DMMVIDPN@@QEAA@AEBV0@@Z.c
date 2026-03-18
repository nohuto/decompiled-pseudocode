/*
 * XREFs of ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x140316E98
 * Callers:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1400577A0 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140316CB4 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403D3284 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14000D60C (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x14000DC64 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x14003E8F0 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x14003EA40 (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x140040E0C (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1400477F4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x14004A250 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNTARGET@@@@QEAAXPEAVDMMVIDPNTARGET@@@Z @ 0x14004A6E0 (-reset@-$auto_ptr@VDMMVIDPNTARGET@@@@QEAAXPEAVDMMVIDPNTARGET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x140318AE0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x14031AF30 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x140378118 (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, const struct DMMVIDPNSOURCESET **a2, unsigned __int8 a3)
{
  DMMVIDPNPRESENTPATH *v3; // r13
  unsigned __int8 (__fastcall ***v4)(_QWORD); // r14
  DMMVIDPNSOURCESET *v7; // rax
  DMMVIDPNSOURCESET *v8; // rbx
  DMMVIDPNSOURCESET *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rcx
  const struct DMMVIDPNSOURCESET *v14; // rbx
  __int64 v15; // rbx
  DMMVIDPNTARGETSET *v16; // rax
  DMMVIDPNTARGETSET *v17; // rdi
  DMMVIDPNTARGETSET *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdi
  _QWORD *v21; // r15
  int v22; // r12d
  __int64 v23; // r14
  _QWORD *v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rdi
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  DMMVIDPNTARGET *v32; // rax
  DMMVIDPNTARGET *v33; // rax
  const struct DMMVIDPNSOURCESET **v34; // r12
  const struct DMMVIDPNSOURCESET *v35; // rdi
  __int64 v36; // r8
  const struct DMMVIDPNSOURCESET **v37; // r15
  const struct DMMVIDPNPRESENTPATH *v38; // r15
  _QWORD *v39; // rcx
  __int64 v40; // r14
  _QWORD *v41; // rcx
  __int64 v42; // rdi
  _QWORD *v43; // rax
  DMMVIDPNPRESENTPATH *v44; // rax
  int v45; // eax
  int v46; // r12d
  const struct DMMVIDPNSOURCESET **v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  int v55; // eax
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 (__fastcall ***v59)(_QWORD, __int64); // r14
  __int64 v60; // rcx
  int v61; // r14d
  _QWORD *v62; // rax
  _BYTE v63[24]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v64[32]; // [rsp+58h] [rbp-20h] BYREF
  __int64 (__fastcall ***v65)(_QWORD, __int64); // [rsp+C0h] [rbp+48h] BYREF
  const struct DMMVIDPNSOURCESET **v66; // [rsp+C8h] [rbp+50h]
  DMMVIDPNPRESENTPATH *v67; // [rsp+D0h] [rbp+58h] BYREF
  __int64 (__fastcall ***v68)(_QWORD, __int64); // [rsp+D8h] [rbp+60h] BYREF

  v66 = a2;
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
    v7 = (DMMVIDPNSOURCESET *)operator new(0x60uLL, 0x4E506456u, 256LL);
    if ( v7 )
      v8 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v7, a2[38]);
    else
      v8 = 0LL;
    v9 = (DMMVIDPNSOURCESET *)*((_QWORD *)this + 38);
    if ( v8 != v9 && v9 )
      (*(void (__fastcall **)(DMMVIDPNSOURCESET *, __int64))(*(_QWORD *)v9 + 16LL))(v9, 1LL);
    *((_QWORD *)this + 38) = v8;
    if ( v8 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(DMMVIDPNSOURCESET *))v8)(v8) )
      {
        ContainedBy<DMMVIDPN>::SetContainer(*((_QWORD *)this + 38) + 64LL, (__int64)this);
        v10 = (_QWORD *)(*((_QWORD *)this + 38) + 24LL);
        if ( (_QWORD *)*v10 == v10 )
          v11 = 0LL;
        else
          v11 = *v10 - 8LL;
        while ( v11 )
        {
          if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v11 + 64))(v11 + 64) )
          {
            WdLogSingleEntry1(7LL, v11);
            v56 = *(_DWORD *)(v11 + 72);
            WdLogGlobalForLineNumber = 270;
            goto LABEL_106;
          }
          v12 = *((_QWORD *)this + 38);
          if ( v12 )
          {
            if ( *(_QWORD *)(v11 + 40) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 86;
            }
            *(_QWORD *)(v11 + 40) = v12;
          }
          else
          {
            WdLogSingleEntry2(2LL, v11 + 32, *(_QWORD *)(v11 + 40));
            WdLogGlobalForLineNumber = 79;
          }
          v13 = *(_QWORD *)(v11 + 8);
          v11 = v13 - 8;
          if ( v13 == *((_QWORD *)this + 38) + 24LL )
            v11 = 0LL;
        }
        v14 = a2[6];
        _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v14 + 15) + 72LL), 1u);
        v15 = *((_QWORD *)v14 + 15);
        v16 = (DMMVIDPNTARGETSET *)operator new(0x60uLL, 0x4E506456u, 256LL);
        if ( v16 )
          v17 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v16, a2[39]);
        else
          v17 = 0LL;
        v18 = (DMMVIDPNTARGETSET *)*((_QWORD *)this + 39);
        if ( v17 != v18 && v18 )
          (*(void (__fastcall **)(DMMVIDPNTARGETSET *, __int64))(*(_QWORD *)v18 + 16LL))(v18, 1LL);
        *((_QWORD *)this + 39) = v17;
        if ( v17 )
        {
          if ( (**(unsigned __int8 (__fastcall ***)(DMMVIDPNTARGETSET *))v17)(v17) )
          {
            ContainedBy<DMMVIDPN>::SetContainer(*((_QWORD *)this + 39) + 64LL, (__int64)this);
            v19 = (_QWORD *)(*((_QWORD *)this + 39) + 24LL);
            if ( (_QWORD *)*v19 == v19 )
              v20 = 0LL;
            else
              v20 = *v19 - 8LL;
            v21 = (_QWORD *)(v15 + 24);
            while ( v20 )
            {
              if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v20 + 64))(v20 + 64) )
              {
                WdLogSingleEntry1(7LL, v20);
                *((_DWORD *)this + 20) = *(_DWORD *)(v20 + 72);
                WdLogGlobalForLineNumber = 318;
                goto LABEL_94;
              }
              v22 = *(_DWORD *)(v20 + 24);
              if ( v22 == -1 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 1039;
              }
              v21 = (_QWORD *)(v15 + 24);
              v23 = *(_QWORD *)(v15 + 24);
              if ( v23 != v15 + 24 )
              {
                v24 = (_QWORD *)(v23 - 8);
                if ( v24 )
                {
                  while ( *((_DWORD *)v24 + 6) != v22 )
                  {
                    v25 = (_QWORD *)v24[1];
                    v24 = v25 - 1;
                    if ( v25 == v21 )
                      v24 = 0LL;
                    if ( !v24 )
                      goto LABEL_42;
                  }
                  _InterlockedIncrement((volatile signed __int32 *)v24 + 18);
                  ReferenceCounted::Release((ReferenceCounted *)(*(_QWORD *)(v20 + 96) + 64LL));
                  *(_QWORD *)(v20 + 96) = v24;
                }
              }
LABEL_42:
              v26 = *((_QWORD *)this + 39);
              if ( v26 )
              {
                if ( *(_QWORD *)(v20 + 40) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 86;
                }
                *(_QWORD *)(v20 + 40) = v26;
              }
              else
              {
                WdLogSingleEntry2(2LL, v20 + 32, *(_QWORD *)(v20 + 40));
                WdLogGlobalForLineNumber = 79;
              }
              v27 = *(_QWORD *)(v20 + 8);
              v20 = v27 - 8;
              if ( v27 == *((_QWORD *)this + 39) + 24LL )
                v20 = 0LL;
            }
            if ( (_QWORD *)*v21 == v21 )
              v28 = 0LL;
            else
              v28 = *v21 - 8LL;
            while ( v28 )
            {
              v29 = (_QWORD *)(*((_QWORD *)this + 39) + 24LL);
              if ( (_QWORD *)*v29 == v29 || (v30 = *v29 - 8LL, *v29 == 8LL) )
              {
LABEL_58:
                v65 = 0LL;
                v32 = (DMMVIDPNTARGET *)operator new(0x80uLL, 0x4E506456u, 256LL);
                if ( v32 )
                  v33 = DMMVIDPNTARGET::DMMVIDPNTARGET(
                          v32,
                          *((struct DMMVIDPNTARGETSET *const *)this + 39),
                          (struct DMMVIDEOPRESENTTARGET *const)v28);
                else
                  v33 = 0LL;
                auto_ptr<DMMVIDPNTARGET>::reset(&v65, (__int64 (__fastcall ***)(_QWORD, __int64))v33);
                v59 = v65;
                if ( !v65 )
                {
                  WdLogSingleEntry0(6LL);
                  WdLogGlobalForLineNumber = 355;
                  *((_DWORD *)this + 20) = -1073741801;
                  goto LABEL_127;
                }
                if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))*v65[8])(v65 + 8) )
                {
                  WdLogSingleEntry1(7LL, this);
                  WdLogGlobalForLineNumber = 364;
                  *((_DWORD *)this + 20) = *((_DWORD *)v59 + 18);
                  goto LABEL_127;
                }
                v60 = *((_QWORD *)this + 39);
                v65 = 0LL;
                v68 = v59;
                v61 = DMMVIDPNTARGETSET::AddTarget(v60, &v68);
                if ( v61 < 0 )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 379;
                  *((_DWORD *)this + 20) = v61;
LABEL_127:
                  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v65);
                  goto LABEL_94;
                }
                auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v65);
              }
              else
              {
                while ( *(_DWORD *)(v30 + 24) != *(_DWORD *)(v28 + 24) )
                {
                  v31 = *(_QWORD **)(v30 + 8);
                  v30 = (__int64)(v31 - 1);
                  if ( v31 == v29 )
                    v30 = 0LL;
                  if ( !v30 )
                    goto LABEL_58;
                }
              }
              v62 = *(_QWORD **)(v28 + 8);
              v28 = (__int64)(v62 - 1);
              if ( v62 == v21 )
                v28 = 0LL;
            }
            v34 = v66;
            v35 = v66[6];
            if ( v35 && *((_QWORD *)this + 6) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 140;
            }
            *((_QWORD *)this + 6) = v35;
            if ( ((unsigned __int16)((2 << *((_BYTE *)this + 172)) - 1) & *((_WORD *)this + 87)) != 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 396;
            }
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              v64,
              ((unsigned __int64)this + 152) & -(__int64)((DMMVIDPN *)((char *)this + 96) != 0LL),
              0LL);
            DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v64);
            LOBYTE(v36) = 1;
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              v63,
              ((unsigned __int64)this + 152) & -(__int64)((DMMVIDPN *)((char *)this + 96) != 0LL),
              v36);
            v37 = (const struct DMMVIDPNSOURCESET **)v34[15];
            if ( v37 == v34 + 15 )
              v38 = 0LL;
            else
              v38 = (const struct DMMVIDPNPRESENTPATH *)(v37 - 1);
            while ( 1 )
            {
              if ( !v38 )
              {
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v63);
                *((_DWORD *)this + 22) = 2;
                v53 = WdLogNewEntry5_WdTrace(v50, v49, v51, v52);
                *(_QWORD *)(v53 + 24) = this;
                *(_QWORD *)(v53 + 32) = v34;
                WdLogGlobalForLineNumber = 509;
                goto LABEL_94;
              }
              v39 = (_QWORD *)(*((_QWORD *)this + 38) + 24LL);
              if ( (_QWORD *)*v39 == v39 )
              {
                v40 = 0LL;
              }
              else
              {
                v40 = *v39 - 8LL;
                if ( *v39 != 8LL )
                {
                  do
                  {
                    if ( *(_DWORD *)(v40 + 24) == *(_DWORD *)(*((_QWORD *)v38 + 11) + 24LL) )
                      break;
                    v48 = *(_QWORD **)(v40 + 8);
                    v40 = (__int64)(v48 - 1);
                    if ( v48 == v39 )
                      v40 = 0LL;
                  }
                  while ( v40 );
                }
              }
              v41 = (_QWORD *)(*((_QWORD *)this + 39) + 24LL);
              if ( (_QWORD *)*v41 == v41 )
              {
                v42 = 0LL;
              }
              else
              {
                v42 = *v41 - 8LL;
                if ( *v41 != 8LL )
                {
                  do
                  {
                    if ( *(_DWORD *)(v42 + 24) == *(_DWORD *)(*((_QWORD *)v38 + 12) + 24LL) )
                      break;
                    v43 = *(_QWORD **)(v42 + 8);
                    v42 = (__int64)(v43 - 1);
                    if ( v43 == v41 )
                      v42 = 0LL;
                  }
                  while ( v42 );
                }
              }
              v44 = (DMMVIDPNPRESENTPATH *)operator new(0xC0uLL, 0x4E506456u, 256LL);
              if ( v44 )
                v3 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
                       v44,
                       (struct DMMVIDPNSOURCE *)v40,
                       (struct DMMVIDPNTARGET *)v42,
                       v38);
              v67 = v3;
              if ( !v3 )
              {
                WdLogSingleEntry0(6LL);
                WdLogGlobalForLineNumber = 448;
                *((_DWORD *)this + 20) = -1073741801;
                goto LABEL_100;
              }
              if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v3 + 7))((__int64)v3 + 56) )
                break;
              v45 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPN *)((char *)this + 96), v3, D3DKMDT_MCC_ENFORCE);
              v46 = v45;
              if ( v45 == -1071774920 )
              {
                WdLogSingleEntry4(7LL, *(unsigned int *)(v40 + 24), *(unsigned int *)(v42 + 24), this, v66 + 12);
                WdLogGlobalForLineNumber = 475;
                v55 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPN *)((char *)this + 96), v3, D3DKMDT_MCC_IGNORE);
                v3 = 0LL;
                v46 = v55;
                if ( v55 < 0 )
                {
                  WdLogSingleEntry5(2LL, *(unsigned int *)(v40 + 24), *(unsigned int *)(v42 + 24), this, v66 + 12, v55);
                  WdLogGlobalForLineNumber = 484;
LABEL_130:
                  *((_DWORD *)this + 20) = v46;
                  goto LABEL_132;
                }
              }
              else
              {
                v3 = 0LL;
                if ( v45 < 0 )
                {
                  WdLogSingleEntry5(2LL, *(unsigned int *)(v40 + 24), *(unsigned int *)(v42 + 24), this, v66 + 12, v45);
                  WdLogGlobalForLineNumber = 493;
                  goto LABEL_130;
                }
              }
              v47 = (const struct DMMVIDPNSOURCESET **)*((_QWORD *)v38 + 1);
              v34 = v66;
              v67 = 0LL;
              v38 = (const struct DMMVIDPNPRESENTPATH *)(v47 - 1);
              if ( v47 == v66 + 15 )
                v38 = 0LL;
            }
            WdLogSingleEntry4(7LL, *(unsigned int *)(v40 + 24), *(unsigned int *)(v42 + 24), this, v34 + 12);
            WdLogGlobalForLineNumber = 457;
            *((_DWORD *)this + 20) = *((_DWORD *)v3 + 16);
LABEL_132:
            auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v67);
LABEL_100:
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v63);
          }
          else
          {
            WdLogSingleEntry1(7LL, this);
            v57 = *((_QWORD *)this + 39);
            WdLogGlobalForLineNumber = 301;
            *((_DWORD *)this + 20) = *(_DWORD *)(v57 + 16);
          }
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 292;
          *((_DWORD *)this + 20) = -1073741801;
        }
LABEL_94:
        if ( v15 )
          ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
      }
      else
      {
        WdLogSingleEntry1(7LL, this);
        v58 = *((_QWORD *)this + 38);
        WdLogGlobalForLineNumber = 253;
        *((_DWORD *)this + 20) = *(_DWORD *)(v58 + 16);
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
    v56 = *((_DWORD *)this + 28);
    WdLogGlobalForLineNumber = 230;
    if ( v56 >= 0 )
      v56 = *((_DWORD *)this + 40);
LABEL_106:
    *((_DWORD *)this + 20) = v56;
  }
  return this;
}
