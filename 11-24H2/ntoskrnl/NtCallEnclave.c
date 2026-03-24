/*
 * XREFs of NtCallEnclave @ 0x1406B3EC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x1406B3EC0 (NtCallEnclave.c)
 *     PsCallEnclave @ 0x140AD1D10 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x1406B3EC0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B3EC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B3EC0: sub     rsp, 28h
 * 00000001406B3EC4: xor     eax, eax
 * 00000001406B3EC6: xorps   xmm0, xmm0
 * 00000001406B3EC9: mov     [rbp-48h], eax
 * 00000001406B3ECC: mov     [rbp-40h], eax
 * 00000001406B3ECF: mov     [rbp-38h], eax
 * 00000001406B3ED2: mov     [rbp-30h], eax
 * 00000001406B3ED5: mov     [rbp-28h], eax
 * 00000001406B3ED8: mov     [rbp-20h], eax
 * 00000001406B3EDB: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B3EDF: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001406B3EE3: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001406B3EE7: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001406B3EEB: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001406B3EEF: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001406B3EF3: call    PsCallEnclave
 * 00000001406B3EF8: mov     [rbp-50h], rax
 * 00000001406B3EFC: mov     rbx, [rbp+0C0h]
 * 00000001406B3F03: mov     rdi, [rbp+0C8h]
 * 00000001406B3F0A: mov     rsi, [rbp+0D0h]
 * 00000001406B3F11: cli
 * 00000001406B3F12: xor     ecx, ecx
 * 00000001406B3F14: rdsspq  rcx
 * 00000001406B3F19: test    rcx, rcx
 * 00000001406B3F1C: jz      short loc_1406B3F28
 * 00000001406B3F1E: mov     ecx, 1
 * 00000001406B3F23: incsspq rcx
 * 00000001406B3F28: test    byte ptr [rbp+0F0h], 1
 * 00000001406B3F2F: jz      loc_1406B422A
 * 00000001406B3F35: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B3F3C: jz      short loc_1406B3F41
 * 00000001406B3F3E: stac
 * 00000001406B3F41: mov     rcx, gs:188h
 * 00000001406B3F4A: test    byte ptr [rcx+0C2h], 3
 * 00000001406B3F51: jz      short loc_1406B3F6E
 * 00000001406B3F53: mov     ecx, 1
 * 00000001406B3F58: mov     cr8, rcx
 * 00000001406B3F5C: sti
 * 00000001406B3F5D: call    KiInitiateUserApc
 * 00000001406B3F62: cli
 * 00000001406B3F63: mov     ecx, 0
 * 00000001406B3F68: mov     cr8, rcx
 * 00000001406B3F6C: jmp     short loc_1406B3F41
 * 00000001406B3F6E: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B3F73: test    eax, eax
 * 00000001406B3F75: mov     rax, [rbp-50h]
 * 00000001406B3F79: jnz     short loc_1406B3F41
 * 00000001406B3F7B: test    byte ptr gs:860h, 2
 * 00000001406B3F84: jz      short loc_1406B3F8D
 * 00000001406B3F86: xor     ecx, ecx
 * 00000001406B3F88: call    KiUpdateStibpPairing
 * 00000001406B3F8D: mov     rcx, gs:188h
 * 00000001406B3F96: test    dword ptr [rcx], 8000000h
 * 00000001406B3F9C: jz      short loc_1406B3FA3
 * 00000001406B3F9E: call    KiRestoreSetContextState
 * 00000001406B3FA3: mov     rcx, gs:188h
 * 00000001406B3FAC: test    dword ptr [rcx], 10000h
 * 00000001406B3FB2: jz      short loc_1406B3FC8
 * 00000001406B3FB4: test    byte ptr [rcx+2], 1
 * 00000001406B3FB8: jz      short loc_1406B3FC8
 * 00000001406B3FBA: call    KiCopyCounters
 * 00000001406B3FBF: mov     rcx, gs:188h
 * 00000001406B3FC8: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B3FCC: cmp     word ptr [rbp+80h], 0
 * 00000001406B3FD4: jz      short loc_1406B3FDB
 * 00000001406B3FD6: call    KiRestoreDebugRegisterState
 * 00000001406B3FDB: mov     rcx, gs:188h
 * 00000001406B3FE4: bt      dword ptr [rcx+74h], 16h
 * 00000001406B3FE9: jnb     short loc_1406B4015
 * 00000001406B3FEB: xor     ecx, ecx
 * 00000001406B3FED: rdsspq  rcx
 * 00000001406B3FF2: mov     r8, gs:9D28h
 * 00000001406B3FFB: add     r8, 8
 * 00000001406B3FFF: cmp     rcx, r8
 * 00000001406B4002: jnz     short loc_1406B4015
 * 00000001406B4004: mov     rcx, gs:9D20h
 * 00000001406B400D: rstorssp qword ptr [rcx]
 * 00000001406B4011: saveprevssp
 * 00000001406B4015: mov     byte ptr gs:85Eh, 0
 * 00000001406B401E: movzx   eax, word ptr gs:86Ch
 * 00000001406B4027: cmp     gs:866h, ax
 * 00000001406B4030: jz      short loc_1406B4044
 * 00000001406B4032: mov     gs:866h, ax
 * 00000001406B403B: mov     ecx, 48h ; 'H'
 * 00000001406B4040: xor     edx, edx
 * 00000001406B4042: wrmsr
 * 00000001406B4044: btr     word ptr gs:858h, 2
 * 00000001406B404F: jnb     short loc_1406B405F
 * 00000001406B4051: mov     eax, 1
 * 00000001406B4056: xor     edx, edx
 * 00000001406B4058: mov     ecx, 49h ; 'I'
 * 00000001406B405D: wrmsr
 * 00000001406B405F: btr     word ptr gs:858h, 5
 * 00000001406B406A: jnb     loc_1406B41A7
 * 00000001406B4070: call    loc_1406B4183
 * 00000001406B4075: add     rsp, 8
 * 00000001406B4079: call    loc_1406B418C
 * 00000001406B407E: add     rsp, 8
 * 00000001406B4082: call    loc_1406B4075
 * 00000001406B4087: add     rsp, 8
 * 00000001406B408B: call    loc_1406B407E
 * 00000001406B4090: add     rsp, 8
 * 00000001406B4094: call    loc_1406B4087
 * 00000001406B4099: add     rsp, 8
 * 00000001406B409D: call    loc_1406B4090
 * 00000001406B40A2: add     rsp, 8
 * 00000001406B40A6: call    loc_1406B4099
 * 00000001406B40AB: add     rsp, 8
 * 00000001406B40AF: call    loc_1406B40A2
 * 00000001406B40B4: add     rsp, 8
 * 00000001406B40B8: call    loc_1406B40AB
 * 00000001406B40BD: add     rsp, 8
 * 00000001406B40C1: call    loc_1406B40B4
 * 00000001406B40C6: add     rsp, 8
 * 00000001406B40CA: call    loc_1406B40BD
 * 00000001406B40CF: add     rsp, 8
 * 00000001406B40D3: call    loc_1406B40C6
 * 00000001406B40D8: add     rsp, 8
 * 00000001406B40DC: call    loc_1406B40CF
 * 00000001406B40E1: add     rsp, 8
 * 00000001406B40E5: call    loc_1406B40D8
 * 00000001406B40EA: add     rsp, 8
 * 00000001406B40EE: call    loc_1406B40E1
 * 00000001406B40F3: add     rsp, 8
 * 00000001406B40F7: call    loc_1406B40EA
 * 00000001406B40FC: add     rsp, 8
 * 00000001406B4100: call    loc_1406B40F3
 * 00000001406B4105: add     rsp, 8
 * 00000001406B4109: call    loc_1406B40FC
 * 00000001406B410E: add     rsp, 8
 * 00000001406B4112: call    loc_1406B4105
 * 00000001406B4117: add     rsp, 8
 * 00000001406B411B: call    loc_1406B410E
 * 00000001406B4120: add     rsp, 8
 * 00000001406B4124: call    loc_1406B4117
 * 00000001406B4129: add     rsp, 8
 * 00000001406B412D: call    loc_1406B4120
 * 00000001406B4132: add     rsp, 8
 * 00000001406B4136: call    loc_1406B4129
 * 00000001406B413B: add     rsp, 8
 * 00000001406B413F: call    loc_1406B4132
 * 00000001406B4144: add     rsp, 8
 * 00000001406B4148: call    loc_1406B413B
 * 00000001406B414D: add     rsp, 8
 * 00000001406B4151: call    loc_1406B4144
 * 00000001406B4156: add     rsp, 8
 * 00000001406B415A: call    loc_1406B414D
 * 00000001406B415F: add     rsp, 8
 * 00000001406B4163: call    loc_1406B4156
 * 00000001406B4168: add     rsp, 8
 * 00000001406B416C: call    loc_1406B415F
 * 00000001406B4171: add     rsp, 8
 * 00000001406B4175: call    loc_1406B4168
 * 00000001406B417A: add     rsp, 8
 * 00000001406B417E: call    loc_1406B4171
 * 00000001406B4183: add     rsp, 8
 * 00000001406B4187: call    loc_1406B417A
 * 00000001406B418C: add     rsp, 8
 * 00000001406B4190: mov     eax, 0DADAh
 * 00000001406B4195: test    byte ptr gs:85Ch, 8
 * 00000001406B419E: jz      short loc_1406B41A7
 * 00000001406B41A0: mov     al, 20h ; ' '
 * 00000001406B41A2: incsspq rax
 * 00000001406B41A7: test    word ptr gs:858h, 100h
 * 00000001406B41B2: jz      short loc_1406B41C0
 * 00000001406B41B4: xor     eax, eax
 * 00000001406B41B6: xor     edx, edx
 * 00000001406B41B8: mov     ecx, 1
 * 00000001406B41BD: div     rcx
 * 00000001406B41C0: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B41C4: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B41C8: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B41CC: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B41D0: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B41D4: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B41D8: mov     r11, [rbp-20h]
 * 00000001406B41DC: mov     r10, [rbp-28h]
 * 00000001406B41E0: mov     r9, [rbp-30h]
 * 00000001406B41E4: mov     r8, [rbp-38h]
 * 00000001406B41E8: mov     rdx, [rbp-40h]
 * 00000001406B41EC: mov     rcx, [rbp-48h]
 * 00000001406B41F0: mov     rax, [rbp-50h]
 * 00000001406B41F4: mov     rsp, rbp
 * 00000001406B41F7: mov     rbp, [rbp+0D8h]
 * 00000001406B41FE: add     rsp, 0E8h
 * 00000001406B4205: test    cs:KiKvaShadow, 1
 * 00000001406B420C: jz      short loc_1406B4213
 * 00000001406B420E: jmp     KiKernelExit
 * 00000001406B4213: test    word ptr gs:858h, 200h
 * 00000001406B421E: jz      short loc_1406B4225
 * 00000001406B4220: verw    [rsp-1E8h+arg_200]
 * 00000001406B4225: swapgs
 * 00000001406B4228: iretq
 * 00000001406B422A: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B422E: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B4232: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B4236: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B423A: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B423E: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B4242: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B4246: mov     r11, [rbp-20h]
 * 00000001406B424A: mov     r10, [rbp-28h]
 * 00000001406B424E: mov     r9, [rbp-30h]
 * 00000001406B4252: mov     r8, [rbp-38h]
 * 00000001406B4256: mov     rdx, [rbp-40h]
 * 00000001406B425A: mov     rcx, [rbp-48h]
 * 00000001406B425E: mov     rax, [rbp-50h]
 * 00000001406B4262: mov     rsp, rbp
 * 00000001406B4265: mov     rbp, [rbp+0D8h]
 * 00000001406B426C: add     rsp, 0E8h
 * 00000001406B4273: iretq
 */
