/*
 * XREFs of KiSystemCall64 @ 0x1406B2B40
 * Callers:
 *     <none>
 * Callees:
 *     PerfInfoLogSysCallExit @ 0x1403D7130 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x1403D7280 (PerfInfoLogSysCallEntry.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x1406A12E0 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x1406B3980 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiTrackSystemCallEntry @ 0x140731440 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x140731560 (KiTrackSystemCallExit.c)
 *     PsInvokeWin32Callout @ 0x140961150 (PsInvokeWin32Callout.c)
 *     PsSyscallProviderDispatch @ 0x140A978D0 (PsSyscallProviderDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x1406B2B40
 * Reason: Hex-Rays returned no pseudocode for 0x1406B2B40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B2B40: swapgs
 * 00000001406B2B43: mov     gs:10h, rsp
 * 00000001406B2B4C: mov     rsp, gs:1A8h
 * 00000001406B2B55: push    2Bh ; '+'
 * 00000001406B2B57: push    qword ptr gs:10h
 * 00000001406B2B5F: push    r11
 * 00000001406B2B61: push    33h ; '3'
 * 00000001406B2B63: push    rcx
 * 00000001406B2B64: mov     rcx, gs:9D28h
 * 00000001406B2B6D: test    rcx, rcx
 * 00000001406B2B70: jz      short loc_1406B2B7E
 * 00000001406B2B72: setssbsy
 * 00000001406B2B76: rstorssp qword ptr [rcx]
 * 00000001406B2B7A: saveprevssp
 * 00000001406B2B7E: mov     rcx, r10
 * 00000001406B2B81: sub     rsp, 8
 * 00000001406B2B85: push    rbp
 * 00000001406B2B86: sub     rsp, 158h
 * 00000001406B2B8D: lea     rbp, [rsp+190h+var_110]
 * 00000001406B2B95: mov     [rbp+0C0h], rbx
 * 00000001406B2B9C: mov     [rbp+0C8h], rdi
 * 00000001406B2BA3: mov     [rbp+0D0h], rsi
 * 00000001406B2BAA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B2BB1: jz      short loc_1406B2BBF
 * 00000001406B2BB3: test    byte ptr [rbp+0F0h], 1
 * 00000001406B2BBA: jz      short loc_1406B2BBF
 * 00000001406B2BBC: stac
 * 00000001406B2BBF: mov     [rbp-50h], rax
 * 00000001406B2BC3: mov     [rbp-48h], rcx
 * 00000001406B2BC7: mov     [rbp-40h], rdx
 * 00000001406B2BCB: mov     rcx, gs:188h
 * 00000001406B2BD4: mov     rcx, [rcx+220h]
 * 00000001406B2BDB: mov     rcx, [rcx+760h]
 * 00000001406B2BE2: mov     gs:850h, rcx
 * 00000001406B2BEB: mov     cx, gs:862h
 * 00000001406B2BF4: mov     gs:864h, cx
 * 00000001406B2BFD: mov     cl, gs:858h
 * 00000001406B2C05: mov     gs:85Ah, cl
 * 00000001406B2C0D: movzx   eax, word ptr gs:868h
 * 00000001406B2C16: cmp     gs:866h, ax
 * 00000001406B2C1F: jz      short loc_1406B2C33
 * 00000001406B2C21: mov     gs:866h, ax
 * 00000001406B2C2A: mov     ecx, 48h ; 'H'
 * 00000001406B2C2F: xor     edx, edx
 * 00000001406B2C31: wrmsr
 * 00000001406B2C33: movzx   edx, byte ptr gs:858h
 * 00000001406B2C3C: test    edx, 8
 * 00000001406B2C42: jz      short loc_1406B2C5B
 * 00000001406B2C44: mov     eax, 1
 * 00000001406B2C49: xor     edx, edx
 * 00000001406B2C4B: mov     ecx, 49h ; 'I'
 * 00000001406B2C50: wrmsr
 * 00000001406B2C52: movzx   edx, byte ptr gs:858h
 * 00000001406B2C5B: test    edx, 2
 * 00000001406B2C61: jz      loc_1406B2D9E
 * 00000001406B2C67: call    loc_1406B2D7A
 * 00000001406B2C6C: add     rsp, 8
 * 00000001406B2C70: call    loc_1406B2D83
 * 00000001406B2C75: add     rsp, 8
 * 00000001406B2C79: call    loc_1406B2C6C
 * 00000001406B2C7E: add     rsp, 8
 * 00000001406B2C82: call    loc_1406B2C75
 * 00000001406B2C87: add     rsp, 8
 * 00000001406B2C8B: call    loc_1406B2C7E
 * 00000001406B2C90: add     rsp, 8
 * 00000001406B2C94: call    loc_1406B2C87
 * 00000001406B2C99: add     rsp, 8
 * 00000001406B2C9D: call    loc_1406B2C90
 * 00000001406B2CA2: add     rsp, 8
 * 00000001406B2CA6: call    loc_1406B2C99
 * 00000001406B2CAB: add     rsp, 8
 * 00000001406B2CAF: call    loc_1406B2CA2
 * 00000001406B2CB4: add     rsp, 8
 * 00000001406B2CB8: call    loc_1406B2CAB
 * 00000001406B2CBD: add     rsp, 8
 * 00000001406B2CC1: call    loc_1406B2CB4
 * 00000001406B2CC6: add     rsp, 8
 * 00000001406B2CCA: call    loc_1406B2CBD
 * 00000001406B2CCF: add     rsp, 8
 * 00000001406B2CD3: call    loc_1406B2CC6
 * 00000001406B2CD8: add     rsp, 8
 * 00000001406B2CDC: call    loc_1406B2CCF
 * 00000001406B2CE1: add     rsp, 8
 * 00000001406B2CE5: call    loc_1406B2CD8
 * 00000001406B2CEA: add     rsp, 8
 * 00000001406B2CEE: call    loc_1406B2CE1
 * 00000001406B2CF3: add     rsp, 8
 * 00000001406B2CF7: call    loc_1406B2CEA
 * 00000001406B2CFC: add     rsp, 8
 * 00000001406B2D00: call    loc_1406B2CF3
 * 00000001406B2D05: add     rsp, 8
 * 00000001406B2D09: call    loc_1406B2CFC
 * 00000001406B2D0E: add     rsp, 8
 * 00000001406B2D12: call    loc_1406B2D05
 * 00000001406B2D17: add     rsp, 8
 * 00000001406B2D1B: call    loc_1406B2D0E
 * 00000001406B2D20: add     rsp, 8
 * 00000001406B2D24: call    loc_1406B2D17
 * 00000001406B2D29: add     rsp, 8
 * 00000001406B2D2D: call    loc_1406B2D20
 * 00000001406B2D32: add     rsp, 8
 * 00000001406B2D36: call    loc_1406B2D29
 * 00000001406B2D3B: add     rsp, 8
 * 00000001406B2D3F: call    loc_1406B2D32
 * 00000001406B2D44: add     rsp, 8
 * 00000001406B2D48: call    loc_1406B2D3B
 * 00000001406B2D4D: add     rsp, 8
 * 00000001406B2D51: call    loc_1406B2D44
 * 00000001406B2D56: add     rsp, 8
 * 00000001406B2D5A: call    loc_1406B2D4D
 * 00000001406B2D5F: add     rsp, 8
 * 00000001406B2D63: call    loc_1406B2D56
 * 00000001406B2D68: add     rsp, 8
 * 00000001406B2D6C: call    loc_1406B2D5F
 * 00000001406B2D71: add     rsp, 8
 * 00000001406B2D75: call    loc_1406B2D68
 * 00000001406B2D7A: add     rsp, 8
 * 00000001406B2D7E: call    loc_1406B2D71
 * 00000001406B2D83: add     rsp, 8
 * 00000001406B2D87: mov     eax, 0DADAh
 * 00000001406B2D8C: test    byte ptr gs:85Ch, 8
 * 00000001406B2D95: jz      short loc_1406B2D9E
 * 00000001406B2D97: mov     al, 20h ; ' '
 * 00000001406B2D99: incsspq rax
 * 00000001406B2D9E: test    edx, 80h
 * 00000001406B2DA4: jz      short loc_1406B2DAE
 * 00000001406B2DA6: lfence
 * 00000001406B2DA9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B2DAE: lfence
 * 00000001406B2DB1: mov     byte ptr gs:85Eh, 0
 * 00000001406B2DBA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B2DC1: jz      short KiSystemServiceUser
 * 00000001406B2DC3: mov     ecx, 6A7h
 * 00000001406B2DC8: rdmsr
 * 00000001406B2DCA: cmp     edx, 0
 * 00000001406B2DCD: jz      short KiSystemServiceUser
 * 00000001406B2DCF: mov     ecx, edx
 * 00000001406B2DD1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B2DD7: cmp     edx, ecx
 * 00000001406B2DD9: jz      short KiSystemServiceUser
 * 00000001406B2DDB: mov     ecx, 6A7h
 * 00000001406B2DE0: wrmsr
 * 00000001406B2DE2: mov     byte ptr [rbp-55h], 2
 * 00000001406B2DE6: mov     byte ptr [rbp-58h], 1
 * 00000001406B2DEA: mov     rbx, gs:188h
 * 00000001406B2DF3: mov     byte ptr [rbx+232h], 1
 * 00000001406B2DFA: prefetchw byte ptr [rbx+90h]
 * 00000001406B2E01: stmxcsr dword ptr [rbp-54h]
 * 00000001406B2E05: ldmxcsr dword ptr gs:180h
 * 00000001406B2E0E: mov     [rbp-38h], r8
 * 00000001406B2E12: mov     [rbp-30h], r9
 * 00000001406B2E16: mov     [rbp-20h], r10
 * 00000001406B2E1A: mov     [rbp-28h], r10
 * 00000001406B2E1E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B2E22: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B2E26: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B2E2A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B2E2E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B2E32: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B2E36: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B2E3B: cmp     byte ptr [rbx+3], 0
 * 00000001406B2E3F: mov     word ptr [rbp+80h], 0
 * 00000001406B2E48: jz      short loc_1406B2E98
 * 00000001406B2E4A: test    byte ptr [rbx+3], 3
 * 00000001406B2E4E: jz      short loc_1406B2E55
 * 00000001406B2E50: call    KiSaveDebugRegisterState
 * 00000001406B2E55: test    byte ptr [rbx+3], 24h
 * 00000001406B2E59: jz      short loc_1406B2E98
 * 00000001406B2E5B: sti
 * 00000001406B2E5C: mov     [rbx+90h], rsp
 * 00000001406B2E63: mov     rcx, rsp
 * 00000001406B2E66: call    PsSyscallProviderDispatch
 * 00000001406B2E6B: cmp     al, 1
 * 00000001406B2E6D: jz      short loc_1406B2E98
 * 00000001406B2E6F: mov     rax, [rbp-50h]
 * 00000001406B2E73: jl      short loc_1406B2E89
 * 00000001406B2E75: mov     ecx, 0C000001Ch
 * 00000001406B2E7A: xor     edx, edx
 * 00000001406B2E7C: mov     r8, [rbp+0E8h]
 * 00000001406B2E83: call    KiExceptionDispatch
 * 00000001406B2E88: int     3; Trap to Debugger
 * 00000001406B2E89: test    byte ptr [rbx+3], 4
 * 00000001406B2E8D: jz      KiSystemServiceExit
 * 00000001406B2E93: jmp     KiSystemServiceExitPico
 * 00000001406B2E98: mov     r8, [rbp-38h]
 * 00000001406B2E9C: mov     r9, [rbp-30h]
 * 00000001406B2EA0: mov     rax, [rbp-50h]
 * 00000001406B2EA4: mov     rcx, [rbp-48h]
 * 00000001406B2EA8: mov     rdx, [rbp-40h]
 * 00000001406B2EAC: sti
 * 00000001406B2EAD: mov     [rbx+88h], rcx
 * 00000001406B2EB4: mov     [rbx+80h], eax
 * 00000001406B2EBA: nop     word ptr [rax+rax+00h]
 * 00000001406B2EC0: mov     [rbx+90h], rsp
 * 00000001406B2EC7: mov     edi, eax
 * 00000001406B2EC9: shr     edi, 7
 * 00000001406B2ECC: and     edi, 20h
 * 00000001406B2ECF: and     eax, 0FFFh
 * 00000001406B2ED4: lea     r10, KeServiceDescriptorTable
 * 00000001406B2EDB: lea     r11, KeServiceDescriptorTableShadow
 * 00000001406B2EE2: test    dword ptr [rbx+78h], 80h
 * 00000001406B2EE9: jz      short loc_1406B2EFE
 * 00000001406B2EEB: test    dword ptr [rbx+78h], 200000h
 * 00000001406B2EF2: jz      short loc_1406B2EFB
 * 00000001406B2EF4: lea     r11, KeServiceDescriptorTableFilter
 * 00000001406B2EFB: mov     r10, r11
 * 00000001406B2EFE: cmp     eax, [r10+rdi+10h]
 * 00000001406B2F03: jnb     loc_1406B37C7
 * 00000001406B2F09: mov     r10, [r10+rdi]
 * 00000001406B2F0D: movsxd  r11, dword ptr [r10+rax*4]
 * 00000001406B2F11: mov     rax, r11
 * 00000001406B2F14: sar     r11, 4
 * 00000001406B2F18: add     r10, r11
 * 00000001406B2F1B: cmp     edi, 20h ; ' '
 * 00000001406B2F1E: jnz     short loc_1406B2F70
 * 00000001406B2F20: mov     r11, [rbx+0F0h]
 * 00000001406B2F27: cmp     dword ptr [r11+1740h], 0
 * 00000001406B2F2F: jz      short loc_1406B2F70
 * 00000001406B2F31: mov     [rbp-50h], rax
 * 00000001406B2F35: mov     [rbp-48h], rcx
 * 00000001406B2F39: mov     [rbp-40h], rdx
 * 00000001406B2F3D: mov     rbx, r8
 * 00000001406B2F40: mov     rdi, r9
 * 00000001406B2F43: mov     rsi, r10
 * 00000001406B2F46: mov     ecx, 7
 * 00000001406B2F4B: xor     edx, edx
 * 00000001406B2F4D: xor     r8, r8
 * 00000001406B2F50: xor     r9, r9
 * 00000001406B2F53: call    PsInvokeWin32Callout
 * 00000001406B2F58: mov     rax, [rbp-50h]
 * 00000001406B2F5C: mov     rcx, [rbp-48h]
 * 00000001406B2F60: mov     rdx, [rbp-40h]
 * 00000001406B2F64: mov     r8, rbx
 * 00000001406B2F67: mov     r9, rdi
 * 00000001406B2F6A: mov     r10, rsi
 * 00000001406B2F6D: nop     dword ptr [rax]
 * 00000001406B2F70: and     eax, 0Fh
 * 00000001406B2F73: jz      KiSystemServiceCopyEnd
 * 00000001406B2F79: shl     eax, 3
 * 00000001406B2F7C: lea     rsp, [rsp-70h]
 * 00000001406B2F81: lea     rdi, [rsp+100h+var_E8]
 * 00000001406B2F86: mov     rsi, [rbp+100h]
 * 00000001406B2F8D: lea     rsi, [rsi+20h]
 * 00000001406B2F91: test    byte ptr [rbp+0F0h], 1
 * 00000001406B2F98: jz      short loc_1406B2FB0
 * 00000001406B2F9A: cmp     rsi, cs:MmUserProbeAddress
 * 00000001406B2FA1: cmovnb  rsi, cs:MmUserProbeAddress
 * 00000001406B2FA9: nop     dword ptr [rax+00000000h]
 * 00000001406B2FB0: lea     r11, KiSystemServiceCopyEnd
 * 00000001406B2FB7: sub     r11, rax
 * 00000001406B2FBA: jmp     r11
 * 00000001406B2FC0: mov     rax, [rsi+70h]
 * 00000001406B2FC4: mov     [rdi+70h], rax
 * 00000001406B2FC8: mov     rax, [rsi+68h]
 * 00000001406B2FCC: mov     [rdi+68h], rax
 * 00000001406B2FD0: mov     rax, [rsi+60h]
 * 00000001406B2FD4: mov     [rdi+60h], rax
 * 00000001406B2FD8: mov     rax, [rsi+58h]
 * 00000001406B2FDC: mov     [rdi+58h], rax
 * 00000001406B2FE0: mov     rax, [rsi+50h]
 * 00000001406B2FE4: mov     [rdi+50h], rax
 * 00000001406B2FE8: mov     rax, [rsi+48h]
 * 00000001406B2FEC: mov     [rdi+48h], rax
 * 00000001406B2FF0: mov     rax, [rsi+40h]
 * 00000001406B2FF4: mov     [rdi+40h], rax
 * 00000001406B2FF8: mov     rax, [rsi+38h]
 * 00000001406B2FFC: mov     [rdi+38h], rax
 * 00000001406B3000: mov     rax, [rsi+30h]
 * 00000001406B3004: mov     [rdi+30h], rax
 * 00000001406B3008: mov     rax, [rsi+28h]
 * 00000001406B300C: mov     [rdi+28h], rax
 * 00000001406B3010: mov     rax, [rsi+20h]
 * 00000001406B3014: mov     [rdi+20h], rax
 * 00000001406B3018: mov     rax, [rsi+18h]
 * 00000001406B301C: mov     [rdi+18h], rax
 * 00000001406B3020: mov     rax, [rsi+10h]
 * 00000001406B3024: mov     [rdi+10h], rax
 * 00000001406B3028: mov     rax, [rsi+8]
 * 00000001406B302C: mov     [rdi+8], rax
 * 00000001406B3030: test    cs:KiDynamicTraceMask, 1
 * 00000001406B303A: jnz     loc_1406B3886
 * 00000001406B3040: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 00000001406B304A: jnz     loc_1406B38FA
 * 00000001406B3050: mov     rax, r10
 * 00000001406B3053: call    rax
 * 00000001406B3055: nop     dword ptr [rax]
 * 00000001406B3058: inc     dword ptr gs:2EB8h
 * 00000001406B3060: mov     rbx, [rbp+0C0h]
 * 00000001406B3067: mov     rdi, [rbp+0C8h]
 * 00000001406B306E: mov     rsi, [rbp+0D0h]
 * 00000001406B3075: mov     r11, gs:188h
 * 00000001406B307E: test    byte ptr [rbp+0F0h], 1
 * 00000001406B3085: jz      loc_1406B347E
 * 00000001406B308B: mov     rcx, cr8
 * 00000001406B308F: or      cl, [r11+24Ah]
 * 00000001406B3096: or      ecx, [r11+1E4h]
 * 00000001406B309D: jnz     loc_1406B3831
 * 00000001406B30A3: cmp     byte ptr [r11+232h], 1
 * 00000001406B30AB: jnz     loc_1406B3866
 * 00000001406B30B1: cli
 * 00000001406B30B2: mov     rcx, gs:188h
 * 00000001406B30BB: test    byte ptr [rcx+0C2h], 3
 * 00000001406B30C2: jz      short loc_1406B311D
 * 00000001406B30C4: mov     [rbp-50h], rax
 * 00000001406B30C8: xor     eax, eax
 * 00000001406B30CA: mov     [rbp-48h], rax
 * 00000001406B30CE: mov     [rbp-40h], rax
 * 00000001406B30D2: mov     [rbp-38h], rax
 * 00000001406B30D6: mov     [rbp-30h], rax
 * 00000001406B30DA: mov     [rbp-28h], rax
 * 00000001406B30DE: mov     [rbp-20h], rax
 * 00000001406B30E2: pxor    xmm0, xmm0
 * 00000001406B30E6: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B30EA: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001406B30EE: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001406B30F2: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001406B30F6: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001406B30FA: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001406B30FE: mov     ecx, 1
 * 00000001406B3103: mov     cr8, rcx
 * 00000001406B3107: sti
 * 00000001406B3108: call    KiInitiateUserApc
 * 00000001406B310D: cli
 * 00000001406B310E: mov     ecx, 0
 * 00000001406B3113: mov     cr8, rcx
 * 00000001406B3117: mov     rax, [rbp-50h]
 * 00000001406B311B: jmp     short loc_1406B30B2
 * 00000001406B311D: mov     [rbp-50h], rax
 * 00000001406B3121: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B3126: test    eax, eax
 * 00000001406B3128: mov     rax, [rbp-50h]
 * 00000001406B312C: jnz     short loc_1406B30B2
 * 00000001406B312E: test    byte ptr gs:860h, 2
 * 00000001406B3137: jz      short loc_1406B3148
 * 00000001406B3139: mov     [rbp-50h], rax
 * 00000001406B313D: xor     ecx, ecx
 * 00000001406B313F: call    KiUpdateStibpPairing
 * 00000001406B3144: mov     rax, [rbp-50h]
 * 00000001406B3148: mov     rcx, gs:188h
 * 00000001406B3151: test    dword ptr [rcx], 8000000h
 * 00000001406B3157: jz      short loc_1406B3198
 * 00000001406B3159: mov     [rbp-50h], rax
 * 00000001406B315D: xor     eax, eax
 * 00000001406B315F: mov     [rbp-48h], rax
 * 00000001406B3163: mov     [rbp-40h], rax
 * 00000001406B3167: mov     [rbp-38h], rax
 * 00000001406B316B: mov     [rbp-30h], rax
 * 00000001406B316F: mov     [rbp-28h], rax
 * 00000001406B3173: mov     [rbp-20h], rax
 * 00000001406B3177: pxor    xmm0, xmm0
 * 00000001406B317B: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B317F: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001406B3183: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001406B3187: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001406B318B: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001406B318F: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001406B3193: call    KiRestoreSetContextState
 * 00000001406B3198: mov     rcx, gs:188h
 * 00000001406B31A1: test    dword ptr [rcx], 10000h
 * 00000001406B31A7: jz      short loc_1406B31C5
 * 00000001406B31A9: mov     [rbp-50h], rax
 * 00000001406B31AD: test    byte ptr [rcx+2], 1
 * 00000001406B31B1: jz      short loc_1406B31C1
 * 00000001406B31B3: call    KiCopyCounters
 * 00000001406B31B8: mov     rcx, gs:188h
 * 00000001406B31C1: mov     rax, [rbp-50h]
 * 00000001406B31C5: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B31C9: xor     r10, r10
 * 00000001406B31CC: cmp     word ptr [rbp+80h], 0
 * 00000001406B31D4: jz      short loc_1406B3217
 * 00000001406B31D6: mov     [rbp-50h], rax
 * 00000001406B31DA: call    KiRestoreDebugRegisterState
 * 00000001406B31DF: mov     rax, gs:188h
 * 00000001406B31E8: mov     rax, [rax+0B8h]
 * 00000001406B31EF: mov     rax, [rax+168h]
 * 00000001406B31F6: or      rax, rax
 * 00000001406B31F9: jz      short loc_1406B3213
 * 00000001406B31FB: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001406B3203: jnz     short loc_1406B3213
 * 00000001406B3205: mov     r10, [rbp+0E8h]
 * 00000001406B320C: mov     [rbp+0E8h], rax
 * 00000001406B3213: mov     rax, [rbp-50h]
 * 00000001406B3217: mov     rcx, gs:188h
 * 00000001406B3220: bt      dword ptr [rcx+74h], 16h
 * 00000001406B3225: jnb     short loc_1406B3251
 * 00000001406B3227: xor     ecx, ecx
 * 00000001406B3229: rdsspq  rcx
 * 00000001406B322E: mov     r8, gs:9D28h
 * 00000001406B3237: add     r8, 8
 * 00000001406B323B: cmp     rcx, r8
 * 00000001406B323E: jnz     short loc_1406B3251
 * 00000001406B3240: mov     rcx, gs:9D20h
 * 00000001406B3249: rstorssp qword ptr [rcx]
 * 00000001406B324D: saveprevssp
 * 00000001406B3251: mov     [rbp-50h], rax
 * 00000001406B3255: mov     byte ptr gs:85Eh, 0
 * 00000001406B325E: movzx   eax, word ptr gs:86Ch
 * 00000001406B3267: cmp     gs:866h, ax
 * 00000001406B3270: jz      short loc_1406B3284
 * 00000001406B3272: mov     gs:866h, ax
 * 00000001406B327B: mov     ecx, 48h ; 'H'
 * 00000001406B3280: xor     edx, edx
 * 00000001406B3282: wrmsr
 * 00000001406B3284: btr     word ptr gs:858h, 2
 * 00000001406B328F: jnb     short loc_1406B329F
 * 00000001406B3291: mov     eax, 1
 * 00000001406B3296: xor     edx, edx
 * 00000001406B3298: mov     ecx, 49h ; 'I'
 * 00000001406B329D: wrmsr
 * 00000001406B329F: btr     word ptr gs:858h, 5
 * 00000001406B32AA: jnb     loc_1406B33E7
 * 00000001406B32B0: call    loc_1406B33C3
 * 00000001406B32B5: add     rsp, 8
 * 00000001406B32B9: call    loc_1406B33CC
 * 00000001406B32BE: add     rsp, 8
 * 00000001406B32C2: call    loc_1406B32B5
 * 00000001406B32C7: add     rsp, 8
 * 00000001406B32CB: call    loc_1406B32BE
 * 00000001406B32D0: add     rsp, 8
 * 00000001406B32D4: call    loc_1406B32C7
 * 00000001406B32D9: add     rsp, 8
 * 00000001406B32DD: call    loc_1406B32D0
 * 00000001406B32E2: add     rsp, 8
 * 00000001406B32E6: call    loc_1406B32D9
 * 00000001406B32EB: add     rsp, 8
 * 00000001406B32EF: call    loc_1406B32E2
 * 00000001406B32F4: add     rsp, 8
 * 00000001406B32F8: call    loc_1406B32EB
 * 00000001406B32FD: add     rsp, 8
 * 00000001406B3301: call    loc_1406B32F4
 * 00000001406B3306: add     rsp, 8
 * 00000001406B330A: call    loc_1406B32FD
 * 00000001406B330F: add     rsp, 8
 * 00000001406B3313: call    loc_1406B3306
 * 00000001406B3318: add     rsp, 8
 * 00000001406B331C: call    loc_1406B330F
 * 00000001406B3321: add     rsp, 8
 * 00000001406B3325: call    loc_1406B3318
 * 00000001406B332A: add     rsp, 8
 * 00000001406B332E: call    loc_1406B3321
 * 00000001406B3333: add     rsp, 8
 * 00000001406B3337: call    loc_1406B332A
 * 00000001406B333C: add     rsp, 8
 * 00000001406B3340: call    loc_1406B3333
 * 00000001406B3345: add     rsp, 8
 * 00000001406B3349: call    loc_1406B333C
 * 00000001406B334E: add     rsp, 8
 * 00000001406B3352: call    loc_1406B3345
 * 00000001406B3357: add     rsp, 8
 * 00000001406B335B: call    loc_1406B334E
 * 00000001406B3360: add     rsp, 8
 * 00000001406B3364: call    loc_1406B3357
 * 00000001406B3369: add     rsp, 8
 * 00000001406B336D: call    loc_1406B3360
 * 00000001406B3372: add     rsp, 8
 * 00000001406B3376: call    loc_1406B3369
 * 00000001406B337B: add     rsp, 8
 * 00000001406B337F: call    loc_1406B3372
 * 00000001406B3384: add     rsp, 8
 * 00000001406B3388: call    loc_1406B337B
 * 00000001406B338D: add     rsp, 8
 * 00000001406B3391: call    loc_1406B3384
 * 00000001406B3396: add     rsp, 8
 * 00000001406B339A: call    loc_1406B338D
 * 00000001406B339F: add     rsp, 8
 * 00000001406B33A3: call    loc_1406B3396
 * 00000001406B33A8: add     rsp, 8
 * 00000001406B33AC: call    loc_1406B339F
 * 00000001406B33B1: add     rsp, 8
 * 00000001406B33B5: call    loc_1406B33A8
 * 00000001406B33BA: add     rsp, 8
 * 00000001406B33BE: call    loc_1406B33B1
 * 00000001406B33C3: add     rsp, 8
 * 00000001406B33C7: call    loc_1406B33BA
 * 00000001406B33CC: add     rsp, 8
 * 00000001406B33D0: mov     eax, 0DADAh
 * 00000001406B33D5: test    byte ptr gs:85Ch, 8
 * 00000001406B33DE: jz      short loc_1406B33E7
 * 00000001406B33E0: mov     al, 20h ; ' '
 * 00000001406B33E2: incsspq rax
 * 00000001406B33E7: test    word ptr gs:858h, 100h
 * 00000001406B33F2: jz      short loc_1406B3400
 * 00000001406B33F4: xor     eax, eax
 * 00000001406B33F6: xor     edx, edx
 * 00000001406B33F8: mov     ecx, 1
 * 00000001406B33FD: div     rcx
 * 00000001406B3400: mov     rax, [rbp-50h]
 * 00000001406B3404: mov     r8, [rbp+100h]
 * 00000001406B340B: mov     r9, [rbp+0D8h]
 * 00000001406B3412: xor     edx, edx
 * 00000001406B3414: pxor    xmm0, xmm0
 * 00000001406B3418: pxor    xmm1, xmm1
 * 00000001406B341C: pxor    xmm2, xmm2
 * 00000001406B3420: pxor    xmm3, xmm3
 * 00000001406B3424: pxor    xmm4, xmm4
 * 00000001406B3428: pxor    xmm5, xmm5
 * 00000001406B342C: mov     rcx, [rbp+0E8h]
 * 00000001406B3433: mov     r11, [rbp+0F8h]
 * 00000001406B343A: test    cs:KiKvaShadow, 1
 * 00000001406B3441: jnz     KiKernelSysretExit
 * 00000001406B3447: mov     rbp, r9
 * 00000001406B344A: mov     rsp, r8
 * 00000001406B344D: xor     r9, r9
 * 00000001406B3450: rdsspq  r9
 * 00000001406B3455: test    r9, r9
 * 00000001406B3458: jz      short loc_1406B3462
 * 00000001406B345A: clrssbsy qword ptr [r9]
 * 00000001406B345F: xor     r9, r9
 * 00000001406B3462: test    word ptr gs:858h, 200h
 * 00000001406B346D: jz      short loc_1406B3478
 * 00000001406B346F: verw    word ptr gs:0B02Ah
 * 00000001406B3478: swapgs
 * 00000001406B347B: sysret
 * 00000001406B347E: mov     rdx, [rbp+0B8h]
 * 00000001406B3485: mov     [r11+90h], rdx
 * 00000001406B348C: mov     dl, [rbp-58h]
 * 00000001406B348F: mov     [r11+232h], dl
 * 00000001406B3496: cli
 * 00000001406B3497: mov     rsp, rbp
 * 00000001406B349A: mov     rbp, [rbp+0D8h]
 * 00000001406B34A1: mov     rsp, [rsp+90h+arg_68]
 * 00000001406B34A9: sti
 * 00000001406B34AA: retn
 * 00000001406B34AB: mov     r11, gs:188h
 * 00000001406B34B4: mov     rcx, cr8
 * 00000001406B34B8: or      cl, [r11+24Ah]
 * 00000001406B34BF: or      ecx, [r11+1E4h]
 * 00000001406B34C6: jnz     loc_1406B3831
 * 00000001406B34CC: cmp     byte ptr [rbx+232h], 1
 * 00000001406B34D3: jnz     loc_1406B3866
 * 00000001406B34D9: cli
 * 00000001406B34DA: mov     [rbp-50h], rax
 * 00000001406B34DE: mov     rcx, gs:188h
 * 00000001406B34E7: test    byte ptr [rcx+0C2h], 3
 * 00000001406B34EE: jz      short loc_1406B350B
 * 00000001406B34F0: mov     ecx, 1
 * 00000001406B34F5: mov     cr8, rcx
 * 00000001406B34F9: sti
 * 00000001406B34FA: call    KiInitiateUserApc
 * 00000001406B34FF: mov     ecx, 0
 * 00000001406B3504: mov     cr8, rcx
 * 00000001406B3508: cli
 * 00000001406B3509: jmp     short loc_1406B34DE
 * 00000001406B350B: test    byte ptr gs:860h, 2
 * 00000001406B3514: jz      short loc_1406B351D
 * 00000001406B3516: xor     ecx, ecx
 * 00000001406B3518: call    KiUpdateStibpPairing
 * 00000001406B351D: mov     rcx, gs:188h
 * 00000001406B3526: test    dword ptr [rcx], 8000000h
 * 00000001406B352C: jz      short loc_1406B3533
 * 00000001406B352E: call    KiRestoreSetContextState
 * 00000001406B3533: mov     rcx, gs:188h
 * 00000001406B353C: test    byte ptr [rcx+2], 1
 * 00000001406B3540: jz      short loc_1406B3550
 * 00000001406B3542: call    KiCopyCounters
 * 00000001406B3547: mov     rcx, gs:188h
 * 00000001406B3550: cmp     word ptr [rbp+80h], 0
 * 00000001406B3558: jz      short loc_1406B355F
 * 00000001406B355A: call    KiRestoreDebugRegisterState
 * 00000001406B355F: mov     rcx, gs:188h
 * 00000001406B3568: bt      dword ptr [rcx+74h], 16h
 * 00000001406B356D: jnb     short loc_1406B3599
 * 00000001406B356F: xor     ecx, ecx
 * 00000001406B3571: rdsspq  rcx
 * 00000001406B3576: mov     r8, gs:9D28h
 * 00000001406B357F: add     r8, 8
 * 00000001406B3583: cmp     rcx, r8
 * 00000001406B3586: jnz     short loc_1406B3599
 * 00000001406B3588: mov     rcx, gs:9D20h
 * 00000001406B3591: rstorssp qword ptr [rcx]
 * 00000001406B3595: saveprevssp
 * 00000001406B3599: mov     byte ptr gs:85Eh, 0
 * 00000001406B35A2: movzx   eax, word ptr gs:86Ch
 * 00000001406B35AB: cmp     gs:866h, ax
 * 00000001406B35B4: jz      short loc_1406B35C8
 * 00000001406B35B6: mov     gs:866h, ax
 * 00000001406B35BF: mov     ecx, 48h ; 'H'
 * 00000001406B35C4: xor     edx, edx
 * 00000001406B35C6: wrmsr
 * 00000001406B35C8: btr     word ptr gs:858h, 2
 * 00000001406B35D3: jnb     short loc_1406B35E3
 * 00000001406B35D5: mov     eax, 1
 * 00000001406B35DA: xor     edx, edx
 * 00000001406B35DC: mov     ecx, 49h ; 'I'
 * 00000001406B35E1: wrmsr
 * 00000001406B35E3: btr     word ptr gs:858h, 5
 * 00000001406B35EE: jnb     loc_1406B372B
 * 00000001406B35F4: call    loc_1406B3707
 * 00000001406B35F9: add     rsp, 8
 * 00000001406B35FD: call    loc_1406B3710
 * 00000001406B3602: add     rsp, 8
 * 00000001406B3606: call    loc_1406B35F9
 * 00000001406B360B: add     rsp, 8
 * 00000001406B360F: call    loc_1406B3602
 * 00000001406B3614: add     rsp, 8
 * 00000001406B3618: call    loc_1406B360B
 * 00000001406B361D: add     rsp, 8
 * 00000001406B3621: call    loc_1406B3614
 * 00000001406B3626: add     rsp, 8
 * 00000001406B362A: call    loc_1406B361D
 * 00000001406B362F: add     rsp, 8
 * 00000001406B3633: call    loc_1406B3626
 * 00000001406B3638: add     rsp, 8
 * 00000001406B363C: call    loc_1406B362F
 * 00000001406B3641: add     rsp, 8
 * 00000001406B3645: call    loc_1406B3638
 * 00000001406B364A: add     rsp, 8
 * 00000001406B364E: call    loc_1406B3641
 * 00000001406B3653: add     rsp, 8
 * 00000001406B3657: call    loc_1406B364A
 * 00000001406B365C: add     rsp, 8
 * 00000001406B3660: call    loc_1406B3653
 * 00000001406B3665: add     rsp, 8
 * 00000001406B3669: call    loc_1406B365C
 * 00000001406B366E: add     rsp, 8
 * 00000001406B3672: call    loc_1406B3665
 * 00000001406B3677: add     rsp, 8
 * 00000001406B367B: call    loc_1406B366E
 * 00000001406B3680: add     rsp, 8
 * 00000001406B3684: call    loc_1406B3677
 * 00000001406B3689: add     rsp, 8
 * 00000001406B368D: call    loc_1406B3680
 * 00000001406B3692: add     rsp, 8
 * 00000001406B3696: call    loc_1406B3689
 * 00000001406B369B: add     rsp, 8
 * 00000001406B369F: call    loc_1406B3692
 * 00000001406B36A4: add     rsp, 8
 * 00000001406B36A8: call    loc_1406B369B
 * 00000001406B36AD: add     rsp, 8
 * 00000001406B36B1: call    loc_1406B36A4
 * 00000001406B36B6: add     rsp, 8
 * 00000001406B36BA: call    loc_1406B36AD
 * 00000001406B36BF: add     rsp, 8
 * 00000001406B36C3: call    loc_1406B36B6
 * 00000001406B36C8: add     rsp, 8
 * 00000001406B36CC: call    loc_1406B36BF
 * 00000001406B36D1: add     rsp, 8
 * 00000001406B36D5: call    loc_1406B36C8
 * 00000001406B36DA: add     rsp, 8
 * 00000001406B36DE: call    loc_1406B36D1
 * 00000001406B36E3: add     rsp, 8
 * 00000001406B36E7: call    loc_1406B36DA
 * 00000001406B36EC: add     rsp, 8
 * 00000001406B36F0: call    loc_1406B36E3
 * 00000001406B36F5: add     rsp, 8
 * 00000001406B36F9: call    loc_1406B36EC
 * 00000001406B36FE: add     rsp, 8
 * 00000001406B3702: call    loc_1406B36F5
 * 00000001406B3707: add     rsp, 8
 * 00000001406B370B: call    loc_1406B36FE
 * 00000001406B3710: add     rsp, 8
 * 00000001406B3714: mov     eax, 0DADAh
 * 00000001406B3719: test    byte ptr gs:85Ch, 8
 * 00000001406B3722: jz      short loc_1406B372B
 * 00000001406B3724: mov     al, 20h ; ' '
 * 00000001406B3726: incsspq rax
 * 00000001406B372B: test    word ptr gs:858h, 100h
 * 00000001406B3736: jz      short loc_1406B3744
 * 00000001406B3738: xor     eax, eax
 * 00000001406B373A: xor     edx, edx
 * 00000001406B373C: mov     ecx, 1
 * 00000001406B3741: div     rcx
 * 00000001406B3744: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B3748: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B374C: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B3750: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B3754: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B3758: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B375C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B3760: mov     r11, [rbp-20h]
 * 00000001406B3764: mov     r10, [rbp-28h]
 * 00000001406B3768: mov     r9, [rbp-30h]
 * 00000001406B376C: mov     r8, [rbp-38h]
 * 00000001406B3770: mov     rdx, [rbp-40h]
 * 00000001406B3774: mov     rcx, [rbp-48h]
 * 00000001406B3778: mov     rax, [rbp-50h]
 * 00000001406B377C: mov     rsi, [rbp+0D0h]
 * 00000001406B3783: mov     rdi, [rbp+0C8h]
 * 00000001406B378A: mov     rbx, [rbp+0C0h]
 * 00000001406B3791: mov     rsp, rbp
 * 00000001406B3794: mov     rbp, [rbp+0D8h]
 * 00000001406B379B: add     rsp, 0E8h
 * 00000001406B37A2: test    cs:KiKvaShadow, 1
 * 00000001406B37A9: jz      short loc_1406B37B0
 * 00000001406B37AB: jmp     KiKernelExit
 * 00000001406B37B0: test    word ptr gs:858h, 200h
 * 00000001406B37BB: jz      short loc_1406B37C2
 * 00000001406B37BD: verw    [rsp-158h+arg_170]
 * 00000001406B37C2: swapgs
 * 00000001406B37C5: iretq
 * 00000001406B37C7: cmp     edi, 20h ; ' '
 * 00000001406B37CA: jnz     short loc_1406B3827
 * 00000001406B37CC: mov     [rbp-80h], eax
 * 00000001406B37CF: mov     [rbp-78h], rcx
 * 00000001406B37D3: mov     [rbp-70h], rdx
 * 00000001406B37D7: mov     [rbp-68h], r8
 * 00000001406B37DB: mov     [rbp-60h], r9
 * 00000001406B37DF: call    KiConvertToGuiThread
 * 00000001406B37E4: or      eax, eax
 * 00000001406B37E6: mov     eax, [rbp-80h]
 * 00000001406B37E9: mov     rcx, [rbp-78h]
 * 00000001406B37ED: mov     rdx, [rbp-70h]
 * 00000001406B37F1: mov     r8, [rbp-68h]
 * 00000001406B37F5: mov     r9, [rbp-60h]
 * 00000001406B37F9: mov     [rbx+90h], rsp
 * 00000001406B3800: jz      KiSystemServiceRepeat
 * 00000001406B3806: lea     rdi, xmmword_140FC62A0
 * 00000001406B380D: mov     esi, [rdi+10h]
 * 00000001406B3810: mov     rdi, [rdi]
 * 00000001406B3813: cmp     eax, esi
 * 00000001406B3815: jnb     short loc_1406B3827
 * 00000001406B3817: lea     rdi, [rdi+rsi*4]
 * 00000001406B381B: movsx   eax, byte ptr [rdi+rax]
 * 00000001406B381F: or      eax, eax
 * 00000001406B3821: jle     KiSystemServiceExit
 * 00000001406B3827: mov     eax, 0C000001Ch
 * 00000001406B382C: jmp     KiSystemServiceExit
 * 00000001406B3831: mov     ecx, 4Ah ; 'J'
 * 00000001406B3836: xor     r9d, r9d
 * 00000001406B3839: mov     r8, cr8
 * 00000001406B383D: or      r8d, r8d
 * 00000001406B3840: jnz     short loc_1406B3856
 * 00000001406B3842: mov     ecx, 1
 * 00000001406B3847: movzx   r8d, byte ptr [r11+24Ah]
 * 00000001406B384F: mov     r9d, [r11+1E4h]
 * 00000001406B3856: mov     rdx, [rbp+0E8h]
 * 00000001406B385D: mov     r10, rbp
 * 00000001406B3860: call    KiBugCheckDispatch
 * 00000001406B3866: mov     ecx, 1F9h
 * 00000001406B386B: mov     rdx, [rbp+0E8h]
 * 00000001406B3872: movzx   r8d, byte ptr [r11+232h]
 * 00000001406B387A: xor     r9d, r9d
 * 00000001406B387D: xor     r10d, r10d
 * 00000001406B3880: call    KiBugCheckDispatch
 * 00000001406B3886: sub     rsp, 50h
 * 00000001406B388A: mov     [rsp+0E0h+var_C0], rcx
 * 00000001406B388F: mov     [rsp+0E0h+var_B8], rdx
 * 00000001406B3894: mov     [rsp+0E0h+var_B0], r8
 * 00000001406B3899: mov     [rsp+0E0h+var_A8], r9
 * 00000001406B389E: mov     [rsp+0E0h+var_A0], r10
 * 00000001406B38A3: mov     rcx, r10
 * 00000001406B38A6: mov     rdx, rsp
 * 00000001406B38A9: add     rdx, 20h ; ' '
 * 00000001406B38AD: mov     r8, 4
 * 00000001406B38B4: mov     r9, rsp
 * 00000001406B38B7: add     r9, 70h ; 'p'
 * 00000001406B38BB: call    KiTrackSystemCallEntry
 * 00000001406B38C0: mov     [rbp-60h], rax
 * 00000001406B38C4: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001406B38C9: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001406B38CE: mov     r8, [rsp+0E0h+var_B0]
 * 00000001406B38D3: mov     r9, [rsp+0E0h+var_A8]
 * 00000001406B38D8: mov     r10, [rsp+0E0h+var_A0]
 * 00000001406B38DD: add     rsp, 50h
 * 00000001406B38E1: mov     rax, r10
 * 00000001406B38E4: call    rax
 * 00000001406B38E6: nop     dword ptr [rax]
 * 00000001406B38E9: mov     rcx, [rbp-60h]
 * 00000001406B38ED: mov     rdx, rax
 * 00000001406B38F0: call    KiTrackSystemCallExit
 * 00000001406B38F5: jmp     loc_1406B3058
 * 00000001406B38FA: sub     rsp, 50h
 * 00000001406B38FE: mov     [rsp+0E0h+var_C0], rcx
 * 00000001406B3903: mov     [rsp+0E0h+var_B8], rdx
 * 00000001406B3908: mov     [rsp+0E0h+var_B0], r8
 * 00000001406B390D: mov     [rsp+0E0h+var_A8], r9
 * 00000001406B3912: mov     [rsp+0E0h+var_A0], r10
 * 00000001406B3917: mov     rcx, r10
 * 00000001406B391A: call    PerfInfoLogSysCallEntry
 * 00000001406B391F: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001406B3924: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001406B3929: mov     r8, [rsp+0E0h+var_B0]
 * 00000001406B392E: mov     r9, [rsp+0E0h+var_A8]
 * 00000001406B3933: mov     r10, [rsp+0E0h+var_A0]
 * 00000001406B3938: add     rsp, 50h
 * 00000001406B393C: mov     rax, r10
 * 00000001406B393F: call    rax
 * 00000001406B3941: nop     dword ptr [rax]
 * 00000001406B3944: mov     rcx, rax
 * 00000001406B3947: call    PerfInfoLogSysCallExit
 * 00000001406B394C: jmp     loc_1406B3058
 * 00000001406B3951: retn
 */
