/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1402FB130
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  unsigned int v3; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // eax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r8
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v15; // r9
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v29; // rdx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v30; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v31; // rbx
  char *v32; // rbx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v33; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v34; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v35; // rcx
  char *v36; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v37; // rax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **v38; // rdx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v39; // rax
  bool v40; // zf
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 Container; // r8
  __int64 v53; // rdx
  _QWORD *v54; // rdx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // r8
  void (__fastcall **v60)(__int64, __int64); // rax
  char *v61; // rdx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v62; // rcx
  char *v63; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // r8
  int v70; // [rsp+50h] [rbp+7h] BYREF
  __int64 v71; // [rsp+58h] [rbp+Fh]
  char v72; // [rsp+60h] [rbp+17h]
  __int64 (__fastcall ***v73)(_QWORD, __int64); // [rsp+B0h] [rbp+67h] BYREF
  __int64 (__fastcall ***v74)(_QWORD, __int64); // [rsp+B8h] [rbp+6Fh] BYREF

  v3 = 0;
  v70 = -1;
  v71 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v72 = 1;
    v70 = 7006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 7006);
  }
  else
  {
    v72 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v70, 7006);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = a2;
  *(_QWORD *)(v10 + 32) = this;
  WdLogGlobalForLineNumber = 619;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 625;
    goto LABEL_101;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 639;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70);
    if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v68, (__int64)&EventProfilerExit, v69, v70);
    return 3223192328LL;
  }
  v11 = *((_DWORD *)a2 + 1);
  if ( v11 == 3 || (v12 = this, v11 == 4) )
  {
    v47 = *((_QWORD *)this + 14);
    if ( !*(_QWORD *)(v47 + 40) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v48 = *(_QWORD *)(v47 + 40);
    if ( !*(_QWORD *)(v48 + 72) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v49 = *(_QWORD *)(*(_QWORD *)(v48 + 72) + 48LL);
    if ( !*(_QWORD *)(v49 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v50 = *(_QWORD *)(*(_QWORD *)(v49 + 8) + 16LL);
    if ( *(int *)(v50 + 3004) < 1200 && *(_BYTE *)(v50 + 3016) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 656;
    }
    else
    {
      v51 = *((_QWORD *)this + 14);
      if ( !*(_QWORD *)(v51 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v51 + 40) + 64LL);
      v53 = *(_QWORD *)(Container + 120);
      if ( v53 == Container + 120 )
        v54 = 0LL;
      else
        v54 = (_QWORD *)(v53 - 8);
      v12 = this;
      while ( 1 )
      {
        if ( !v54 )
          goto LABEL_8;
        if ( *(_DWORD *)(v54[11] + 24LL) == *(_DWORD *)(*((_QWORD *)this + 14) + 24LL) )
        {
          v55 = *(_DWORD *)(*(_QWORD *)(v54[12] + 96LL) + 84LL);
          if ( v55 == 17 || (unsigned int)(v55 - 15) < 2 )
            break;
        }
        v67 = v54[1];
        v54 = (_QWORD *)(v67 - 8);
        if ( v67 == Container + 120 )
          v54 = 0LL;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 664;
    }
LABEL_101:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70);
    if ( !v72 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3223192336LL;
    goto LABEL_106;
  }
LABEL_8:
  v13 = operator new(0x70uLL, 0x4E506456u, 256LL);
  if ( v13 )
  {
    v16 = *(_DWORD *)a2;
    *(_QWORD *)v13 = &SetElement::`vftable';
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_DWORD *)(v13 + 24) = v16;
    if ( v16 == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 240;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"i_Id != D3DDDI_ID_UNINITIALIZED",
        240LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)(v13 + 40) = 0LL;
    *(_DWORD *)(v13 + 56) = 1833173006;
    *(_QWORD *)v13 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_QWORD *)(v13 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(v13 + 48) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *(_QWORD *)(v13 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *(_DWORD *)(v13 + 72) = 0;
    *(_OWORD *)(v13 + 76) = 0LL;
    *(_OWORD *)(v13 + 92) = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v74 = (__int64 (__fastcall ***)(_QWORD, __int64))v13;
  if ( v13 )
  {
    v17 = *((_DWORD *)a2 + 1);
    if ( v17 == 1 )
      goto LABEL_14;
    if ( v17 == 2 )
    {
      *(_DWORD *)(v13 + 72) = 2;
      *(_DWORD *)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v13 + 76) = a2[2];
      goto LABEL_36;
    }
    if ( (unsigned int)(v17 - 3) < 2 )
    {
LABEL_14:
      v15 = a2 + 2;
      if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
      {
        WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 2), *((unsigned int *)a2 + 3), v15);
        WdLogGlobalForLineNumber = 342;
        v18 = -1071774918;
        goto LABEL_28;
      }
      if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
      {
        WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 4), *((unsigned int *)a2 + 5), v15);
        WdLogGlobalForLineNumber = 354;
        v18 = -1071774917;
        goto LABEL_28;
      }
      if ( !*((_DWORD *)a2 + 6) )
      {
        WdLogSingleEntry2(2LL, 0LL, a2 + 2);
        WdLogGlobalForLineNumber = 363;
        v18 = -1071774916;
        goto LABEL_28;
      }
      if ( !*((_DWORD *)a2 + 7) )
      {
        WdLogSingleEntry2(2LL, 0LL, a2 + 2);
        WdLogGlobalForLineNumber = 372;
        v18 = -1071774915;
LABEL_28:
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 79;
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
        v25[5] = v18;
        v25[3] = v13;
        v25[4] = this;
        WdLogGlobalForLineNumber = 696;
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v74);
LABEL_29:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70);
        if ( v72 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v70);
        }
        return (unsigned int)v18;
      }
      v19 = *((_DWORD *)a2 + 8);
      if ( !v19 || v19 > 5 )
      {
        WdLogSingleEntry2(2LL, *((int *)a2 + 8), a2 + 2);
        WdLogGlobalForLineNumber = 381;
        v18 = -1071774914;
        goto LABEL_28;
      }
      v20 = *((_DWORD *)a2 + 9);
      if ( !v20 || v20 > 3 )
      {
        WdLogSingleEntry2(2LL, *((int *)a2 + 9), a2 + 2);
        WdLogGlobalForLineNumber = 390;
        v18 = -1071774913;
        goto LABEL_28;
      }
      *(_DWORD *)(v13 + 72) = v17;
      *(_OWORD *)(v13 + 76) = *(_OWORD *)v15;
      *(_OWORD *)(v13 + 92) = *(_OWORD *)(a2 + 6);
LABEL_36:
      v29 = *((_QWORD *)v12 + 6);
      v74 = 0LL;
      v73 = (__int64 (__fastcall ***)(_QWORD, __int64))v13;
      if ( (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v29 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v12 + 48) )
      {
        v29 -= 8LL;
        if ( v29 )
        {
          v14 = *(unsigned int *)(v13 + 24);
          while ( *(_DWORD *)(v29 + 24) != (_DWORD)v14 )
          {
            v30 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v29 + 8);
            v29 = (unsigned __int64)v30 - 8;
            if ( v30 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v12 + 48) )
              v29 = 0LL;
            if ( !v29 )
              goto LABEL_43;
          }
          v33 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*(unsigned int *)(v29 + 72);
          if ( (_DWORD)v33 != *(_DWORD *)(v13 + 72) )
            goto LABEL_75;
          if ( (_DWORD)v33 != 4 )
          {
            v14 = (unsigned int)((_DWORD)v33 - 1);
            if ( (_DWORD)v33 != 1 )
            {
              v14 = (unsigned int)((_DWORD)v33 - 2);
              if ( (_DWORD)v33 == 2 )
              {
                if ( *(_DWORD *)(v29 + 76) == *(_DWORD *)(v13 + 76) )
                {
LABEL_77:
                  v41 = WdLogNewEntry5_WdTrace(v33, v29, v14, v15);
                  v18 = -1071774956;
                  *(_QWORD *)(v41 + 24) = v13;
                  *(_QWORD *)(v41 + 32) = v12;
                  WdLogGlobalForLineNumber = 137;
                  goto LABEL_78;
                }
LABEL_75:
                WdLogSingleEntry3(2LL, *(unsigned int *)(v13 + 24), v13, v12);
                WdLogGlobalForLineNumber = 147;
                v18 = -1071774940;
LABEL_78:
                auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v73);
                v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v43, v42, v44, v45);
                v46[3] = a2;
                v46[4] = this;
                v46[5] = v18;
                WdLogGlobalForLineNumber = 734;
                goto LABEL_29;
              }
              if ( (_DWORD)v33 != 3 )
              {
                if ( (unsigned int)((_DWORD)v33 - 1) <= 2 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 265;
                }
                goto LABEL_75;
              }
            }
          }
          if ( *(_DWORD *)(v29 + 76) == *(_DWORD *)(v13 + 76)
            && *(_DWORD *)(v29 + 80) == *(_DWORD *)(v13 + 80)
            && *(_DWORD *)(v29 + 84) == *(_DWORD *)(v13 + 84)
            && *(_DWORD *)(v29 + 88) == *(_DWORD *)(v13 + 88)
            && *(_DWORD *)(v29 + 92) == *(_DWORD *)(v13 + 92)
            && *(_DWORD *)(v29 + 96) == *(_DWORD *)(v13 + 96)
            && *(_DWORD *)(v29 + 100) == *(_DWORD *)(v13 + 100)
            && *(_DWORD *)(v29 + 104) == *(_DWORD *)(v13 + 104) )
          {
            goto LABEL_77;
          }
          goto LABEL_75;
        }
      }
LABEL_43:
      v31 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v12 + 6);
      if ( v31 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v12 + 48) )
      {
        v32 = (char *)v31 - 8;
        while ( v32 )
        {
          v33 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((unsigned int *)v32 + 18);
          if ( (_DWORD)v33 == *(_DWORD *)(v13 + 72) )
          {
            if ( (_DWORD)v33 == 4 || (v29 = (unsigned int)((_DWORD)v33 - 1), (_DWORD)v33 == 1) )
            {
LABEL_62:
              if ( *((_DWORD *)v32 + 19) == *(_DWORD *)(v13 + 76) && *((_DWORD *)v32 + 20) == *(_DWORD *)(v13 + 80) )
              {
                v33 = v12;
                if ( *((_DWORD *)v32 + 21) == *(_DWORD *)(v13 + 84)
                  && *((_DWORD *)v32 + 22) == *(_DWORD *)(v13 + 88)
                  && *((_DWORD *)v32 + 23) == *(_DWORD *)(v13 + 92)
                  && *((_DWORD *)v32 + 24) == *(_DWORD *)(v13 + 96)
                  && *((_DWORD *)v32 + 25) == *(_DWORD *)(v13 + 100)
                  && *((_DWORD *)v32 + 26) == *(_DWORD *)(v13 + 104) )
                {
                  goto LABEL_77;
                }
              }
              goto LABEL_46;
            }
            v29 = (unsigned int)((_DWORD)v33 - 2);
            if ( (_DWORD)v33 == 2 )
            {
              if ( *((_DWORD *)v32 + 19) == *(_DWORD *)(v13 + 76) )
                goto LABEL_77;
            }
            else
            {
              if ( (_DWORD)v33 == 3 )
                goto LABEL_62;
              if ( (unsigned int)((_DWORD)v33 - 1) <= 2 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 265;
              }
            }
          }
LABEL_46:
          v34 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v32 + 1);
          v32 = (char *)v34 - 8;
          if ( v34 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v12 + 48) )
            v32 = 0LL;
        }
      }
      v35 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v12 + 6);
      if ( v35 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v12 + 48) || (v36 = (char *)v35 - 8) == 0LL )
      {
LABEL_55:
        v38 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)*((_QWORD *)v12 + 7);
        v39 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)(v13 + 8);
        if ( *v38 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v12 + 48) )
          __fastfail(3u);
        *(_QWORD *)v39 = (char *)v12 + 48;
        *(_QWORD *)(v13 + 16) = v38;
        *v38 = v39;
        *((_QWORD *)v12 + 7) = v39;
        ++*((_QWORD *)v12 + 8);
      }
      else
      {
        while ( v36 != (char *)v13 )
        {
          v37 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v36 + 1);
          v36 = (char *)v37 - 8;
          if ( v37 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v12 + 48) )
            v36 = 0LL;
          if ( !v36 )
            goto LABEL_55;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 108;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(_QWORD *)(v13 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 86;
      }
      *(_QWORD *)(v13 + 40) = v12;
      v40 = *((_DWORD *)a2 - 4) == 305419896;
      v73 = 0LL;
      if ( !v40 )
      {
        WdLogSingleEntry1(2LL, a2 - 4);
        WdLogGlobalForLineNumber = 676;
        v3 = -1071774960;
        goto LABEL_115;
      }
      v61 = (char *)*((_QWORD *)a2 - 1);
      if ( v61 )
      {
        v62 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v12 + 6);
        if ( v62 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v12 + 48) || (v63 = (char *)v62 - 8) == 0LL )
        {
LABEL_114:
          WdLogSingleEntry2(2LL, a2 - 4, v12);
          WdLogGlobalForLineNumber = 692;
          v3 = -1071774928;
          goto LABEL_115;
        }
        while ( v63 != v61 )
        {
          v64 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v63 + 1);
          v63 = (char *)v64 - 8;
          if ( v64 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v12 + 48) )
            v63 = 0LL;
          if ( !v63 )
            goto LABEL_114;
        }
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2 - 4);
LABEL_115:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70);
      if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v65, (__int64)&EventProfilerExit, v66, v70);
      return v3;
    }
    WdLogSingleEntry3(2LL, v13, this, *((int *)a2 + 1));
    v60 = *(void (__fastcall ***)(__int64, __int64))v13;
    WdLogGlobalForLineNumber = 720;
    (*v60)(v13, 1LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70);
    if ( !v72 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3223192336LL;
LABEL_106:
    McTemplateK0q_EtwWriteTransfer(v58, (__int64)&EventProfilerExit, v59, v70);
    return 3223192336LL;
  }
  WdLogSingleEntry1(6LL, this);
  WdLogGlobalForLineNumber = 678;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70);
  if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v56, (__int64)&EventProfilerExit, v57, v70);
  return 3221225495LL;
}
