/*
 * XREFs of DxgkRemoveSessionViewForCurrentSession @ 0x1403F3070
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1402DA8D0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x140412150 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsSessionModeChangeLockExclusiveOwner@DXGSESSIONDATA@@QEBAEXZ @ 0x140057C70 (-IsSessionModeChangeLockExclusiveOwner@DXGSESSIONDATA@@QEBAEXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x14031A4A8 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 */

/*
 * Hex-Rays decompilation failed for DxgkRemoveSessionViewForCurrentSession @ 0x1403F3070
 * Reason: Hex-Rays returned no pseudocode for 0x1403F3070
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F3070: mov     [rsp+arg_0], rbx
 * 00000001403F3075: mov     [rsp+arg_8], rbp
 * 00000001403F307A: mov     [rsp+arg_10], rsi
 * 00000001403F307F: push    rdi
 * 00000001403F3080: sub     rsp, 50h
 * 00000001403F3084: mov     dil, r8b
 * 00000001403F3087: mov     esi, edx
 * 00000001403F3089: mov     rbp, rcx
 * 00000001403F308C: call    ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ; DXGGLOBAL::GetGlobal(void)
 * 00000001403F3091: mov     rcx, rax; this
 * 00000001403F3094: call    ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ; DXGGLOBAL::GetSessionData(void)
 * 00000001403F3099: mov     rbx, rax
 * 00000001403F309C: test    rax, rax
 * 00000001403F309F: jnz     short loc_1403F3119
 * 00000001403F30A1: call    cs:__imp_PsGetCurrentProcessSessionId
 * 00000001403F30A8: nop     dword ptr [rax+rax+00h]
 * 00000001403F30AD: mov     rbx, 0FFFFFFFFC000000Dh
 * 00000001403F30B4: mov     edx, eax
 * 00000001403F30B6: mov     r8, rbx
 * 00000001403F30B9: mov     ecx, 2
 * 00000001403F30BE: call    cs:__imp_WdLogSingleEntry2
 * 00000001403F30C5: nop     dword ptr [rax+rax+00h]
 * 00000001403F30CA: mov     cs:WdLogGlobalForLineNumber, 3A6h
 * 00000001403F30D4: call    cs:__imp_PsGetCurrentProcessSessionId
 * 00000001403F30DB: nop     dword ptr [rax+rax+00h]
 * 00000001403F30E0: and     [rsp+58h+var_18], 0
 * 00000001403F30E6: lea     r9, aCannotFindTheS_3; "Cannot find the session data for sessio"...
 * 00000001403F30ED: and     [rsp+58h+var_20], 0
 * 00000001403F30F3: or      r8d, 0FFFFFFFFh
 * 00000001403F30F7: and     [rsp+58h+var_28], 0
 * 00000001403F30FD: mov     edx, 40000h
 * 00000001403F3102: mov     ecx, eax
 * 00000001403F3104: mov     [rsp+58h+var_30], rbx
 * 00000001403F3109: mov     [rsp+58h+var_38], rcx
 * 00000001403F310E: xor     ecx, ecx
 * 00000001403F3110: call    DxgkLogInternalTriageEvent
 * 00000001403F3115: mov     eax, ebx
 * 00000001403F3117: jmp     short loc_1403F3186
 * 00000001403F3119: mov     rcx, rbx; this
 * 00000001403F311C: call    ?IsSessionModeChangeLockExclusiveOwner@DXGSESSIONDATA@@QEBAEXZ; DXGSESSIONDATA::IsSessionModeChangeLockExclusiveOwner(void)
 * 00000001403F3121: test    al, al
 * 00000001403F3123: jnz     short loc_1403F3175
 * 00000001403F3125: mov     ecx, 1
 * 00000001403F312A: call    cs:__imp_WdLogSingleEntry0
 * 00000001403F3131: nop     dword ptr [rax+rax+00h]
 * 00000001403F3136: and     [rsp+58h+var_18], 0
 * 00000001403F313C: lea     r9, aPsessiondataIs; "pSessionData->IsSessionModeChangeLockEx"...
 * 00000001403F3143: and     [rsp+58h+var_20], 0
 * 00000001403F3149: mov     eax, 3ABh
 * 00000001403F314E: and     [rsp+58h+var_28], 0
 * 00000001403F3154: or      r8d, 0FFFFFFFFh
 * 00000001403F3158: and     [rsp+58h+var_30], 0
 * 00000001403F315E: mov     edx, 40002h
 * 00000001403F3163: xor     ecx, ecx
 * 00000001403F3165: mov     [rsp+58h+var_38], rax
 * 00000001403F316A: mov     cs:WdLogGlobalForLineNumber, eax
 * 00000001403F3170: call    DxgkLogInternalTriageEvent
 * 00000001403F3175: mov     r9b, dil; unsigned __int8
 * 00000001403F3178: mov     r8d, esi; unsigned int
 * 00000001403F317B: mov     rdx, rbp; struct _LUID *
 * 00000001403F317E: mov     rcx, rbx; this
 * 00000001403F3181: call    ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z; DXGSESSIONDATA::RemoveSourceViewFromSession(_LUID const &,uint,uchar)
 * 00000001403F3186: mov     rbx, [rsp+58h+arg_0]
 * 00000001403F318B: mov     rbp, [rsp+58h+arg_8]
 * 00000001403F3190: mov     rsi, [rsp+58h+arg_10]
 * 00000001403F3195: add     rsp, 50h
 * 00000001403F3199: pop     rdi
 * 00000001403F319A: retn
 */
