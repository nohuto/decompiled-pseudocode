/*
 * XREFs of ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1403114BC
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403113E4 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x140038864 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x14005C0DC (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x14005C62C (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x14025F87C (-SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402D80F8 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

__int64 __fastcall DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE a3,
        int a4)
{
  __int64 v4; // r15
  __int64 v6; // r12
  __int64 v7; // rbx
  VIDPN_MGR *v8; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v10; // rsi
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v20; // rbx
  __int64 result; // rax
  _QWORD *v22; // rax
  int v23; // eax
  bool v24; // zf
  int updated; // eax
  __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h] BYREF
  DMMVIDPNTOPOLOGY *v28; // [rsp+60h] [rbp-10h]
  unsigned int v29; // [rsp+B0h] [rbp+40h] BYREF
  int v30; // [rsp+C8h] [rbp+58h]

  v30 = a4;
  v4 = a3;
  v6 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 12052;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12060;
  }
  v7 = *((_QWORD *)a1 + 390);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 12065;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v8 = *(VIDPN_MGR **)(v7 + 104);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 12079;
    return result;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v27, (__int64)v8);
  v26 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v8);
  auto_rc<DMMVIDPN const>::reset(&v26, (__int64)ClientCommittedVidPnRef);
  if ( !v26 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 12098;
    LODWORD(v17) = -1071774884;
    goto LABEL_26;
  }
  v10 = (DMMVIDPNTOPOLOGY *)(v26 + 96);
  v11 = 0LL;
  v28 = (DMMVIDPNTOPOLOGY *)(v26 + 96);
  while ( 1 )
  {
    v29 = -1;
    v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v10, v6, v11, &v29);
    v17 = v12;
    if ( v12 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
      v22[3] = v11;
      v22[4] = v6;
      v22[5] = v10;
      v22[6] = v17;
      WdLogGlobalForLineNumber = 12125;
      goto LABEL_26;
    }
    v18 = v29;
    if ( v29 == -1 )
    {
      auto_rc<DMMVIDPN const>::reset(&v26, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v27 + 40));
      return 0LL;
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(v10, v6, v29);
    if ( !Path )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12145;
    }
    v20 = *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL);
    if ( !v20 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12154;
    }
    if ( (_DWORD)v4 == 1 )
    {
      if ( *((_DWORD *)Path + 43) != 2 )
        goto LABEL_16;
    }
    else if ( (_DWORD)v4 != 2
           || !*(_BYTE *)(v20 + 108)
           && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, D3DKMDT_VPPMT_MACROVISION_APSTRIGGER) )
    {
      goto LABEL_16;
    }
    if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(
            Path,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v4) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 12193;
LABEL_24:
      LODWORD(v17) = -1071774970;
      goto LABEL_26;
    }
    v23 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(Path, (enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE)v4);
    LODWORD(v17) = v23;
    if ( v23 == -1071774970 )
    {
      WdLogSingleEntry4(7LL, v4, v6, v18, a1);
      WdLogGlobalForLineNumber = 12208;
      goto LABEL_24;
    }
    if ( v23 < 0 )
      break;
    v24 = *((_BYTE *)Path + 110) == 0;
    *((_DWORD *)Path + 44) = v30;
    if ( v24 )
      updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
    else
      updated = DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(Path);
    LODWORD(v17) = updated;
    if ( updated < 0 )
      goto LABEL_26;
LABEL_16:
    v10 = v28;
    ++v11;
  }
  WdLogSingleEntry4(2LL, v4, v6, v18, v23);
  WdLogGlobalForLineNumber = 12215;
LABEL_26:
  auto_rc<DMMVIDPN const>::reset(&v26, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v27 + 40));
  return (unsigned int)v17;
}
