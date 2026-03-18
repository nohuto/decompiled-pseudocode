/*
 * XREFs of BmlFunctionalizePath @ 0x140365024
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x140364BA4 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledDeviceUsageNoInline @ 0x140090D68 (Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledDeviceUsageNoInline.c)
 *     BmlUnPinSourceMode @ 0x1402DBC58 (BmlUnPinSourceMode.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DCF3C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1402DDD64 (BmlGetNextBestSourceMode.c)
 *     BmlPinNextBestTargetMode @ 0x14038B4F8 (BmlPinNextBestTargetMode.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1403C90E8 (BmlIsSecondaryHardwareClonePath.c)
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
  struct DMMVIDPNSOURCEMODESET *v16; // rbx
  __int64 BestTargetMode; // rdi
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int NextBestSourceMode; // eax
  VIDPN_MGR *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  int v40; // ebx
  struct DMMVIDPNTARGETMODESET *v41; // [rsp+80h] [rbp+8h] BYREF
  VIDPN_MGR *v42; // [rsp+88h] [rbp+10h]
  unsigned int v43; // [rsp+90h] [rbp+18h] BYREF
  __int64 v44; // [rsp+98h] [rbp+20h]

  v44 = a4;
  v5 = (unsigned __int16)a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v9 = 120 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v10 = *(VIDPN_MGR **)(a2 + 48);
  WdLogGlobalForLineNumber = 3613;
  v42 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3618;
  }
  v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 88));
  v41 = v11;
  v16 = v11;
  if ( !v11 )
  {
    LODWORD(BestTargetMode) = -1071774968;
LABEL_36:
    if ( *(_WORD *)(a1 + v9 + 66)
      && !(unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL)
      && *(_WORD *)(a1 + v9 + 64) )
    {
      if ( (unsigned int)Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledDeviceUsageNoInline() )
        *(_WORD *)(a1 + v9 + 64) = 0;
      v40 = BmlUnPinSourceMode(a1, a2, v5);
      if ( v40 >= 0 )
      {
        if ( !(unsigned int)Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledDeviceUsageNoInline() )
          *(_WORD *)(a1 + v9 + 64) = 0;
      }
      else
      {
        WdLogSingleEntry3(3LL, a1, a2, v5);
        WdLogGlobalForLineNumber = 3775;
        LODWORD(BestTargetMode) = v40;
      }
    }
LABEL_16:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v41, 0LL);
    return (unsigned int)BestTargetMode;
  }
  if ( *((struct DMMVIDPNTARGETMODESET **)v11 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v11 + 48) )
  {
    LODWORD(BestTargetMode) = -1071774970;
    goto LABEL_36;
  }
  LODWORD(v18) = -1;
  v43 = -1;
  if ( !*(_WORD *)(a1 + v9 + 64) )
  {
    if ( !*(_WORD *)(a1 + v9 + 66) || (unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL) )
    {
      WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      WdLogGlobalForLineNumber = 3640;
      if ( !*((_QWORD *)v16 + 18) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3643;
      }
      BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = BestTargetMode;
      WdLogGlobalForLineNumber = 3649;
      if ( (int)BestTargetMode >= 0 )
        ++*(_WORD *)(a1 + v9 + 64);
      goto LABEL_16;
    }
    if ( *((_QWORD *)v16 + 18) )
    {
      WdLogSingleEntry0((unsigned int)(v14 + 1));
      WdLogGlobalForLineNumber = 3658;
    }
    goto LABEL_24;
  }
  if ( !*((_QWORD *)v11 + 18) )
  {
    WdLogSingleEntry0((unsigned int)v12);
    WdLogGlobalForLineNumber = 3662;
  }
  v24 = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v26, v25, v27, v28) + 24) = v24;
  WdLogGlobalForLineNumber = 3671;
  if ( (int)v24 < 0 )
  {
    if ( *(_WORD *)(a1 + v9 + 66) && !(unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL) )
    {
      LODWORD(v18) = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
      v43 = v18;
LABEL_24:
      LODWORD(BestTargetMode) = -1071774970;
      while ( *(_WORD *)(a1 + v9 + 64) < *(_WORD *)(a1 + v9 + 66) )
      {
        NextBestSourceMode = BmlGetNextBestSourceMode(a1, a2, (unsigned __int16)v5, (__int64)v16, v18, &v43);
        LODWORD(BestTargetMode) = NextBestSourceMode;
        if ( NextBestSourceMode < 0 )
        {
          if ( NextBestSourceMode != -1071774970 )
          {
            WdLogSingleEntry4(3LL, NextBestSourceMode, a1, v5, a2);
            WdLogGlobalForLineNumber = 3710;
          }
          goto LABEL_36;
        }
        v18 = v43;
        if ( v43 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3716;
        }
        v34 = v42;
        ++*(_WORD *)(a1 + v9 + 64);
        BestTargetMode = (int)VIDPN_MGR::PinVidPnSourceMode(v34, v16, v18, 1);
        v39 = WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
        *(_QWORD *)(v39 + 24) = v18;
        *(_QWORD *)(v39 + 32) = BestTargetMode;
        WdLogGlobalForLineNumber = 3721;
        if ( (int)BestTargetMode >= 0 )
        {
          LODWORD(BestTargetMode) = BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, v44);
          if ( (int)BestTargetMode >= 0 )
            goto LABEL_16;
        }
        *(_DWORD *)(a1 + v9 + 88) = BestTargetMode;
        ++*(_DWORD *)(a1 + v9 + 72);
        if ( (_DWORD)BestTargetMode != -1071774970 )
        {
          WdLogSingleEntry4(3LL, (int)BestTargetMode, a1, a2, v5);
          WdLogGlobalForLineNumber = 3741;
          goto LABEL_36;
        }
      }
      goto LABEL_36;
    }
    WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
    WdLogGlobalForLineNumber = 3681;
    *(_WORD *)(a1 + v9 + 64) = 0;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v41, 0LL);
    return 3223192326LL;
  }
  else
  {
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v41, 0LL);
    return (unsigned int)v24;
  }
}
