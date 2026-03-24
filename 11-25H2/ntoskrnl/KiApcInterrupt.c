/*
 * XREFs of KiApcInterrupt @ 0x1406A3E70
 * Callers:
 *     KiApcInterruptShadow @ 0x140BAAC40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     HalPerformEndOfInterrupt @ 0x14041A4A0 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1406A3E70 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x1406A3E70
 * Reason: Hex-Rays returned no pseudocode for 0x1406A3E70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A3E70: sub     rsp, 8
 * 00000001406A3E74: push    rbp
 * 00000001406A3E75: push    rsi
 * 00000001406A3E76: sub     rsp, 150h
 * 00000001406A3E7D: lea     rbp, [rsp+80h]
 * 00000001406A3E85: mov     [rbp+0E8h+var_13D], 0
 * 00000001406A3E89: mov     [rbp+0E8h+var_138], rax
 * 00000001406A3E8D: mov     [rbp+0E8h+var_130], rcx
 * 00000001406A3E91: mov     [rbp+0E8h+var_128], rdx
 * 00000001406A3E95: mov     [rbp+0E8h+var_120], r8
 * 00000001406A3E99: mov     [rbp+0E8h+var_118], r9
 * 00000001406A3E9D: mov     [rbp+0E8h+var_110], r10
 * 00000001406A3EA1: mov     [rbp+0E8h+var_108], r11
 * 00000001406A3EA5: test    [rbp+0E8h+arg_0], 1
 * 00000001406A3EAC: jnz     short loc_1406A3EE6
 * 00000001406A3EAE: xor     edx, edx
 * 00000001406A3EB0: rdsspq  rdx
 * 00000001406A3EB5: mov     [rbp+0E8h+var_90], rdx
 * 00000001406A3EB9: lfence
 * 00000001406A3EBC: test    byte ptr gs:858h, 1
 * 00000001406A3EC5: jnz     short loc_1406A3ECF
 * 00000001406A3EC7: lfence
 * 00000001406A3ECA: jmp     loc_1406A4157
 * 00000001406A3ECF: movzx   eax, word ptr gs:866h
 * 00000001406A3ED8: mov     ecx, 48h ; 'H'
 * 00000001406A3EDD: xor     edx, edx
 * 00000001406A3EDF: wrmsr
 * 00000001406A3EE1: jmp     loc_1406A4157
 * 00000001406A3EE6: test    cs:KiKvaShadow, 1
 * 00000001406A3EED: jnz     short loc_1406A3EF2
 * 00000001406A3EEF: swapgs
 * 00000001406A3EF2: lfence
 * 00000001406A3EF5: mov     rcx, gs:9D28h
 * 00000001406A3EFE: test    rcx, rcx
 * 00000001406A3F01: jz      short loc_1406A3F22
 * 00000001406A3F03: rdsspq  rdx
 * 00000001406A3F08: mov     r10, gs:9D20h
 * 00000001406A3F11: add     r10, 8
 * 00000001406A3F15: cmp     rdx, r10
 * 00000001406A3F18: jnz     short loc_1406A3F22
 * 00000001406A3F1A: rstorssp qword ptr [rcx]
 * 00000001406A3F1E: saveprevssp
 * 00000001406A3F22: mov     r10, gs:188h
 * 00000001406A3F2B: mov     rcx, gs:188h
 * 00000001406A3F34: mov     rcx, [rcx+220h]
 * 00000001406A3F3B: mov     rcx, [rcx+760h]
 * 00000001406A3F42: mov     gs:850h, rcx
 * 00000001406A3F4B: mov     cx, gs:862h
 * 00000001406A3F54: mov     gs:864h, cx
 * 00000001406A3F5D: mov     cl, gs:858h
 * 00000001406A3F65: mov     gs:85Ah, cl
 * 00000001406A3F6D: movzx   eax, word ptr gs:868h
 * 00000001406A3F76: cmp     gs:866h, ax
 * 00000001406A3F7F: jz      short loc_1406A3F93
 * 00000001406A3F81: mov     gs:866h, ax
 * 00000001406A3F8A: mov     ecx, 48h ; 'H'
 * 00000001406A3F8F: xor     edx, edx
 * 00000001406A3F91: wrmsr
 * 00000001406A3F93: movzx   edx, byte ptr gs:858h
 * 00000001406A3F9C: test    edx, 8
 * 00000001406A3FA2: jz      short loc_1406A3FBB
 * 00000001406A3FA4: mov     eax, 1
 * 00000001406A3FA9: xor     edx, edx
 * 00000001406A3FAB: mov     ecx, 49h ; 'I'
 * 00000001406A3FB0: wrmsr
 * 00000001406A3FB2: movzx   edx, byte ptr gs:858h
 * 00000001406A3FBB: test    edx, 2
 * 00000001406A3FC1: jz      loc_1406A40FE
 * 00000001406A3FC7: call    loc_1406A40DA
 * 00000001406A3FCC: add     rsp, 8
 * 00000001406A3FD0: call    loc_1406A40E3
 * 00000001406A3FD5: add     rsp, 8
 * 00000001406A3FD9: call    loc_1406A3FCC
 * 00000001406A3FDE: add     rsp, 8
 * 00000001406A3FE2: call    loc_1406A3FD5
 * 00000001406A3FE7: add     rsp, 8
 * 00000001406A3FEB: call    loc_1406A3FDE
 * 00000001406A3FF0: add     rsp, 8
 * 00000001406A3FF4: call    loc_1406A3FE7
 * 00000001406A3FF9: add     rsp, 8
 * 00000001406A3FFD: call    loc_1406A3FF0
 * 00000001406A4002: add     rsp, 8
 * 00000001406A4006: call    loc_1406A3FF9
 * 00000001406A400B: add     rsp, 8
 * 00000001406A400F: call    loc_1406A4002
 * 00000001406A4014: add     rsp, 8
 * 00000001406A4018: call    loc_1406A400B
 * 00000001406A401D: add     rsp, 8
 * 00000001406A4021: call    loc_1406A4014
 * 00000001406A4026: add     rsp, 8
 * 00000001406A402A: call    loc_1406A401D
 * 00000001406A402F: add     rsp, 8
 * 00000001406A4033: call    loc_1406A4026
 * 00000001406A4038: add     rsp, 8
 * 00000001406A403C: call    loc_1406A402F
 * 00000001406A4041: add     rsp, 8
 * 00000001406A4045: call    loc_1406A4038
 * 00000001406A404A: add     rsp, 8
 * 00000001406A404E: call    loc_1406A4041
 * 00000001406A4053: add     rsp, 8
 * 00000001406A4057: call    loc_1406A404A
 * 00000001406A405C: add     rsp, 8
 * 00000001406A4060: call    loc_1406A4053
 * 00000001406A4065: add     rsp, 8
 * 00000001406A4069: call    loc_1406A405C
 * 00000001406A406E: add     rsp, 8
 * 00000001406A4072: call    loc_1406A4065
 * 00000001406A4077: add     rsp, 8
 * 00000001406A407B: call    loc_1406A406E
 * 00000001406A4080: add     rsp, 8
 * 00000001406A4084: call    loc_1406A4077
 * 00000001406A4089: add     rsp, 8
 * 00000001406A408D: call    loc_1406A4080
 * 00000001406A4092: add     rsp, 8
 * 00000001406A4096: call    loc_1406A4089
 * 00000001406A409B: add     rsp, 8
 * 00000001406A409F: call    loc_1406A4092
 * 00000001406A40A4: add     rsp, 8
 * 00000001406A40A8: call    loc_1406A409B
 * 00000001406A40AD: add     rsp, 8
 * 00000001406A40B1: call    loc_1406A40A4
 * 00000001406A40B6: add     rsp, 8
 * 00000001406A40BA: call    loc_1406A40AD
 * 00000001406A40BF: add     rsp, 8
 * 00000001406A40C3: call    loc_1406A40B6
 * 00000001406A40C8: add     rsp, 8
 * 00000001406A40CC: call    loc_1406A40BF
 * 00000001406A40D1: add     rsp, 8
 * 00000001406A40D5: call    loc_1406A40C8
 * 00000001406A40DA: add     rsp, 8
 * 00000001406A40DE: call    loc_1406A40D1
 * 00000001406A40E3: add     rsp, 8
 * 00000001406A40E7: mov     eax, 0DADAh
 * 00000001406A40EC: test    byte ptr gs:85Ch, 8
 * 00000001406A40F5: jz      short loc_1406A40FE
 * 00000001406A40F7: mov     al, 20h ; ' '
 * 00000001406A40F9: incsspq rax
 * 00000001406A40FE: test    edx, 80h
 * 00000001406A4104: jz      short loc_1406A410E
 * 00000001406A4106: lfence
 * 00000001406A4109: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406A410E: lfence
 * 00000001406A4111: mov     byte ptr gs:85Eh, 0
 * 00000001406A411A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406A4121: jz      short loc_1406A4142
 * 00000001406A4123: mov     ecx, 6A7h
 * 00000001406A4128: rdmsr
 * 00000001406A412A: cmp     edx, 0
 * 00000001406A412D: jz      short loc_1406A4142
 * 00000001406A412F: mov     ecx, edx
 * 00000001406A4131: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406A4137: cmp     edx, ecx
 * 00000001406A4139: jz      short loc_1406A4142
 * 00000001406A413B: mov     ecx, 6A7h
 * 00000001406A4140: wrmsr
 * 00000001406A4142: test    byte ptr [r10+3], 3
 * 00000001406A4147: mov     [rbp+0E8h+var_68], 0
 * 00000001406A4150: jz      short loc_1406A4157
 * 00000001406A4152: call    KiSaveDebugRegisterState
 * 00000001406A4157: cld
 * 00000001406A4158: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406A415C: ldmxcsr dword ptr gs:180h
 * 00000001406A4165: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406A4169: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406A416D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406A4171: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406A4175: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406A4179: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406A417D: test    [rbp+0E8h+arg_0], 1
 * 00000001406A4184: jz      short loc_1406A418B
 * 00000001406A4186: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406A418B: xor     esi, esi
 * 00000001406A418D: inc     dword ptr gs:87C0h
 * 00000001406A4195: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A419C: jz      short loc_1406A41AA
 * 00000001406A419E: test    [rbp+0E8h+arg_0], 1
 * 00000001406A41A5: jz      short loc_1406A41AA
 * 00000001406A41A7: stac
 * 00000001406A41AA: test    cs:KiAmdTprLowerInterruptDelayDynamicWorkaround, 1
 * 00000001406A41B1: jz      short loc_1406A41D7
 * 00000001406A41B3: btr     dword ptr gs:228h, 1
 * 00000001406A41BD: cmp     dword ptr gs:228h, 0
 * 00000001406A41C6: jnz     short loc_1406A41D7
 * 00000001406A41C8: mov     ecx, 0C0010015h
 * 00000001406A41CD: rdmsr
 * 00000001406A41CF: btr     edx, 0
 * 00000001406A41D3: jnb     short loc_1406A41D7
 * 00000001406A41D5: wrmsr
 * 00000001406A41D7: mov     ecx, 1
 * 00000001406A41DC: cmp     cs:KiIrqlFlags, 0
 * 00000001406A41E3: jz      short loc_1406A41EC
 * 00000001406A41E5: call    KzSetIrqlUnsafe
 * 00000001406A41EA: jmp     short loc_1406A41F4
 * 00000001406A41EC: mov     rax, cr8
 * 00000001406A41F0: mov     cr8, rcx
 * 00000001406A41F4: mov     [rbp+0E8h+var_13F], al
 * 00000001406A41F7: mov     rcx, rsi
 * 00000001406A41FA: call    HalPerformEndOfInterrupt
 * 00000001406A41FF: sti
 * 00000001406A4200: cmp     byte ptr gs:187h, 0
 * 00000001406A4209: jnz     short loc_1406A421B
 * 00000001406A420B: mov     ecx, 0
 * 00000001406A4210: xor     edx, edx
 * 00000001406A4212: lea     r8, [rbp+0E8h+var_168]
 * 00000001406A4216: call    KiDeliverApc
 * 00000001406A421B: cli
 * 00000001406A421C: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001406A4220: cmp     cs:KiIrqlFlags, 0
 * 00000001406A4227: jz      short loc_1406A4230
 * 00000001406A4229: call    KzSetIrqlUnsafe
 * 00000001406A422E: jmp     short loc_1406A4234
 * 00000001406A4230: mov     cr8, rcx
 * 00000001406A4234: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406A423B: cli
 * 00000001406A423C: test    [rbp+0E8h+arg_0], 1
 * 00000001406A4243: jz      loc_1406A453E
 * 00000001406A4249: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A4250: jz      short loc_1406A4255
 * 00000001406A4252: stac
 * 00000001406A4255: mov     rcx, gs:188h
 * 00000001406A425E: test    byte ptr [rcx+0C2h], 3
 * 00000001406A4265: jz      short loc_1406A4282
 * 00000001406A4267: mov     ecx, 1
 * 00000001406A426C: mov     cr8, rcx
 * 00000001406A4270: sti
 * 00000001406A4271: call    KiInitiateUserApc
 * 00000001406A4276: cli
 * 00000001406A4277: mov     ecx, 0
 * 00000001406A427C: mov     cr8, rcx
 * 00000001406A4280: jmp     short loc_1406A4255
 * 00000001406A4282: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A4287: test    eax, eax
 * 00000001406A4289: mov     rax, [rbp+0E8h+var_138]
 * 00000001406A428D: jnz     short loc_1406A4255
 * 00000001406A428F: test    byte ptr gs:860h, 2
 * 00000001406A4298: jz      short loc_1406A42A1
 * 00000001406A429A: xor     ecx, ecx
 * 00000001406A429C: call    KiUpdateStibpPairing
 * 00000001406A42A1: mov     rcx, gs:188h
 * 00000001406A42AA: test    dword ptr [rcx], 8000000h
 * 00000001406A42B0: jz      short loc_1406A42B7
 * 00000001406A42B2: call    KiRestoreSetContextState
 * 00000001406A42B7: mov     rcx, gs:188h
 * 00000001406A42C0: test    dword ptr [rcx], 10000h
 * 00000001406A42C6: jz      short loc_1406A42DC
 * 00000001406A42C8: test    byte ptr [rcx+2], 1
 * 00000001406A42CC: jz      short loc_1406A42DC
 * 00000001406A42CE: call    KiCopyCounters
 * 00000001406A42D3: mov     rcx, gs:188h
 * 00000001406A42DC: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406A42E0: cmp     [rbp+0E8h+var_68], 0
 * 00000001406A42E8: jz      short loc_1406A42EF
 * 00000001406A42EA: call    KiRestoreDebugRegisterState
 * 00000001406A42EF: mov     rcx, gs:188h
 * 00000001406A42F8: bt      dword ptr [rcx+74h], 16h
 * 00000001406A42FD: jnb     short loc_1406A4329
 * 00000001406A42FF: xor     ecx, ecx
 * 00000001406A4301: rdsspq  rcx
 * 00000001406A4306: mov     r8, gs:9D28h
 * 00000001406A430F: add     r8, 8
 * 00000001406A4313: cmp     rcx, r8
 * 00000001406A4316: jnz     short loc_1406A4329
 * 00000001406A4318: mov     rcx, gs:9D20h
 * 00000001406A4321: rstorssp qword ptr [rcx]
 * 00000001406A4325: saveprevssp
 * 00000001406A4329: mov     byte ptr gs:85Eh, 0
 * 00000001406A4332: movzx   eax, word ptr gs:86Ch
 * 00000001406A433B: cmp     gs:866h, ax
 * 00000001406A4344: jz      short loc_1406A4358
 * 00000001406A4346: mov     gs:866h, ax
 * 00000001406A434F: mov     ecx, 48h ; 'H'
 * 00000001406A4354: xor     edx, edx
 * 00000001406A4356: wrmsr
 * 00000001406A4358: btr     word ptr gs:858h, 2
 * 00000001406A4363: jnb     short loc_1406A4373
 * 00000001406A4365: mov     eax, 1
 * 00000001406A436A: xor     edx, edx
 * 00000001406A436C: mov     ecx, 49h ; 'I'
 * 00000001406A4371: wrmsr
 * 00000001406A4373: btr     word ptr gs:858h, 5
 * 00000001406A437E: jnb     loc_1406A44BB
 * 00000001406A4384: call    loc_1406A4497
 * 00000001406A4389: add     rsp, 8
 * 00000001406A438D: call    loc_1406A44A0
 * 00000001406A4392: add     rsp, 8
 * 00000001406A4396: call    loc_1406A4389
 * 00000001406A439B: add     rsp, 8
 * 00000001406A439F: call    loc_1406A4392
 * 00000001406A43A4: add     rsp, 8
 * 00000001406A43A8: call    loc_1406A439B
 * 00000001406A43AD: add     rsp, 8
 * 00000001406A43B1: call    loc_1406A43A4
 * 00000001406A43B6: add     rsp, 8
 * 00000001406A43BA: call    loc_1406A43AD
 * 00000001406A43BF: add     rsp, 8
 * 00000001406A43C3: call    loc_1406A43B6
 * 00000001406A43C8: add     rsp, 8
 * 00000001406A43CC: call    loc_1406A43BF
 * 00000001406A43D1: add     rsp, 8
 * 00000001406A43D5: call    loc_1406A43C8
 * 00000001406A43DA: add     rsp, 8
 * 00000001406A43DE: call    loc_1406A43D1
 * 00000001406A43E3: add     rsp, 8
 * 00000001406A43E7: call    loc_1406A43DA
 * 00000001406A43EC: add     rsp, 8
 * 00000001406A43F0: call    loc_1406A43E3
 * 00000001406A43F5: add     rsp, 8
 * 00000001406A43F9: call    loc_1406A43EC
 * 00000001406A43FE: add     rsp, 8
 * 00000001406A4402: call    loc_1406A43F5
 * 00000001406A4407: add     rsp, 8
 * 00000001406A440B: call    loc_1406A43FE
 * 00000001406A4410: add     rsp, 8
 * 00000001406A4414: call    loc_1406A4407
 * 00000001406A4419: add     rsp, 8
 * 00000001406A441D: call    loc_1406A4410
 * 00000001406A4422: add     rsp, 8
 * 00000001406A4426: call    loc_1406A4419
 * 00000001406A442B: add     rsp, 8
 * 00000001406A442F: call    loc_1406A4422
 * 00000001406A4434: add     rsp, 8
 * 00000001406A4438: call    loc_1406A442B
 * 00000001406A443D: add     rsp, 8
 * 00000001406A4441: call    loc_1406A4434
 * 00000001406A4446: add     rsp, 8
 * 00000001406A444A: call    loc_1406A443D
 * 00000001406A444F: add     rsp, 8
 * 00000001406A4453: call    loc_1406A4446
 * 00000001406A4458: add     rsp, 8
 * 00000001406A445C: call    loc_1406A444F
 * 00000001406A4461: add     rsp, 8
 * 00000001406A4465: call    loc_1406A4458
 * 00000001406A446A: add     rsp, 8
 * 00000001406A446E: call    loc_1406A4461
 * 00000001406A4473: add     rsp, 8
 * 00000001406A4477: call    loc_1406A446A
 * 00000001406A447C: add     rsp, 8
 * 00000001406A4480: call    loc_1406A4473
 * 00000001406A4485: add     rsp, 8
 * 00000001406A4489: call    loc_1406A447C
 * 00000001406A448E: add     rsp, 8
 * 00000001406A4492: call    loc_1406A4485
 * 00000001406A4497: add     rsp, 8
 * 00000001406A449B: call    loc_1406A448E
 * 00000001406A44A0: add     rsp, 8
 * 00000001406A44A4: mov     eax, 0DADAh
 * 00000001406A44A9: test    byte ptr gs:85Ch, 8
 * 00000001406A44B2: jz      short loc_1406A44BB
 * 00000001406A44B4: mov     al, 20h ; ' '
 * 00000001406A44B6: incsspq rax
 * 00000001406A44BB: test    word ptr gs:858h, 100h
 * 00000001406A44C6: jz      short loc_1406A44D4
 * 00000001406A44C8: xor     eax, eax
 * 00000001406A44CA: xor     edx, edx
 * 00000001406A44CC: mov     ecx, 1
 * 00000001406A44D1: div     rcx
 * 00000001406A44D4: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406A44D8: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406A44DC: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406A44E0: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406A44E4: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406A44E8: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406A44EC: mov     r11, [rbp+0E8h+var_108]
 * 00000001406A44F0: mov     r10, [rbp+0E8h+var_110]
 * 00000001406A44F4: mov     r9, [rbp+0E8h+var_118]
 * 00000001406A44F8: mov     r8, [rbp+0E8h+var_120]
 * 00000001406A44FC: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406A4500: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406A4504: mov     rax, [rbp+0E8h+var_138]
 * 00000001406A4508: mov     rsp, rbp
 * 00000001406A450B: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406A4512: add     rsp, 0E8h
 * 00000001406A4519: test    cs:KiKvaShadow, 1
 * 00000001406A4520: jz      short loc_1406A4527
 * 00000001406A4522: jmp     KiKernelExit
 * 00000001406A4527: test    word ptr gs:858h, 200h
 * 00000001406A4532: jz      short loc_1406A4539
 * 00000001406A4534: verw    [rsp+arg_18]
 * 00000001406A4539: swapgs
 * 00000001406A453C: iretq
 * 00000001406A453E: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406A4542: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406A4546: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406A454A: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406A454E: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406A4552: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406A4556: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406A455A: mov     r11, [rbp+0E8h+var_108]
 * 00000001406A455E: mov     r10, [rbp+0E8h+var_110]
 * 00000001406A4562: mov     r9, [rbp+0E8h+var_118]
 * 00000001406A4566: mov     r8, [rbp+0E8h+var_120]
 * 00000001406A456A: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406A456E: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406A4572: mov     rax, [rbp+0E8h+var_138]
 * 00000001406A4576: mov     rsp, rbp
 * 00000001406A4579: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406A4580: add     rsp, 0E8h
 * 00000001406A4587: iretq
 */
