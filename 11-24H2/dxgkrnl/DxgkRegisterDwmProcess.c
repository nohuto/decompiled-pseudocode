/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1403F1890
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x14002720C (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x14004FC08 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x14005A8F0 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

/*
 * Hex-Rays decompilation failed for DxgkRegisterDwmProcess @ 0x1403F1890
 * Reason: Hex-Rays returned no pseudocode for 0x1403F1890
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403F1890: mov     [rsp+arg_8], rbx
 * 00000001403F1895: push    rdi
 * 00000001403F1896: sub     rsp, 50h
 * 00000001403F189A: call    ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ; DXGPROCESS::GetCurrent(void)
 * 00000001403F189F: mov     rbx, rax
 * 00000001403F18A2: test    rax, rax
 * 00000001403F18A5: jnz     short loc_1403F18FB
 * 00000001403F18A7: lea     ecx, [rax+2]
 * 00000001403F18AA: call    cs:__imp_WdLogSingleEntry0
 * 00000001403F18B1: nop     dword ptr [rax+rax+00h]
 * 00000001403F18B6: and     [rsp+58h+var_18], rbx
 * 00000001403F18BB: lea     r9, aAnAttemptWasMa; "An attempt was made to register the DWM"...
 * 00000001403F18C2: and     [rsp+58h+var_20], rbx
 * 00000001403F18C7: mov     eax, 0E70h
 * 00000001403F18CC: and     [rsp+58h+var_28], rbx
 * 00000001403F18D1: or      r8d, 0FFFFFFFFh
 * 00000001403F18D5: and     [rsp+58h+var_30], rbx
 * 00000001403F18DA: mov     edx, 40000h
 * 00000001403F18DF: xor     ecx, ecx
 * 00000001403F18E1: mov     [rsp+58h+var_38], rax
 * 00000001403F18E6: mov     cs:WdLogGlobalForLineNumber, eax
 * 00000001403F18EC: call    DxgkLogInternalTriageEvent
 * 00000001403F18F1: mov     eax, 0C0000001h
 * 00000001403F18F6: jmp     loc_1403F199C
 * 00000001403F18FB: and     dword ptr [rsp+58h+arg_0], 0
 * 00000001403F1900: and     dword ptr [rsp+58h+arg_0+4], 0
 * 00000001403F1905: call    cs:__imp_PsGetCurrentProcessSessionId
 * 00000001403F190C: nop     dword ptr [rax+rax+00h]
 * 00000001403F1911: mov     r9d, 1
 * 00000001403F1917: mov     edx, eax
 * 00000001403F1919: mov     rax, [rsp+58h+arg_0]
 * 00000001403F191E: xor     r8d, r8d
 * 00000001403F1921: mov     [rsp+58h+var_30], rax
 * 00000001403F1926: and     dword ptr [rsp+58h+var_38], 0
 * 00000001403F192B: lea     ecx, [r9+72h]
 * 00000001403F192F: call    ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z; DxgkLogCodePointPacketForSession(_DXGK_DIAG_CODE_POINT_TYPE,unsigned __int64,uint,uint,uint,_LUID)
 * 00000001403F1934: or      dword ptr [rbx+198h], 4
 * 00000001403F193B: call    ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ; DXGGLOBAL::GetGlobal(void)
 * 00000001403F1940: mov     rcx, rax; this
 * 00000001403F1943: call    ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ; DXGGLOBAL::GetSessionData(void)
 * 00000001403F1948: mov     rcx, rax; this
 * 00000001403F194B: call    ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ; DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(void)
 * 00000001403F1950: mov     rax, [rbx+40h]
 * 00000001403F1954: xor     edi, edi
 * 00000001403F1956: mov     byte ptr [rax+8Ah], 1
 * 00000001403F195D: cmp     edi, 2
 * 00000001403F1960: jnb     short loc_1403F199A
 * 00000001403F1962: call    ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ; DXGGLOBAL::GetGlobal(void)
 * 00000001403F1967: lea     rax, ?m_pDxgmmsExport@DXGGLOBAL@@0PAPEAVDXGMMS_EXPORT@@A; DXGMMS_EXPORT * near * DXGGLOBAL::m_pDxgmmsExport
 * 00000001403F196E: cmp     qword ptr [rax+rdi*8], 0
 * 00000001403F1973: jz      short loc_1403F1996
 * 00000001403F1975: call    ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ; DXGGLOBAL::GetGlobal(void)
 * 00000001403F197A: mov     rbx, [rax+rdi*8+110h]
 * 00000001403F1982: call    ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ; DXGPROCESS::GetCurrent(void)
 * 00000001403F1987: mov     rdx, rax; struct DXGPROCESS *
 * 00000001403F198A: mov     rcx, rbx; this
 * 00000001403F198D: call    ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z; VIDSCH_EXPORT::VidSchRegisterAsDwm(DXGPROCESS *)
 * 00000001403F1992: test    eax, eax
 * 00000001403F1994: js      short loc_1403F199C
 * 00000001403F1996: inc     edi
 * 00000001403F1998: jmp     short loc_1403F195D
 * 00000001403F199A: xor     eax, eax
 * 00000001403F199C: mov     rbx, [rsp+58h+arg_8]
 * 00000001403F19A1: add     rsp, 50h
 * 00000001403F19A5: pop     rdi
 * 00000001403F19A6: retn
 */
