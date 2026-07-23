/*
 * XREFs of KiFastFailDispatch @ 0x1406B3F40
 * Callers:
 *     KiBoundFault @ 0x1406AC140 (KiBoundFault.c)
 *     KiControlProtectionFault @ 0x1406B1140 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1406B18C0 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x1406B3980 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x1406B3F40 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiFastFailDispatch @ 0x1406B3F40
 * Reason: Hex-Rays returned no pseudocode for 0x1406B3F40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B3F40: sub     rsp, 1D8h
 * 00000001406B3F47: lea     rax, [rsp+1D8h+var_D8]
 * 00000001406B3F4F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 00000001406B3F54: movaps  [rsp+1D8h+var_198], xmm7
 * 00000001406B3F59: movaps  [rsp+1D8h+var_188], xmm8
 * 00000001406B3F5F: movaps  [rsp+1D8h+var_178], xmm9
 * 00000001406B3F65: movaps  [rsp+1D8h+var_168], xmm10
 * 00000001406B3F6B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406B3F70: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406B3F75: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406B3F7A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406B3F7F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406B3F84: mov     [rax], rbx
 * 00000001406B3F87: mov     [rax+8], rdi
 * 00000001406B3F8B: mov     [rax+10h], rsi
 * 00000001406B3F8F: mov     [rax+18h], r12
 * 00000001406B3F93: mov     [rax+20h], r13
 * 00000001406B3F97: mov     [rax+28h], r14
 * 00000001406B3F9B: mov     [rax+30h], r15
 * 00000001406B3F9F: lea     rax, [rsp+1D8h+ExceptionRecord]
 * 00000001406B3FA7: mov     [rax], ecx
 * 00000001406B3FA9: xor     ecx, ecx
 * 00000001406B3FAB: mov     dword ptr [rax+4], 1
 * 00000001406B3FB2: mov     [rax+8], rcx
 * 00000001406B3FB6: mov     [rax+10h], r8
 * 00000001406B3FBA: mov     [rax+18h], edx
 * 00000001406B3FBD: mov     [rax+20h], r9
 * 00000001406B3FC1: mov     [rax+28h], r10
 * 00000001406B3FC5: mov     [rax+30h], r11
 * 00000001406B3FC9: mov     r9b, [rbp+0F0h]
 * 00000001406B3FD0: and     r9b, 1
 * 00000001406B3FD4: cmp     r9b, 0
 * 00000001406B3FD8: jnz     short loc_1406B3FF2
 * 00000001406B3FDA: mov     rdx, [rax+20h]
 * 00000001406B3FDE: xor     r10, r10
 * 00000001406B3FE1: mov     r9, rax
 * 00000001406B3FE4: lea     r8, [rbp-80h]
 * 00000001406B3FE8: mov     ecx, 139h
 * 00000001406B3FED: call    KiBugCheckDispatch
 * 00000001406B3FF2: mov     [rsp+1D8h+var_1B8], 0; char
 * 00000001406B3FF7: lea     r8, [rbp-80h]
 * 00000001406B3FFB: mov     rdx, rsp
 * 00000001406B3FFE: mov     rcx, rax; ExceptionRecord
 * 00000001406B4001: call    KiDispatchException
 * 00000001406B4006: lea     rcx, [rsp+1D8h+var_D8]
 * 00000001406B400E: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 00000001406B4013: movaps  xmm7, [rsp+1D8h+var_198]
 * 00000001406B4018: movaps  xmm8, [rsp+1D8h+var_188]
 * 00000001406B401E: movaps  xmm9, [rsp+1D8h+var_178]
 * 00000001406B4024: movaps  xmm10, [rsp+1D8h+var_168]
 * 00000001406B402A: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406B402F: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406B4034: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406B4039: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406B403E: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406B4043: mov     rbx, [rcx]
 * 00000001406B4046: mov     rdi, [rcx+8]
 * 00000001406B404A: mov     rsi, [rcx+10h]
 * 00000001406B404E: mov     r12, [rcx+18h]
 * 00000001406B4052: mov     r13, [rcx+20h]
 * 00000001406B4056: mov     r14, [rcx+28h]
 * 00000001406B405A: mov     r15, [rcx+30h]
 * 00000001406B405E: cli
 * 00000001406B405F: xor     ecx, ecx
 * 00000001406B4061: rdsspq  rcx
 * 00000001406B4066: test    rcx, rcx
 * 00000001406B4069: jz      short loc_1406B4075
 * 00000001406B406B: mov     ecx, 1
 * 00000001406B4070: incsspq rcx
 * 00000001406B4075: test    byte ptr [rbp+0F0h], 1
 * 00000001406B407C: jz      loc_1406B4377
 * 00000001406B4082: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B4089: jz      short loc_1406B408E
 * 00000001406B408B: stac
 * 00000001406B408E: mov     rcx, gs:188h
 * 00000001406B4097: test    byte ptr [rcx+0C2h], 3
 * 00000001406B409E: jz      short loc_1406B40BB
 * 00000001406B40A0: mov     ecx, 1
 * 00000001406B40A5: mov     cr8, rcx
 * 00000001406B40A9: sti
 * 00000001406B40AA: call    KiInitiateUserApc
 * 00000001406B40AF: cli
 * 00000001406B40B0: mov     ecx, 0
 * 00000001406B40B5: mov     cr8, rcx
 * 00000001406B40B9: jmp     short loc_1406B408E
 * 00000001406B40BB: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B40C0: test    eax, eax
 * 00000001406B40C2: mov     rax, [rbp-50h]
 * 00000001406B40C6: jnz     short loc_1406B408E
 * 00000001406B40C8: test    byte ptr gs:860h, 2
 * 00000001406B40D1: jz      short loc_1406B40DA
 * 00000001406B40D3: xor     ecx, ecx
 * 00000001406B40D5: call    KiUpdateStibpPairing
 * 00000001406B40DA: mov     rcx, gs:188h
 * 00000001406B40E3: test    dword ptr [rcx], 8000000h
 * 00000001406B40E9: jz      short loc_1406B40F0
 * 00000001406B40EB: call    KiRestoreSetContextState
 * 00000001406B40F0: mov     rcx, gs:188h
 * 00000001406B40F9: test    dword ptr [rcx], 10000h
 * 00000001406B40FF: jz      short loc_1406B4115
 * 00000001406B4101: test    byte ptr [rcx+2], 1
 * 00000001406B4105: jz      short loc_1406B4115
 * 00000001406B4107: call    KiCopyCounters
 * 00000001406B410C: mov     rcx, gs:188h
 * 00000001406B4115: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B4119: cmp     word ptr [rbp+80h], 0
 * 00000001406B4121: jz      short loc_1406B4128
 * 00000001406B4123: call    KiRestoreDebugRegisterState
 * 00000001406B4128: mov     rcx, gs:188h
 * 00000001406B4131: bt      dword ptr [rcx+74h], 16h
 * 00000001406B4136: jnb     short loc_1406B4162
 * 00000001406B4138: xor     ecx, ecx
 * 00000001406B413A: rdsspq  rcx
 * 00000001406B413F: mov     r8, gs:9D28h
 * 00000001406B4148: add     r8, 8
 * 00000001406B414C: cmp     rcx, r8
 * 00000001406B414F: jnz     short loc_1406B4162
 * 00000001406B4151: mov     rcx, gs:9D20h
 * 00000001406B415A: rstorssp qword ptr [rcx]
 * 00000001406B415E: saveprevssp
 * 00000001406B4162: mov     byte ptr gs:85Eh, 0
 * 00000001406B416B: movzx   eax, word ptr gs:86Ch
 * 00000001406B4174: cmp     gs:866h, ax
 * 00000001406B417D: jz      short loc_1406B4191
 * 00000001406B417F: mov     gs:866h, ax
 * 00000001406B4188: mov     ecx, 48h ; 'H'
 * 00000001406B418D: xor     edx, edx
 * 00000001406B418F: wrmsr
 * 00000001406B4191: btr     word ptr gs:858h, 2
 * 00000001406B419C: jnb     short loc_1406B41AC
 * 00000001406B419E: mov     eax, 1
 * 00000001406B41A3: xor     edx, edx
 * 00000001406B41A5: mov     ecx, 49h ; 'I'
 * 00000001406B41AA: wrmsr
 * 00000001406B41AC: btr     word ptr gs:858h, 5
 * 00000001406B41B7: jnb     loc_1406B42F4
 * 00000001406B41BD: call    loc_1406B42D0
 * 00000001406B41C2: add     rsp, 8
 * 00000001406B41C6: call    loc_1406B42D9
 * 00000001406B41CB: add     rsp, 8
 * 00000001406B41CF: call    loc_1406B41C2
 * 00000001406B41D4: add     rsp, 8
 * 00000001406B41D8: call    loc_1406B41CB
 * 00000001406B41DD: add     rsp, 8
 * 00000001406B41E1: call    loc_1406B41D4
 * 00000001406B41E6: add     rsp, 8
 * 00000001406B41EA: call    loc_1406B41DD
 * 00000001406B41EF: add     rsp, 8
 * 00000001406B41F3: call    loc_1406B41E6
 * 00000001406B41F8: add     rsp, 8
 * 00000001406B41FC: call    loc_1406B41EF
 * 00000001406B4201: add     rsp, 8
 * 00000001406B4205: call    loc_1406B41F8
 * 00000001406B420A: add     rsp, 8
 * 00000001406B420E: call    loc_1406B4201
 * 00000001406B4213: add     rsp, 8
 * 00000001406B4217: call    loc_1406B420A
 * 00000001406B421C: add     rsp, 8
 * 00000001406B4220: call    loc_1406B4213
 * 00000001406B4225: add     rsp, 8
 * 00000001406B4229: call    loc_1406B421C
 * 00000001406B422E: add     rsp, 8
 * 00000001406B4232: call    loc_1406B4225
 * 00000001406B4237: add     rsp, 8
 * 00000001406B423B: call    loc_1406B422E
 * 00000001406B4240: add     rsp, 8
 * 00000001406B4244: call    loc_1406B4237
 * 00000001406B4249: add     rsp, 8
 * 00000001406B424D: call    loc_1406B4240
 * 00000001406B4252: add     rsp, 8
 * 00000001406B4256: call    loc_1406B4249
 * 00000001406B425B: add     rsp, 8
 * 00000001406B425F: call    loc_1406B4252
 * 00000001406B4264: add     rsp, 8
 * 00000001406B4268: call    loc_1406B425B
 * 00000001406B426D: add     rsp, 8
 * 00000001406B4271: call    loc_1406B4264
 * 00000001406B4276: add     rsp, 8
 * 00000001406B427A: call    loc_1406B426D
 * 00000001406B427F: add     rsp, 8
 * 00000001406B4283: call    loc_1406B4276
 * 00000001406B4288: add     rsp, 8
 * 00000001406B428C: call    loc_1406B427F
 * 00000001406B4291: add     rsp, 8
 * 00000001406B4295: call    loc_1406B4288
 * 00000001406B429A: add     rsp, 8
 * 00000001406B429E: call    loc_1406B4291
 * 00000001406B42A3: add     rsp, 8
 * 00000001406B42A7: call    loc_1406B429A
 * 00000001406B42AC: add     rsp, 8
 * 00000001406B42B0: call    loc_1406B42A3
 * 00000001406B42B5: add     rsp, 8
 * 00000001406B42B9: call    loc_1406B42AC
 * 00000001406B42BE: add     rsp, 8
 * 00000001406B42C2: call    loc_1406B42B5
 * 00000001406B42C7: add     rsp, 8
 * 00000001406B42CB: call    loc_1406B42BE
 * 00000001406B42D0: add     rsp, 8
 * 00000001406B42D4: call    loc_1406B42C7
 * 00000001406B42D9: add     rsp, 8
 * 00000001406B42DD: mov     eax, 0DADAh
 * 00000001406B42E2: test    byte ptr gs:85Ch, 8
 * 00000001406B42EB: jz      short loc_1406B42F4
 * 00000001406B42ED: mov     al, 20h ; ' '
 * 00000001406B42EF: incsspq rax
 * 00000001406B42F4: test    word ptr gs:858h, 100h
 * 00000001406B42FF: jz      short loc_1406B430D
 * 00000001406B4301: xor     eax, eax
 * 00000001406B4303: xor     edx, edx
 * 00000001406B4305: mov     ecx, 1
 * 00000001406B430A: div     rcx
 * 00000001406B430D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B4311: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B4315: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B4319: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B431D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B4321: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B4325: mov     r11, [rbp-20h]
 * 00000001406B4329: mov     r10, [rbp-28h]
 * 00000001406B432D: mov     r9, [rbp-30h]
 * 00000001406B4331: mov     r8, [rbp-38h]
 * 00000001406B4335: mov     rdx, [rbp-40h]
 * 00000001406B4339: mov     rcx, [rbp-48h]
 * 00000001406B433D: mov     rax, [rbp-50h]
 * 00000001406B4341: mov     rsp, rbp
 * 00000001406B4344: mov     rbp, [rbp+0D8h]
 * 00000001406B434B: add     rsp, 0E8h
 * 00000001406B4352: test    cs:KiKvaShadow, 1
 * 00000001406B4359: jz      short loc_1406B4360
 * 00000001406B435B: jmp     KiKernelExit
 * 00000001406B4360: test    word ptr gs:858h, 200h
 * 00000001406B436B: jz      short loc_1406B4372
 * 00000001406B436D: verw    [rsp-1E8h+arg_200]
 * 00000001406B4372: swapgs
 * 00000001406B4375: iretq
 * 00000001406B4377: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B437B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B437F: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B4383: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B4387: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B438B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B438F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B4393: mov     r11, [rbp-20h]
 * 00000001406B4397: mov     r10, [rbp-28h]
 * 00000001406B439B: mov     r9, [rbp-30h]
 * 00000001406B439F: mov     r8, [rbp-38h]
 * 00000001406B43A3: mov     rdx, [rbp-40h]
 * 00000001406B43A7: mov     rcx, [rbp-48h]
 * 00000001406B43AB: mov     rax, [rbp-50h]
 * 00000001406B43AF: mov     rsp, rbp
 * 00000001406B43B2: mov     rbp, [rbp+0D8h]
 * 00000001406B43B9: add     rsp, 0E8h
 * 00000001406B43C0: iretq
 */
