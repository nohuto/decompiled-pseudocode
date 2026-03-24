/*
 * XREFs of KiFastFailDispatch @ 0x1406BF240
 * Callers:
 *     KiBoundFault @ 0x1406B7440 (KiBoundFault.c)
 *     KiControlProtectionFault @ 0x1406BC440 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x1406BCBC0 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x1406BEC80 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x1406BF240 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiFastFailDispatch @ 0x1406BF240
 * Reason: Hex-Rays returned no pseudocode for 0x1406BF240
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BF240: sub     rsp, 1D8h
 * 00000001406BF247: lea     rax, [rsp+1D8h+var_D8]
 * 00000001406BF24F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 00000001406BF254: movaps  [rsp+1D8h+var_198], xmm7
 * 00000001406BF259: movaps  [rsp+1D8h+var_188], xmm8
 * 00000001406BF25F: movaps  [rsp+1D8h+var_178], xmm9
 * 00000001406BF265: movaps  [rsp+1D8h+var_168], xmm10
 * 00000001406BF26B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406BF270: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406BF275: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406BF27A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406BF27F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406BF284: mov     [rax], rbx
 * 00000001406BF287: mov     [rax+8], rdi
 * 00000001406BF28B: mov     [rax+10h], rsi
 * 00000001406BF28F: mov     [rax+18h], r12
 * 00000001406BF293: mov     [rax+20h], r13
 * 00000001406BF297: mov     [rax+28h], r14
 * 00000001406BF29B: mov     [rax+30h], r15
 * 00000001406BF29F: lea     rax, [rsp+1D8h+var_A0]
 * 00000001406BF2A7: mov     [rax], ecx
 * 00000001406BF2A9: xor     ecx, ecx
 * 00000001406BF2AB: mov     dword ptr [rax+4], 1
 * 00000001406BF2B2: mov     [rax+8], rcx
 * 00000001406BF2B6: mov     [rax+10h], r8
 * 00000001406BF2BA: mov     [rax+18h], edx
 * 00000001406BF2BD: mov     [rax+20h], r9
 * 00000001406BF2C1: mov     [rax+28h], r10
 * 00000001406BF2C5: mov     [rax+30h], r11
 * 00000001406BF2C9: mov     r9b, [rbp+0F0h]
 * 00000001406BF2D0: and     r9b, 1
 * 00000001406BF2D4: cmp     r9b, 0
 * 00000001406BF2D8: jnz     short loc_1406BF2F2
 * 00000001406BF2DA: mov     rdx, [rax+20h]
 * 00000001406BF2DE: xor     r10, r10
 * 00000001406BF2E1: mov     r9, rax
 * 00000001406BF2E4: lea     r8, [rbp-80h]
 * 00000001406BF2E8: mov     ecx, 139h
 * 00000001406BF2ED: call    KiBugCheckDispatch
 * 00000001406BF2F2: mov     [rsp+1D8h+var_1B8], 0; char
 * 00000001406BF2F7: lea     r8, [rbp-80h]
 * 00000001406BF2FB: mov     rdx, rsp
 * 00000001406BF2FE: mov     rcx, rax; ULONG_PTR
 * 00000001406BF301: call    KiDispatchException
 * 00000001406BF306: lea     rcx, [rsp+1D8h+var_D8]
 * 00000001406BF30E: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 00000001406BF313: movaps  xmm7, [rsp+1D8h+var_198]
 * 00000001406BF318: movaps  xmm8, [rsp+1D8h+var_188]
 * 00000001406BF31E: movaps  xmm9, [rsp+1D8h+var_178]
 * 00000001406BF324: movaps  xmm10, [rsp+1D8h+var_168]
 * 00000001406BF32A: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406BF32F: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406BF334: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406BF339: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406BF33E: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406BF343: mov     rbx, [rcx]
 * 00000001406BF346: mov     rdi, [rcx+8]
 * 00000001406BF34A: mov     rsi, [rcx+10h]
 * 00000001406BF34E: mov     r12, [rcx+18h]
 * 00000001406BF352: mov     r13, [rcx+20h]
 * 00000001406BF356: mov     r14, [rcx+28h]
 * 00000001406BF35A: mov     r15, [rcx+30h]
 * 00000001406BF35E: cli
 * 00000001406BF35F: xor     ecx, ecx
 * 00000001406BF361: rdsspq  rcx
 * 00000001406BF366: test    rcx, rcx
 * 00000001406BF369: jz      short loc_1406BF375
 * 00000001406BF36B: mov     ecx, 1
 * 00000001406BF370: incsspq rcx
 * 00000001406BF375: test    byte ptr [rbp+0F0h], 1
 * 00000001406BF37C: jz      loc_1406BF677
 * 00000001406BF382: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BF389: jz      short loc_1406BF38E
 * 00000001406BF38B: stac
 * 00000001406BF38E: mov     rcx, gs:188h
 * 00000001406BF397: test    byte ptr [rcx+0C2h], 3
 * 00000001406BF39E: jz      short loc_1406BF3BB
 * 00000001406BF3A0: mov     ecx, 1
 * 00000001406BF3A5: mov     cr8, rcx
 * 00000001406BF3A9: sti
 * 00000001406BF3AA: call    KiInitiateUserApc
 * 00000001406BF3AF: cli
 * 00000001406BF3B0: mov     ecx, 0
 * 00000001406BF3B5: mov     cr8, rcx
 * 00000001406BF3B9: jmp     short loc_1406BF38E
 * 00000001406BF3BB: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BF3C0: test    eax, eax
 * 00000001406BF3C2: mov     rax, [rbp-50h]
 * 00000001406BF3C6: jnz     short loc_1406BF38E
 * 00000001406BF3C8: test    byte ptr gs:860h, 2
 * 00000001406BF3D1: jz      short loc_1406BF3DA
 * 00000001406BF3D3: xor     ecx, ecx
 * 00000001406BF3D5: call    KiUpdateStibpPairing
 * 00000001406BF3DA: mov     rcx, gs:188h
 * 00000001406BF3E3: test    dword ptr [rcx], 8000000h
 * 00000001406BF3E9: jz      short loc_1406BF3F0
 * 00000001406BF3EB: call    KiRestoreSetContextState
 * 00000001406BF3F0: mov     rcx, gs:188h
 * 00000001406BF3F9: test    dword ptr [rcx], 10000h
 * 00000001406BF3FF: jz      short loc_1406BF415
 * 00000001406BF401: test    byte ptr [rcx+2], 1
 * 00000001406BF405: jz      short loc_1406BF415
 * 00000001406BF407: call    KiCopyCounters
 * 00000001406BF40C: mov     rcx, gs:188h
 * 00000001406BF415: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BF419: cmp     word ptr [rbp+80h], 0
 * 00000001406BF421: jz      short loc_1406BF428
 * 00000001406BF423: call    KiRestoreDebugRegisterState
 * 00000001406BF428: mov     rcx, gs:188h
 * 00000001406BF431: bt      dword ptr [rcx+74h], 16h
 * 00000001406BF436: jnb     short loc_1406BF462
 * 00000001406BF438: xor     ecx, ecx
 * 00000001406BF43A: rdsspq  rcx
 * 00000001406BF43F: mov     r8, gs:9D28h
 * 00000001406BF448: add     r8, 8
 * 00000001406BF44C: cmp     rcx, r8
 * 00000001406BF44F: jnz     short loc_1406BF462
 * 00000001406BF451: mov     rcx, gs:9D20h
 * 00000001406BF45A: rstorssp qword ptr [rcx]
 * 00000001406BF45E: saveprevssp
 * 00000001406BF462: mov     byte ptr gs:85Eh, 0
 * 00000001406BF46B: movzx   eax, word ptr gs:86Ch
 * 00000001406BF474: cmp     gs:866h, ax
 * 00000001406BF47D: jz      short loc_1406BF491
 * 00000001406BF47F: mov     gs:866h, ax
 * 00000001406BF488: mov     ecx, 48h ; 'H'
 * 00000001406BF48D: xor     edx, edx
 * 00000001406BF48F: wrmsr
 * 00000001406BF491: btr     word ptr gs:858h, 2
 * 00000001406BF49C: jnb     short loc_1406BF4AC
 * 00000001406BF49E: mov     eax, 1
 * 00000001406BF4A3: xor     edx, edx
 * 00000001406BF4A5: mov     ecx, 49h ; 'I'
 * 00000001406BF4AA: wrmsr
 * 00000001406BF4AC: btr     word ptr gs:858h, 5
 * 00000001406BF4B7: jnb     loc_1406BF5F4
 * 00000001406BF4BD: call    loc_1406BF5D0
 * 00000001406BF4C2: add     rsp, 8
 * 00000001406BF4C6: call    loc_1406BF5D9
 * 00000001406BF4CB: add     rsp, 8
 * 00000001406BF4CF: call    loc_1406BF4C2
 * 00000001406BF4D4: add     rsp, 8
 * 00000001406BF4D8: call    loc_1406BF4CB
 * 00000001406BF4DD: add     rsp, 8
 * 00000001406BF4E1: call    loc_1406BF4D4
 * 00000001406BF4E6: add     rsp, 8
 * 00000001406BF4EA: call    loc_1406BF4DD
 * 00000001406BF4EF: add     rsp, 8
 * 00000001406BF4F3: call    loc_1406BF4E6
 * 00000001406BF4F8: add     rsp, 8
 * 00000001406BF4FC: call    loc_1406BF4EF
 * 00000001406BF501: add     rsp, 8
 * 00000001406BF505: call    loc_1406BF4F8
 * 00000001406BF50A: add     rsp, 8
 * 00000001406BF50E: call    loc_1406BF501
 * 00000001406BF513: add     rsp, 8
 * 00000001406BF517: call    loc_1406BF50A
 * 00000001406BF51C: add     rsp, 8
 * 00000001406BF520: call    loc_1406BF513
 * 00000001406BF525: add     rsp, 8
 * 00000001406BF529: call    loc_1406BF51C
 * 00000001406BF52E: add     rsp, 8
 * 00000001406BF532: call    loc_1406BF525
 * 00000001406BF537: add     rsp, 8
 * 00000001406BF53B: call    loc_1406BF52E
 * 00000001406BF540: add     rsp, 8
 * 00000001406BF544: call    loc_1406BF537
 * 00000001406BF549: add     rsp, 8
 * 00000001406BF54D: call    loc_1406BF540
 * 00000001406BF552: add     rsp, 8
 * 00000001406BF556: call    loc_1406BF549
 * 00000001406BF55B: add     rsp, 8
 * 00000001406BF55F: call    loc_1406BF552
 * 00000001406BF564: add     rsp, 8
 * 00000001406BF568: call    loc_1406BF55B
 * 00000001406BF56D: add     rsp, 8
 * 00000001406BF571: call    loc_1406BF564
 * 00000001406BF576: add     rsp, 8
 * 00000001406BF57A: call    loc_1406BF56D
 * 00000001406BF57F: add     rsp, 8
 * 00000001406BF583: call    loc_1406BF576
 * 00000001406BF588: add     rsp, 8
 * 00000001406BF58C: call    loc_1406BF57F
 * 00000001406BF591: add     rsp, 8
 * 00000001406BF595: call    loc_1406BF588
 * 00000001406BF59A: add     rsp, 8
 * 00000001406BF59E: call    loc_1406BF591
 * 00000001406BF5A3: add     rsp, 8
 * 00000001406BF5A7: call    loc_1406BF59A
 * 00000001406BF5AC: add     rsp, 8
 * 00000001406BF5B0: call    loc_1406BF5A3
 * 00000001406BF5B5: add     rsp, 8
 * 00000001406BF5B9: call    loc_1406BF5AC
 * 00000001406BF5BE: add     rsp, 8
 * 00000001406BF5C2: call    loc_1406BF5B5
 * 00000001406BF5C7: add     rsp, 8
 * 00000001406BF5CB: call    loc_1406BF5BE
 * 00000001406BF5D0: add     rsp, 8
 * 00000001406BF5D4: call    loc_1406BF5C7
 * 00000001406BF5D9: add     rsp, 8
 * 00000001406BF5DD: mov     eax, 0DADAh
 * 00000001406BF5E2: test    byte ptr gs:85Ch, 8
 * 00000001406BF5EB: jz      short loc_1406BF5F4
 * 00000001406BF5ED: mov     al, 20h ; ' '
 * 00000001406BF5EF: incsspq rax
 * 00000001406BF5F4: test    word ptr gs:858h, 100h
 * 00000001406BF5FF: jz      short loc_1406BF60D
 * 00000001406BF601: xor     eax, eax
 * 00000001406BF603: xor     edx, edx
 * 00000001406BF605: mov     ecx, 1
 * 00000001406BF60A: div     rcx
 * 00000001406BF60D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406BF611: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406BF615: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406BF619: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406BF61D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406BF621: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406BF625: mov     r11, [rbp-20h]
 * 00000001406BF629: mov     r10, [rbp-28h]
 * 00000001406BF62D: mov     r9, [rbp-30h]
 * 00000001406BF631: mov     r8, [rbp-38h]
 * 00000001406BF635: mov     rdx, [rbp-40h]
 * 00000001406BF639: mov     rcx, [rbp-48h]
 * 00000001406BF63D: mov     rax, [rbp-50h]
 * 00000001406BF641: mov     rsp, rbp
 * 00000001406BF644: mov     rbp, [rbp+0D8h]
 * 00000001406BF64B: add     rsp, 0E8h
 * 00000001406BF652: test    cs:KiKvaShadow, 1
 * 00000001406BF659: jz      short loc_1406BF660
 * 00000001406BF65B: jmp     KiKernelExit
 * 00000001406BF660: test    word ptr gs:858h, 200h
 * 00000001406BF66B: jz      short loc_1406BF672
 * 00000001406BF66D: verw    [rsp-1E8h+arg_200]
 * 00000001406BF672: swapgs
 * 00000001406BF675: iretq
 * 00000001406BF677: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BF67B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406BF67F: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406BF683: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406BF687: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406BF68B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406BF68F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406BF693: mov     r11, [rbp-20h]
 * 00000001406BF697: mov     r10, [rbp-28h]
 * 00000001406BF69B: mov     r9, [rbp-30h]
 * 00000001406BF69F: mov     r8, [rbp-38h]
 * 00000001406BF6A3: mov     rdx, [rbp-40h]
 * 00000001406BF6A7: mov     rcx, [rbp-48h]
 * 00000001406BF6AB: mov     rax, [rbp-50h]
 * 00000001406BF6AF: mov     rsp, rbp
 * 00000001406BF6B2: mov     rbp, [rbp+0D8h]
 * 00000001406BF6B9: add     rsp, 0E8h
 * 00000001406BF6C0: iretq
 */
