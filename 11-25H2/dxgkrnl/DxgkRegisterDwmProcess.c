/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1403F7AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x140026F84 (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x140050188 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x14005AEF0 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

/*
 * Hex-Rays decompilation failed for DxgkRegisterDwmProcess @ 0x1403F7AA0
 * Reason: Hex-Rays returned no pseudocode for 0x1403F7AA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F7AA0: mov     [rsp+arg_8], rbx
 * 00000001403F7AA5: push    rdi
 * 00000001403F7AA6: sub     rsp, 50h
 * 00000001403F7AAA: call    ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ; DXGPROCESS::GetCurrent(void)
 * 00000001403F7AAF: mov     rbx, rax
 * 00000001403F7AB2: test    rax, rax
 * 00000001403F7AB5: jnz     short loc_1403F7B0B
 * 00000001403F7AB7: lea     ecx, [rax+2]
 * 00000001403F7ABA: call    cs:__imp_WdLogSingleEntry0
 * 00000001403F7AC1: nop     dword ptr [rax+rax+00h]
 * 00000001403F7AC6: and     [rsp+58h+var_18], rbx
 * 00000001403F7ACB: lea     r9, aAnAttemptWasMa; "An attempt was made to register the DWM"...
 * 00000001403F7AD2: and     [rsp+58h+var_20], rbx
 * 00000001403F7AD7: mov     eax, 0E6Fh
 * 00000001403F7ADC: and     [rsp+58h+var_28], rbx
 * 00000001403F7AE1: or      r8d, 0FFFFFFFFh
 * 00000001403F7AE5: and     [rsp+58h+var_30], rbx
 * 00000001403F7AEA: mov     edx, 40000h
 * 00000001403F7AEF: xor     ecx, ecx
 * 00000001403F7AF1: mov     [rsp+58h+var_38], rax
 * 00000001403F7AF6: mov     cs:WdLogGlobalForLineNumber, eax
 * 00000001403F7AFC: call    DxgkLogInternalTriageEvent
 * 00000001403F7B01: mov     eax, 0C0000001h
 * 00000001403F7B06: jmp     loc_1403F7BAC
 * 00000001403F7B0B: and     dword ptr [rsp+58h+arg_0], 0
 * 00000001403F7B10: and     dword ptr [rsp+58h+arg_0+4], 0
 * 00000001403F7B15: call    cs:__imp_PsGetCurrentProcessSessionId
 * 00000001403F7B1C: nop     dword ptr [rax+rax+00h]
 * 00000001403F7B21: mov     r9d, 1
 * 00000001403F7B27: mov     edx, eax
 * 00000001403F7B29: mov     rax, [rsp+58h+arg_0]
 * 00000001403F7B2E: xor     r8d, r8d
 * 00000001403F7B31: mov     [rsp+58h+var_30], rax
 * 00000001403F7B36: and     dword ptr [rsp+58h+var_38], 0
 * 00000001403F7B3B: lea     ecx, [r9+72h]
 * 00000001403F7B3F: call    ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z; DxgkLogCodePointPacketForSession(_DXGK_DIAG_CODE_POINT_TYPE,unsigned __int64,uint,uint,uint,_LUID)
 * 00000001403F7B44: or      dword ptr [rbx+198h], 4
 * 00000001403F7B4B: call    ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ; DXGGLOBAL::GetGlobal(void)
 * 00000001403F7B50: mov     rcx, rax; this
 * 00000001403F7B53: call    ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ; DXGGLOBAL::GetSessionData(void)
 * 00000001403F7B58: mov     rcx, rax; this
 * 00000001403F7B5B: call    ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ; DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(void)
 * 00000001403F7B60: mov     rax, [rbx+40h]
 * 00000001403F7B64: xor     edi, edi
 * 00000001403F7B66: mov     byte ptr [rax+8Ah], 1
 * 00000001403F7B6D: cmp     edi, 2
 * 00000001403F7B70: jnb     short loc_1403F7BAA
 * 00000001403F7B72: call    ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ; DXGGLOBAL::GetGlobal(void)
 * 00000001403F7B77: lea     rax, ?m_pDxgmmsExport@DXGGLOBAL@@0PAPEAVDXGMMS_EXPORT@@A; DXGMMS_EXPORT * near * DXGGLOBAL::m_pDxgmmsExport
 * 00000001403F7B7E: cmp     qword ptr [rax+rdi*8], 0
 * 00000001403F7B83: jz      short loc_1403F7BA6
 * 00000001403F7B85: call    ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ; DXGGLOBAL::GetGlobal(void)
 * 00000001403F7B8A: mov     rbx, [rax+rdi*8+110h]
 * 00000001403F7B92: call    ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ; DXGPROCESS::GetCurrent(void)
 * 00000001403F7B97: mov     rdx, rax; struct DXGPROCESS *
 * 00000001403F7B9A: mov     rcx, rbx; this
 * 00000001403F7B9D: call    ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z; VIDSCH_EXPORT::VidSchRegisterAsDwm(DXGPROCESS *)
 * 00000001403F7BA2: test    eax, eax
 * 00000001403F7BA4: js      short loc_1403F7BAC
 * 00000001403F7BA6: inc     edi
 * 00000001403F7BA8: jmp     short loc_1403F7B6D
 * 00000001403F7BAA: xor     eax, eax
 * 00000001403F7BAC: mov     rbx, [rsp+58h+arg_8]
 * 00000001403F7BB1: add     rsp, 50h
 * 00000001403F7BB5: pop     rdi
 * 00000001403F7BB6: retn
 */
