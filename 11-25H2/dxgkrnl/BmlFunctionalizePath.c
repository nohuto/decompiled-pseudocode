/*
 * XREFs of BmlFunctionalizePath @ 0x1402C6040
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1402C5BC0 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001B358 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402C66BC (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1402C6C60 (BmlGetNextBestSourceMode.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1402C8128 (BmlIsSecondaryHardwareClonePath.c)
 *     BmlPinNextBestTargetMode @ 0x1402D3EC4 (BmlPinNextBestTargetMode.c)
 *     BmlUnPinSourceMode @ 0x14039CA88 (BmlUnPinSourceMode.c)
 */

__int64 __fastcall BmlFunctionalizePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v8; // rax
  __int64 v9; // rbp
  VIDPN_MGR *v10; // rax
  struct DMMVIDPNTARGETMODESET *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DMMVIDPNTARGETMODESET *v16; // rbx
  __int64 v17; // r12
  __int64 BestTargetMode; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rdi
  int NextBestSourceMode; // eax
  VIDPN_MGR *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  struct DMMVIDPNTARGETMODESET *v40; // [rsp+80h] [rbp+8h] BYREF
  VIDPN_MGR *v41; // [rsp+88h] [rbp+10h]
  unsigned int v42; // [rsp+90h] [rbp+18h] BYREF
  __int64 v43; // [rsp+98h] [rbp+20h]

  v43 = a4;
  v5 = (unsigned __int16)a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v9 = 120 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v10 = *(VIDPN_MGR **)(a2 + 48);
  WdLogGlobalForLineNumber = 3591;
  v41 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3596;
  }
  v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 88));
  v40 = v11;
  v16 = v11;
  if ( v11 )
  {
    if ( *((struct DMMVIDPNTARGETMODESET **)v11 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v11 + 48) )
    {
      LODWORD(v24) = -1071774970;
    }
    else
    {
      LODWORD(v17) = -1;
      v42 = -1;
      if ( *(_WORD *)(a1 + v9 + 64) )
      {
        if ( !*((_QWORD *)v11 + 18) )
        {
          WdLogSingleEntry0((unsigned int)v12);
          WdLogGlobalForLineNumber = 3640;
        }
        BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v33, v32, v34, v35) + 24) = BestTargetMode;
        WdLogGlobalForLineNumber = 3649;
        if ( (int)BestTargetMode >= 0 )
          goto LABEL_38;
        if ( !*(_WORD *)(a1 + v9 + 66) || (unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL) )
        {
          WdLogNewEntry5_WdTrace(v37, v36, v38, v39);
          WdLogGlobalForLineNumber = 3659;
          *(_WORD *)(a1 + v9 + 64) = 0;
          auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v40, 0LL);
          return 3223192326LL;
        }
        LODWORD(v17) = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
        v42 = v17;
      }
      else
      {
        if ( !*(_WORD *)(a1 + v9 + 66) || (unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL) )
        {
          WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
          WdLogGlobalForLineNumber = 3618;
          if ( !*((_QWORD *)v16 + 18) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3621;
          }
          BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = BestTargetMode;
          WdLogGlobalForLineNumber = 3627;
          if ( (int)BestTargetMode >= 0 )
            ++*(_WORD *)(a1 + v9 + 64);
          ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v16 + 88));
          return (unsigned int)BestTargetMode;
        }
        if ( *((_QWORD *)v16 + 18) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3636;
        }
      }
      LODWORD(v24) = -1071774970;
      while ( *(_WORD *)(a1 + v9 + 64) < *(_WORD *)(a1 + v9 + 66) )
      {
        NextBestSourceMode = BmlGetNextBestSourceMode(a1, a2, (unsigned __int16)v5, (_DWORD)v16, v17, (__int64)&v42);
        LODWORD(v24) = NextBestSourceMode;
        if ( NextBestSourceMode < 0 )
        {
          if ( NextBestSourceMode != -1071774970 )
          {
            WdLogSingleEntry4(3LL, NextBestSourceMode, a1, v5, a2);
            WdLogGlobalForLineNumber = 3688;
          }
          break;
        }
        v17 = v42;
        if ( v42 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3694;
        }
        v26 = v41;
        ++*(_WORD *)(a1 + v9 + 64);
        v24 = (int)VIDPN_MGR::PinVidPnSourceMode(v26, v16, v17, 1);
        v31 = WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
        *(_QWORD *)(v31 + 24) = v17;
        *(_QWORD *)(v31 + 32) = v24;
        WdLogGlobalForLineNumber = 3699;
        if ( (int)v24 >= 0 )
        {
          LODWORD(v24) = BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, v43);
          if ( (int)v24 >= 0 )
            goto LABEL_16;
        }
        *(_DWORD *)(a1 + v9 + 88) = v24;
        ++*(_DWORD *)(a1 + v9 + 72);
        if ( (_DWORD)v24 != -1071774970 )
        {
          WdLogSingleEntry4(3LL, (int)v24, a1, a2, v5);
          WdLogGlobalForLineNumber = 3719;
          break;
        }
      }
    }
  }
  else
  {
    LODWORD(v24) = -1071774968;
  }
  if ( !*(_WORD *)(a1 + v9 + 66)
    || (unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL)
    || !*(_WORD *)(a1 + v9 + 64) )
  {
    goto LABEL_15;
  }
  LODWORD(BestTargetMode) = BmlUnPinSourceMode(a1, a2, (unsigned __int16)v5);
  if ( (int)BestTargetMode < 0 )
  {
    WdLogSingleEntry3(3LL, a1, a2, v5);
    WdLogGlobalForLineNumber = 3736;
LABEL_38:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v40, 0LL);
    return (unsigned int)BestTargetMode;
  }
  *(_WORD *)(a1 + v9 + 64) = 0;
LABEL_15:
  if ( v16 )
LABEL_16:
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v16 + 88));
  return (unsigned int)v24;
}
