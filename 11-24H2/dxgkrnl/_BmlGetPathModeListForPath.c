/*
 * XREFs of _BmlGetPathModeListForPath @ 0x1402DC9A4
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x140269ADC (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1400348B0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x14003D9A0 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlUnPinSourceMode @ 0x1402DBC58 (BmlUnPinSourceMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1402DC488 (_BmlGetPathModeListForPathTargetModes.c)
 *     BmlAreRawModesEnabled @ 0x1402DCD18 (BmlAreRawModesEnabled.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DCF3C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402DE3FC (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetModeCategoryForRegion @ 0x1402DE910 (BmlGetModeCategoryForRegion.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1403C90E8 (BmlIsSecondaryHardwareClonePath.c)
 */

__int64 __fastcall BmlGetPathModeListForPath(__int64 a1, __int64 a2, __int64 a3, CCD_MODE_RESULT_SET *a4)
{
  struct DMMVIDPNSOURCEMODE *NextMode; // r15
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  VIDPN_MGR *v11; // rax
  __int64 v12; // rdx
  struct DMMVIDPNTARGETMODESET *v13; // rax
  struct DMMVIDPNTARGETMODESET *v14; // rbx
  int PathModeListForPathTargetModes; // ebp
  int v16; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 BitsPerPixel; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int16 v32; // di
  __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  VIDPN_MGR *v40; // [rsp+30h] [rbp-68h]
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+38h] [rbp-60h]
  struct DMMVIDPNTARGETMODESET *v42; // [rsp+40h] [rbp-58h] BYREF
  struct DMMVIDPNSOURCEMODE *v43; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v44; // [rsp+B0h] [rbp+18h]

  v44 = a3;
  NextMode = 0LL;
  v5 = (unsigned __int16)a3;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6806;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6807;
  }
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v9 = 120 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  v10 = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v11 = *(VIDPN_MGR **)(a2 + 48);
  WdLogGlobalForLineNumber = 6811;
  v40 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6816;
  }
  v12 = *(_QWORD *)(v9 + a1 + 16);
  *(_WORD *)(v9 + a1 + 64) = 0;
  *(_WORD *)(v9 + a1 + 68) = 0;
  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(a2 + 96), *(_DWORD *)(v12 + 24), *(_DWORD *)(v12 + 28));
  v13 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
  v42 = v13;
  v14 = v13;
  if ( !v13 )
  {
    PathModeListForPathTargetModes = -1071774968;
    goto LABEL_9;
  }
  if ( *((struct DMMVIDPNTARGETMODESET **)v13 + 6) != (struct DMMVIDPNTARGETMODESET *)((char *)v13 + 48) )
  {
    if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(a1, (unsigned int)v5, 0LL) )
    {
      WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      WdLogGlobalForLineNumber = 6841;
      if ( !*((_QWORD *)v14 + 18) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6844;
      }
    }
    *(_QWORD *)(v9 + a1 + 92) = 0LL;
    v22 = (_QWORD *)((char *)v14 + 48);
    *(_QWORD *)(v9 + a1 + 100) = 0LL;
    PathModeListForPathTargetModes = 0;
    v23 = (_QWORD *)*((_QWORD *)v14 + 6);
    v43 = (struct DMMVIDPNSOURCEMODE *)*((_QWORD *)v14 + 18);
    if ( v23 != (_QWORD *)((char *)v14 + 48) )
      NextMode = (struct DMMVIDPNSOURCEMODE *)(v23 - 1);
    while ( 1 )
    {
      if ( !NextMode )
        goto LABEL_9;
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v20, v21);
      v24[3] = *((unsigned int *)NextMode + 6);
      v24[4] = *((unsigned int *)NextMode + 19);
      v24[5] = *((unsigned int *)NextMode + 20);
      BitsPerPixel = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel(NextMode, v25, v26, v27);
      v24[6] = BitsPerPixel;
      v24[7] = *((int *)NextMode + 24);
      ++*(_DWORD *)(v9 + a1 + 92);
      WdLogGlobalForLineNumber = 6864;
      if ( v43 && v43 != NextMode
        || !(unsigned __int8)BmlAreRawModesEnabled(a1, (unsigned int)v10)
        && (unsigned int)BmlGetModeCategoryForRegion((char *)NextMode + 76, v9 + a1 + 36, 0LL) == 1
        || (v32 = v44, !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, v44, NextMode)) )
      {
        WdLogNewEntry5_WdTrace(BitsPerPixel, v28, v30, v31);
        WdLogGlobalForLineNumber = 6878;
        goto LABEL_32;
      }
      ++*(_DWORD *)(v9 + a1 + 96);
      v33 = *((unsigned int *)NextMode + 6);
      if ( !v43 )
      {
        v34 = (int)VIDPN_MGR::PinVidPnSourceMode(v40, v14, v33, 1);
        v39 = WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
        *(_QWORD *)(v39 + 24) = v33;
        *(_QWORD *)(v39 + 32) = v34;
        WdLogGlobalForLineNumber = 6890;
        if ( (int)v34 < 0 )
        {
          PathModeListForPathTargetModes = 0;
          goto LABEL_32;
        }
        v32 = v44;
      }
      PathModeListForPathTargetModes = BmlGetPathModeListForPathTargetModes(a1, a2, v32, (__int64)Path, a4);
      if ( !v43 )
      {
        v16 = BmlUnPinSourceMode(a1, a2, v32);
        if ( v16 < 0 )
        {
          WdLogSingleEntry3(3LL, a1, a2, v10);
          WdLogGlobalForLineNumber = 6913;
          goto LABEL_10;
        }
      }
      if ( PathModeListForPathTargetModes < 0 )
      {
        WdLogSingleEntry3(2LL, a1, a2, v10);
        WdLogGlobalForLineNumber = 6921;
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v14 + 88));
        return (unsigned int)PathModeListForPathTargetModes;
      }
LABEL_32:
      NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(v14, NextMode);
    }
  }
  PathModeListForPathTargetModes = 0;
LABEL_9:
  v16 = PathModeListForPathTargetModes;
LABEL_10:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v42, 0LL);
  return (unsigned int)v16;
}
