/*
 * XREFs of KiVirtualizationException @ 0x1406B0A00
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140BAAB40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KzLowerIrql @ 0x1403F7360 (KzLowerIrql.c)
 *     KzRaiseIrql @ 0x1403FA640 (KzRaiseIrql.c)
 *     KiCheckForSListAddress @ 0x140400C70 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x1405BF470 (KiEpfHandleNotification.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x1406B0A00 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x1406B3980 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x1406B0A00
 * Reason: Hex-Rays returned no pseudocode for 0x1406B0A00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B0A00: sub     rsp, 8
 * 00000001406B0A04: push    rbp
 * 00000001406B0A05: sub     rsp, 158h
 * 00000001406B0A0C: lea     rbp, [rsp+80h]
 * 00000001406B0A14: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B0A18: mov     [rbp+0E8h+var_138], rax
 * 00000001406B0A1C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B0A20: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B0A24: mov     [rbp+0E8h+var_120], r8
 * 00000001406B0A28: mov     [rbp+0E8h+var_118], r9
 * 00000001406B0A2C: mov     [rbp+0E8h+var_110], r10
 * 00000001406B0A30: mov     [rbp+0E8h+var_108], r11
 * 00000001406B0A34: test    [rbp+0E8h+arg_0], 1
 * 00000001406B0A3B: jnz     short loc_1406B0A75
 * 00000001406B0A3D: xor     edx, edx
 * 00000001406B0A3F: rdsspq  rdx
 * 00000001406B0A44: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B0A48: lfence
 * 00000001406B0A4B: test    byte ptr gs:858h, 1
 * 00000001406B0A54: jnz     short loc_1406B0A5E
 * 00000001406B0A56: lfence
 * 00000001406B0A59: jmp     loc_1406B0CE6
 * 00000001406B0A5E: movzx   eax, word ptr gs:866h
 * 00000001406B0A67: mov     ecx, 48h ; 'H'
 * 00000001406B0A6C: xor     edx, edx
 * 00000001406B0A6E: wrmsr
 * 00000001406B0A70: jmp     loc_1406B0CE6
 * 00000001406B0A75: test    cs:KiKvaShadow, 1
 * 00000001406B0A7C: jnz     short loc_1406B0A81
 * 00000001406B0A7E: swapgs
 * 00000001406B0A81: lfence
 * 00000001406B0A84: mov     rcx, gs:9D28h
 * 00000001406B0A8D: test    rcx, rcx
 * 00000001406B0A90: jz      short loc_1406B0AB1
 * 00000001406B0A92: rdsspq  rdx
 * 00000001406B0A97: mov     r10, gs:9D20h
 * 00000001406B0AA0: add     r10, 8
 * 00000001406B0AA4: cmp     rdx, r10
 * 00000001406B0AA7: jnz     short loc_1406B0AB1
 * 00000001406B0AA9: rstorssp qword ptr [rcx]
 * 00000001406B0AAD: saveprevssp
 * 00000001406B0AB1: mov     r10, gs:188h
 * 00000001406B0ABA: mov     rcx, gs:188h
 * 00000001406B0AC3: mov     rcx, [rcx+220h]
 * 00000001406B0ACA: mov     rcx, [rcx+760h]
 * 00000001406B0AD1: mov     gs:850h, rcx
 * 00000001406B0ADA: mov     cx, gs:862h
 * 00000001406B0AE3: mov     gs:864h, cx
 * 00000001406B0AEC: mov     cl, gs:858h
 * 00000001406B0AF4: mov     gs:85Ah, cl
 * 00000001406B0AFC: movzx   eax, word ptr gs:868h
 * 00000001406B0B05: cmp     gs:866h, ax
 * 00000001406B0B0E: jz      short loc_1406B0B22
 * 00000001406B0B10: mov     gs:866h, ax
 * 00000001406B0B19: mov     ecx, 48h ; 'H'
 * 00000001406B0B1E: xor     edx, edx
 * 00000001406B0B20: wrmsr
 * 00000001406B0B22: movzx   edx, byte ptr gs:858h
 * 00000001406B0B2B: test    edx, 8
 * 00000001406B0B31: jz      short loc_1406B0B4A
 * 00000001406B0B33: mov     eax, 1
 * 00000001406B0B38: xor     edx, edx
 * 00000001406B0B3A: mov     ecx, 49h ; 'I'
 * 00000001406B0B3F: wrmsr
 * 00000001406B0B41: movzx   edx, byte ptr gs:858h
 * 00000001406B0B4A: test    edx, 2
 * 00000001406B0B50: jz      loc_1406B0C8D
 * 00000001406B0B56: call    loc_1406B0C69
 * 00000001406B0B5B: add     rsp, 8
 * 00000001406B0B5F: call    loc_1406B0C72
 * 00000001406B0B64: add     rsp, 8
 * 00000001406B0B68: call    loc_1406B0B5B
 * 00000001406B0B6D: add     rsp, 8
 * 00000001406B0B71: call    loc_1406B0B64
 * 00000001406B0B76: add     rsp, 8
 * 00000001406B0B7A: call    loc_1406B0B6D
 * 00000001406B0B7F: add     rsp, 8
 * 00000001406B0B83: call    loc_1406B0B76
 * 00000001406B0B88: add     rsp, 8
 * 00000001406B0B8C: call    loc_1406B0B7F
 * 00000001406B0B91: add     rsp, 8
 * 00000001406B0B95: call    loc_1406B0B88
 * 00000001406B0B9A: add     rsp, 8
 * 00000001406B0B9E: call    loc_1406B0B91
 * 00000001406B0BA3: add     rsp, 8
 * 00000001406B0BA7: call    loc_1406B0B9A
 * 00000001406B0BAC: add     rsp, 8
 * 00000001406B0BB0: call    loc_1406B0BA3
 * 00000001406B0BB5: add     rsp, 8
 * 00000001406B0BB9: call    loc_1406B0BAC
 * 00000001406B0BBE: add     rsp, 8
 * 00000001406B0BC2: call    loc_1406B0BB5
 * 00000001406B0BC7: add     rsp, 8
 * 00000001406B0BCB: call    loc_1406B0BBE
 * 00000001406B0BD0: add     rsp, 8
 * 00000001406B0BD4: call    loc_1406B0BC7
 * 00000001406B0BD9: add     rsp, 8
 * 00000001406B0BDD: call    loc_1406B0BD0
 * 00000001406B0BE2: add     rsp, 8
 * 00000001406B0BE6: call    loc_1406B0BD9
 * 00000001406B0BEB: add     rsp, 8
 * 00000001406B0BEF: call    loc_1406B0BE2
 * 00000001406B0BF4: add     rsp, 8
 * 00000001406B0BF8: call    loc_1406B0BEB
 * 00000001406B0BFD: add     rsp, 8
 * 00000001406B0C01: call    loc_1406B0BF4
 * 00000001406B0C06: add     rsp, 8
 * 00000001406B0C0A: call    loc_1406B0BFD
 * 00000001406B0C0F: add     rsp, 8
 * 00000001406B0C13: call    loc_1406B0C06
 * 00000001406B0C18: add     rsp, 8
 * 00000001406B0C1C: call    loc_1406B0C0F
 * 00000001406B0C21: add     rsp, 8
 * 00000001406B0C25: call    loc_1406B0C18
 * 00000001406B0C2A: add     rsp, 8
 * 00000001406B0C2E: call    loc_1406B0C21
 * 00000001406B0C33: add     rsp, 8
 * 00000001406B0C37: call    loc_1406B0C2A
 * 00000001406B0C3C: add     rsp, 8
 * 00000001406B0C40: call    loc_1406B0C33
 * 00000001406B0C45: add     rsp, 8
 * 00000001406B0C49: call    loc_1406B0C3C
 * 00000001406B0C4E: add     rsp, 8
 * 00000001406B0C52: call    loc_1406B0C45
 * 00000001406B0C57: add     rsp, 8
 * 00000001406B0C5B: call    loc_1406B0C4E
 * 00000001406B0C60: add     rsp, 8
 * 00000001406B0C64: call    loc_1406B0C57
 * 00000001406B0C69: add     rsp, 8
 * 00000001406B0C6D: call    loc_1406B0C60
 * 00000001406B0C72: add     rsp, 8
 * 00000001406B0C76: mov     eax, 0DADAh
 * 00000001406B0C7B: test    byte ptr gs:85Ch, 8
 * 00000001406B0C84: jz      short loc_1406B0C8D
 * 00000001406B0C86: mov     al, 20h ; ' '
 * 00000001406B0C88: incsspq rax
 * 00000001406B0C8D: test    edx, 80h
 * 00000001406B0C93: jz      short loc_1406B0C9D
 * 00000001406B0C95: lfence
 * 00000001406B0C98: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B0C9D: lfence
 * 00000001406B0CA0: mov     byte ptr gs:85Eh, 0
 * 00000001406B0CA9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B0CB0: jz      short loc_1406B0CD1
 * 00000001406B0CB2: mov     ecx, 6A7h
 * 00000001406B0CB7: rdmsr
 * 00000001406B0CB9: cmp     edx, 0
 * 00000001406B0CBC: jz      short loc_1406B0CD1
 * 00000001406B0CBE: mov     ecx, edx
 * 00000001406B0CC0: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B0CC6: cmp     edx, ecx
 * 00000001406B0CC8: jz      short loc_1406B0CD1
 * 00000001406B0CCA: mov     ecx, 6A7h
 * 00000001406B0CCF: wrmsr
 * 00000001406B0CD1: test    byte ptr [r10+3], 3
 * 00000001406B0CD6: mov     [rbp+0E8h+var_68], 0
 * 00000001406B0CDF: jz      short loc_1406B0CE6
 * 00000001406B0CE1: call    KiSaveDebugRegisterState
 * 00000001406B0CE6: cld
 * 00000001406B0CE7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B0CEB: ldmxcsr dword ptr gs:180h
 * 00000001406B0CF4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B0CF8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B0CFC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B0D00: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B0D04: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B0D08: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B0D0C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B0D13: jz      short loc_1406B0D1A
 * 00000001406B0D15: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B0D1A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B0D21: jz      short loc_1406B0D2F
 * 00000001406B0D23: test    [rbp+0E8h+arg_0], 1
 * 00000001406B0D2A: jz      short loc_1406B0D2F
 * 00000001406B0D2C: stac
 * 00000001406B0D2F: mov     r9, gs:8D88h
 * 00000001406B0D38: test    r9, r9
 * 00000001406B0D3B: jz      loc_1406B10EF
 * 00000001406B0D41: cmp     dword ptr [r9+44h], 1
 * 00000001406B0D46: jnz     loc_1406B10EF
 * 00000001406B0D4C: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B0D56: jz      loc_1406B10EF
 * 00000001406B0D5C: mov     rax, cr8
 * 00000001406B0D60: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 00000001406B0D63: cmp     al, 2
 * 00000001406B0D65: jge     loc_1406B10EF
 * 00000001406B0D6B: mov     ecx, 2; NewIrql
 * 00000001406B0D70: call    KzRaiseIrql
 * 00000001406B0D75: sti
 * 00000001406B0D76: mov     r9, gs:8D88h
 * 00000001406B0D7F: mov     rcx, [r9+48h]
 * 00000001406B0D83: mov     dword ptr [r9+44h], 0
 * 00000001406B0D8B: call    KiEpfHandleNotification
 * 00000001406B0D90: cli
 * 00000001406B0D91: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406B0D95: call    KiCheckForSListAddress
 * 00000001406B0D9A: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 00000001406B0D9D: call    KzLowerIrql
 * 00000001406B0DA2: test    [rbp+0E8h+arg_0], 1
 * 00000001406B0DA9: jz      loc_1406B10A4
 * 00000001406B0DAF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B0DB6: jz      short loc_1406B0DBB
 * 00000001406B0DB8: stac
 * 00000001406B0DBB: mov     rcx, gs:188h
 * 00000001406B0DC4: test    byte ptr [rcx+0C2h], 3
 * 00000001406B0DCB: jz      short loc_1406B0DE8
 * 00000001406B0DCD: mov     ecx, 1
 * 00000001406B0DD2: mov     cr8, rcx
 * 00000001406B0DD6: sti
 * 00000001406B0DD7: call    KiInitiateUserApc
 * 00000001406B0DDC: cli
 * 00000001406B0DDD: mov     ecx, 0
 * 00000001406B0DE2: mov     cr8, rcx
 * 00000001406B0DE6: jmp     short loc_1406B0DBB
 * 00000001406B0DE8: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B0DED: test    eax, eax
 * 00000001406B0DEF: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B0DF3: jnz     short loc_1406B0DBB
 * 00000001406B0DF5: test    byte ptr gs:860h, 2
 * 00000001406B0DFE: jz      short loc_1406B0E07
 * 00000001406B0E00: xor     ecx, ecx
 * 00000001406B0E02: call    KiUpdateStibpPairing
 * 00000001406B0E07: mov     rcx, gs:188h
 * 00000001406B0E10: test    dword ptr [rcx], 8000000h
 * 00000001406B0E16: jz      short loc_1406B0E1D
 * 00000001406B0E18: call    KiRestoreSetContextState
 * 00000001406B0E1D: mov     rcx, gs:188h
 * 00000001406B0E26: test    dword ptr [rcx], 10000h
 * 00000001406B0E2C: jz      short loc_1406B0E42
 * 00000001406B0E2E: test    byte ptr [rcx+2], 1
 * 00000001406B0E32: jz      short loc_1406B0E42
 * 00000001406B0E34: call    KiCopyCounters
 * 00000001406B0E39: mov     rcx, gs:188h
 * 00000001406B0E42: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B0E46: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B0E4E: jz      short loc_1406B0E55
 * 00000001406B0E50: call    KiRestoreDebugRegisterState
 * 00000001406B0E55: mov     rcx, gs:188h
 * 00000001406B0E5E: bt      dword ptr [rcx+74h], 16h
 * 00000001406B0E63: jnb     short loc_1406B0E8F
 * 00000001406B0E65: xor     ecx, ecx
 * 00000001406B0E67: rdsspq  rcx
 * 00000001406B0E6C: mov     r8, gs:9D28h
 * 00000001406B0E75: add     r8, 8
 * 00000001406B0E79: cmp     rcx, r8
 * 00000001406B0E7C: jnz     short loc_1406B0E8F
 * 00000001406B0E7E: mov     rcx, gs:9D20h
 * 00000001406B0E87: rstorssp qword ptr [rcx]
 * 00000001406B0E8B: saveprevssp
 * 00000001406B0E8F: mov     byte ptr gs:85Eh, 0
 * 00000001406B0E98: movzx   eax, word ptr gs:86Ch
 * 00000001406B0EA1: cmp     gs:866h, ax
 * 00000001406B0EAA: jz      short loc_1406B0EBE
 * 00000001406B0EAC: mov     gs:866h, ax
 * 00000001406B0EB5: mov     ecx, 48h ; 'H'
 * 00000001406B0EBA: xor     edx, edx
 * 00000001406B0EBC: wrmsr
 * 00000001406B0EBE: btr     word ptr gs:858h, 2
 * 00000001406B0EC9: jnb     short loc_1406B0ED9
 * 00000001406B0ECB: mov     eax, 1
 * 00000001406B0ED0: xor     edx, edx
 * 00000001406B0ED2: mov     ecx, 49h ; 'I'
 * 00000001406B0ED7: wrmsr
 * 00000001406B0ED9: btr     word ptr gs:858h, 5
 * 00000001406B0EE4: jnb     loc_1406B1021
 * 00000001406B0EEA: call    loc_1406B0FFD
 * 00000001406B0EEF: add     rsp, 8
 * 00000001406B0EF3: call    loc_1406B1006
 * 00000001406B0EF8: add     rsp, 8
 * 00000001406B0EFC: call    loc_1406B0EEF
 * 00000001406B0F01: add     rsp, 8
 * 00000001406B0F05: call    loc_1406B0EF8
 * 00000001406B0F0A: add     rsp, 8
 * 00000001406B0F0E: call    loc_1406B0F01
 * 00000001406B0F13: add     rsp, 8
 * 00000001406B0F17: call    loc_1406B0F0A
 * 00000001406B0F1C: add     rsp, 8
 * 00000001406B0F20: call    loc_1406B0F13
 * 00000001406B0F25: add     rsp, 8
 * 00000001406B0F29: call    loc_1406B0F1C
 * 00000001406B0F2E: add     rsp, 8
 * 00000001406B0F32: call    loc_1406B0F25
 * 00000001406B0F37: add     rsp, 8
 * 00000001406B0F3B: call    loc_1406B0F2E
 * 00000001406B0F40: add     rsp, 8
 * 00000001406B0F44: call    loc_1406B0F37
 * 00000001406B0F49: add     rsp, 8
 * 00000001406B0F4D: call    loc_1406B0F40
 * 00000001406B0F52: add     rsp, 8
 * 00000001406B0F56: call    loc_1406B0F49
 * 00000001406B0F5B: add     rsp, 8
 * 00000001406B0F5F: call    loc_1406B0F52
 * 00000001406B0F64: add     rsp, 8
 * 00000001406B0F68: call    loc_1406B0F5B
 * 00000001406B0F6D: add     rsp, 8
 * 00000001406B0F71: call    loc_1406B0F64
 * 00000001406B0F76: add     rsp, 8
 * 00000001406B0F7A: call    loc_1406B0F6D
 * 00000001406B0F7F: add     rsp, 8
 * 00000001406B0F83: call    loc_1406B0F76
 * 00000001406B0F88: add     rsp, 8
 * 00000001406B0F8C: call    loc_1406B0F7F
 * 00000001406B0F91: add     rsp, 8
 * 00000001406B0F95: call    loc_1406B0F88
 * 00000001406B0F9A: add     rsp, 8
 * 00000001406B0F9E: call    loc_1406B0F91
 * 00000001406B0FA3: add     rsp, 8
 * 00000001406B0FA7: call    loc_1406B0F9A
 * 00000001406B0FAC: add     rsp, 8
 * 00000001406B0FB0: call    loc_1406B0FA3
 * 00000001406B0FB5: add     rsp, 8
 * 00000001406B0FB9: call    loc_1406B0FAC
 * 00000001406B0FBE: add     rsp, 8
 * 00000001406B0FC2: call    loc_1406B0FB5
 * 00000001406B0FC7: add     rsp, 8
 * 00000001406B0FCB: call    loc_1406B0FBE
 * 00000001406B0FD0: add     rsp, 8
 * 00000001406B0FD4: call    loc_1406B0FC7
 * 00000001406B0FD9: add     rsp, 8
 * 00000001406B0FDD: call    loc_1406B0FD0
 * 00000001406B0FE2: add     rsp, 8
 * 00000001406B0FE6: call    loc_1406B0FD9
 * 00000001406B0FEB: add     rsp, 8
 * 00000001406B0FEF: call    loc_1406B0FE2
 * 00000001406B0FF4: add     rsp, 8
 * 00000001406B0FF8: call    loc_1406B0FEB
 * 00000001406B0FFD: add     rsp, 8
 * 00000001406B1001: call    loc_1406B0FF4
 * 00000001406B1006: add     rsp, 8
 * 00000001406B100A: mov     eax, 0DADAh
 * 00000001406B100F: test    byte ptr gs:85Ch, 8
 * 00000001406B1018: jz      short loc_1406B1021
 * 00000001406B101A: mov     al, 20h ; ' '
 * 00000001406B101C: incsspq rax
 * 00000001406B1021: test    word ptr gs:858h, 100h
 * 00000001406B102C: jz      short loc_1406B103A
 * 00000001406B102E: xor     eax, eax
 * 00000001406B1030: xor     edx, edx
 * 00000001406B1032: mov     ecx, 1
 * 00000001406B1037: div     rcx
 * 00000001406B103A: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B103E: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B1042: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B1046: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B104A: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B104E: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B1052: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B1056: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B105A: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B105E: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B1062: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B1066: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B106A: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B106E: mov     rsp, rbp
 * 00000001406B1071: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B1078: add     rsp, 0E8h
 * 00000001406B107F: test    cs:KiKvaShadow, 1
 * 00000001406B1086: jz      short loc_1406B108D
 * 00000001406B1088: jmp     KiKernelExit
 * 00000001406B108D: test    word ptr gs:858h, 200h
 * 00000001406B1098: jz      short loc_1406B109F
 * 00000001406B109A: verw    [rsp+arg_18]
 * 00000001406B109F: swapgs
 * 00000001406B10A2: iretq
 * 00000001406B10A4: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B10A8: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B10AC: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B10B0: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B10B4: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B10B8: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B10BC: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B10C0: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B10C4: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B10C8: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B10CC: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B10D0: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B10D4: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B10D8: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B10DC: mov     rsp, rbp
 * 00000001406B10DF: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B10E6: add     rsp, 0E8h
 * 00000001406B10ED: iretq
 * 00000001406B10EF: mov     r10, [rbp+0E8h]
 * 00000001406B10F6: mov     r9, gs:8D88h
 * 00000001406B10FF: movzx   r8, [rbp+0E8h+NewIrql]
 * 00000001406B1104: mov     ecx, 7Fh
 * 00000001406B1109: mov     edx, 20h ; ' '
 * 00000001406B110E: call    KiBugCheckDispatch
 */
