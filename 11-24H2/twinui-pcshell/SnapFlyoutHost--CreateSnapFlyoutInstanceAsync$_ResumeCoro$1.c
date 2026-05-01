/*
 * XREFs of SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B1950
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x1805B17BC (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_InitCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$swap@U?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@0@Z @ 0x18004E080 (--$swap@U-$weak_ref@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004FA8C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180063678 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x1801169D4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801B0F24 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRW.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801BC9A8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x1801BC9C4 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C524C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?await_suspend@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801D6024 (-await_suspend@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801E9D70 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_1801E9D70.c)
 *     ??$SnapFlyout_CreateSnapFlyoutInstanceAsync@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@SnapFlyoutTelemetry@@SAXAEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180200E90 (--$SnapFlyout_CreateSnapFlyoutInstanceAsync@AEAW4SnapControlType@SnapComponent@Shell@Internal@Wi.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@0@XZ @ 0x180221E9C (--$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802229A8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUG.c)
 *     ??$_Emplace@U?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@9@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18022988C (--$_Emplace@U-$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@win.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18023B6DC (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18027499C (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x18028B58C (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028B6EC (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291E00 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180295BA8 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CE3EC (--0bad_alloc@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x18032A480 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D430 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x180335898 (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803359BC (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180335A4C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180335A4C.c)
 *     ??$?0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z@SnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@$$QEAU?$weak_ref@VSnapFlyoutHost@@@5@$$QEAP8SnapFlyoutHost@@EAAXAEBUSnapFlyoutInstance@12345@@Z@Z @ 0x1805B0694 (--$-0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@.c)
 *     ??$?0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z@SnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@$$QEAU?$weak_ref@VSnapFlyoutHost@@@5@$$QEAP8SnapFlyoutHost@@EAAXAEBUSnapFlyoutInstance@12345@_N@Z@Z @ 0x1805B0720 (--$-0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@W_ea_1805B0720.c)
 *     ??$SnapFlyout_InstanceFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1805B07F0 (--$SnapFlyout_InstanceFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ??$SnapFlyout_ShutdownPrevious@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z @ 0x1805B0834 (--$SnapFlyout_ShutdownPrevious@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@1@QEAV21@$$QEAV21@@Z @ 0x1805B0CB0 (--$_Emplace_reallocate@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@-$vector@V-$sh.c)
 *     ??$as@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A@@impl@winrt@@YA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@1@PEAU2implementation@34561@@Z @ 0x1805B0E80 (--$as@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U1implementation@23456@$0A.c)
 *     ??$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x1805B0F7C (--$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA-AV-$shared_ptr@UFlyoutInstance.c)
 *     ??0FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@AEBV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1805B11C8 (--0FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@AEBV-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowT.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BII@AA@impl@winrt@@QEAA@XZ @ 0x1805B1370 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@impl@winrt@@QEAA@XZ @ 0x1805B13CC (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B13CC.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKI@AA@impl@winrt@@QEAA@XZ @ 0x1805B1428 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B1428.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BLI@AA@impl@winrt@@QEAA@XZ @ 0x1805B1484 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B1484.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BMI@AA@impl@winrt@@QEAA@XZ @ 0x1805B14E0 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B14E0.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNI@AA@impl@winrt@@QEAA@XZ @ 0x1805B153C (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805B153C.c)
 *     ?DismissRequested@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B2D00 (-DismissRequested@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyou.c)
 *     ?InstanceReady@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B3180 (-InstanceReady@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?InstanceShown@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B320C (-InstanceShown@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?InstanceShutdown@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B3298 (-InstanceShutdown@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyou.c)
 *     ?PointerEntered@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B3940 (-PointerEntered@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutI.c)
 *     ?PointerExited@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B39CC (-PointerExited@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B3B38 (-RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@In.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarCleanupCrash@@@details@wil@@QEAA_NXZ @ 0x1805B4900 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SnapBarCleanupCrash@@@d.c)
 *     ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805B4A2C (-await_resume@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=41 #try_helpers=2
void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r15
  __int64 weak_ref; // rax
  int v4; // eax
  __int64 v5; // rcx
  void *v6; // r8
  const struct winrt::impl::slim_source_location *v7; // rax
  __int64 v8; // rcx
  const struct winrt::impl::slim_source_location *v9; // rax
  __int64 v10; // rbx
  void *v11; // rdx
  const char *v12; // r9
  void *v13; // rdx
  const struct winrt::impl::slim_source_location *v14; // rax
  __int64 *v15; // r12
  char IsEnabled; // al
  unsigned int *v17; // r15
  __int64 v18; // rdi
  RTL_SRWLOCK *v19; // rdx
  __int64 *v20; // rdx
  __int64 v21; // rbx
  std::_Ref_count_base *v22; // rcx
  __int64 *v23; // rdx
  __int64 v24; // rbx
  std::_Ref_count_base *v25; // rcx
  char v26; // di
  char v27; // bl
  volatile signed __int64 **v28; // r12
  __int64 v29; // rbx
  int v30; // edi
  __int64 v31; // rax
  int v32; // edi
  int v33; // eax
  unsigned int v34; // edi
  __int64 v35; // r8
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // edi
  int v41; // eax
  unsigned int v42; // edi
  __int64 v43; // r8
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // edi
  int v49; // eax
  unsigned int v50; // edi
  __int64 v51; // r8
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // edi
  int v57; // eax
  unsigned int v58; // edi
  __int64 v59; // r8
  __int64 *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  int v64; // edi
  int v65; // eax
  unsigned int v66; // edi
  __int64 v67; // r8
  __int64 *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // r13
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // r8
  __int64 *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rdx
  std::_Ref_count_base *v81; // rcx
  _WORD *v82; // [rsp+58h] [rbp-4C0h]
  _BYTE pExceptionObject[24]; // [rsp+F0h] [rbp-428h] BYREF
  _BYTE v84[24]; // [rsp+108h] [rbp-410h] BYREF
  _BYTE v85[24]; // [rsp+120h] [rbp-3F8h] BYREF
  _BYTE v86[24]; // [rsp+138h] [rbp-3E0h] BYREF
  _BYTE v87[24]; // [rsp+150h] [rbp-3C8h] BYREF
  _BYTE v88[24]; // [rsp+168h] [rbp-3B0h] BYREF
  _BYTE v89[24]; // [rsp+180h] [rbp-398h] BYREF
  _BYTE v90[24]; // [rsp+198h] [rbp-380h] BYREF
  _BYTE v91[24]; // [rsp+1B0h] [rbp-368h] BYREF
  _BYTE v92[32]; // [rsp+1C8h] [rbp-350h] BYREF
  __int64 v93; // [rsp+1E8h] [rbp-330h]
  __int64 v94; // [rsp+1F8h] [rbp-320h]
  __int64 v95; // [rsp+208h] [rbp-310h]
  __int64 v96; // [rsp+218h] [rbp-300h]
  __int64 v97; // [rsp+228h] [rbp-2F0h]
  __int64 v98; // [rsp+238h] [rbp-2E0h]
  __int64 v100; // [rsp+258h] [rbp-2C0h]
  __int64 v101; // [rsp+268h] [rbp-2B0h]
  __int64 v102; // [rsp+278h] [rbp-2A0h]
  __int64 v103; // [rsp+288h] [rbp-290h]
  __int64 v104; // [rsp+298h] [rbp-280h]
  __int64 v105; // [rsp+2A8h] [rbp-270h]
  wil::details::in1diag3 *retaddr; // [rsp+518h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  v82 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_107;
    case 2:
      *(_DWORD *)(a1 + 800) = 0;
      SnapFlyoutTelemetry::SnapFlyout_CreateSnapFlyoutInstanceAsync<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>((int *)(a1 + 1297));
      weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(*(volatile signed __int64 **)(a1 + 1281));
      if ( !weak_ref )
      {
        std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
        throw (std::bad_alloc *)pExceptionObject;
      }
      *(_QWORD *)(a1 + 808) = weak_ref;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_DWORD *)(a1 + 800) = 2;
      *(_DWORD *)(a1 + 816) = 0;
      *(_QWORD *)(a1 + 824) = 0LL;
      *(_QWORD *)(a1 + 832) = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)weak_ref + 24LL))(weak_ref);
      winrt::check_hresult((int *)(a1 + 840), v4, a1 + 816);
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 808));
      *(_DWORD *)(a1 + 800) = 1;
      *(_BYTE *)(a1 + 24) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 848);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v84, v7);
        throw (winrt::hresult_canceled *)v84;
      }
      *v2 = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(v5, (void (*)(void *, void *))a1, v6);
      return;
    case 4:
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1281) + 72LL);
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_QWORD *)(a1 + 48) = 0LL;
      *(_QWORD *)(a1 + 56) = v8;
      *(_DWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_DWORD *)(a1 + 80) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 872);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v85, v9);
        throw (winrt::hresult_canceled *)v85;
      }
      if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)(a1 + 32)) )
        goto LABEL_17;
      *v2 = 6;
      winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>(
        (__int64 *)(a1 + 32),
        a1);
      return;
    case 5:
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_107;
    case 6:
LABEL_17:
      winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 32));
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 32));
      *(_QWORD *)(a1 + 88) = 0LL;
      winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 96));
      if ( !*(_QWORD *)(a1 + 96) )
        goto LABEL_25;
      v10 = *(_QWORD *)(a1 + 1281);
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 104), (RTL_SRWLOCK *)(v10 + 176));
      if ( !*(_DWORD *)(v10 + 168) )
      {
        wil::details::ResetEvent(*(wil::details **)(v10 + 72), v11);
        wil::details::SetEvent(*(wil::details **)(v10 + 80), v13);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 104));
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 96));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
        if ( *(_QWORD *)(a1 + 16) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
        goto LABEL_106;
      }
      if ( !*(_QWORD *)(v10 + 96) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2E8,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
          v12);
      winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(a1 + 88), (__int64 *)(v10 + 96));
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 104));
LABEL_25:
      winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 96));
      *(_QWORD *)(a1 + 112) = a1 + 88;
      *(_DWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0LL;
      *(_BYTE *)(a1 + 136) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v14 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 896);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v86, v14);
        throw (winrt::hresult_canceled *)v86;
      }
      *v82 = 8;
      `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_suspend(a1 + 112, a1);
      return;
    case 7:
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 32));
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_107;
    case 8:
      `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_resume(a1 + 112);
      v15 = (__int64 *)(a1 + 16);
      winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)(a1 + 144));
      if ( !*(_QWORD *)(a1 + 144) )
        goto LABEL_104;
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SnapBarCleanupCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SnapBarCleanupCrash>::GetImpl'::`2'::impl);
      v17 = (unsigned int *)(a1 + 1301);
      v18 = *(_QWORD *)(a1 + 1281);
      v19 = (RTL_SRWLOCK *)(v18 + 176);
      if ( IsEnabled )
      {
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 152), v19);
        if ( *v17 != *(_DWORD *)(v18 + 48) )
        {
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                        a1 + 1321,
                        (__int64 *)(a1 + 160))
                   + 274) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((void **)(a1 + 160));
          tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(a1 + 1321));
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 152));
          winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 144));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
          if ( *v15 )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
          goto LABEL_106;
        }
        SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
          v18,
          (_QWORD *)(a1 + 168));
        v21 = *v20;
        if ( *v20 )
        {
          *(_DWORD *)(a1 + 184) = *(_DWORD *)(*(_QWORD *)(v21 + 8) + 320LL);
          SnapFlyoutTelemetry::SnapFlyout_ShutdownPrevious<unsigned int>((int *)(a1 + 184));
          winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v21 + 8));
          winrt::impl::as<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,0>(
            (_QWORD *)(a1 + 192),
            *(volatile signed __int64 **)(v21 + 8));
          *(_DWORD *)(a1 + 800) = 5;
          if ( *(_QWORD *)(a1 + 192) )
            SnapFlyoutHost::RemoveInstanceFromMonitorMap(v18, a1 + 192);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 192));
        }
        v22 = *(std::_Ref_count_base **)(a1 + 176);
        if ( v22 )
          std::_Ref_count_base::_Decref(v22);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 152));
      }
      else
      {
        Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)(a1 + 200), v19);
        if ( *v17 != *(_DWORD *)(v18 + 48) )
        {
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                        a1 + 1321,
                        (__int64 *)(a1 + 208))
                   + 274) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((void **)(a1 + 208));
          tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(a1 + 1321));
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 200));
          winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 144));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
          if ( *(_QWORD *)(a1 + 16) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
          goto LABEL_106;
        }
        SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
          v18,
          (_QWORD *)(a1 + 216));
        v24 = *v23;
        if ( *v23 )
        {
          *(_DWORD *)(a1 + 232) = *(_DWORD *)(*(_QWORD *)(v24 + 8) + 320LL);
          SnapFlyoutTelemetry::SnapFlyout_ShutdownPrevious<unsigned int>((int *)(a1 + 232));
          winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v24 + 8));
        }
        v25 = *(std::_Ref_count_base **)(a1 + 224);
        if ( v25 )
          std::_Ref_count_base::_Decref(v25);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 200));
      }
      v26 = *(_DWORD *)(a1 + 1329) & 1;
      v27 = (*(_DWORD *)(a1 + 1329) & 2) != 0;
      v28 = (volatile signed __int64 **)(a1 + 240);
      winrt::make_self<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,>((_QWORD *)(a1 + 240));
      if ( winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Initialize(
             *(_QWORD *)(a1 + 240),
             *v17,
             *(_QWORD *)(a1 + 1289),
             v26,
             v27,
             *(_DWORD *)(a1 + 1297),
             *(_DWORD *)(a1 + 1305),
             *(HMONITOR *)(a1 + 1313)) )
      {
        v29 = *(_QWORD *)(a1 + 1281);
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 248), (RTL_SRWLOCK *)(v29 + 176));
        SnapFlyoutHost::FlyoutInstanceRecord::FlyoutInstanceRecord((__int64 *)(a1 + 256), (_QWORD *)(a1 + 1321));
        winrt::impl::as<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,0>(
          (_QWORD *)(a1 + 368),
          *v28);
        v30 = *(_DWORD *)(a1 + 800) | 8;
        *(_DWORD *)(a1 + 800) = v30;
        v31 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)v29);
        if ( !v31 )
        {
          std::bad_alloc::bad_alloc((std::bad_alloc *)v87);
          throw (std::bad_alloc *)v87;
        }
        *(_QWORD *)(a1 + 920) = v31;
        *(_QWORD *)(a1 + 416) = 0LL;
        v32 = v30 | 0x20;
        *(_DWORD *)(a1 + 800) = v32;
        *(_DWORD *)(a1 + 928) = 0;
        *(_QWORD *)(a1 + 936) = 0LL;
        *(_QWORD *)(a1 + 944) = 0LL;
        v33 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 24LL))(v31, a1 + 416);
        winrt::check_hresult((int *)(a1 + 952), v33, a1 + 928);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 920));
        v34 = v32 & 0xFFFFFFCF | 0x10;
        *(_DWORD *)(a1 + 800) = v34;
        *(_QWORD *)(a1 + 400) = SnapFlyoutHost::OnFlyoutInstanceReady;
        *(_DWORD *)(a1 + 408) = 0;
        *(_OWORD *)(a1 + 384) = *(_OWORD *)(a1 + 400);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
          (_QWORD *)(a1 + 376),
          (__int64 *)(a1 + 416),
          (__int128 *)(a1 + 384));
        v36 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceReady(
                           a1 + 368,
                           a1 + 424,
                           v35,
                           a1 + 376);
        v37 = *v36;
        *v36 = 0LL;
        *(_QWORD *)(a1 + 960) = v37;
        *(_QWORD *)(a1 + 968) = v36[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 960),
          (__int64 *)(a1 + 272));
        v93 = *(_QWORD *)(a1 + 968);
        v38 = v93;
        v100 = *(_QWORD *)(a1 + 280);
        *(_QWORD *)(a1 + 968) = v100;
        *(_QWORD *)(a1 + 280) = v38;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 960));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 424));
        if ( *(_QWORD *)(a1 + 376) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 376));
        if ( *(_QWORD *)(a1 + 416) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 416));
        v39 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(*(volatile signed __int64 **)(a1 + 1281));
        if ( !v39 )
        {
          std::bad_alloc::bad_alloc((std::bad_alloc *)v88);
          throw (std::bad_alloc *)v88;
        }
        *(_QWORD *)(a1 + 976) = v39;
        *(_QWORD *)(a1 + 480) = 0LL;
        v40 = v34 | 0x80;
        *(_DWORD *)(a1 + 800) = v40;
        *(_DWORD *)(a1 + 984) = 0;
        *(_QWORD *)(a1 + 992) = 0LL;
        *(_QWORD *)(a1 + 1000) = 0LL;
        v41 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 24LL))(v39, a1 + 480);
        winrt::check_hresult((int *)(a1 + 1008), v41, a1 + 984);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 976));
        v42 = v40 & 0xFFFFFF3F | 0x40;
        *(_DWORD *)(a1 + 800) = v42;
        *(_QWORD *)(a1 + 464) = SnapFlyoutHost::OnFlyoutInstanceShown;
        *(_DWORD *)(a1 + 472) = 0;
        *(_OWORD *)(a1 + 448) = *(_OWORD *)(a1 + 464);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler::SnapFlyoutInstanceShownHandler(
          (_QWORD *)(a1 + 440),
          (__int64 *)(a1 + 480),
          (__int128 *)(a1 + 448));
        v44 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceShown(
                           a1 + 368,
                           a1 + 488,
                           v43,
                           a1 + 440);
        v45 = *v44;
        *v44 = 0LL;
        *(_QWORD *)(a1 + 1016) = v45;
        *(_QWORD *)(a1 + 1024) = v44[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 1016),
          (__int64 *)(a1 + 288));
        v94 = *(_QWORD *)(a1 + 1024);
        v46 = v94;
        v101 = *(_QWORD *)(a1 + 296);
        *(_QWORD *)(a1 + 1024) = v101;
        *(_QWORD *)(a1 + 296) = v46;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 1016));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 488));
        if ( *(_QWORD *)(a1 + 440) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 440));
        if ( *(_QWORD *)(a1 + 480) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 480));
        v47 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(*(volatile signed __int64 **)(a1 + 1281));
        if ( !v47 )
        {
          std::bad_alloc::bad_alloc((std::bad_alloc *)v89);
          throw (std::bad_alloc *)v89;
        }
        *(_QWORD *)(a1 + 1032) = v47;
        *(_QWORD *)(a1 + 544) = 0LL;
        v48 = v42 | 0x200;
        *(_DWORD *)(a1 + 800) = v48;
        *(_DWORD *)(a1 + 1040) = 0;
        *(_QWORD *)(a1 + 1048) = 0LL;
        *(_QWORD *)(a1 + 1056) = 0LL;
        v49 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 24LL))(v47, a1 + 544);
        winrt::check_hresult((int *)(a1 + 1064), v49, a1 + 1040);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 1032));
        v50 = v48 & 0xFFFFFCFF | 0x100;
        *(_DWORD *)(a1 + 800) = v50;
        *(_QWORD *)(a1 + 528) = SnapFlyoutHost::OnFlyoutInstanceShutdown;
        *(_DWORD *)(a1 + 536) = 0;
        *(_OWORD *)(a1 + 512) = *(_OWORD *)(a1 + 528);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
          (_QWORD *)(a1 + 504),
          (__int64 *)(a1 + 544),
          (__int128 *)(a1 + 512));
        v52 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceShutdown(
                           a1 + 368,
                           a1 + 552,
                           v51,
                           a1 + 504);
        v53 = *v52;
        *v52 = 0LL;
        *(_QWORD *)(a1 + 1072) = v53;
        *(_QWORD *)(a1 + 1080) = v52[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 1072),
          (__int64 *)(a1 + 304));
        v95 = *(_QWORD *)(a1 + 1080);
        v54 = v95;
        v102 = *(_QWORD *)(a1 + 312);
        *(_QWORD *)(a1 + 1080) = v102;
        *(_QWORD *)(a1 + 312) = v54;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 1072));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 552));
        if ( *(_QWORD *)(a1 + 504) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 504));
        if ( *(_QWORD *)(a1 + 544) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 544));
        v55 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(*(volatile signed __int64 **)(a1 + 1281));
        if ( !v55 )
        {
          std::bad_alloc::bad_alloc((std::bad_alloc *)v90);
          throw (std::bad_alloc *)v90;
        }
        *(_QWORD *)(a1 + 1088) = v55;
        *(_QWORD *)(a1 + 608) = 0LL;
        v56 = v50 | 0x800;
        *(_DWORD *)(a1 + 800) = v56;
        *(_DWORD *)(a1 + 1096) = 0;
        *(_QWORD *)(a1 + 1104) = 0LL;
        *(_QWORD *)(a1 + 1112) = 0LL;
        v57 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 24LL))(v55, a1 + 608);
        winrt::check_hresult((int *)(a1 + 1120), v57, a1 + 1096);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 1088));
        v58 = v56 & 0xFFFFF3FF | 0x400;
        *(_DWORD *)(a1 + 800) = v58;
        *(_QWORD *)(a1 + 592) = SnapFlyoutHost::OnFlyoutInstancePointerEntered;
        *(_DWORD *)(a1 + 600) = 0;
        *(_OWORD *)(a1 + 576) = *(_OWORD *)(a1 + 592);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
          (_QWORD *)(a1 + 568),
          (__int64 *)(a1 + 608),
          (__int128 *)(a1 + 576));
        v60 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::PointerEntered(
                           a1 + 368,
                           a1 + 616,
                           v59,
                           a1 + 568);
        v61 = *v60;
        *v60 = 0LL;
        *(_QWORD *)(a1 + 1128) = v61;
        *(_QWORD *)(a1 + 1136) = v60[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 1128),
          (__int64 *)(a1 + 320));
        v96 = *(_QWORD *)(a1 + 1136);
        v62 = v96;
        v103 = *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 1136) = v103;
        *(_QWORD *)(a1 + 328) = v62;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BLI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 1128));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BLI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 616));
        if ( *(_QWORD *)(a1 + 568) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 568));
        if ( *(_QWORD *)(a1 + 608) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 608));
        v63 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(*(volatile signed __int64 **)(a1 + 1281));
        if ( !v63 )
        {
          std::bad_alloc::bad_alloc((std::bad_alloc *)v91);
          throw (std::bad_alloc *)v91;
        }
        *(_QWORD *)(a1 + 1144) = v63;
        *(_QWORD *)(a1 + 672) = 0LL;
        v64 = v58 | 0x2000;
        *(_DWORD *)(a1 + 800) = v64;
        *(_DWORD *)(a1 + 1152) = 0;
        *(_QWORD *)(a1 + 1160) = 0LL;
        *(_QWORD *)(a1 + 1168) = 0LL;
        v65 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v63 + 24LL))(v63, a1 + 672);
        winrt::check_hresult((int *)(a1 + 1176), v65, a1 + 1152);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 1144));
        v66 = v64 & 0xFFFFCFFF | 0x1000;
        *(_DWORD *)(a1 + 800) = v66;
        *(_QWORD *)(a1 + 656) = SnapFlyoutHost::OnFlyoutInstancePointerExited;
        *(_DWORD *)(a1 + 664) = 0;
        *(_OWORD *)(a1 + 640) = *(_OWORD *)(a1 + 656);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
          (_QWORD *)(a1 + 632),
          (__int64 *)(a1 + 672),
          (__int128 *)(a1 + 640));
        v68 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::PointerExited(
                           a1 + 368,
                           a1 + 680,
                           v67,
                           a1 + 632);
        v69 = *v68;
        *v68 = 0LL;
        *(_QWORD *)(a1 + 1184) = v69;
        *(_QWORD *)(a1 + 1192) = v68[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 1184),
          (__int64 *)(a1 + 336));
        v97 = *(_QWORD *)(a1 + 1192);
        v70 = v97;
        v104 = *(_QWORD *)(a1 + 344);
        *(_QWORD *)(a1 + 1192) = v104;
        *(_QWORD *)(a1 + 344) = v70;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BMI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 1184));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BMI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 680));
        if ( *(_QWORD *)(a1 + 632) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 632));
        if ( *(_QWORD *)(a1 + 672) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 672));
        v71 = *(_QWORD *)(a1 + 1281);
        v72 = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)v71);
        if ( !v72 )
        {
          std::bad_alloc::bad_alloc((std::bad_alloc *)v92);
          throw (std::bad_alloc *)v92;
        }
        *(_QWORD *)(a1 + 1200) = v72;
        *(_QWORD *)(a1 + 736) = 0LL;
        *(_DWORD *)(a1 + 800) = v66 | 0x8000;
        *(_DWORD *)(a1 + 1208) = 0;
        *(_QWORD *)(a1 + 1216) = 0LL;
        *(_QWORD *)(a1 + 1224) = 0LL;
        v73 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v72 + 24LL))(v72, a1 + 736);
        winrt::check_hresult((int *)(a1 + 1232), v73, a1 + 1208);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 1200));
        *(_QWORD *)(a1 + 720) = SnapFlyoutHost::OnFlyoutInstanceDismissRequested;
        *(_DWORD *)(a1 + 728) = 0;
        *(_OWORD *)(a1 + 704) = *(_OWORD *)(a1 + 720);
        winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
          (_QWORD *)(a1 + 696),
          (__int64 *)(a1 + 736),
          (__int128 *)(a1 + 704));
        v75 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::DismissRequested(
                           a1 + 368,
                           a1 + 744,
                           v74,
                           a1 + 696);
        v76 = *v75;
        *v75 = 0LL;
        *(_QWORD *)(a1 + 1240) = v76;
        *(_QWORD *)(a1 + 1248) = v75[1];
        std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>,0>(
          (__int64 *)(a1 + 1240),
          (__int64 *)(a1 + 352));
        v98 = *(_QWORD *)(a1 + 1248);
        v77 = v98;
        v105 = *(_QWORD *)(a1 + 360);
        *(_QWORD *)(a1 + 1248) = v105;
        *(_QWORD *)(a1 + 360) = v77;
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 1240));
        __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 744));
        if ( *(_QWORD *)(a1 + 696) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 696));
        if ( *(_QWORD *)(a1 + 736) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 736));
        if ( *(_QWORD *)(a1 + 264) )
          winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)(a1 + 264));
        v28 = (volatile signed __int64 **)(a1 + 240);
        v78 = *(_QWORD *)(a1 + 240);
        *(_QWORD *)(a1 + 240) = 0LL;
        *(_QWORD *)(a1 + 264) = v78;
        v79 = std::make_shared<SnapFlyoutHost::FlyoutInstanceRecord,SnapFlyoutHost::FlyoutInstanceRecord>(
                (_QWORD *)(a1 + 760),
                (__int64 *)(a1 + 256));
        v80 = *(_QWORD *)(v71 + 32);
        if ( v80 == *(_QWORD *)(v71 + 40) )
        {
          std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::_Emplace_reallocate<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>(
            (__int64 *)(v71 + 24),
            (char *)v80,
            v79);
        }
        else
        {
          *(_QWORD *)v80 = 0LL;
          *(_QWORD *)(v80 + 8) = 0LL;
          *(_QWORD *)v80 = *v79;
          *(_QWORD *)(v80 + 8) = v79[1];
          *v79 = 0LL;
          v79[1] = 0LL;
          *(_QWORD *)(v71 + 32) += 16LL;
        }
        v81 = *(std::_Ref_count_base **)(a1 + 768);
        if ( v81 )
          std::_Ref_count_base::_Decref(v81);
        if ( *(_DWORD *)(a1 + 1297) == 2 )
        {
          *(_QWORD *)(a1 + 776) = *(_QWORD *)(a1 + 1313);
          *(_QWORD *)(a1 + 784) = *(_QWORD *)(a1 + 368);
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 784));
          std::_Tree<std::_Tmap_traits<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>,0>>::_Emplace<std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>(
            (__int64 **)(v71 + 144),
            a1 + 1256,
            (unsigned __int64 *)(a1 + 776));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 784));
          *(_DWORD *)(v71 + 120) = *(_DWORD *)(a1 + 1305);
          *(_QWORD *)(v71 + 128) = *(_QWORD *)(a1 + 1289);
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 368));
        SnapFlyoutHost::FlyoutInstanceRecord::~FlyoutInstanceRecord((SnapFlyoutHost::FlyoutInstanceRecord *)(a1 + 256));
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 248));
      }
      else
      {
        SnapFlyoutTelemetry::SnapFlyout_InstanceFailed<unsigned int &>((int *)(a1 + 1301));
      }
      if ( *v28 )
        winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)v28);
      v15 = (__int64 *)(a1 + 16);
LABEL_104:
      winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 144));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
      if ( *v15 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v15);
LABEL_106:
      *(_QWORD *)(a1 + 792) = a1 - 112;
      *v82 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 792),
              (__int64)v82) )
      {
LABEL_107:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
        wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>((void **)(a1 + 1321));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x5B0);
      }
      return;
    case 9:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
      goto LABEL_107;
    default:
      __debugbreak();
      return;
  }
}
