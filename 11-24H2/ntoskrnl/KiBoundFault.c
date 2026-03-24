/*
 * XREFs of KiBoundFault @ 0x1406B7440
 * Callers:
 *     KiBoundFaultShadow @ 0x140BBB3C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiHandleBound @ 0x1405B0F60 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x1406B7440 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x1406BEC80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406BF240 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x1406B7440
 * Reason: Hex-Rays returned no pseudocode for 0x1406B7440
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B7440: sub     rsp, 8
 * 00000001406B7444: push    rbp
 * 00000001406B7445: sub     rsp, 158h
 * 00000001406B744C: lea     rbp, [rsp+80h]
 * 00000001406B7454: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B7458: mov     [rbp+0E8h+var_138], rax
 * 00000001406B745C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B7460: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B7464: mov     [rbp+0E8h+var_120], r8
 * 00000001406B7468: mov     [rbp+0E8h+var_118], r9
 * 00000001406B746C: mov     [rbp+0E8h+var_110], r10
 * 00000001406B7470: mov     [rbp+0E8h+var_108], r11
 * 00000001406B7474: test    [rbp+0E8h+arg_0], 1
 * 00000001406B747B: jnz     short loc_1406B74B5
 * 00000001406B747D: xor     edx, edx
 * 00000001406B747F: rdsspq  rdx
 * 00000001406B7484: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B7488: lfence
 * 00000001406B748B: test    byte ptr gs:858h, 1
 * 00000001406B7494: jnz     short loc_1406B749E
 * 00000001406B7496: lfence
 * 00000001406B7499: jmp     loc_1406B7726
 * 00000001406B749E: movzx   eax, word ptr gs:866h
 * 00000001406B74A7: mov     ecx, 48h ; 'H'
 * 00000001406B74AC: xor     edx, edx
 * 00000001406B74AE: wrmsr
 * 00000001406B74B0: jmp     loc_1406B7726
 * 00000001406B74B5: test    cs:KiKvaShadow, 1
 * 00000001406B74BC: jnz     short loc_1406B74C1
 * 00000001406B74BE: swapgs
 * 00000001406B74C1: lfence
 * 00000001406B74C4: mov     rcx, gs:9D28h
 * 00000001406B74CD: test    rcx, rcx
 * 00000001406B74D0: jz      short loc_1406B74F1
 * 00000001406B74D2: rdsspq  rdx
 * 00000001406B74D7: mov     r10, gs:9D20h
 * 00000001406B74E0: add     r10, 8
 * 00000001406B74E4: cmp     rdx, r10
 * 00000001406B74E7: jnz     short loc_1406B74F1
 * 00000001406B74E9: rstorssp qword ptr [rcx]
 * 00000001406B74ED: saveprevssp
 * 00000001406B74F1: mov     r10, gs:188h
 * 00000001406B74FA: mov     rcx, gs:188h
 * 00000001406B7503: mov     rcx, [rcx+220h]
 * 00000001406B750A: mov     rcx, [rcx+760h]
 * 00000001406B7511: mov     gs:850h, rcx
 * 00000001406B751A: mov     cx, gs:862h
 * 00000001406B7523: mov     gs:864h, cx
 * 00000001406B752C: mov     cl, gs:858h
 * 00000001406B7534: mov     gs:85Ah, cl
 * 00000001406B753C: movzx   eax, word ptr gs:868h
 * 00000001406B7545: cmp     gs:866h, ax
 * 00000001406B754E: jz      short loc_1406B7562
 * 00000001406B7550: mov     gs:866h, ax
 * 00000001406B7559: mov     ecx, 48h ; 'H'
 * 00000001406B755E: xor     edx, edx
 * 00000001406B7560: wrmsr
 * 00000001406B7562: movzx   edx, byte ptr gs:858h
 * 00000001406B756B: test    edx, 8
 * 00000001406B7571: jz      short loc_1406B758A
 * 00000001406B7573: mov     eax, 1
 * 00000001406B7578: xor     edx, edx
 * 00000001406B757A: mov     ecx, 49h ; 'I'
 * 00000001406B757F: wrmsr
 * 00000001406B7581: movzx   edx, byte ptr gs:858h
 * 00000001406B758A: test    edx, 2
 * 00000001406B7590: jz      loc_1406B76CD
 * 00000001406B7596: call    loc_1406B76A9
 * 00000001406B759B: add     rsp, 8
 * 00000001406B759F: call    loc_1406B76B2
 * 00000001406B75A4: add     rsp, 8
 * 00000001406B75A8: call    loc_1406B759B
 * 00000001406B75AD: add     rsp, 8
 * 00000001406B75B1: call    loc_1406B75A4
 * 00000001406B75B6: add     rsp, 8
 * 00000001406B75BA: call    loc_1406B75AD
 * 00000001406B75BF: add     rsp, 8
 * 00000001406B75C3: call    loc_1406B75B6
 * 00000001406B75C8: add     rsp, 8
 * 00000001406B75CC: call    loc_1406B75BF
 * 00000001406B75D1: add     rsp, 8
 * 00000001406B75D5: call    loc_1406B75C8
 * 00000001406B75DA: add     rsp, 8
 * 00000001406B75DE: call    loc_1406B75D1
 * 00000001406B75E3: add     rsp, 8
 * 00000001406B75E7: call    loc_1406B75DA
 * 00000001406B75EC: add     rsp, 8
 * 00000001406B75F0: call    loc_1406B75E3
 * 00000001406B75F5: add     rsp, 8
 * 00000001406B75F9: call    loc_1406B75EC
 * 00000001406B75FE: add     rsp, 8
 * 00000001406B7602: call    loc_1406B75F5
 * 00000001406B7607: add     rsp, 8
 * 00000001406B760B: call    loc_1406B75FE
 * 00000001406B7610: add     rsp, 8
 * 00000001406B7614: call    loc_1406B7607
 * 00000001406B7619: add     rsp, 8
 * 00000001406B761D: call    loc_1406B7610
 * 00000001406B7622: add     rsp, 8
 * 00000001406B7626: call    loc_1406B7619
 * 00000001406B762B: add     rsp, 8
 * 00000001406B762F: call    loc_1406B7622
 * 00000001406B7634: add     rsp, 8
 * 00000001406B7638: call    loc_1406B762B
 * 00000001406B763D: add     rsp, 8
 * 00000001406B7641: call    loc_1406B7634
 * 00000001406B7646: add     rsp, 8
 * 00000001406B764A: call    loc_1406B763D
 * 00000001406B764F: add     rsp, 8
 * 00000001406B7653: call    loc_1406B7646
 * 00000001406B7658: add     rsp, 8
 * 00000001406B765C: call    loc_1406B764F
 * 00000001406B7661: add     rsp, 8
 * 00000001406B7665: call    loc_1406B7658
 * 00000001406B766A: add     rsp, 8
 * 00000001406B766E: call    loc_1406B7661
 * 00000001406B7673: add     rsp, 8
 * 00000001406B7677: call    loc_1406B766A
 * 00000001406B767C: add     rsp, 8
 * 00000001406B7680: call    loc_1406B7673
 * 00000001406B7685: add     rsp, 8
 * 00000001406B7689: call    loc_1406B767C
 * 00000001406B768E: add     rsp, 8
 * 00000001406B7692: call    loc_1406B7685
 * 00000001406B7697: add     rsp, 8
 * 00000001406B769B: call    loc_1406B768E
 * 00000001406B76A0: add     rsp, 8
 * 00000001406B76A4: call    loc_1406B7697
 * 00000001406B76A9: add     rsp, 8
 * 00000001406B76AD: call    loc_1406B76A0
 * 00000001406B76B2: add     rsp, 8
 * 00000001406B76B6: mov     eax, 0DADAh
 * 00000001406B76BB: test    byte ptr gs:85Ch, 8
 * 00000001406B76C4: jz      short loc_1406B76CD
 * 00000001406B76C6: mov     al, 20h ; ' '
 * 00000001406B76C8: incsspq rax
 * 00000001406B76CD: test    edx, 80h
 * 00000001406B76D3: jz      short loc_1406B76DD
 * 00000001406B76D5: lfence
 * 00000001406B76D8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B76DD: lfence
 * 00000001406B76E0: mov     byte ptr gs:85Eh, 0
 * 00000001406B76E9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B76F0: jz      short loc_1406B7711
 * 00000001406B76F2: mov     ecx, 6A7h
 * 00000001406B76F7: rdmsr
 * 00000001406B76F9: cmp     edx, 0
 * 00000001406B76FC: jz      short loc_1406B7711
 * 00000001406B76FE: mov     ecx, edx
 * 00000001406B7700: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B7706: cmp     edx, ecx
 * 00000001406B7708: jz      short loc_1406B7711
 * 00000001406B770A: mov     ecx, 6A7h
 * 00000001406B770F: wrmsr
 * 00000001406B7711: test    byte ptr [r10+3], 3
 * 00000001406B7716: mov     [rbp+0E8h+var_68], 0
 * 00000001406B771F: jz      short loc_1406B7726
 * 00000001406B7721: call    KiSaveDebugRegisterState
 * 00000001406B7726: cld
 * 00000001406B7727: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B772B: ldmxcsr dword ptr gs:180h
 * 00000001406B7734: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B7738: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B773C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B7740: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B7744: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B7748: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B774C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7753: jz      short loc_1406B775A
 * 00000001406B7755: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B775A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B7761: jz      short loc_1406B776F
 * 00000001406B7763: test    [rbp+0E8h+arg_0], 1
 * 00000001406B776A: jz      short loc_1406B776F
 * 00000001406B776C: stac
 * 00000001406B776F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B7779: jz      short loc_1406B777C
 * 00000001406B777B: sti
 * 00000001406B777C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B7783: jz      short loc_1406B77C6
 * 00000001406B7785: call    KiHandleBound
 * 00000001406B778A: cmp     eax, 0
 * 00000001406B778D: jz      short loc_1406B77C6
 * 00000001406B778F: cmp     eax, 1
 * 00000001406B7792: jz      short loc_1406B77DA
 * 00000001406B7794: cmp     eax, 2
 * 00000001406B7797: jz      short loc_1406B77A8
 * 00000001406B7799: mov     edx, 5
 * 00000001406B779E: mov     ecx, 7Fh
 * 00000001406B77A3: call    KiBugCheckDispatch
 * 00000001406B77A8: mov     r9, 1Ch
 * 00000001406B77AF: mov     ecx, 0C0000409h
 * 00000001406B77B4: mov     edx, 1
 * 00000001406B77B9: mov     r8, [rbp+0E8h]
 * 00000001406B77C0: call    KiFastFailDispatch
 * 00000001406B77C5: nop
 * 00000001406B77C6: mov     ecx, 0C000008Ch
 * 00000001406B77CB: xor     edx, edx
 * 00000001406B77CD: mov     r8, [rbp+0E8h]
 * 00000001406B77D4: call    KiExceptionDispatch
 * 00000001406B77D9: nop
 * 00000001406B77DA: cli
 * 00000001406B77DB: test    [rbp+0E8h+arg_0], 1
 * 00000001406B77E2: jz      loc_1406B7ADD
 * 00000001406B77E8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B77EF: jz      short loc_1406B77F4
 * 00000001406B77F1: stac
 * 00000001406B77F4: mov     rcx, gs:188h
 * 00000001406B77FD: test    byte ptr [rcx+0C2h], 3
 * 00000001406B7804: jz      short loc_1406B7821
 * 00000001406B7806: mov     ecx, 1
 * 00000001406B780B: mov     cr8, rcx
 * 00000001406B780F: sti
 * 00000001406B7810: call    KiInitiateUserApc
 * 00000001406B7815: cli
 * 00000001406B7816: mov     ecx, 0
 * 00000001406B781B: mov     cr8, rcx
 * 00000001406B781F: jmp     short loc_1406B77F4
 * 00000001406B7821: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B7826: test    eax, eax
 * 00000001406B7828: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B782C: jnz     short loc_1406B77F4
 * 00000001406B782E: test    byte ptr gs:860h, 2
 * 00000001406B7837: jz      short loc_1406B7840
 * 00000001406B7839: xor     ecx, ecx
 * 00000001406B783B: call    KiUpdateStibpPairing
 * 00000001406B7840: mov     rcx, gs:188h
 * 00000001406B7849: test    dword ptr [rcx], 8000000h
 * 00000001406B784F: jz      short loc_1406B7856
 * 00000001406B7851: call    KiRestoreSetContextState
 * 00000001406B7856: mov     rcx, gs:188h
 * 00000001406B785F: test    dword ptr [rcx], 10000h
 * 00000001406B7865: jz      short loc_1406B787B
 * 00000001406B7867: test    byte ptr [rcx+2], 1
 * 00000001406B786B: jz      short loc_1406B787B
 * 00000001406B786D: call    KiCopyCounters
 * 00000001406B7872: mov     rcx, gs:188h
 * 00000001406B787B: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B787F: cmp     [rbp+0E8h+var_68], 0
 * 00000001406B7887: jz      short loc_1406B788E
 * 00000001406B7889: call    KiRestoreDebugRegisterState
 * 00000001406B788E: mov     rcx, gs:188h
 * 00000001406B7897: bt      dword ptr [rcx+74h], 16h
 * 00000001406B789C: jnb     short loc_1406B78C8
 * 00000001406B789E: xor     ecx, ecx
 * 00000001406B78A0: rdsspq  rcx
 * 00000001406B78A5: mov     r8, gs:9D28h
 * 00000001406B78AE: add     r8, 8
 * 00000001406B78B2: cmp     rcx, r8
 * 00000001406B78B5: jnz     short loc_1406B78C8
 * 00000001406B78B7: mov     rcx, gs:9D20h
 * 00000001406B78C0: rstorssp qword ptr [rcx]
 * 00000001406B78C4: saveprevssp
 * 00000001406B78C8: mov     byte ptr gs:85Eh, 0
 * 00000001406B78D1: movzx   eax, word ptr gs:86Ch
 * 00000001406B78DA: cmp     gs:866h, ax
 * 00000001406B78E3: jz      short loc_1406B78F7
 * 00000001406B78E5: mov     gs:866h, ax
 * 00000001406B78EE: mov     ecx, 48h ; 'H'
 * 00000001406B78F3: xor     edx, edx
 * 00000001406B78F5: wrmsr
 * 00000001406B78F7: btr     word ptr gs:858h, 2
 * 00000001406B7902: jnb     short loc_1406B7912
 * 00000001406B7904: mov     eax, 1
 * 00000001406B7909: xor     edx, edx
 * 00000001406B790B: mov     ecx, 49h ; 'I'
 * 00000001406B7910: wrmsr
 * 00000001406B7912: btr     word ptr gs:858h, 5
 * 00000001406B791D: jnb     loc_1406B7A5A
 * 00000001406B7923: call    loc_1406B7A36
 * 00000001406B7928: add     rsp, 8
 * 00000001406B792C: call    loc_1406B7A3F
 * 00000001406B7931: add     rsp, 8
 * 00000001406B7935: call    loc_1406B7928
 * 00000001406B793A: add     rsp, 8
 * 00000001406B793E: call    loc_1406B7931
 * 00000001406B7943: add     rsp, 8
 * 00000001406B7947: call    loc_1406B793A
 * 00000001406B794C: add     rsp, 8
 * 00000001406B7950: call    loc_1406B7943
 * 00000001406B7955: add     rsp, 8
 * 00000001406B7959: call    loc_1406B794C
 * 00000001406B795E: add     rsp, 8
 * 00000001406B7962: call    loc_1406B7955
 * 00000001406B7967: add     rsp, 8
 * 00000001406B796B: call    loc_1406B795E
 * 00000001406B7970: add     rsp, 8
 * 00000001406B7974: call    loc_1406B7967
 * 00000001406B7979: add     rsp, 8
 * 00000001406B797D: call    loc_1406B7970
 * 00000001406B7982: add     rsp, 8
 * 00000001406B7986: call    loc_1406B7979
 * 00000001406B798B: add     rsp, 8
 * 00000001406B798F: call    loc_1406B7982
 * 00000001406B7994: add     rsp, 8
 * 00000001406B7998: call    loc_1406B798B
 * 00000001406B799D: add     rsp, 8
 * 00000001406B79A1: call    loc_1406B7994
 * 00000001406B79A6: add     rsp, 8
 * 00000001406B79AA: call    loc_1406B799D
 * 00000001406B79AF: add     rsp, 8
 * 00000001406B79B3: call    loc_1406B79A6
 * 00000001406B79B8: add     rsp, 8
 * 00000001406B79BC: call    loc_1406B79AF
 * 00000001406B79C1: add     rsp, 8
 * 00000001406B79C5: call    loc_1406B79B8
 * 00000001406B79CA: add     rsp, 8
 * 00000001406B79CE: call    loc_1406B79C1
 * 00000001406B79D3: add     rsp, 8
 * 00000001406B79D7: call    loc_1406B79CA
 * 00000001406B79DC: add     rsp, 8
 * 00000001406B79E0: call    loc_1406B79D3
 * 00000001406B79E5: add     rsp, 8
 * 00000001406B79E9: call    loc_1406B79DC
 * 00000001406B79EE: add     rsp, 8
 * 00000001406B79F2: call    loc_1406B79E5
 * 00000001406B79F7: add     rsp, 8
 * 00000001406B79FB: call    loc_1406B79EE
 * 00000001406B7A00: add     rsp, 8
 * 00000001406B7A04: call    loc_1406B79F7
 * 00000001406B7A09: add     rsp, 8
 * 00000001406B7A0D: call    loc_1406B7A00
 * 00000001406B7A12: add     rsp, 8
 * 00000001406B7A16: call    loc_1406B7A09
 * 00000001406B7A1B: add     rsp, 8
 * 00000001406B7A1F: call    loc_1406B7A12
 * 00000001406B7A24: add     rsp, 8
 * 00000001406B7A28: call    loc_1406B7A1B
 * 00000001406B7A2D: add     rsp, 8
 * 00000001406B7A31: call    loc_1406B7A24
 * 00000001406B7A36: add     rsp, 8
 * 00000001406B7A3A: call    loc_1406B7A2D
 * 00000001406B7A3F: add     rsp, 8
 * 00000001406B7A43: mov     eax, 0DADAh
 * 00000001406B7A48: test    byte ptr gs:85Ch, 8
 * 00000001406B7A51: jz      short loc_1406B7A5A
 * 00000001406B7A53: mov     al, 20h ; ' '
 * 00000001406B7A55: incsspq rax
 * 00000001406B7A5A: test    word ptr gs:858h, 100h
 * 00000001406B7A65: jz      short loc_1406B7A73
 * 00000001406B7A67: xor     eax, eax
 * 00000001406B7A69: xor     edx, edx
 * 00000001406B7A6B: mov     ecx, 1
 * 00000001406B7A70: div     rcx
 * 00000001406B7A73: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B7A77: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B7A7B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B7A7F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B7A83: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B7A87: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B7A8B: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B7A8F: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B7A93: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B7A97: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B7A9B: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B7A9F: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B7AA3: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B7AA7: mov     rsp, rbp
 * 00000001406B7AAA: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B7AB1: add     rsp, 0E8h
 * 00000001406B7AB8: test    cs:KiKvaShadow, 1
 * 00000001406B7ABF: jz      short loc_1406B7AC6
 * 00000001406B7AC1: jmp     KiKernelExit
 * 00000001406B7AC6: test    word ptr gs:858h, 200h
 * 00000001406B7AD1: jz      short loc_1406B7AD8
 * 00000001406B7AD3: verw    [rsp+arg_18]
 * 00000001406B7AD8: swapgs
 * 00000001406B7ADB: iretq
 * 00000001406B7ADD: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406B7AE1: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406B7AE5: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406B7AE9: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406B7AED: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406B7AF1: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406B7AF5: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406B7AF9: mov     r11, [rbp+0E8h+var_108]
 * 00000001406B7AFD: mov     r10, [rbp+0E8h+var_110]
 * 00000001406B7B01: mov     r9, [rbp+0E8h+var_118]
 * 00000001406B7B05: mov     r8, [rbp+0E8h+var_120]
 * 00000001406B7B09: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406B7B0D: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406B7B11: mov     rax, [rbp+0E8h+var_138]
 * 00000001406B7B15: mov     rsp, rbp
 * 00000001406B7B18: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406B7B1F: add     rsp, 0E8h
 * 00000001406B7B26: iretq
 */
