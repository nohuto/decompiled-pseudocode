/*
 * XREFs of ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1403E1320
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14003EA0C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v7; // r15
  DMMVIDPNTOPOLOGY *v8; // rax
  unsigned int v9; // edx
  DMMVIDPNTOPOLOGY *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+38h] [rbp-18h]
  char v30; // [rsp+40h] [rbp-10h]
  unsigned int v31; // [rsp+88h] [rbp+38h] BYREF

  v28 = -1;
  v29 = 0LL;
  v7 = (unsigned int)a2;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 6019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 6019);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 6019);
  if ( a4 )
  {
    *a4 = -1;
    v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    v10 = v8;
    if ( v8 )
    {
      v31 = v9;
      v11 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v8, v7, a3, &v31);
      v16 = v11;
      if ( v11 >= 0 )
      {
        v21 = v31;
        if ( v11 == 1075708748 && v31 != -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2336;
        }
        *a4 = v21;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
        if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v28);
        return 0LL;
      }
      else
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
        v17[3] = a3;
        v17[4] = v7;
        v17[5] = v10;
        v17[6] = v16;
        WdLogGlobalForLineNumber = 2325;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
        if ( v30 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v28);
        }
        return (unsigned int)v16;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 2309;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v28);
      return 3223192320LL;
    }
  }
  else
  {
    WdLogSingleEntry4(2LL, 0LL, a3, this, v7);
    WdLogGlobalForLineNumber = 2292;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v28);
    return 3221225485LL;
  }
}
