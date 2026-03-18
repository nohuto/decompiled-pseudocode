/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x140303C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
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
  __int64 v11; // r9
  int v12; // eax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r8
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v16; // r9
  int v17; // eax
  int v18; // edx
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v30; // rdx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v31; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v32; // rbx
  char *v33; // rbx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v34; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v35; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v36; // rcx
  char *v37; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v38; // rax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **v39; // rdx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v40; // rax
  bool v41; // zf
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 Container; // r8
  __int64 v54; // rdx
  _QWORD *v55; // rdx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // r8
  void (__fastcall **v61)(__int64, __int64); // rax
  char *v62; // rdx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v63; // rcx
  char *v64; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r8
  int v71; // [rsp+50h] [rbp+7h] BYREF
  __int64 v72; // [rsp+58h] [rbp+Fh]
  char v73; // [rsp+60h] [rbp+17h]
  __int64 (__fastcall ***v74)(_QWORD, __int64); // [rsp+B0h] [rbp+67h] BYREF
  __int64 (__fastcall ***v75)(_QWORD, __int64); // [rsp+B8h] [rbp+6Fh] BYREF

  v3 = 0;
  v71 = -1;
  v72 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v73 = 1;
    v71 = 7006;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 7006);
  }
  else
  {
    v73 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v71, 7006);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
    if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v69, (__int64)&EventProfilerExit, v70, v71);
    return 3223192328LL;
  }
  v12 = *((_DWORD *)a2 + 1);
  if ( v12 == 3 || (v13 = this, v12 == 4) )
  {
    v48 = *((_QWORD *)this + 14);
    if ( !*(_QWORD *)(v48 + 40) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v49 = *(_QWORD *)(v48 + 40);
    if ( !*(_QWORD *)(v49 + 72) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v50 = *(_QWORD *)(*(_QWORD *)(v49 + 72) + 48LL);
    if ( !*(_QWORD *)(v50 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v51 = *(_QWORD *)(*(_QWORD *)(v50 + 8) + 16LL);
    if ( *(int *)(v51 + 3004) < 1200 && *(_BYTE *)(v51 + 3016) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 656;
    }
    else
    {
      v52 = *((_QWORD *)this + 14);
      if ( !*(_QWORD *)(v52 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v52 + 40) + 64LL);
      v54 = *(_QWORD *)(Container + 120);
      v11 = *(unsigned int *)(*((_QWORD *)this + 14) + 24LL);
      if ( v54 == Container + 120 )
        v55 = 0LL;
      else
        v55 = (_QWORD *)(v54 - 8);
      v13 = this;
      while ( 1 )
      {
        if ( !v55 )
          goto LABEL_8;
        if ( *(_DWORD *)(v55[11] + 24LL) == (_DWORD)v11 )
        {
          v56 = *(_DWORD *)(*(_QWORD *)(v55[12] + 96LL) + 84LL);
          if ( v56 == 17 || (unsigned int)(v56 - 15) < 2 )
            break;
        }
        v68 = v55[1];
        v55 = (_QWORD *)(v68 - 8);
        if ( v68 == Container + 120 )
          v55 = 0LL;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 664;
    }
LABEL_101:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
    if ( !v73 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3223192336LL;
    goto LABEL_106;
  }
LABEL_8:
  v14 = operator new(0x70uLL, 0x4E506456u, 256LL, v11);
  if ( v14 )
  {
    v17 = *(_DWORD *)a2;
    *(_QWORD *)v14 = &SetElement::`vftable';
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_DWORD *)(v14 + 24) = v17;
    if ( v17 == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 240;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"i_Id != D3DDDI_ID_UNINITIALIZED",
        240LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)(v14 + 40) = 0LL;
    *(_DWORD *)(v14 + 56) = 1833173006;
    *(_QWORD *)v14 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_QWORD *)(v14 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(v14 + 48) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *(_QWORD *)(v14 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    *(_DWORD *)(v14 + 72) = 0;
    *(_OWORD *)(v14 + 76) = 0LL;
    *(_OWORD *)(v14 + 92) = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  v75 = (__int64 (__fastcall ***)(_QWORD, __int64))v14;
  if ( v14 )
  {
    v18 = *((_DWORD *)a2 + 1);
    if ( v18 == 1 )
      goto LABEL_14;
    if ( v18 == 2 )
    {
      *(_DWORD *)(v14 + 72) = 2;
      *(_DWORD *)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v14 + 76) = a2[2];
      goto LABEL_36;
    }
    if ( (unsigned int)(v18 - 3) < 2 )
    {
LABEL_14:
      v16 = a2 + 2;
      if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
      {
        WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 2), *((unsigned int *)a2 + 3), v16);
        WdLogGlobalForLineNumber = 342;
        v19 = -1071774918;
        goto LABEL_28;
      }
      if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
      {
        WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 4), *((unsigned int *)a2 + 5), v16);
        WdLogGlobalForLineNumber = 354;
        v19 = -1071774917;
        goto LABEL_28;
      }
      if ( !*((_DWORD *)a2 + 6) )
      {
        WdLogSingleEntry2(2LL, 0LL, a2 + 2);
        WdLogGlobalForLineNumber = 363;
        v19 = -1071774916;
        goto LABEL_28;
      }
      if ( !*((_DWORD *)a2 + 7) )
      {
        WdLogSingleEntry2(2LL, 0LL, a2 + 2);
        WdLogGlobalForLineNumber = 372;
        v19 = -1071774915;
LABEL_28:
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 79;
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
        v26[5] = v19;
        v26[3] = v14;
        v26[4] = this;
        WdLogGlobalForLineNumber = 696;
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v75);
LABEL_29:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
        if ( v73 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v71);
        }
        return (unsigned int)v19;
      }
      v20 = *((_DWORD *)a2 + 8);
      if ( !v20 || v20 > 5 )
      {
        WdLogSingleEntry2(2LL, *((int *)a2 + 8), a2 + 2);
        WdLogGlobalForLineNumber = 381;
        v19 = -1071774914;
        goto LABEL_28;
      }
      v21 = *((_DWORD *)a2 + 9);
      if ( !v21 || v21 > 3 )
      {
        WdLogSingleEntry2(2LL, *((int *)a2 + 9), a2 + 2);
        WdLogGlobalForLineNumber = 390;
        v19 = -1071774913;
        goto LABEL_28;
      }
      *(_DWORD *)(v14 + 72) = v18;
      *(_OWORD *)(v14 + 76) = *(_OWORD *)v16;
      *(_OWORD *)(v14 + 92) = *(_OWORD *)(a2 + 6);
LABEL_36:
      v30 = *((_QWORD *)v13 + 6);
      v75 = 0LL;
      v74 = (__int64 (__fastcall ***)(_QWORD, __int64))v14;
      if ( (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v30 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v13 + 48) )
      {
        v30 -= 8LL;
        if ( v30 )
        {
          v15 = *(unsigned int *)(v14 + 24);
          while ( *(_DWORD *)(v30 + 24) != (_DWORD)v15 )
          {
            v31 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v30 + 8);
            v30 = (unsigned __int64)v31 - 8;
            if ( v31 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v13 + 48) )
              v30 = 0LL;
            if ( !v30 )
              goto LABEL_43;
          }
          v34 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*(unsigned int *)(v30 + 72);
          if ( (_DWORD)v34 != *(_DWORD *)(v14 + 72) )
            goto LABEL_75;
          if ( (_DWORD)v34 != 4 )
          {
            v15 = (unsigned int)((_DWORD)v34 - 1);
            if ( (_DWORD)v34 != 1 )
            {
              v15 = (unsigned int)((_DWORD)v34 - 2);
              if ( (_DWORD)v34 == 2 )
              {
                if ( *(_DWORD *)(v30 + 76) == *(_DWORD *)(v14 + 76) )
                {
LABEL_77:
                  v42 = WdLogNewEntry5_WdTrace(v34, v30, v15, v16);
                  v19 = -1071774956;
                  *(_QWORD *)(v42 + 24) = v14;
                  *(_QWORD *)(v42 + 32) = v13;
                  WdLogGlobalForLineNumber = 137;
                  goto LABEL_78;
                }
LABEL_75:
                WdLogSingleEntry3(2LL, *(unsigned int *)(v14 + 24), v14, v13);
                WdLogGlobalForLineNumber = 147;
                v19 = -1071774940;
LABEL_78:
                auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v74);
                v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v43, v45, v46);
                v47[3] = a2;
                v47[4] = this;
                v47[5] = v19;
                WdLogGlobalForLineNumber = 734;
                goto LABEL_29;
              }
              if ( (_DWORD)v34 != 3 )
              {
                if ( (unsigned int)((_DWORD)v34 - 1) <= 2 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 265;
                }
                goto LABEL_75;
              }
            }
          }
          if ( *(_DWORD *)(v30 + 76) == *(_DWORD *)(v14 + 76)
            && *(_DWORD *)(v30 + 80) == *(_DWORD *)(v14 + 80)
            && *(_DWORD *)(v30 + 84) == *(_DWORD *)(v14 + 84)
            && *(_DWORD *)(v30 + 88) == *(_DWORD *)(v14 + 88)
            && *(_DWORD *)(v30 + 92) == *(_DWORD *)(v14 + 92)
            && *(_DWORD *)(v30 + 96) == *(_DWORD *)(v14 + 96)
            && *(_DWORD *)(v30 + 100) == *(_DWORD *)(v14 + 100)
            && *(_DWORD *)(v30 + 104) == *(_DWORD *)(v14 + 104) )
          {
            goto LABEL_77;
          }
          goto LABEL_75;
        }
      }
LABEL_43:
      v32 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v13 + 6);
      if ( v32 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v13 + 48) )
      {
        v33 = (char *)v32 - 8;
        while ( v33 )
        {
          v34 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((unsigned int *)v33 + 18);
          if ( (_DWORD)v34 == *(_DWORD *)(v14 + 72) )
          {
            if ( (_DWORD)v34 == 4 || (v30 = (unsigned int)((_DWORD)v34 - 1), (_DWORD)v34 == 1) )
            {
LABEL_62:
              if ( *((_DWORD *)v33 + 19) == *(_DWORD *)(v14 + 76) && *((_DWORD *)v33 + 20) == *(_DWORD *)(v14 + 80) )
              {
                v34 = v13;
                if ( *((_DWORD *)v33 + 21) == *(_DWORD *)(v14 + 84)
                  && *((_DWORD *)v33 + 22) == *(_DWORD *)(v14 + 88)
                  && *((_DWORD *)v33 + 23) == *(_DWORD *)(v14 + 92)
                  && *((_DWORD *)v33 + 24) == *(_DWORD *)(v14 + 96)
                  && *((_DWORD *)v33 + 25) == *(_DWORD *)(v14 + 100)
                  && *((_DWORD *)v33 + 26) == *(_DWORD *)(v14 + 104) )
                {
                  goto LABEL_77;
                }
              }
              goto LABEL_46;
            }
            v30 = (unsigned int)((_DWORD)v34 - 2);
            if ( (_DWORD)v34 == 2 )
            {
              if ( *((_DWORD *)v33 + 19) == *(_DWORD *)(v14 + 76) )
                goto LABEL_77;
            }
            else
            {
              if ( (_DWORD)v34 == 3 )
                goto LABEL_62;
              if ( (unsigned int)((_DWORD)v34 - 1) <= 2 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 265;
              }
            }
          }
LABEL_46:
          v35 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v33 + 1);
          v33 = (char *)v35 - 8;
          if ( v35 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v13 + 48) )
            v33 = 0LL;
        }
      }
      v36 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v13 + 6);
      if ( v36 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v13 + 48) || (v37 = (char *)v36 - 8) == 0LL )
      {
LABEL_55:
        v39 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)*((_QWORD *)v13 + 7);
        v40 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)(v14 + 8);
        if ( *v39 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v13 + 48) )
          __fastfail(3u);
        *(_QWORD *)v40 = (char *)v13 + 48;
        *(_QWORD *)(v14 + 16) = v39;
        *v39 = v40;
        *((_QWORD *)v13 + 7) = v40;
        ++*((_QWORD *)v13 + 8);
      }
      else
      {
        while ( v37 != (char *)v14 )
        {
          v38 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v37 + 1);
          v37 = (char *)v38 - 8;
          if ( v38 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v13 + 48) )
            v37 = 0LL;
          if ( !v37 )
            goto LABEL_55;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 108;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(_QWORD *)(v14 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 86;
      }
      *(_QWORD *)(v14 + 40) = v13;
      v41 = *((_DWORD *)a2 - 4) == 305419896;
      v74 = 0LL;
      if ( !v41 )
      {
        WdLogSingleEntry1(2LL, a2 - 4);
        WdLogGlobalForLineNumber = 676;
        v3 = -1071774960;
        goto LABEL_115;
      }
      v62 = (char *)*((_QWORD *)a2 - 1);
      if ( v62 )
      {
        v63 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v13 + 6);
        if ( v63 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v13 + 48) || (v64 = (char *)v63 - 8) == 0LL )
        {
LABEL_114:
          WdLogSingleEntry2(2LL, a2 - 4, v13);
          WdLogGlobalForLineNumber = 692;
          v3 = -1071774928;
          goto LABEL_115;
        }
        while ( v64 != v62 )
        {
          v65 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v64 + 1);
          v64 = (char *)v65 - 8;
          if ( v65 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)v13 + 48) )
            v64 = 0LL;
          if ( !v64 )
            goto LABEL_114;
        }
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2 - 4);
LABEL_115:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
      if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v66, (__int64)&EventProfilerExit, v67, v71);
      return v3;
    }
    WdLogSingleEntry3(2LL, v14, this, *((int *)a2 + 1));
    v61 = *(void (__fastcall ***)(__int64, __int64))v14;
    WdLogGlobalForLineNumber = 720;
    (*v61)(v14, 1LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
    if ( !v73 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3223192336LL;
LABEL_106:
    McTemplateK0q_EtwWriteTransfer(v59, (__int64)&EventProfilerExit, v60, v71);
    return 3223192336LL;
  }
  WdLogSingleEntry1(6LL, this);
  WdLogGlobalForLineNumber = 678;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
  if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v57, (__int64)&EventProfilerExit, v58, v71);
  return 3221225495LL;
}
