/*
 * XREFs of KiRestoreSetContextState @ 0x1406ABF60
 * Callers:
 *     NtContinueEx @ 0x1406AB390 (NtContinueEx.c)
 *     NtRaiseException @ 0x1406AB820 (NtRaiseException.c)
 *     KxStartUserThread @ 0x1406AD110 (KxStartUserThread.c)
 *     KiChainedDispatch @ 0x1406AD740 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406ADDF0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406AE1D0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406AE5B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AE990 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406AED60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1406AF940 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406B00E0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406B1A10 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1406B1E00 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406B2A80 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406B31E0 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x1406B4E60 (NtCallEnclave.c)
 *     KiBoundFault @ 0x1406B8340 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1406B8A40 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1406BAA40 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x1406BC100 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1406BCC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x1406BD340 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1406BED40 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406C0140 (KiFastFailDispatch.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x1404F9380 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 */

/*
 * Hex-Rays decompilation failed for KiRestoreSetContextState @ 0x1406ABF60
 * Reason: Hex-Rays returned no pseudocode for 0x1406ABF60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406ABF60: sub     rsp, 138h
 * 00000001406ABF67: lea     rax, [rsp+138h+var_38]
 * 00000001406ABF6F: movaps  [rsp+138h+var_108], xmm6
 * 00000001406ABF74: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406ABF79: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406ABF7F: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406ABF85: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406ABF8B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406ABF90: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406ABF95: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406ABF9A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406ABF9F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406ABFA4: mov     [rax], rbx
 * 00000001406ABFA7: mov     [rax+8], rdi
 * 00000001406ABFAB: mov     [rax+10h], rsi
 * 00000001406ABFAF: mov     [rax+18h], r12
 * 00000001406ABFB3: mov     [rax+20h], r13
 * 00000001406ABFB7: mov     [rax+28h], r14
 * 00000001406ABFBB: mov     [rax+30h], r15
 * 00000001406ABFBF: mov     ecx, 1
 * 00000001406ABFC4: mov     cr8, rcx
 * 00000001406ABFC8: sti
 * 00000001406ABFC9: mov     rcx, gs:188h
 * 00000001406ABFD2: mov     rcx, [rcx+6A8h]
 * 00000001406ABFD9: mov     [rsp+138h+var_118], 1
 * 00000001406ABFE2: mov     r9d, [rcx+30h]
 * 00000001406ABFE6: mov     r8, rcx
 * 00000001406ABFE9: mov     rdx, rsp
 * 00000001406ABFEC: lea     rcx, [rbp-80h]
 * 00000001406ABFF0: call    KeContextToKframes
 * 00000001406ABFF5: cli
 * 00000001406ABFF6: mov     ecx, 0
 * 00000001406ABFFB: mov     cr8, rcx
 * 00000001406ABFFF: mov     rcx, gs:188h
 * 00000001406AC008: lock btr dword ptr [rcx], 1Bh
 * 00000001406AC00D: lea     rcx, [rsp+138h+var_38]
 * 00000001406AC015: movaps  xmm6, [rsp+138h+var_108]
 * 00000001406AC01A: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001406AC01F: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001406AC025: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001406AC02B: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001406AC031: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406AC036: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406AC03B: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406AC040: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406AC045: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406AC04A: mov     rbx, [rcx]
 * 00000001406AC04D: mov     rdi, [rcx+8]
 * 00000001406AC051: mov     rsi, [rcx+10h]
 * 00000001406AC055: mov     r12, [rcx+18h]
 * 00000001406AC059: mov     r13, [rcx+20h]
 * 00000001406AC05D: mov     r14, [rcx+28h]
 * 00000001406AC061: mov     r15, [rcx+30h]
 * 00000001406AC065: test    byte ptr gs:860h, 2
 * 00000001406AC06E: jz      short loc_1406AC077
 * 00000001406AC070: xor     ecx, ecx
 * 00000001406AC072: call    KiUpdateStibpPairing
 * 00000001406AC077: xor     ecx, ecx
 * 00000001406AC079: rdsspq  rcx
 * 00000001406AC07E: test    rcx, rcx
 * 00000001406AC081: jz      short loc_1406AC08D
 * 00000001406AC083: mov     ecx, 1
 * 00000001406AC088: incsspq rcx
 * 00000001406AC08D: test    byte ptr [rbp+0F0h], 1
 * 00000001406AC094: jz      loc_1406AC32D
 * 00000001406AC09A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AC0A1: jz      short loc_1406AC0A6
 * 00000001406AC0A3: stac
 * 00000001406AC0A6: mov     rcx, gs:188h
 * 00000001406AC0AF: test    dword ptr [rcx], 10000h
 * 00000001406AC0B5: jz      short loc_1406AC0CB
 * 00000001406AC0B7: test    byte ptr [rcx+2], 1
 * 00000001406AC0BB: jz      short loc_1406AC0CB
 * 00000001406AC0BD: call    KiCopyCounters
 * 00000001406AC0C2: mov     rcx, gs:188h
 * 00000001406AC0CB: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AC0CF: cmp     word ptr [rbp+80h], 0
 * 00000001406AC0D7: jz      short loc_1406AC0DE
 * 00000001406AC0D9: call    KiRestoreDebugRegisterState
 * 00000001406AC0DE: mov     rcx, gs:188h
 * 00000001406AC0E7: bt      dword ptr [rcx+74h], 16h
 * 00000001406AC0EC: jnb     short loc_1406AC118
 * 00000001406AC0EE: xor     ecx, ecx
 * 00000001406AC0F0: rdsspq  rcx
 * 00000001406AC0F5: mov     r8, gs:9D28h
 * 00000001406AC0FE: add     r8, 8
 * 00000001406AC102: cmp     rcx, r8
 * 00000001406AC105: jnz     short loc_1406AC118
 * 00000001406AC107: mov     rcx, gs:9D20h
 * 00000001406AC110: rstorssp qword ptr [rcx]
 * 00000001406AC114: saveprevssp
 * 00000001406AC118: mov     byte ptr gs:85Eh, 0
 * 00000001406AC121: movzx   eax, word ptr gs:86Ch
 * 00000001406AC12A: cmp     gs:866h, ax
 * 00000001406AC133: jz      short loc_1406AC147
 * 00000001406AC135: mov     gs:866h, ax
 * 00000001406AC13E: mov     ecx, 48h ; 'H'
 * 00000001406AC143: xor     edx, edx
 * 00000001406AC145: wrmsr
 * 00000001406AC147: btr     word ptr gs:858h, 2
 * 00000001406AC152: jnb     short loc_1406AC162
 * 00000001406AC154: mov     eax, 1
 * 00000001406AC159: xor     edx, edx
 * 00000001406AC15B: mov     ecx, 49h ; 'I'
 * 00000001406AC160: wrmsr
 * 00000001406AC162: btr     word ptr gs:858h, 5
 * 00000001406AC16D: jnb     loc_1406AC2AA
 * 00000001406AC173: call    loc_1406AC286
 * 00000001406AC178: add     rsp, 8
 * 00000001406AC17C: call    loc_1406AC28F
 * 00000001406AC181: add     rsp, 8
 * 00000001406AC185: call    loc_1406AC178
 * 00000001406AC18A: add     rsp, 8
 * 00000001406AC18E: call    loc_1406AC181
 * 00000001406AC193: add     rsp, 8
 * 00000001406AC197: call    loc_1406AC18A
 * 00000001406AC19C: add     rsp, 8
 * 00000001406AC1A0: call    loc_1406AC193
 * 00000001406AC1A5: add     rsp, 8
 * 00000001406AC1A9: call    loc_1406AC19C
 * 00000001406AC1AE: add     rsp, 8
 * 00000001406AC1B2: call    loc_1406AC1A5
 * 00000001406AC1B7: add     rsp, 8
 * 00000001406AC1BB: call    loc_1406AC1AE
 * 00000001406AC1C0: add     rsp, 8
 * 00000001406AC1C4: call    loc_1406AC1B7
 * 00000001406AC1C9: add     rsp, 8
 * 00000001406AC1CD: call    loc_1406AC1C0
 * 00000001406AC1D2: add     rsp, 8
 * 00000001406AC1D6: call    loc_1406AC1C9
 * 00000001406AC1DB: add     rsp, 8
 * 00000001406AC1DF: call    loc_1406AC1D2
 * 00000001406AC1E4: add     rsp, 8
 * 00000001406AC1E8: call    loc_1406AC1DB
 * 00000001406AC1ED: add     rsp, 8
 * 00000001406AC1F1: call    loc_1406AC1E4
 * 00000001406AC1F6: add     rsp, 8
 * 00000001406AC1FA: call    loc_1406AC1ED
 * 00000001406AC1FF: add     rsp, 8
 * 00000001406AC203: call    loc_1406AC1F6
 * 00000001406AC208: add     rsp, 8
 * 00000001406AC20C: call    loc_1406AC1FF
 * 00000001406AC211: add     rsp, 8
 * 00000001406AC215: call    loc_1406AC208
 * 00000001406AC21A: add     rsp, 8
 * 00000001406AC21E: call    loc_1406AC211
 * 00000001406AC223: add     rsp, 8
 * 00000001406AC227: call    loc_1406AC21A
 * 00000001406AC22C: add     rsp, 8
 * 00000001406AC230: call    loc_1406AC223
 * 00000001406AC235: add     rsp, 8
 * 00000001406AC239: call    loc_1406AC22C
 * 00000001406AC23E: add     rsp, 8
 * 00000001406AC242: call    loc_1406AC235
 * 00000001406AC247: add     rsp, 8
 * 00000001406AC24B: call    loc_1406AC23E
 * 00000001406AC250: add     rsp, 8
 * 00000001406AC254: call    loc_1406AC247
 * 00000001406AC259: add     rsp, 8
 * 00000001406AC25D: call    loc_1406AC250
 * 00000001406AC262: add     rsp, 8
 * 00000001406AC266: call    loc_1406AC259
 * 00000001406AC26B: add     rsp, 8
 * 00000001406AC26F: call    loc_1406AC262
 * 00000001406AC274: add     rsp, 8
 * 00000001406AC278: call    loc_1406AC26B
 * 00000001406AC27D: add     rsp, 8
 * 00000001406AC281: call    loc_1406AC274
 * 00000001406AC286: add     rsp, 8
 * 00000001406AC28A: call    loc_1406AC27D
 * 00000001406AC28F: add     rsp, 8
 * 00000001406AC293: mov     eax, 0DADAh
 * 00000001406AC298: test    byte ptr gs:85Ch, 8
 * 00000001406AC2A1: jz      short loc_1406AC2AA
 * 00000001406AC2A3: mov     al, 20h ; ' '
 * 00000001406AC2A5: incsspq rax
 * 00000001406AC2AA: test    word ptr gs:858h, 100h
 * 00000001406AC2B5: jz      short loc_1406AC2C3
 * 00000001406AC2B7: xor     eax, eax
 * 00000001406AC2B9: xor     edx, edx
 * 00000001406AC2BB: mov     ecx, 1
 * 00000001406AC2C0: div     rcx
 * 00000001406AC2C3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AC2C7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AC2CB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AC2CF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AC2D3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AC2D7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AC2DB: mov     r11, [rbp-20h]
 * 00000001406AC2DF: mov     r10, [rbp-28h]
 * 00000001406AC2E3: mov     r9, [rbp-30h]
 * 00000001406AC2E7: mov     r8, [rbp-38h]
 * 00000001406AC2EB: mov     rdx, [rbp-40h]
 * 00000001406AC2EF: mov     rcx, [rbp-48h]
 * 00000001406AC2F3: mov     rax, [rbp-50h]
 * 00000001406AC2F7: mov     rsp, rbp
 * 00000001406AC2FA: mov     rbp, [rbp+0D8h]
 * 00000001406AC301: add     rsp, 0E8h
 * 00000001406AC308: test    cs:KiKvaShadow, 1
 * 00000001406AC30F: jz      short loc_1406AC316
 * 00000001406AC311: jmp     KiKernelExit
 * 00000001406AC316: test    word ptr gs:858h, 200h
 * 00000001406AC321: jz      short loc_1406AC328
 * 00000001406AC323: verw    [rsp-1E8h+arg_200]
 * 00000001406AC328: swapgs
 * 00000001406AC32B: iretq
 * 00000001406AC32D: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AC331: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AC335: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AC339: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AC33D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AC341: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AC345: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AC349: mov     r11, [rbp-20h]
 * 00000001406AC34D: mov     r10, [rbp-28h]
 * 00000001406AC351: mov     r9, [rbp-30h]
 * 00000001406AC355: mov     r8, [rbp-38h]
 * 00000001406AC359: mov     rdx, [rbp-40h]
 * 00000001406AC35D: mov     rcx, [rbp-48h]
 * 00000001406AC361: mov     rax, [rbp-50h]
 * 00000001406AC365: mov     rsp, rbp
 * 00000001406AC368: mov     rbp, [rbp+0D8h]
 * 00000001406AC36F: add     rsp, 0E8h
 * 00000001406AC376: iretq
 * 00000001406AC378: retn
 */
