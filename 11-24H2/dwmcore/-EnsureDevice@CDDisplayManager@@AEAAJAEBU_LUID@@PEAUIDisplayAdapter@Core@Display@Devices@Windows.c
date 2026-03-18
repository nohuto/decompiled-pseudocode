/*
 * XREFs of ?EnsureDevice@CDDisplayManager@@AEAAJAEBU_LUID@@PEAUIDisplayAdapter@Core@Display@Devices@Windows@@PEAPEAUIDisplayDevice@4567@@Z @ 0x180205488
 * Callers:
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x18023FED8 (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180205578 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator.c)
 *     ??$_Emplace@AEBU_LUID@@AEAV?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBU_LUID@@AEAV?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802C0940 (--$_Emplace@AEBU_LUID@@AEAV-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_return.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::EnsureDevice(
        CDDisplayManager *this,
        const struct _LUID *a2,
        struct Windows::Devices::Display::Core::IDisplayAdapter *a3,
        struct Windows::Devices::Display::Core::IDisplayDevice **a4)
{
  unsigned int v6; // ebx
  _QWORD *v7; // r8
  __int64 v8; // r11
  __int64 v9; // rdx
  struct Windows::Devices::Display::Core::IDisplayDevice *v10; // rdx
  struct Windows::Devices::Display::Core::IDisplayDevice *v11; // rcx
  __int64 v13; // rax
  int v14; // eax
  struct Windows::Devices::Display::Core::IDisplayDevice *v15; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-10h]

  v6 = 0;
  std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Find_lower_bound<unsigned __int64>(
    &qword_1803FABB0,
    v16,
    a2);
  v9 = v17;
  if ( *(_BYTE *)(v17 + 25) || *v7 < *(_QWORD *)(v17 + 32) )
    v9 = qword_1803FABB0;
  if ( v9 != qword_1803FABB0 )
  {
    v10 = *(struct Windows::Devices::Display::Core::IDisplayDevice **)(v9 + 40);
    v15 = v10;
    if ( !v10 )
    {
LABEL_7:
      v11 = 0LL;
      *a4 = v10;
      v15 = 0LL;
      goto LABEL_8;
    }
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayDevice *))(*(_QWORD *)v10 + 8LL))(v10);
LABEL_6:
    v10 = v15;
    goto LABEL_7;
  }
  v13 = *g_DDisplayManager;
  v15 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct Windows::Devices::Display::Core::IDisplayDevice **))(v13 + 112))(
          g_DDisplayManager,
          v8,
          &v15);
  v6 = v14;
  if ( v14 >= 0 )
  {
    std::_Tree<std::_Tmap_traits<_LUID,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>,CDDisplayManager::LUIDComparator,std::allocator<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>,0>>::_Emplace<_LUID const &,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy> &>(
      &qword_1803FABB0,
      v16,
      a2,
      &v15);
    goto LABEL_6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x2D0u, 0LL);
  v11 = v15;
LABEL_8:
  if ( v11 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayDevice *))(*(_QWORD *)v11 + 16LL))(v11);
  return v6;
}
