/*
 * XREFs of ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EE360
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01E9884 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01EF358 (-ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C01EFA00 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 */

/*
 * Hex-Rays decompilation failed for ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EE360
 * Reason: Hex-Rays returned no pseudocode for 0x1C01EE360
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01EE360: mov     [rsp+arg_8], edx
 * 00000001C01EE364: push    rbx
 * 00000001C01EE365: sub     rsp, 20h
 * 00000001C01EE369: call    IsEtwUserCritEnabled
 * 00000001C01EE36E: test    eax, eax
 * 00000001C01EE370: jz      short loc_1C01EE398
 * 00000001C01EE372: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C01EE379: nop     dword ptr [rax+rax+00h]
 * 00000001C01EE37E: mov     rbx, rax
 * 00000001C01EE381: test    rax, rax
 * 00000001C01EE384: jz      short loc_1C01EE398
 * 00000001C01EE386: xor     ecx, ecx; PerformanceFrequency
 * 00000001C01EE388: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C01EE38F: nop     dword ptr [rax+rax+00h]
 * 00000001C01EE394: mov     [rbx+8], rax
 * 00000001C01EE398: call    cs:__imp_SGDGetUserSessionState
 * 00000001C01EE39F: nop     dword ptr [rax+rax+00h]
 * 00000001C01EE3A4: mov     rcx, [rax+8]; Resource
 * 00000001C01EE3A8: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C01EE3AF: nop     dword ptr [rax+rax+00h]
 * 00000001C01EE3B4: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C01EE3B9: lea     rcx, [rsp+28h+arg_8]; this
 * 00000001C01EE3BE: call    ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z; IVRootDeliver::Settings::SendSettingsUpdateToContainer(CONTAINER_ID const &)
 * 00000001C01EE3C3: call    UserSessionSwitchLeaveCrit
 * 00000001C01EE3C8: call    ?ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z; IVForegroundSync::ivOnChildPartitionConnected(CONTAINER_ID const &)
 * 00000001C01EE3CD: lea     rcx, [rsp+28h+arg_8]; struct CONTAINER_ID *
 * 00000001C01EE3D2: call    IVContentRectsSync___anonymous_namespace___ivSendContentRectsUpdate
 * 00000001C01EE3D7: add     rsp, 20h
 * 00000001C01EE3DB: pop     rbx
 * 00000001C01EE3DC: retn
 */
