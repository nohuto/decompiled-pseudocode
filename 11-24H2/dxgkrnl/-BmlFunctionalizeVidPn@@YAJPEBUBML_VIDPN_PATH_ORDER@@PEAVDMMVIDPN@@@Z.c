/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x140364BA4
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x140269ADC (_BmlGetPathModeListForAdapter.c)
 *     _BmlGetPathModalityForAdapter @ 0x1403635A4 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1402DC1E4 (BmlGetRecommendedContentSizeForPath.c)
 *     BmlFunctionalizePath @ 0x140365024 (BmlFunctionalizePath.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(
        const struct BML_VIDPN_PATH_ORDER *a1,
        struct DMMVIDPN *a2,
        __int64 a3,
        __int64 a4)
{
  VIDPN_MGR *v6; // r15
  unsigned __int16 v7; // bp
  DMMVIDPNTOPOLOGY *v8; // r12
  unsigned __int16 v9; // di
  __int64 v10; // rbp
  __int64 v11; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r14d
  __int64 v18; // rdi
  __int64 v19; // rdx
  struct DMMVIDPNPRESENTPATH *v20; // r11
  unsigned int j; // r8d
  struct DMMVIDPNTARGETMODESET *v22; // rax
  __int16 v23; // cx
  unsigned __int16 i; // di
  __int64 v25; // rsi
  __int64 result; // rax
  _QWORD *v27; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DMMVIDPNPRESENTPATH *v29; // rbp
  struct DMMVIDPNTARGETMODESET *v30; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3998;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3999;
  }
  v6 = (VIDPN_MGR *)*((_QWORD *)a2 + 6);
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4002;
  }
  v7 = 0;
  v8 = (struct DMMVIDPN *)((char *)a2 + 96);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
  WdLogGlobalForLineNumber = 4004;
LABEL_8:
  if ( v7 >= *(unsigned __int8 *)a1 )
  {
    v9 = 0;
    while ( v9 < *(unsigned __int8 *)a1 )
    {
      v10 = v9;
      v11 = *((_QWORD *)a1 + 15 * v9 + 2);
      Path = DMMVIDPNTOPOLOGY::FindPath(
               (struct DMMVIDPN *)((char *)a2 + 96),
               *(_DWORD *)(v11 + 24),
               *(_DWORD *)(v11 + 28));
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4074;
      }
      v17 = BmlFunctionalizePath(a1, a2, v9, Path);
      if ( v17 < 0 )
      {
        if ( v17 != -1071774970 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
          v27[3] = a2;
          v27[4] = a1;
          v27[5] = v9;
          result = (unsigned int)v17;
          WdLogGlobalForLineNumber = 4103;
          return result;
        }
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = v9;
        WdLogGlobalForLineNumber = 4088;
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v6);
        DxgkLogCodePointPacket(0x11u, v9, 0, 0, *(_QWORD *)((char *)ContainingAdapter + 412));
        if ( !v9 )
          return 3223192326LL;
        --v9;
      }
      else
      {
        ++v9;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = v10;
        WdLogGlobalForLineNumber = 4083;
      }
    }
    for ( i = 0; i < *(unsigned __int8 *)a1; ++i )
    {
      v25 = *((_QWORD *)a1 + 15 * i + 2);
      if ( (*(_QWORD *)v25 & 0x20000000000000LL) != 0 )
      {
        if ( (*(_QWORD *)v25 & 0x20200LL) != 0x20200 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4121;
        }
        v29 = DMMVIDPNTOPOLOGY::FindPath(v8, *(_DWORD *)(v25 + 24), *(_DWORD *)(v25 + 28));
        if ( !v29 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4125;
        }
        if ( (int)BmlGetRecommendedContentSizeForPath((unsigned __int8 *)a1, i, (__int64)v29, v25) < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4134;
        }
      }
    }
    return 0LL;
  }
  v18 = 120LL * v7;
  v19 = *(_QWORD *)((char *)a1 + v18 + 16);
  *(_WORD *)((char *)a1 + v18 + 64) = 0;
  *(_WORD *)((char *)a1 + v18 + 68) = 0;
  v20 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)a2 + 96), *(_DWORD *)(v19 + 24), *(_DWORD *)(v19 + 28));
  if ( v20 )
  {
    for ( j = 0; j < v7; ++j )
    {
      if ( *(_DWORD *)(*((_QWORD *)a1 + 15 * j + 2) + 24LL) == *(_DWORD *)(*((_QWORD *)a1 + 15 * v7 + 2) + 24LL) )
      {
        if ( *(_WORD *)((char *)a1 + v18 + 66) )
        {
          _mm_lfence();
          WdLogSingleEntry5(
            3LL,
            v7,
            a2,
            *(unsigned int *)(*(_QWORD *)((char *)a1 + v18 + 16) + 24LL),
            *(unsigned int *)(*(_QWORD *)((char *)a1 + v18 + 16) + 28LL),
            a1);
          WdLogGlobalForLineNumber = 4060;
          return 3223192345LL;
        }
LABEL_23:
        ++v7;
        goto LABEL_8;
      }
    }
    v22 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v20 + 11));
    v23 = *(_WORD *)((char *)a1 + v18 + 66);
    v30 = v22;
    if ( *((_QWORD *)v22 + 18) )
    {
      if ( !v23 )
        goto LABEL_20;
    }
    else if ( v23 )
    {
LABEL_20:
      if ( v22 )
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v22 + 88));
      v30 = 0LL;
      goto LABEL_23;
    }
    _mm_lfence();
    WdLogSingleEntry5(
      3LL,
      v7,
      a2,
      *(unsigned int *)(*(_QWORD *)((char *)a1 + v18 + 16) + 24LL),
      *(unsigned int *)(*(_QWORD *)((char *)a1 + v18 + 16) + 28LL),
      a1);
    WdLogGlobalForLineNumber = 4046;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v30, 0LL);
    return 3223192328LL;
  }
  _mm_lfence();
  WdLogSingleEntry5(
    3LL,
    a1,
    v7,
    *(unsigned int *)(*(_QWORD *)((char *)a1 + v18 + 16) + 24LL),
    *(unsigned int *)(*(_QWORD *)((char *)a1 + v18 + 16) + 28LL),
    a2);
  WdLogGlobalForLineNumber = 4024;
  return 3223192345LL;
}
