/*
 * XREFs of DxgkRemoveSessionViewForCurrentSession @ 0x1403ECA64
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x140344E58 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x14040D3E0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1403671F4 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 */

/*
 * Hex-Rays decompilation failed for DxgkRemoveSessionViewForCurrentSession @ 0x1403ECA64
 * Reason: Hex-Rays returned no pseudocode for 0x1403ECA64
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403ECA64: mov     [rsp+arg_0], rbx
 * 00000001403ECA69: mov     [rsp+arg_8], rbp
 * 00000001403ECA6E: mov     [rsp+arg_10], rsi
 * 00000001403ECA73: push    rdi
 * 00000001403ECA74: sub     rsp, 50h
 * 00000001403ECA78: mov     dil, r8b
 * 00000001403ECA7B: mov     esi, edx
 * 00000001403ECA7D: mov     rbp, rcx
 * 00000001403ECA80: call    ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ; DXGGLOBAL::GetGlobal(void)
 * 00000001403ECA85: mov     rcx, rax; this
 * 00000001403ECA88: call    ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ; DXGGLOBAL::GetSessionData(void)
 * 00000001403ECA8D: mov     rbx, rax
 * 00000001403ECA90: test    rax, rax
 * 00000001403ECA93: jnz     short loc_1403ECB0D
 * 00000001403ECA95: call    cs:__imp_PsGetCurrentProcessSessionId
 * 00000001403ECA9C: nop     dword ptr [rax+rax+00h]
 * 00000001403ECAA1: mov     rbx, 0FFFFFFFFC000000Dh
 * 00000001403ECAA8: mov     edx, eax
 * 00000001403ECAAA: mov     r8, rbx
 * 00000001403ECAAD: mov     ecx, 2
 * 00000001403ECAB2: call    cs:__imp_WdLogSingleEntry2
 * 00000001403ECAB9: nop     dword ptr [rax+rax+00h]
 * 00000001403ECABE: mov     cs:WdLogGlobalForLineNumber, 3BAh
 * 00000001403ECAC8: call    cs:__imp_PsGetCurrentProcessSessionId
 * 00000001403ECACF: nop     dword ptr [rax+rax+00h]
 * 00000001403ECAD4: and     [rsp+58h+var_18], 0
 * 00000001403ECADA: lea     r9, aCannotFindTheS_3; "Cannot find the session data for sessio"...
 * 00000001403ECAE1: and     [rsp+58h+var_20], 0
 * 00000001403ECAE7: or      r8d, 0FFFFFFFFh
 * 00000001403ECAEB: and     [rsp+58h+var_28], 0
 * 00000001403ECAF1: mov     edx, 40000h
 * 00000001403ECAF6: mov     ecx, eax
 * 00000001403ECAF8: mov     [rsp+58h+var_30], rbx
 * 00000001403ECAFD: mov     [rsp+58h+var_38], rcx
 * 00000001403ECB02: xor     ecx, ecx
 * 00000001403ECB04: call    DxgkLogInternalTriageEvent
 * 00000001403ECB09: mov     eax, ebx
 * 00000001403ECB0B: jmp     short loc_1403ECB83
 * 00000001403ECB0D: mov     rcx, [rax+4880h]
 * 00000001403ECB14: mov     rax, gs:188h
 * 00000001403ECB1D: cmp     rcx, rax
 * 00000001403ECB20: jz      short loc_1403ECB72
 * 00000001403ECB22: mov     ecx, 1
 * 00000001403ECB27: call    cs:__imp_WdLogSingleEntry0
 * 00000001403ECB2E: nop     dword ptr [rax+rax+00h]
 * 00000001403ECB33: and     [rsp+58h+var_18], 0
 * 00000001403ECB39: lea     r9, aPsessiondataIs; "pSessionData->IsSessionModeChangeLockEx"...
 * 00000001403ECB40: and     [rsp+58h+var_20], 0
 * 00000001403ECB46: mov     eax, 3BFh
 * 00000001403ECB4B: and     [rsp+58h+var_28], 0
 * 00000001403ECB51: or      r8d, 0FFFFFFFFh
 * 00000001403ECB55: and     [rsp+58h+var_30], 0
 * 00000001403ECB5B: mov     edx, 40002h
 * 00000001403ECB60: xor     ecx, ecx
 * 00000001403ECB62: mov     [rsp+58h+var_38], rax
 * 00000001403ECB67: mov     cs:WdLogGlobalForLineNumber, eax
 * 00000001403ECB6D: call    DxgkLogInternalTriageEvent
 * 00000001403ECB72: mov     r9b, dil; unsigned __int8
 * 00000001403ECB75: mov     r8d, esi; unsigned int
 * 00000001403ECB78: mov     rdx, rbp; struct _LUID *
 * 00000001403ECB7B: mov     rcx, rbx; this
 * 00000001403ECB7E: call    ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z; DXGSESSIONDATA::RemoveSourceViewFromSession(_LUID const &,uint,uchar)
 * 00000001403ECB83: mov     rbx, [rsp+58h+arg_0]
 * 00000001403ECB88: mov     rbp, [rsp+58h+arg_8]
 * 00000001403ECB8D: mov     rsi, [rsp+58h+arg_10]
 * 00000001403ECB92: add     rsp, 50h
 * 00000001403ECB96: pop     rdi
 * 00000001403ECB97: retn
 */
