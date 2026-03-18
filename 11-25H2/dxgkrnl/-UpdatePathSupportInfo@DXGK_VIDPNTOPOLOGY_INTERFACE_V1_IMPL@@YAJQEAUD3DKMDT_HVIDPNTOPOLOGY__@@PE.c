/*
 * XREFs of ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1402D1600
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14001C234 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14001C548 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x14004523C (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x140046934 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1402D1ADC (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1402D1BF0 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UpdatePathSupportInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  __int64 v10; // r12
  _QWORD *v11; // rax
  int v12; // eax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v13; // rdi
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v14; // rdi
  char IsSourceAndTargetPinned; // al
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v21; // edi
  __int64 v22; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-20h] BYREF
  __int64 v29; // [rsp+28h] [rbp-18h]
  char v30; // [rsp+30h] [rbp-10h]

  v28 = -1;
  v29 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 7038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 7038);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 7038);
  if ( a2 )
  {
    v9 = *(_DWORD *)a2;
    v10 = *((unsigned int *)a2 + 1);
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v11[3] = v9;
    v11[4] = v10;
    v11[5] = this;
    v11[6] = a2;
    WdLogGlobalForLineNumber = 2722;
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      v12 = *((_DWORD *)a2 + 83);
      if ( (v12 & 1) == 0 )
        *((_DWORD *)a2 + 83) = v12 | 1;
      if ( *((_BYTE *)this + 76) <= 3u )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 243;
      }
      if ( (*((_BYTE *)this + 78) & 8) != 0 )
      {
        v13 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)this + 3);
        if ( v13 != (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
        {
          v14 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)((char *)v13 - 8);
          while ( v14 )
          {
            if ( *(_DWORD *)(*((_QWORD *)v14 + 11) + 24LL) == (_DWORD)v9
              && *(_DWORD *)(*((_QWORD *)v14 + 12) + 24LL) == (_DWORD)v10 )
            {
              break;
            }
            v23 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v14 + 1);
            v14 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)((char *)v23 - 8);
            if ( v23 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
              v14 = 0LL;
          }
          if ( v14 )
          {
            IsSourceAndTargetPinned = DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned((DMMVIDPNPRESENTPATH *)v14);
            v16 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v14;
            if ( IsSourceAndTargetPinned )
            {
              if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v14) )
              {
                if ( VIDPN_MGR::_bShouldLogOn1277688 && ((_DWORD)a2[4] & 6) != 0 )
                {
                  WdLogSingleEntry2(3LL, (unsigned int)v9, v10);
                  WdLogGlobalForLineNumber = 1108;
                  VIDPN_MGR::_bShouldLogOn1277688 = 0;
                }
                *((_DWORD *)v14 + 30) = 1;
                if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)v14)
                  && ((_DWORD)v14[30] & 0x10) != 0 )
                {
                  WdLogSingleEntry0(3LL);
                  *((_DWORD *)v14 + 30) &= ~0x10u;
                  WdLogGlobalForLineNumber = 869;
                }
                if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)v14)
                  && ((_DWORD)v14[30] & 8) != 0 )
                {
                  WdLogSingleEntry0(3LL);
                  *((_DWORD *)v14 + 30) &= ~8u;
                  WdLogGlobalForLineNumber = 881;
                }
                goto LABEL_20;
              }
              v16 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v14;
            }
            DMMVIDPNPRESENTPATH::SetScalingSupport(
              v16,
              (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)a2 + 4);
LABEL_20:
            DMMVIDPNPRESENTPATH::SetRotationSupport(
              (DMMVIDPNPRESENTPATH *)v14,
              (const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)a2 + 6);
            v14[42] = a2[83];
            v17 = *((_QWORD *)this + 17);
            if ( v17 <= 3 )
            {
              WdLogSingleEntry0(1LL);
              v17 = *((_QWORD *)this + 17);
              WdLogGlobalForLineNumber = 82;
            }
            if ( *(_QWORD *)(*((_QWORD *)this + 18) + 24LL) != 255LL )
            {
              if ( v17 <= 3 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 82;
              }
              --*(_QWORD *)(*((_QWORD *)this + 18) + 24LL);
            }
            if ( *((_QWORD *)this + 17) <= 3uLL )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 82;
            }
            if ( !*(_QWORD *)(*((_QWORD *)this + 18) + 24LL) )
              ProtectableFromChange::DisallowModifyingAction(
                (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 56),
                3u);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
            if ( v30 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v28);
            }
            return 0LL;
          }
        }
        WdLogSingleEntry3(2LL, (unsigned int)v9, v10, this);
        WdLogGlobalForLineNumber = 1090;
        v21 = -1071774937;
      }
      else
      {
        WdLogSingleEntry1(2LL, this);
        WdLogGlobalForLineNumber = 1077;
        v21 = -1073741790;
      }
      WdLogSingleEntry2(2LL, a2, this);
      WdLogGlobalForLineNumber = 2771;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, 0LL, v28);
      return v21;
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      WdLogGlobalForLineNumber = 2734;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v28);
      return 3223192320LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 2708;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v28);
    return 3221225485LL;
  }
}
