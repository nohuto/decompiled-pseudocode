/*
 * XREFs of ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1402D94F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x140010D08 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1402D9E88 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1402DA174 (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 Container; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // r14d
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h]
  char v35; // [rsp+40h] [rbp-C0h]
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+54h] [rbp-ACh]
  __int128 v38; // [rsp+58h] [rbp-A8h]
  _QWORD *v39; // [rsp+68h] [rbp-98h]
  __int128 v40; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v41; // [rsp+80h] [rbp-80h]
  _QWORD v42[4]; // [rsp+90h] [rbp-70h] BYREF
  int v43; // [rsp+B0h] [rbp-50h]
  void **v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  void **v46; // [rsp+C8h] [rbp-38h]
  int v47; // [rsp+D0h] [rbp-30h]
  void **v48; // [rsp+D8h] [rbp-28h]
  int v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  __int64 v51; // [rsp+F0h] [rbp-10h]
  int v52; // [rsp+F8h] [rbp-8h]
  __int16 v53; // [rsp+FCh] [rbp-4h]
  int v54; // [rsp+100h] [rbp+0h]
  int v55; // [rsp+104h] [rbp+4h]
  int v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+10Ch] [rbp+Ch]
  __int64 v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  int v62; // [rsp+130h] [rbp+30h]
  int v63; // [rsp+134h] [rbp+34h]
  int v64; // [rsp+138h] [rbp+38h]
  __int64 v65; // [rsp+13Ch] [rbp+3Ch]
  __int64 v66; // [rsp+148h] [rbp+48h]

  v33 = -1;
  v5 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  v34 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 6021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 6021);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 6021);
  if ( a4 )
  {
    *a4 = 0LL;
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      v36 = 0LL;
      Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
      v9 = (_QWORD *)(*(_QWORD *)(Container + 304) + 24LL);
      if ( (_QWORD *)*v9 == v9 || (v10 = *v9 - 8LL, *v9 == 8LL) )
      {
LABEL_17:
        WdLogSingleEntry1(2LL, v6);
        WdLogGlobalForLineNumber = 2500;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v33);
        return 3223192324LL;
      }
      else
      {
        while ( *(_DWORD *)(v10 + 24) != (_DWORD)v6 )
        {
          v19 = *(_QWORD **)(v10 + 8);
          v10 = (__int64)(v19 - 1);
          if ( v19 == v9 )
            v10 = 0LL;
          if ( !v10 )
            goto LABEL_17;
        }
        v11 = (_QWORD *)(*(_QWORD *)(Container + 312) + 24LL);
        if ( (_QWORD *)*v11 == v11 || (v12 = *v11 - 8LL, *v11 == 8LL) )
        {
LABEL_15:
          WdLogSingleEntry1(2LL, v5);
          WdLogGlobalForLineNumber = 2514;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
          if ( v35 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v33);
          }
          return 3223192325LL;
        }
        else
        {
          while ( *(_DWORD *)(v12 + 24) != (_DWORD)v5 )
          {
            v13 = *(_QWORD **)(v12 + 8);
            v12 = (__int64)(v13 - 1);
            if ( v13 == v11 )
              v12 = 0LL;
            if ( !v12 )
              goto LABEL_15;
          }
          v51 = v12;
          v42[0] = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
          v42[3] = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
          v44 = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
          v46 = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
          v48 = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
          v54 = 254;
          v55 = 254;
          v42[1] = 0LL;
          v42[2] = 0LL;
          v63 = 255;
          v52 = 255;
          v53 = -1;
          v57 = 17;
          v43 = 1833173003;
          v45 = 0LL;
          v47 = 0;
          v50 = v10;
          v66 = 0LL;
          v49 = 1;
          v58 = 0LL;
          v59 = 0LL;
          v60 = 0LL;
          v61 = 0LL;
          v62 = 0;
          v56 = 1;
          v64 = 1;
          v65 = 1LL;
          DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties((DMMVIDPNPRESENTPATH *)v42);
          DWORD2(v38) = 0;
          *(_QWORD *)&v38 = Set<DMMVIDPNPRESENTPATH>::FindByValue;
          HIDWORD(v38) = v37;
          v49 = 2;
          v39 = v42;
          v41 = v42;
          v40 = v38;
          v22 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
                  this,
                  &v40,
                  &v36,
                  0LL);
          v23 = v22;
          if ( v22 == -1071774937 )
          {
            WdLogSingleEntry3(3LL, v6, v5, this);
            WdLogGlobalForLineNumber = 2547;
            if ( v36 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2550;
            }
            DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v42);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
            if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v33);
            return 3223192359LL;
          }
          else if ( v22 < 0 )
          {
            WdLogSingleEntry4(7LL, v6, v5, this, v22);
            WdLogGlobalForLineNumber = 2557;
            DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v42);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
            if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v33);
            return v23;
          }
          else
          {
            v24 = v36;
            if ( !v36 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2563;
            }
            DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v42);
            *a4 = v24;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
            if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v33);
            return 0LL;
          }
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 2480;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v33);
      return 3223192320LL;
    }
  }
  else
  {
    WdLogSingleEntry4(2LL, 0LL, v6, v5, this);
    WdLogGlobalForLineNumber = 2463;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v33);
    return 3221225485LL;
  }
}
