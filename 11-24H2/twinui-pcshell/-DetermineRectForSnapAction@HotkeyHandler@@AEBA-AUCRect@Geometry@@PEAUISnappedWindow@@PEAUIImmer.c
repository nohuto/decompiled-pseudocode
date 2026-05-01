/*
 * XREFs of ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x1805AD988
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AE210 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18004C99C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18008B40C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x18008CA28 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x1802144BC (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetRectForColumn@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805AB89C (-GetRectForColumn@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEB.c)
 *     ?GetRectForColumn@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x1805AB95C (-GetRectForColumn@SnapLayoutHelpers@@YA-AUtagRECT@@JAEBUCRect@Geometry@@IK@Z.c)
 *     ?GetRectForRow@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805AB9BC (-GetRectForRow@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV-$.c)
 *     ?GetRectForRow@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x1805ABA7C (-GetRectForRow@SnapLayoutHelpers@@YA-AUtagRECT@@JAEBUCRect@Geometry@@IK@Z.c)
 *     ?IsSmartFillSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x1805AC3C8 (-IsSmartFillSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x1805AF6C0 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyHandler::DetermineRectForSnapAction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        SnapRectHelpers *a4,
        int a5,
        const struct Geometry::CRect *a6,
        unsigned int a7)
{
  struct IImmersiveSettingsCache *v11; // rdx
  int RectForRegion; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  struct IImmersiveMonitor *v16; // rdx
  unsigned __int64 v17; // rdx
  struct tagRECT *RectForRow; // rax
  __m128i v19; // xmm0
  int v20; // eax
  int v21; // edx
  _DWORD *v22; // rax
  int v23; // eax
  struct IImmersiveMonitor *v24; // rdx
  int v25; // eax
  struct IImmersiveMonitor *v26; // rdx
  int v27; // eax
  struct IImmersiveMonitor *v28; // rdx
  unsigned __int64 v29; // rdx
  int v30; // eax
  int v31; // edx
  int v32; // eax
  struct IImmersiveMonitor *v33; // rdx
  int v34; // eax
  struct IImmersiveMonitor *v35; // rdx
  struct tagRECT *RectForColumn; // rax
  __m128i v37; // xmm0
  int v39; // [rsp+28h] [rbp-89h]
  RECT v40; // [rsp+40h] [rbp-71h] BYREF
  __int64 v41; // [rsp+50h] [rbp-61h]
  __int64 v42; // [rsp+58h] [rbp-59h]
  int v43[4]; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v44[16]; // [rsp+70h] [rbp-41h] BYREF
  __int128 v45; // [rsp+80h] [rbp-31h]
  __int128 v46; // [rsp+90h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]

  *(_QWORD *)&v40.left = 0LL;
  *(_QWORD *)&v40.right = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( a5 > 8 )
  {
    if ( a5 == 9 )
    {
      if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(
             *(SnapLayoutHelpers **)(a1 + 64),
             (struct IImmersiveSettingsCache *)a2) )
      {
        v34 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, RECT *))(**(_QWORD **)(a1 + 32) + 24LL))(
                *(_QWORD *)(a1 + 32),
                a4,
                &v40);
        if ( v34 >= 0 )
        {
          v30 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a4, v35);
          v31 = 0;
          goto LABEL_58;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3E1,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v34);
      }
      RectForColumn = SnapLayoutHelpers::GetRectForColumn(
                        (struct tagRECT *)v43,
                        (struct tagRECT *)(unsigned int)(*(_DWORD *)a6 + 1),
                        a6,
                        (const struct Geometry::CRect *)a7);
      v37 = *(__m128i *)RectForColumn;
      *(_QWORD *)a2 = *(_QWORD *)&RectForColumn->left;
      *(_QWORD *)(a2 + 8) = _mm_srli_si128(v37, 8).m128i_u64[0];
      goto LABEL_56;
    }
    if ( a5 != 10 )
    {
      if ( a5 != 11 )
      {
        if ( a5 != 12 )
        {
          if ( a5 != 13 )
          {
            if ( a5 != 14 )
              goto LABEL_56;
            if ( !SnapLayoutHelpers::IsSmartFillSettingEnabled(
                    *(SnapLayoutHelpers **)(a1 + 64),
                    (struct IImmersiveSettingsCache *)a2) )
              goto LABEL_26;
            v15 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, RECT *))(**(_QWORD **)(a1 + 32) + 24LL))(
                    *(_QWORD *)(a1 + 32),
                    a4,
                    &v40);
            if ( v15 < 0 )
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x418,
                (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
                (const char *)(unsigned int)v15);
LABEL_26:
              v17 = (unsigned int)(*((_DWORD *)a6 + 3) - 1);
LABEL_27:
              RectForRow = SnapLayoutHelpers::GetRectForRow(
                             (struct tagRECT *)v43,
                             (struct tagRECT *)v17,
                             a6,
                             (const struct Geometry::CRect *)a7);
LABEL_28:
              v19 = *(__m128i *)RectForRow;
              *(_QWORD *)a2 = *(_QWORD *)&RectForRow->left;
              *(_QWORD *)(a2 + 8) = _mm_srli_si128(v19, 8).m128i_u64[0];
              goto LABEL_56;
            }
            v20 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a4, v16);
            v21 = 2;
            goto LABEL_30;
          }
          if ( !SnapLayoutHelpers::IsSmartFillSettingEnabled(
                  *(SnapLayoutHelpers **)(a1 + 64),
                  (struct IImmersiveSettingsCache *)a2) )
          {
LABEL_34:
            v17 = (unsigned int)((*((_DWORD *)a6 + 1) + *((_DWORD *)a6 + 3)) / 2);
            goto LABEL_27;
          }
          v23 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, RECT *))(**(_QWORD **)(a1 + 32) + 24LL))(
                  *(_QWORD *)(a1 + 32),
                  a4,
                  &v40);
          if ( v23 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x40D,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
              (const char *)(unsigned int)v23);
            goto LABEL_34;
          }
          v20 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a4, v24);
          v21 = 1;
LABEL_30:
          v22 = SnapLayoutHelpers::GetRectForRow(v43, v21, (__int64)a6, (const char *)a7, v20, v39, (__int64)&v40);
LABEL_59:
          *(_OWORD *)a2 = *(_OWORD *)v22;
          goto LABEL_56;
        }
        if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(
               *(SnapLayoutHelpers **)(a1 + 64),
               (struct IImmersiveSettingsCache *)a2) )
        {
          v25 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, RECT *))(**(_QWORD **)(a1 + 32) + 24LL))(
                  *(_QWORD *)(a1 + 32),
                  a4,
                  &v40);
          if ( v25 >= 0 )
          {
            v20 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a4, v26);
            v21 = 0;
            goto LABEL_30;
          }
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x402,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
            (const char *)(unsigned int)v25);
        }
        v17 = (unsigned int)(*((_DWORD *)a6 + 1) + 1);
        goto LABEL_27;
      }
      if ( !SnapLayoutHelpers::IsSmartFillSettingEnabled(
              *(SnapLayoutHelpers **)(a1 + 64),
              (struct IImmersiveSettingsCache *)a2) )
        goto LABEL_44;
      v27 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, RECT *))(**(_QWORD **)(a1 + 32) + 24LL))(
              *(_QWORD *)(a1 + 32),
              a4,
              &v40);
      if ( v27 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3F7,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v27);
LABEL_44:
        v29 = (unsigned int)(*((_DWORD *)a6 + 2) - 1);
LABEL_50:
        RectForRow = SnapLayoutHelpers::GetRectForColumn(
                       (struct tagRECT *)v43,
                       (struct tagRECT *)v29,
                       a6,
                       (const struct Geometry::CRect *)a7);
        goto LABEL_28;
      }
      v30 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a4, v28);
      v31 = 2;
LABEL_58:
      v22 = SnapLayoutHelpers::GetRectForColumn(v43, v31, (__int64)a6, (const char *)a7, v30, v39, (__int64)&v40);
      goto LABEL_59;
    }
    if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(
           *(SnapLayoutHelpers **)(a1 + 64),
           (struct IImmersiveSettingsCache *)a2) )
    {
      v32 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, RECT *))(**(_QWORD **)(a1 + 32) + 24LL))(
              *(_QWORD *)(a1 + 32),
              a4,
              &v40);
      if ( v32 >= 0 )
      {
        v30 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a4, v33);
        v31 = 1;
        goto LABEL_58;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3EC,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)v32);
    }
    v29 = (unsigned int)((*(_DWORD *)a6 + *((_DWORD *)a6 + 2)) / 2);
    goto LABEL_50;
  }
  if ( a5 == 8 || a5 == 1 || a5 == 2 || a5 == 3 || a5 == 4 || a5 == 5 || (unsigned int)(a5 - 6) <= 1 )
  {
    *(_OWORD *)a2 = *(_OWORD *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)v43, a5, (int *)a6);
    if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(*(SnapLayoutHelpers **)(a1 + 64), v11) )
    {
      RectForRegion = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, RECT *))(**(_QWORD **)(a1 + 32) + 24LL))(
                        *(_QWORD *)(a1 + 32),
                        a4,
                        &v40);
      v13 = retaddr;
      if ( RectForRegion < 0 )
      {
        v14 = 974LL;
LABEL_16:
        wil::details::in1diag3::_Log_Hr(
          v13,
          (void *)v14,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)RectForRegion);
        goto LABEL_56;
      }
      v45 = 0LL;
      v46 = 0LL;
      *(_OWORD *)v43 = 0LL;
      RectForRegion = SnapLayoutHelpers::GetRectForRegion((RECT *)a2, 0, a4, &v40, (struct tagRECT *)v43, (__int64)v44);
      v13 = retaddr;
      if ( RectForRegion < 0 )
      {
        v14 = 985LL;
        goto LABEL_16;
      }
      *(_OWORD *)a2 = *(_OWORD *)v43;
      RectForRegion = CSnapComponentTelemetry::SendSnapFillTypeEvent(v44, (unsigned int)a5, a3);
      v13 = retaddr;
      if ( RectForRegion < 0 )
      {
        v14 = 988LL;
        goto LABEL_16;
      }
    }
  }
LABEL_56:
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v40);
  return a2;
}
