/*
 * XREFs of ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x14025DC20
 * Callers:
 *     <none>
 * Callees:
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x140010D08 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z @ 0x14003B744 (-GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14003EA0C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x14004106C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x14004160C (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1402D9E88 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r13
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r8
  DMMVIDPN *Container; // rax
  DMMVIDPN *v21; // r10
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DMMVIDPNTARGET *TargetFromId; // rax
  struct DMMVIDPNSOURCE *v25; // r11
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h]
  char v39; // [rsp+40h] [rbp-C0h]
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+54h] [rbp-ACh]
  __int128 v42; // [rsp+58h] [rbp-A8h]
  _BYTE *v43; // [rsp+68h] [rbp-98h]
  __int128 v44; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v45; // [rsp+80h] [rbp-80h]
  _BYTE v46[80]; // [rsp+90h] [rbp-70h] BYREF
  int v47; // [rsp+E0h] [rbp-20h]

  v37 = -1;
  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  v38 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 7035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 7035);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 7035);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = v7;
  v12[4] = v5;
  v12[5] = this;
  v12[6] = a4;
  WdLogGlobalForLineNumber = 2306;
  if ( a4 )
  {
    *a4 = 0LL;
    v16 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    v17 = v16;
    if ( v16 )
    {
      v40 = 0LL;
      Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(v16 + 160);
      if ( DMMVIDPN::GetSourceFromId(Container, v7) )
      {
        TargetFromId = DMMVIDPN::GetTargetFromId(v21, v5);
        if ( TargetFromId )
        {
          DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
            (DMMVIDPNPRESENTPATH *)v46,
            v25,
            TargetFromId,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu);
          if ( v47 != 2 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2388;
          }
          DWORD2(v42) = 0;
          *(_QWORD *)&v42 = Set<DMMVIDPNPRESENTPATH>::FindByValue;
          HIDWORD(v42) = v41;
          v43 = v46;
          v45 = v46;
          v44 = v42;
          v28 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
                  v17,
                  &v44,
                  &v40,
                  1LL);
          v29 = v28;
          if ( v28 == -1071774937 )
          {
            WdLogSingleEntry3(3LL, v7, v5, v17);
            WdLogGlobalForLineNumber = 2398;
            if ( v40 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2401;
            }
            DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v46);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
            if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v37);
            return 3223192359LL;
          }
          else if ( v28 >= 0 )
          {
            v34 = v40;
            if ( !v40 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2414;
            }
            DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v46);
            *a4 = v34;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
            if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v37);
            return 0LL;
          }
          else
          {
            WdLogSingleEntry4(2LL, v7, v5, v17, v28);
            WdLogGlobalForLineNumber = 2408;
            DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v46);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
            if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v37);
            return v29;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v5);
          WdLogGlobalForLineNumber = 2365;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
          if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v37);
          return 3223192325LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v7);
        WdLogGlobalForLineNumber = 2351;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v37);
        return 3223192324LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 2330;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
      if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v37);
      return 3223192320LL;
    }
  }
  else
  {
    WdLogSingleEntry4(2LL, 0LL, v7, v5, this);
    WdLogGlobalForLineNumber = 2313;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v37);
    }
    return 3221225485LL;
  }
}
