/*
 * XREFs of ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180691760
 * Callers:
 *     _lambda_02d18896a6f04e84a63129cc1fd81310_::operator() @ 0x1805E3CCC (_lambda_02d18896a6f04e84a63129cc1fd81310_--operator().c)
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068B5F0 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18068B8B0 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068BCC0 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x18068C000 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 *     ?MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x180693080 (-MarkAsTombstone@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     ?Modify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806930D0 (-Modify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18004C97C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180068D64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@details@wil@@QEAAX_N.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18017F364 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     DSA_GetItemPtr @ 0x1801F8A80 (DSA_GetItemPtr.c)
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x18021305C (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x18022581C (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180236D84 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wi.c)
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x1802B56A4 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1802B7BDC (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$CFAU_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802C4094 (--1-$out_param_t@V-$unique_ptr@$$CFAU_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802C40B8 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     ?Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ @ 0x1802C9520 (-Log_IfFailedWithExpected@in1diag3@details@wil@@YAJPEAXIPEBDJIZZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802CEA40 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-ReleaseMutex@details@wil@@YAX0@ZU-$inte.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802DE008 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-ReleaseMutex@details@wil@@YAX0@ZU-$.c)
 *     ??$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA?AV01@XZ @ 0x18068A3B0 (--$Start@$$V@PinningActivity@TaskbarPinningTelemetry@@SA-AV01@XZ.c)
 *     ??$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA?AV?$unique_ptr@VCBackupLocationManager@@U?$default_delete@VCBackupLocationManager@@@wistd@@@wistd@@XZ @ 0x18068A6FC (--$make_unique_nothrow@VCBackupLocationManager@@$$V@wil@@YA-AV-$unique_ptr@VCBackupLocationManag.c)
 *     ??1CPinList@@QEAA@XZ @ 0x18068AEEC (--1CPinList@@QEAA@XZ.c)
 *     ??1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ @ 0x18068B010 (--1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ.c)
 *     ??_GCBackupLocationManager@@QEAAPEAXI@Z @ 0x18068B434 (--_GCBackupLocationManager@@QEAAPEAXI@Z.c)
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x18068B464 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18068C7E8 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 *     ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z @ 0x18068DF28 (-GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@Y.c)
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x180690498 (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 *     ?GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z @ 0x180691040 (-GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z.c)
 *     ?IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z @ 0x180692654 (-IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z.c)
 *     ?IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x180692860 (-IsPlaceholderPin@TaskbarPinHelper@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180692D90 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@Z @ 0x180693A9C (-PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@.c)
 *     ?PinnedListPlaceholderProcessed@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG_N@Z @ 0x180693C78 (-PinnedListPlaceholderProcessed@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000HW4PINNEDLISTMODIFYCALLER@@@Z @ 0x180693D64 (-PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000HW4PINNEDLISTMODIFYCALLE.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x180694180 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180694BA0 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x1806950E0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     ?SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z @ 0x1806951FC (-SetPinTimeForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAU_FILETIME@@PEAPEFAU1@@Z.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180695AAC (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ?TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806967DC (-TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x180696CC8 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     _CacheAppIDInIDList @ 0x180696D5C (_CacheAppIDInIDList.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x1806975D4 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x18069792C (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 *     ?create@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEBGKKPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180698964 (-create@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?get@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AXXZ@Z @ 0x180698F44 (-get@-$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall CPinnedList::InternalModify(
        struct CPinnedList *a1,
        struct _ITEMIDLIST *a2,
        struct _ITEMIDLIST *a3,
        unsigned int a4,
        int a5)
{
  struct _ITEMIDLIST *v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // edi
  wil::details *v13; // rbx
  void *v14; // rdx
  wil::details **v15; // r14
  int v16; // edi
  int TimestampFromPidl; // eax
  __int64 v18; // rcx
  int BackupLnk; // r14d
  LPWSTR *v20; // rbx
  __int64 v21; // r9
  _DWORD *v22; // rcx
  int v23; // r12d
  void (__fastcall *v24)(char *, LPITEMIDLIST, wchar_t **); // rbx
  const struct _ITEMIDLIST *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  const unsigned __int16 *v28; // rdx
  wchar_t *v29; // rcx
  __int64 v30; // rbx
  int ActivationFactory; // eax
  struct _FILETIME v32; // rbx
  __int64 (__fastcall *v33)(struct _FILETIME, GUID *, struct IApplicationResolver **); // rdi
  int v34; // eax
  unsigned __int16 **v35; // r9
  int AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier; // eax
  unsigned int v37; // r8d
  struct IApplicationResolver *v38; // rbx
  __int64 (__fastcall *v39)(struct IApplicationResolver *, PVOID, PVOID); // rsi
  PVOID Reserved1; // rdi
  unsigned int v41; // r8d
  HSTRING_HEADER *v42; // rax
  unsigned int v43; // eax
  LPWSTR *v44; // rbx
  __int64 v45; // r9
  __int64 v46; // r8
  ITEMIDLIST *v47; // rax
  int appended; // eax
  PINENTRY *ItemPtr; // rax
  void (__fastcall *v50)(char *, LPITEMIDLIST, struct _ITEMIDLIST **); // rbx
  void **v51; // rax
  __int64 v52; // rdx
  void *v53; // rdx
  void *v54; // rdx
  bool v55; // [rsp+40h] [rbp-C0h]
  ITEMIDLIST *v57; // [rsp+48h] [rbp-B8h]
  ITEMIDLIST *v58; // [rsp+50h] [rbp-B0h]
  HSTRING_HEADER v59; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING_HEADER v60; // [rsp+78h] [rbp-88h] BYREF
  LPITEMIDLIST pidl; // [rsp+98h] [rbp-68h] BYREF
  struct IApplicationResolver *ppv; // [rsp+A0h] [rbp-60h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+A8h] [rbp-58h] BYREF
  struct _ITEMIDLIST *v64[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h]
  wchar_t *Str[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-28h]
  wil::details *v68; // [rsp+E0h] [rbp-20h] BYREF
  struct _ITEMIDLIST *v69; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int16 *v70[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v71; // [rsp+100h] [rbp+0h]
  HDSA hdsa[2]; // [rsp+108h] [rbp+8h] BYREF
  wil::details *v73; // [rsp+118h] [rbp+18h] BYREF
  struct _ITEMIDLIST *v74; // [rsp+120h] [rbp+20h] BYREF
  LPWSTR *ppwsz; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int16 *v76[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v77; // [rsp+140h] [rbp+40h]
  unsigned __int16 *v78[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v79; // [rsp+158h] [rbp+58h]
  HSTRING_HEADER hstringHeader; // [rsp+160h] [rbp+60h] BYREF
  __int64 v81; // [rsp+178h] [rbp+78h]
  _BYTE v82[336]; // [rsp+180h] [rbp+80h] BYREF
  WCHAR psz[264]; // [rsp+2D0h] [rbp+1D0h] BYREF
  WCHAR Filename[264]; // [rsp+4E0h] [rbp+3E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+748h] [rbp+648h]

  v6 = a2;
  v69 = a2;
  if ( (*(unsigned int (__fastcall **)(struct CPinnedList *))(*(_QWORD *)a1 + 120LL))(a1) )
    return 2147942405LL;
  memset_0(v82, 0, sizeof(v82));
  TaskbarPinningTelemetry::PinningActivity::Start<>((TaskbarPinningTelemetry::PinningActivity *)v82);
  v57 = 0LL;
  v58 = 0LL;
  v74 = 0LL;
  if ( v6 )
  {
    v9 = SHLogILFromFSIL(v6);
    v57 = (ITEMIDLIST *)v9;
    if ( v9 )
      v6 = (struct _ITEMIDLIST *)v9;
    v69 = v6;
  }
  if ( (unsigned __int64)a3 >= 0x10000 )
  {
    v10 = SHLogILFromFSIL(a3);
    v58 = (ITEMIDLIST *)v10;
    if ( v10 )
      a3 = (struct _ITEMIDLIST *)v10;
  }
  v73 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct CPinnedList *))(*(_QWORD *)a1 + 208LL))(a1);
  v12 = _create___mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJPEBGKKPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
          &v73,
          v11);
  v13 = 0LL;
  v68 = 0LL;
  if ( v12 >= 0 )
  {
    v15 = (wil::details **)_acquire___mutex_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil___2_PEAKKH_Z(
                             (HANDLE *)&v73,
                             &SystemTimeAsFileTime);
    if ( &v68 != v15 )
    {
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        &v68,
        *v15);
      *v15 = 0LL;
      v13 = v68;
    }
    __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
      (wil::details **)&SystemTimeAsFileTime,
      v14);
    if ( !v13 )
      v12 = -2147019873;
  }
  *(_OWORD *)hdsa = 0LL;
  if ( v12 >= 0 && (int)CPinList::Load((CPinList *)hdsa, a1) >= 0 )
  {
    v55 = 0;
    pidl = 0LL;
    v16 = 1;
    if ( !v6 )
    {
      if ( a3 )
      {
        BackupLnk = (*(__int64 (__fastcall **)(struct CPinnedList *, WCHAR *, __int64))(*(_QWORD *)a1 + 104LL))(
                      a1,
                      psz,
                      260LL);
        if ( BackupLnk >= 0 )
        {
          v44 = (LPWSTR *)operator new(8uLL);
          ppwsz = v44;
          *v44 = 0LL;
          *v44 = 0LL;
          BackupLnk = SHStrDupW(psz, v44);
          if ( BackupLnk >= 0 )
          {
            BackupLnk = CBackupLocationManager::CreateBackupLnk((CBackupLocationManager *)v44, a3, &pidl, v45);
            if ( BackupLnk >= 0 )
            {
              LODWORD(ppv) = 0;
              if ( (int)GetPinSourceForPinnedItem(a3, (enum TaskbarPinningSource *)&ppv) < 0
                || (v46 = (unsigned int)ppv, (_DWORD)ppv == -1) )
              {
                v46 = 0LL;
              }
              BackupLnk = SetPinSourceForPinnedItem(pidl, &pidl, v46);
              if ( BackupLnk >= 0 )
              {
                SystemTimeAsFileTime = 0LL;
                BackupLnk = SetPinTimeForPinnedItem(pidl, 0LL, (struct _ITEMIDLIST **)&SystemTimeAsFileTime);
                ILFree(pidl);
                v47 = (ITEMIDLIST *)SystemTimeAsFileTime;
                SystemTimeAsFileTime = 0LL;
                pidl = v47;
                CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&SystemTimeAsFileTime);
                if ( BackupLnk >= 0 )
                {
                  BackupLnk = CacheAppIDInIDList(pidl);
                  if ( BackupLnk >= 0 )
                  {
                    appended = CPinList::AppendPidl((CPinList *)hdsa, a1, pidl);
                    if ( appended < 0 )
                    {
                      BackupLnk = -2147024882;
                    }
                    else
                    {
                      ItemPtr = (PINENTRY *)DSA_GetItemPtr(hdsa[0], appended);
                      PINENTRY::UpdateShellLink(ItemPtr);
                    }
                    if ( BackupLnk >= 0 )
                    {
                      v64[0] = 0LL;
                      v64[1] = 0LL;
                      v65 = 0LL;
                      v50 = *(void (__fastcall **)(char *, LPITEMIDLIST, struct _ITEMIDLIST **))(*((_QWORD *)a1 + 2)
                                                                                               + 88LL);
                      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v64);
                      v64[1] = (struct _ITEMIDLIST *)-1LL;
                      v65 = -1LL;
                      v50((char *)a1 + 16, pidl, v64);
                      if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
                      {
                        v69 = 0LL;
                        v51 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v69);
                        ILGetHiddenStringAllocW((__int64)pidl, 3203334174LL, v51);
                        TaskbarPinningTelemetry::PinningActivity::PinnedListAdded(v82, v64[0], Filename, a4);
                        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v69);
                      }
                      BackupLnk = CPinList::Save((CPinList *)hdsa, a1);
                      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v64);
                      v44 = ppwsz;
                      v16 = 1;
                    }
                  }
                }
              }
            }
          }
          CBackupLocationManager::`scalar deleting destructor'((LPVOID *)v44);
          goto LABEL_86;
        }
      }
      else
      {
        BackupLnk = -2147024809;
      }
LABEL_92:
      ILFree(pidl);
      goto LABEL_94;
    }
    if ( !a3 )
      goto LABEL_43;
    if ( (unsigned __int64)a3 < 0x10000 || !ILIsEqual(v6, a3) )
    {
      v55 = 1;
      (*(void (__fastcall **)(struct CPinnedList *))(*(_QWORD *)a1 + 168LL))(a1);
      if ( (unsigned __int64)a3 < 0x10000 )
        goto LABEL_43;
    }
    SystemTimeAsFileTime = 0LL;
    TimestampFromPidl = GetTimestampFromPidl(v6, -1091633109, &SystemTimeAsFileTime);
    if ( TimestampFromPidl < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (int)"Desktop\\Internal\\Shell\\Inc\\private\\PinningTimeHelpers.h",
        (const char *)(unsigned int)TimestampFromPidl);
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    }
    BackupLnk = SetPinTimeForPinnedItem(a3, &SystemTimeAsFileTime, &v74);
    if ( BackupLnk < 0 )
      goto LABEL_33;
    a3 = v74;
    if ( (unsigned __int64)v74 >= 0x10000 )
    {
      BackupLnk = (*(__int64 (__fastcall **)(struct CPinnedList *, WCHAR *, __int64))(*(_QWORD *)a1 + 104LL))(
                    a1,
                    psz,
                    260LL);
      wil::make_unique_nothrow<CBackupLocationManager,>(&ppwsz);
      v20 = ppwsz;
      if ( ppwsz )
      {
        BackupLnk = SHStrDupW(psz, ppwsz);
        if ( BackupLnk >= 0 )
        {
          ppv = 0LL;
          v64[0] = (struct _ITEMIDLIST *)&ppv;
          v64[1] = 0LL;
          LOBYTE(v65) = 1;
          BackupLnk = CBackupLocationManager::CreateBackupLnk((CBackupLocationManager *)v20, a3, &v64[1], v21);
          wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST __unaligned,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)v64);
          if ( BackupLnk >= 0 )
            BackupLnk = CPinList::ReplacePidl(hdsa, a1, v6, ppv, a5, &pidl);
          wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            (void **)&ppv,
            0LL);
        }
      }
      if ( v20 )
        CBackupLocationManager::`scalar deleting destructor'((LPVOID *)v20);
    }
    else
    {
LABEL_43:
      BackupLnk = CPinList::ReplacePidl(hdsa, a1, v6, a3, a5, &pidl);
    }
LABEL_33:
    v22 = *(_DWORD **)(wil::details::static_lazy<TaskbarPinningTelemetry>::get(
                         v18,
                         _lambda_576b8a055e1eddaf8c0f48bcebe2427e_::_lambda_invoker_cdecl_)
                     + 8);
    if ( v22 && *v22 )
    {
      Str[0] = 0LL;
      Str[1] = 0LL;
      v67 = 0LL;
      v23 = -1;
      if ( !pidl
        || (v24 = *(void (__fastcall **)(char *, LPITEMIDLIST, wchar_t **))(*((_QWORD *)a1 + 2) + 88LL),
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)Str),
            Str[1] = (wchar_t *)-1LL,
            v67 = -1LL,
            v24((char *)a1 + 16, pidl, Str),
            v16 = 1,
            !Str[0])
        || !*Str[0] )
      {
        ppv = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
        if ( CoCreateInstance(
               &CLSID_StartMenuCacheAndAppResolver,
               0LL,
               1u,
               &GUID_de25675a_72de_44b4_9373_05170450c140,
               (LPVOID *)&ppv) >= 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)Str);
          Str[1] = (wchar_t *)-1LL;
          v67 = -1LL;
          _GetAppIDFromIDList(ppv, v6, Str, 0LL);
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
      }
      if ( TaskbarPinHelper::IsPlaceholderPin((TaskbarPinHelper *)v6, v25) )
      {
        TaskbarPinningTelemetry::PinningActivity::PinnedListPlaceholderProcessed(
          (TaskbarPinningTelemetry::PinningActivity *)v82,
          Str[0],
          v55);
      }
      else if ( v55 )
      {
        TaskbarPinningTelemetry::PinningActivity::TaskListTileMoved(v82, Str[0], a4);
      }
      else
      {
        v64[0] = 0LL;
        v64[1] = 0LL;
        v65 = 0LL;
        v78[0] = 0LL;
        v78[1] = 0LL;
        v79 = 0LL;
        v70[0] = 0LL;
        v70[1] = 0LL;
        v71 = 0LL;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarSuggestions>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetImpl'::`2'::impl,
          1u,
          v26,
          v27);
        v29 = Str[0];
        if ( Str[0] )
        {
          if ( *Str[0] )
          {
            (*(void (__fastcall **)(struct CPinnedList *, wchar_t *))(*(_QWORD *)a1 + 192LL))(a1, Str[0]);
            v29 = Str[0];
          }
          if ( v29 && *v29 && SecondaryTileIdentifierHelpers::IsFullyQualifiedTileIdentifier(v29, v28) )
          {
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v70);
            v70[1] = (unsigned __int16 *)-1LL;
            v71 = -1LL;
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v78);
            v78[1] = (unsigned __int16 *)-1LL;
            v79 = -1LL;
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v64);
            v64[1] = (struct _ITEMIDLIST *)-1LL;
            v65 = -1LL;
            TaskbarTelemetryHelper::GetSecondaryTileLaunchArguments(Str[0], (unsigned __int16 *)v64, v78, v70);
            SystemTimeAsFileTime = 0LL;
            v81 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.UI.StartScreen.SecondaryTile",
              0x25u,
              0x24u);
            v30 = v81;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&SystemTimeAsFileTime);
            ActivationFactory = RoGetActivationFactory(
                                  v30,
                                  &GUID_57f52ca0_51bc_4abf_8ebf_627a0398b05a,
                                  &SystemTimeAsFileTime);
            if ( ActivationFactory >= 0 )
            {
              ppv = 0LL;
              v32 = SystemTimeAsFileTime;
              v33 = ***(__int64 (__fastcall ****)(struct _FILETIME, GUID *, struct IApplicationResolver **))&SystemTimeAsFileTime;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
              v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v33)(
                      v32,
                      &GUID_5365d67e_eedb_4ecd_a099_a195558a9f80,
                      &ppv);
              if ( v34 >= 0 )
              {
                memset(&hstringHeader, 0, sizeof(hstringHeader));
                v76[0] = 0LL;
                v76[1] = 0LL;
                v77 = 0LL;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v76);
                v76[1] = (unsigned __int16 *)-1LL;
                v77 = -1LL;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
                *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = -1LL;
                *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = -1LL;
                AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier = SecondaryTileIdentifierHelpers::GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier(
                                                                               Str[0],
                                                                               (unsigned __int16 *)&hstringHeader,
                                                                               v76,
                                                                               v35);
                if ( AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier >= 0 )
                {
                  v38 = ppv;
                  v39 = *(__int64 (__fastcall **)(struct IApplicationResolver *, PVOID, PVOID))(*(_QWORD *)ppv + 72LL);
                  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                &v59,
                                (const WCHAR **)v76,
                                v37)[1].Reserved.Reserved1;
                  v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                          &v60,
                          (const WCHAR **)&hstringHeader,
                          v41);
                  v43 = v39(v38, v42[1].Reserved.Reserved1, Reserved1);
                  wil::details::in1diag3::Log_IfFailedWithExpected(
                    retaddr,
                    (void *)0x6F5,
                    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                    (const char *)v43,
                    1u,
                    0x80070490);
                  v6 = v69;
                }
                else
                {
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x6F3,
                    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                    (const char *)(unsigned int)AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier);
                }
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v76);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x6EF,
                  (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                  (const char *)(unsigned int)v34);
              }
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
              v16 = 1;
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x6EC,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)ActivationFactory);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&SystemTimeAsFileTime);
          }
        }
        if ( !v70[0] )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v70);
          v70[1] = (unsigned __int16 *)-1LL;
          v71 = -1LL;
          ILGetHiddenStringAllocW((__int64)pidl, 3203334174LL, (void **)v70);
        }
        LODWORD(ppv) = 0;
        if ( (int)GetPinSourceForPinnedItem(pidl, (enum TaskbarPinningSource *)&ppv) >= 0 )
          v23 = (int)ppv;
        TaskbarPinningTelemetry::PinningActivity::PinnedListRemoved(v82, Str[0], v64[0], v78[0], v70[0], v23, a4);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v70);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v78);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v64);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)Str);
    }
LABEL_86:
    if ( BackupLnk >= 0 )
    {
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        &v68,
        0LL);
      if ( !v6 || a3 )
        v16 = 0;
      CPinnedList::_DoNotifyPinListChange(a1, pidl, v16);
    }
    goto LABEL_92;
  }
  BackupLnk = -2147024882;
LABEL_94:
  ILFree(v57);
  ILFree(v58);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    &v68,
    0LL);
  v52 = (unsigned int)BackupLnk;
  if ( v6 && !a3 && BackupLnk == -2147023728 )
    v52 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v82, v52);
  CPinList::~CPinList((CPinList *)hdsa);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    &v68,
    v53);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    &v73,
    v54);
  CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v74);
  TaskbarPinningTelemetry::PinningActivity::~PinningActivity((TaskbarPinningTelemetry::PinningActivity *)v82);
  return (unsigned int)BackupLnk;
}
