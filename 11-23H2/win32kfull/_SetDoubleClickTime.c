/*
 * XREFs of _SetDoubleClickTime @ 0x1C00D801C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 *     NtUserSetDoubleClickTime @ 0x1C01DB170 (NtUserSetDoubleClickTime.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0041160 (CheckWinstaAttributeAccess.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00D80F8 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     InitTooltipDelay @ 0x1C00D8178 (InitTooltipDelay.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 */

/*
 * Hex-Rays decompilation failed for _SetDoubleClickTime @ 0x1C00D801C
 * Reason: Hex-Rays returned no pseudocode for 0x1C00D801C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00D801C: mov     [rsp+arg_0], rbx
 * 00000001C00D8021: push    rdi
 * 00000001C00D8022: sub     rsp, 20h
 * 00000001C00D8026: mov     ebx, ecx
 * 00000001C00D8028: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00D802F: nop     dword ptr [rax+rax+00h]
 * 00000001C00D8034: test    rax, rax
 * 00000001C00D8037: jz      short loc_1C00D8045
 * 00000001C00D8039: mov     rdx, [rax]
 * 00000001C00D803C: neg     rdx
 * 00000001C00D803F: sbb     r8, r8
 * 00000001C00D8042: and     rax, r8
 * 00000001C00D8045: mov     rdi, [rax+298h]
 * 00000001C00D804C: mov     ecx, 10h; DesiredAccess
 * 00000001C00D8051: call    CheckWinstaAttributeAccess
 * 00000001C00D8056: test    eax, eax
 * 00000001C00D8058: jz      loc_1C00D80E6
 * 00000001C00D805E: test    ebx, ebx
 * 00000001C00D8060: jnz     short loc_1C00D8069
 * 00000001C00D8062: mov     ebx, 1F4h
 * 00000001C00D8067: jmp     short loc_1C00D8073
 * 00000001C00D8069: mov     eax, 1388h
 * 00000001C00D806E: cmp     ebx, eax
 * 00000001C00D8070: cmova   ebx, eax
 * 00000001C00D8073: call    cs:__imp_SGDGetUserSessionState
 * 00000001C00D807A: nop     dword ptr [rax+rax+00h]
 * 00000001C00D807F: mov     rdx, cs:__imp_gpsi
 * 00000001C00D8086: lea     ecx, ds:0[rbx*4]
 * 00000001C00D808D: mov     [rax+3818h], ebx
 * 00000001C00D8093: mov     rax, [rdx]
 * 00000001C00D8096: mov     [rax+1374h], ecx
 * 00000001C00D809C: mov     eax, 0CCCCCCCDh
 * 00000001C00D80A1: mov     rcx, [rdx]
 * 00000001C00D80A4: mul     dword ptr [rcx+1374h]
 * 00000001C00D80AA: shr     edx, 2
 * 00000001C00D80AD: mov     [rcx+1370h], edx
 * 00000001C00D80B3: call    Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage
 * 00000001C00D80B8: test    eax, eax
 * 00000001C00D80BA: jnz     short loc_1C00D80E1
 * 00000001C00D80BC: test    rdi, rdi
 * 00000001C00D80BF: jz      short loc_1C00D80E1
 * 00000001C00D80C1: mov     rbx, [rdi+10h]
 * 00000001C00D80C5: jmp     short loc_1C00D80DC
 * 00000001C00D80C7: mov     rcx, [rbx+70h]
 * 00000001C00D80CB: call    safe_cast_fnid_to_PTOOLTIPWND
 * 00000001C00D80D0: mov     rcx, rax
 * 00000001C00D80D3: call    InitTooltipDelay
 * 00000001C00D80D8: mov     rbx, [rbx+20h]
 * 00000001C00D80DC: test    rbx, rbx
 * 00000001C00D80DF: jnz     short loc_1C00D80C7
 * 00000001C00D80E1: mov     eax, 1
 * 00000001C00D80E6: mov     rbx, [rsp+28h+arg_0]
 * 00000001C00D80EB: add     rsp, 20h
 * 00000001C00D80EF: pop     rdi
 * 00000001C00D80F0: retn
 */
