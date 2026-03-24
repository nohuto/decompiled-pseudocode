/*
 * XREFs of NtCallEnclave @ 0x1406A8BF0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x1406A8BF0 (NtCallEnclave.c)
 *     PsCallEnclave @ 0x140AC7FE0 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x1406A8BF0
 * Reason: Hex-Rays returned no pseudocode for 0x1406A8BF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A8BF0: sub     rsp, 28h
 * 00000001406A8BF4: xor     eax, eax
 * 00000001406A8BF6: xorps   xmm0, xmm0
 * 00000001406A8BF9: mov     [rbp-48h], eax
 * 00000001406A8BFC: mov     [rbp-40h], eax
 * 00000001406A8BFF: mov     [rbp-38h], eax
 * 00000001406A8C02: mov     [rbp-30h], eax
 * 00000001406A8C05: mov     [rbp-28h], eax
 * 00000001406A8C08: mov     [rbp-20h], eax
 * 00000001406A8C0B: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406A8C0F: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001406A8C13: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001406A8C17: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001406A8C1B: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001406A8C1F: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001406A8C23: call    PsCallEnclave
 * 00000001406A8C28: mov     [rbp-50h], rax
 * 00000001406A8C2C: mov     rbx, [rbp+0C0h]
 * 00000001406A8C33: mov     rdi, [rbp+0C8h]
 * 00000001406A8C3A: mov     rsi, [rbp+0D0h]
 * 00000001406A8C41: cli
 * 00000001406A8C42: xor     ecx, ecx
 * 00000001406A8C44: rdsspq  rcx
 * 00000001406A8C49: test    rcx, rcx
 * 00000001406A8C4C: jz      short loc_1406A8C58
 * 00000001406A8C4E: mov     ecx, 1
 * 00000001406A8C53: incsspq rcx
 * 00000001406A8C58: test    byte ptr [rbp+0F0h], 1
 * 00000001406A8C5F: jz      loc_1406A8F5A
 * 00000001406A8C65: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A8C6C: jz      short loc_1406A8C71
 * 00000001406A8C6E: stac
 * 00000001406A8C71: mov     rcx, gs:188h
 * 00000001406A8C7A: test    byte ptr [rcx+0C2h], 3
 * 00000001406A8C81: jz      short loc_1406A8C9E
 * 00000001406A8C83: mov     ecx, 1
 * 00000001406A8C88: mov     cr8, rcx
 * 00000001406A8C8C: sti
 * 00000001406A8C8D: call    KiInitiateUserApc
 * 00000001406A8C92: cli
 * 00000001406A8C93: mov     ecx, 0
 * 00000001406A8C98: mov     cr8, rcx
 * 00000001406A8C9C: jmp     short loc_1406A8C71
 * 00000001406A8C9E: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A8CA3: test    eax, eax
 * 00000001406A8CA5: mov     rax, [rbp-50h]
 * 00000001406A8CA9: jnz     short loc_1406A8C71
 * 00000001406A8CAB: test    byte ptr gs:860h, 2
 * 00000001406A8CB4: jz      short loc_1406A8CBD
 * 00000001406A8CB6: xor     ecx, ecx
 * 00000001406A8CB8: call    KiUpdateStibpPairing
 * 00000001406A8CBD: mov     rcx, gs:188h
 * 00000001406A8CC6: test    dword ptr [rcx], 8000000h
 * 00000001406A8CCC: jz      short loc_1406A8CD3
 * 00000001406A8CCE: call    KiRestoreSetContextState
 * 00000001406A8CD3: mov     rcx, gs:188h
 * 00000001406A8CDC: test    dword ptr [rcx], 10000h
 * 00000001406A8CE2: jz      short loc_1406A8CF8
 * 00000001406A8CE4: test    byte ptr [rcx+2], 1
 * 00000001406A8CE8: jz      short loc_1406A8CF8
 * 00000001406A8CEA: call    KiCopyCounters
 * 00000001406A8CEF: mov     rcx, gs:188h
 * 00000001406A8CF8: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A8CFC: cmp     word ptr [rbp+80h], 0
 * 00000001406A8D04: jz      short loc_1406A8D0B
 * 00000001406A8D06: call    KiRestoreDebugRegisterState
 * 00000001406A8D0B: mov     rcx, gs:188h
 * 00000001406A8D14: bt      dword ptr [rcx+74h], 16h
 * 00000001406A8D19: jnb     short loc_1406A8D45
 * 00000001406A8D1B: xor     ecx, ecx
 * 00000001406A8D1D: rdsspq  rcx
 * 00000001406A8D22: mov     r8, gs:9D28h
 * 00000001406A8D2B: add     r8, 8
 * 00000001406A8D2F: cmp     rcx, r8
 * 00000001406A8D32: jnz     short loc_1406A8D45
 * 00000001406A8D34: mov     rcx, gs:9D20h
 * 00000001406A8D3D: rstorssp qword ptr [rcx]
 * 00000001406A8D41: saveprevssp
 * 00000001406A8D45: mov     byte ptr gs:85Eh, 0
 * 00000001406A8D4E: movzx   eax, word ptr gs:86Ch
 * 00000001406A8D57: cmp     gs:866h, ax
 * 00000001406A8D60: jz      short loc_1406A8D74
 * 00000001406A8D62: mov     gs:866h, ax
 * 00000001406A8D6B: mov     ecx, 48h ; 'H'
 * 00000001406A8D70: xor     edx, edx
 * 00000001406A8D72: wrmsr
 * 00000001406A8D74: btr     word ptr gs:858h, 2
 * 00000001406A8D7F: jnb     short loc_1406A8D8F
 * 00000001406A8D81: mov     eax, 1
 * 00000001406A8D86: xor     edx, edx
 * 00000001406A8D88: mov     ecx, 49h ; 'I'
 * 00000001406A8D8D: wrmsr
 * 00000001406A8D8F: btr     word ptr gs:858h, 5
 * 00000001406A8D9A: jnb     loc_1406A8ED7
 * 00000001406A8DA0: call    loc_1406A8EB3
 * 00000001406A8DA5: add     rsp, 8
 * 00000001406A8DA9: call    loc_1406A8EBC
 * 00000001406A8DAE: add     rsp, 8
 * 00000001406A8DB2: call    loc_1406A8DA5
 * 00000001406A8DB7: add     rsp, 8
 * 00000001406A8DBB: call    loc_1406A8DAE
 * 00000001406A8DC0: add     rsp, 8
 * 00000001406A8DC4: call    loc_1406A8DB7
 * 00000001406A8DC9: add     rsp, 8
 * 00000001406A8DCD: call    loc_1406A8DC0
 * 00000001406A8DD2: add     rsp, 8
 * 00000001406A8DD6: call    loc_1406A8DC9
 * 00000001406A8DDB: add     rsp, 8
 * 00000001406A8DDF: call    loc_1406A8DD2
 * 00000001406A8DE4: add     rsp, 8
 * 00000001406A8DE8: call    loc_1406A8DDB
 * 00000001406A8DED: add     rsp, 8
 * 00000001406A8DF1: call    loc_1406A8DE4
 * 00000001406A8DF6: add     rsp, 8
 * 00000001406A8DFA: call    loc_1406A8DED
 * 00000001406A8DFF: add     rsp, 8
 * 00000001406A8E03: call    loc_1406A8DF6
 * 00000001406A8E08: add     rsp, 8
 * 00000001406A8E0C: call    loc_1406A8DFF
 * 00000001406A8E11: add     rsp, 8
 * 00000001406A8E15: call    loc_1406A8E08
 * 00000001406A8E1A: add     rsp, 8
 * 00000001406A8E1E: call    loc_1406A8E11
 * 00000001406A8E23: add     rsp, 8
 * 00000001406A8E27: call    loc_1406A8E1A
 * 00000001406A8E2C: add     rsp, 8
 * 00000001406A8E30: call    loc_1406A8E23
 * 00000001406A8E35: add     rsp, 8
 * 00000001406A8E39: call    loc_1406A8E2C
 * 00000001406A8E3E: add     rsp, 8
 * 00000001406A8E42: call    loc_1406A8E35
 * 00000001406A8E47: add     rsp, 8
 * 00000001406A8E4B: call    loc_1406A8E3E
 * 00000001406A8E50: add     rsp, 8
 * 00000001406A8E54: call    loc_1406A8E47
 * 00000001406A8E59: add     rsp, 8
 * 00000001406A8E5D: call    loc_1406A8E50
 * 00000001406A8E62: add     rsp, 8
 * 00000001406A8E66: call    loc_1406A8E59
 * 00000001406A8E6B: add     rsp, 8
 * 00000001406A8E6F: call    loc_1406A8E62
 * 00000001406A8E74: add     rsp, 8
 * 00000001406A8E78: call    loc_1406A8E6B
 * 00000001406A8E7D: add     rsp, 8
 * 00000001406A8E81: call    loc_1406A8E74
 * 00000001406A8E86: add     rsp, 8
 * 00000001406A8E8A: call    loc_1406A8E7D
 * 00000001406A8E8F: add     rsp, 8
 * 00000001406A8E93: call    loc_1406A8E86
 * 00000001406A8E98: add     rsp, 8
 * 00000001406A8E9C: call    loc_1406A8E8F
 * 00000001406A8EA1: add     rsp, 8
 * 00000001406A8EA5: call    loc_1406A8E98
 * 00000001406A8EAA: add     rsp, 8
 * 00000001406A8EAE: call    loc_1406A8EA1
 * 00000001406A8EB3: add     rsp, 8
 * 00000001406A8EB7: call    loc_1406A8EAA
 * 00000001406A8EBC: add     rsp, 8
 * 00000001406A8EC0: mov     eax, 0DADAh
 * 00000001406A8EC5: test    byte ptr gs:85Ch, 8
 * 00000001406A8ECE: jz      short loc_1406A8ED7
 * 00000001406A8ED0: mov     al, 20h ; ' '
 * 00000001406A8ED2: incsspq rax
 * 00000001406A8ED7: test    word ptr gs:858h, 100h
 * 00000001406A8EE2: jz      short loc_1406A8EF0
 * 00000001406A8EE4: xor     eax, eax
 * 00000001406A8EE6: xor     edx, edx
 * 00000001406A8EE8: mov     ecx, 1
 * 00000001406A8EED: div     rcx
 * 00000001406A8EF0: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A8EF4: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A8EF8: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A8EFC: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A8F00: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A8F04: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A8F08: mov     r11, [rbp-20h]
 * 00000001406A8F0C: mov     r10, [rbp-28h]
 * 00000001406A8F10: mov     r9, [rbp-30h]
 * 00000001406A8F14: mov     r8, [rbp-38h]
 * 00000001406A8F18: mov     rdx, [rbp-40h]
 * 00000001406A8F1C: mov     rcx, [rbp-48h]
 * 00000001406A8F20: mov     rax, [rbp-50h]
 * 00000001406A8F24: mov     rsp, rbp
 * 00000001406A8F27: mov     rbp, [rbp+0D8h]
 * 00000001406A8F2E: add     rsp, 0E8h
 * 00000001406A8F35: test    cs:KiKvaShadow, 1
 * 00000001406A8F3C: jz      short loc_1406A8F43
 * 00000001406A8F3E: jmp     KiKernelExit
 * 00000001406A8F43: test    word ptr gs:858h, 200h
 * 00000001406A8F4E: jz      short loc_1406A8F55
 * 00000001406A8F50: verw    [rsp-1E8h+arg_200]
 * 00000001406A8F55: swapgs
 * 00000001406A8F58: iretq
 * 00000001406A8F5A: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A8F5E: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A8F62: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A8F66: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A8F6A: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A8F6E: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A8F72: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A8F76: mov     r11, [rbp-20h]
 * 00000001406A8F7A: mov     r10, [rbp-28h]
 * 00000001406A8F7E: mov     r9, [rbp-30h]
 * 00000001406A8F82: mov     r8, [rbp-38h]
 * 00000001406A8F86: mov     rdx, [rbp-40h]
 * 00000001406A8F8A: mov     rcx, [rbp-48h]
 * 00000001406A8F8E: mov     rax, [rbp-50h]
 * 00000001406A8F92: mov     rsp, rbp
 * 00000001406A8F95: mov     rbp, [rbp+0D8h]
 * 00000001406A8F9C: add     rsp, 0E8h
 * 00000001406A8FA3: iretq
 */
