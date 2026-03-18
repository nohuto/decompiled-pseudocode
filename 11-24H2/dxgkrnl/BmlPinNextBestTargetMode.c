/*
 * XREFs of BmlPinNextBestTargetMode @ 0x14038B4F8
 * Callers:
 *     BmlFunctionalizePath @ 0x140365024 (BmlFunctionalizePath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1402DBE68 (BmlUnPinPartialPathModalityOnPath.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1403168E0 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlPinPathContentScaling @ 0x14038B9E0 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x14038BBEC (BmlPinPathContentRotation.c)
 *     BmlGetNextBestTargetMode @ 0x14038BDB4 (BmlGetNextBestTargetMode.c)
 */

__int64 __fastcall BmlPinNextBestTargetMode(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // r12
  unsigned int v7; // r14d
  __int64 v10; // rdx
  __int64 v11; // rdi
  struct DMMVIDPNTARGETMODESET *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // esi
  int NextBestTargetMode; // eax
  unsigned int v24; // esi
  VIDPN_MGR *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 result; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [rsp+50h] [rbp-19h] BYREF
  __int64 v36; // [rsp+58h] [rbp-11h]
  __int64 v37; // [rsp+60h] [rbp-9h] BYREF
  struct DMMVIDPNTARGETMODESET *v38; // [rsp+68h] [rbp-1h] BYREF
  struct DMMVIDPNTARGETMODESET *v39; // [rsp+70h] [rbp+7h] BYREF
  VIDPN_MGR *v40; // [rsp+78h] [rbp+Fh]
  unsigned int v41; // [rsp+D0h] [rbp+67h]
  unsigned int v44; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = a2;
  v6 = 120LL * a3;
  v7 = 0;
  v40 = *(VIDPN_MGR **)(a2 + 48);
  v36 = a3;
  if ( !v40 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3446;
  }
  v39 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 88));
  v11 = (__int64)v39;
  if ( v39 )
  {
    v12 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a4 + 96));
    v38 = v12;
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    v17[3] = v12;
    v17[4] = *(unsigned __int16 *)(v6 + a1 + 68);
    v21 = *(unsigned __int16 *)(v6 + a1 + 70);
    v17[5] = v21;
    WdLogGlobalForLineNumber = 3457;
    if ( !v12 )
    {
      v22 = -1071774967;
      goto LABEL_30;
    }
    if ( *((struct DMMVIDPNTARGETMODESET **)v12 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)v12 + 48) )
    {
      v22 = -1071774970;
LABEL_36:
      v4 = a2;
LABEL_30:
      v33 = WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
      *(_QWORD *)(v33 + 24) = *(unsigned __int16 *)(v6 + a1 + 68);
      *(_QWORD *)(v33 + 32) = *(unsigned __int16 *)(v6 + a1 + 70);
      WdLogGlobalForLineNumber = 3574;
      if ( *(_WORD *)(v6 + a1 + 70) && *(_WORD *)(v6 + a1 + 68) )
      {
        if ( (int)BmlUnPinPartialPathModalityOnPath(a1, v4, a3) < 0 )
        {
          WdLogSingleEntry3(3LL, a1, v36, v4);
          WdLogGlobalForLineNumber = 3588;
        }
        *(_WORD *)(v6 + a1 + 68) = 0;
      }
      if ( v12 )
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v12 + 88));
      v7 = v22;
LABEL_19:
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 88));
      return v7;
    }
    v21 = 0xFFFFFFFFLL;
    v44 = -1;
    if ( !*(_WORD *)(v6 + a1 + 68) )
    {
      if ( !*(_WORD *)(v6 + a1 + 70) )
      {
        if ( !*((_QWORD *)v12 + 18) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3477;
        }
        if ( (int)BmlPinPathContentScaling(a1, v4, a3) < 0 || (int)BmlPinPathContentRotation(a1, v4, a3) < 0 )
        {
          WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
          WdLogGlobalForLineNumber = 3488;
          v7 = -1071774970;
        }
        else
        {
          ++*(_WORD *)(v6 + a1 + 68);
        }
LABEL_18:
        ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v12 + 88));
        goto LABEL_19;
      }
      if ( *((_QWORD *)v12 + 18) )
      {
        WdLogSingleEntry0(1LL);
        v21 = 0xFFFFFFFFLL;
        WdLogGlobalForLineNumber = 3492;
      }
      goto LABEL_10;
    }
    if ( !*((_QWORD *)v12 + 18) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3497;
    }
    if ( *(_WORD *)(v6 + a1 + 70) )
    {
      v34 = *((_QWORD *)v12 + 18);
      v21 = *(unsigned int *)(v34 + 24);
      v44 = *(_DWORD *)(v34 + 24);
LABEL_10:
      v22 = -1071774970;
      while ( *(_WORD *)(v6 + a1 + 68) < *(_WORD *)(v6 + a1 + 70) )
      {
        v35 = 1;
        v37 = 0LL;
        NextBestTargetMode = BmlGetNextBestTargetMode(a1, a2, a3, v12, v11, v21, &v44, &v37, &v35);
        v22 = NextBestTargetMode;
        if ( NextBestTargetMode < 0 )
        {
          if ( NextBestTargetMode == -1071774970 )
            goto LABEL_36;
          v4 = a2;
          WdLogSingleEntry4(3LL, NextBestTargetMode, a1, v36, a2);
          WdLogGlobalForLineNumber = 3531;
          goto LABEL_30;
        }
        v24 = v44;
        v41 = v44;
        if ( v44 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3537;
        }
        v25 = v40;
        ++*(_WORD *)(v6 + a1 + 68);
        v22 = VIDPN_MGR::PinVidPnTargetMode(v25, v12, v24, 1);
        if ( v22 >= 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v26, v18, v19, v20) + 24) = v41;
          v27 = *((_QWORD *)v12 + 18);
          WdLogGlobalForLineNumber = 3545;
          *(_QWORD *)(v27 + 152) = v37;
          *(_DWORD *)(v27 + 160) = v35;
          if ( (int)BmlPinPathContentScaling(a1, a2, a3) >= 0 && (int)BmlPinPathContentRotation(a1, a2, a3) >= 0 )
            goto LABEL_18;
          v22 = -1071774970;
        }
        *(_DWORD *)(v6 + a1 + 88) = v22;
        ++*(_DWORD *)(v6 + a1 + 76);
        if ( v22 != -1071774970 )
        {
          v4 = a2;
          WdLogSingleEntry4(3LL, v22, a1, v36, a2);
          WdLogGlobalForLineNumber = 3568;
          goto LABEL_30;
        }
        v21 = v41;
      }
      goto LABEL_36;
    }
    WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
    WdLogGlobalForLineNumber = 3502;
    *(_WORD *)(v6 + a1 + 68) = 0;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v38, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v39, 0LL);
    return 3223192326LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, v10);
    result = 3223192328LL;
    WdLogGlobalForLineNumber = 3451;
  }
  return result;
}
