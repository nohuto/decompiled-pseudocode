/*
 * XREFs of KiControlProtectionFault @ 0x1406BD340
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140BBDBC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiProcessControlProtection @ 0x140434290 (KiProcessControlProtection.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x1406BD340 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x1406BFB80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406C0140 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x1406BD340
 * Reason: Hex-Rays returned no pseudocode for 0x1406BD340
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BD340: push    rbp
 * 00000001406BD341: sub     rsp, 158h
 * 00000001406BD348: lea     rbp, [rsp+80h]
 * 00000001406BD350: mov     [rbp+0D8h+var_12D], 1
 * 00000001406BD354: mov     [rbp+0D8h+var_128], rax
 * 00000001406BD358: mov     [rbp+0D8h+var_120], rcx
 * 00000001406BD35C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406BD360: mov     [rbp+0D8h+var_110], r8
 * 00000001406BD364: mov     [rbp+0D8h+var_108], r9
 * 00000001406BD368: mov     [rbp+0D8h+var_100], r10
 * 00000001406BD36C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406BD370: test    [rbp+0D8h+arg_8], 1
 * 00000001406BD377: jnz     short loc_1406BD3B1
 * 00000001406BD379: xor     edx, edx
 * 00000001406BD37B: rdsspq  rdx
 * 00000001406BD380: mov     [rbp+0D8h+var_80], rdx
 * 00000001406BD384: lfence
 * 00000001406BD387: test    byte ptr gs:858h, 1
 * 00000001406BD390: jnz     short loc_1406BD39A
 * 00000001406BD392: lfence
 * 00000001406BD395: jmp     loc_1406BD622
 * 00000001406BD39A: movzx   eax, word ptr gs:866h
 * 00000001406BD3A3: mov     ecx, 48h ; 'H'
 * 00000001406BD3A8: xor     edx, edx
 * 00000001406BD3AA: wrmsr
 * 00000001406BD3AC: jmp     loc_1406BD622
 * 00000001406BD3B1: test    cs:KiKvaShadow, 1
 * 00000001406BD3B8: jnz     short loc_1406BD3BD
 * 00000001406BD3BA: swapgs
 * 00000001406BD3BD: lfence
 * 00000001406BD3C0: mov     rcx, gs:9D28h
 * 00000001406BD3C9: test    rcx, rcx
 * 00000001406BD3CC: jz      short loc_1406BD3ED
 * 00000001406BD3CE: rdsspq  rdx
 * 00000001406BD3D3: mov     r10, gs:9D20h
 * 00000001406BD3DC: add     r10, 8
 * 00000001406BD3E0: cmp     rdx, r10
 * 00000001406BD3E3: jnz     short loc_1406BD3ED
 * 00000001406BD3E5: rstorssp qword ptr [rcx]
 * 00000001406BD3E9: saveprevssp
 * 00000001406BD3ED: mov     r10, gs:188h
 * 00000001406BD3F6: mov     rcx, gs:188h
 * 00000001406BD3FF: mov     rcx, [rcx+220h]
 * 00000001406BD406: mov     rcx, [rcx+760h]
 * 00000001406BD40D: mov     gs:850h, rcx
 * 00000001406BD416: mov     cx, gs:862h
 * 00000001406BD41F: mov     gs:864h, cx
 * 00000001406BD428: mov     cl, gs:858h
 * 00000001406BD430: mov     gs:85Ah, cl
 * 00000001406BD438: movzx   eax, word ptr gs:868h
 * 00000001406BD441: cmp     gs:866h, ax
 * 00000001406BD44A: jz      short loc_1406BD45E
 * 00000001406BD44C: mov     gs:866h, ax
 * 00000001406BD455: mov     ecx, 48h ; 'H'
 * 00000001406BD45A: xor     edx, edx
 * 00000001406BD45C: wrmsr
 * 00000001406BD45E: movzx   edx, byte ptr gs:858h
 * 00000001406BD467: test    edx, 8
 * 00000001406BD46D: jz      short loc_1406BD486
 * 00000001406BD46F: mov     eax, 1
 * 00000001406BD474: xor     edx, edx
 * 00000001406BD476: mov     ecx, 49h ; 'I'
 * 00000001406BD47B: wrmsr
 * 00000001406BD47D: movzx   edx, byte ptr gs:858h
 * 00000001406BD486: test    edx, 2
 * 00000001406BD48C: jz      loc_1406BD5C9
 * 00000001406BD492: call    loc_1406BD5A5
 * 00000001406BD497: add     rsp, 8
 * 00000001406BD49B: call    loc_1406BD5AE
 * 00000001406BD4A0: add     rsp, 8
 * 00000001406BD4A4: call    loc_1406BD497
 * 00000001406BD4A9: add     rsp, 8
 * 00000001406BD4AD: call    loc_1406BD4A0
 * 00000001406BD4B2: add     rsp, 8
 * 00000001406BD4B6: call    loc_1406BD4A9
 * 00000001406BD4BB: add     rsp, 8
 * 00000001406BD4BF: call    loc_1406BD4B2
 * 00000001406BD4C4: add     rsp, 8
 * 00000001406BD4C8: call    loc_1406BD4BB
 * 00000001406BD4CD: add     rsp, 8
 * 00000001406BD4D1: call    loc_1406BD4C4
 * 00000001406BD4D6: add     rsp, 8
 * 00000001406BD4DA: call    loc_1406BD4CD
 * 00000001406BD4DF: add     rsp, 8
 * 00000001406BD4E3: call    loc_1406BD4D6
 * 00000001406BD4E8: add     rsp, 8
 * 00000001406BD4EC: call    loc_1406BD4DF
 * 00000001406BD4F1: add     rsp, 8
 * 00000001406BD4F5: call    loc_1406BD4E8
 * 00000001406BD4FA: add     rsp, 8
 * 00000001406BD4FE: call    loc_1406BD4F1
 * 00000001406BD503: add     rsp, 8
 * 00000001406BD507: call    loc_1406BD4FA
 * 00000001406BD50C: add     rsp, 8
 * 00000001406BD510: call    loc_1406BD503
 * 00000001406BD515: add     rsp, 8
 * 00000001406BD519: call    loc_1406BD50C
 * 00000001406BD51E: add     rsp, 8
 * 00000001406BD522: call    loc_1406BD515
 * 00000001406BD527: add     rsp, 8
 * 00000001406BD52B: call    loc_1406BD51E
 * 00000001406BD530: add     rsp, 8
 * 00000001406BD534: call    loc_1406BD527
 * 00000001406BD539: add     rsp, 8
 * 00000001406BD53D: call    loc_1406BD530
 * 00000001406BD542: add     rsp, 8
 * 00000001406BD546: call    loc_1406BD539
 * 00000001406BD54B: add     rsp, 8
 * 00000001406BD54F: call    loc_1406BD542
 * 00000001406BD554: add     rsp, 8
 * 00000001406BD558: call    loc_1406BD54B
 * 00000001406BD55D: add     rsp, 8
 * 00000001406BD561: call    loc_1406BD554
 * 00000001406BD566: add     rsp, 8
 * 00000001406BD56A: call    loc_1406BD55D
 * 00000001406BD56F: add     rsp, 8
 * 00000001406BD573: call    loc_1406BD566
 * 00000001406BD578: add     rsp, 8
 * 00000001406BD57C: call    loc_1406BD56F
 * 00000001406BD581: add     rsp, 8
 * 00000001406BD585: call    loc_1406BD578
 * 00000001406BD58A: add     rsp, 8
 * 00000001406BD58E: call    loc_1406BD581
 * 00000001406BD593: add     rsp, 8
 * 00000001406BD597: call    loc_1406BD58A
 * 00000001406BD59C: add     rsp, 8
 * 00000001406BD5A0: call    loc_1406BD593
 * 00000001406BD5A5: add     rsp, 8
 * 00000001406BD5A9: call    loc_1406BD59C
 * 00000001406BD5AE: add     rsp, 8
 * 00000001406BD5B2: mov     eax, 0DADAh
 * 00000001406BD5B7: test    byte ptr gs:85Ch, 8
 * 00000001406BD5C0: jz      short loc_1406BD5C9
 * 00000001406BD5C2: mov     al, 20h ; ' '
 * 00000001406BD5C4: incsspq rax
 * 00000001406BD5C9: test    edx, 80h
 * 00000001406BD5CF: jz      short loc_1406BD5D9
 * 00000001406BD5D1: lfence
 * 00000001406BD5D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BD5D9: lfence
 * 00000001406BD5DC: mov     byte ptr gs:85Eh, 0
 * 00000001406BD5E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BD5EC: jz      short loc_1406BD60D
 * 00000001406BD5EE: mov     ecx, 6A7h
 * 00000001406BD5F3: rdmsr
 * 00000001406BD5F5: cmp     edx, 0
 * 00000001406BD5F8: jz      short loc_1406BD60D
 * 00000001406BD5FA: mov     ecx, edx
 * 00000001406BD5FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BD602: cmp     edx, ecx
 * 00000001406BD604: jz      short loc_1406BD60D
 * 00000001406BD606: mov     ecx, 6A7h
 * 00000001406BD60B: wrmsr
 * 00000001406BD60D: test    byte ptr [r10+3], 3
 * 00000001406BD612: mov     [rbp+0D8h+var_58], 0
 * 00000001406BD61B: jz      short loc_1406BD622
 * 00000001406BD61D: call    KiSaveDebugRegisterState
 * 00000001406BD622: cld
 * 00000001406BD623: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406BD627: ldmxcsr dword ptr gs:180h
 * 00000001406BD630: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406BD634: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406BD638: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406BD63C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406BD640: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406BD644: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406BD648: test    [rbp+0D8h+arg_8], 1
 * 00000001406BD64F: jz      short loc_1406BD656
 * 00000001406BD651: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BD656: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BD65D: jz      short loc_1406BD66B
 * 00000001406BD65F: test    [rbp+0D8h+arg_8], 1
 * 00000001406BD666: jz      short loc_1406BD66B
 * 00000001406BD668: stac
 * 00000001406BD66B: mov     eax, [rbp+0E0h]
 * 00000001406BD671: test    [rbp+0D8h+arg_10], 200h
 * 00000001406BD67B: jz      short loc_1406BD67E
 * 00000001406BD67D: sti
 * 00000001406BD67E: test    byte ptr gs:9125h, 40h
 * 00000001406BD687: jz      loc_1406BD720
 * 00000001406BD68D: lea     rcx, [rbp+0D8h+var_158]
 * 00000001406BD691: call    KiProcessControlProtection
 * 00000001406BD696: cmp     eax, 1
 * 00000001406BD699: jz      loc_1406BD743
 * 00000001406BD69F: cmp     eax, 2
 * 00000001406BD6A2: jz      short loc_1406BD6AF
 * 00000001406BD6A4: cmp     eax, 3
 * 00000001406BD6A7: jz      loc_1406BD72F
 * 00000001406BD6AD: jmp     short loc_1406BD720
 * 00000001406BD6AF: test    [rbp+0D8h+arg_8], 1
 * 00000001406BD6B6: jz      short loc_1406BD6FB
 * 00000001406BD6B8: mov     ecx, 6A7h
 * 00000001406BD6BD: rdmsr
 * 00000001406BD6BF: shl     rdx, 20h
 * 00000001406BD6C3: or      rax, rdx
 * 00000001406BD6C6: mov     r10, rax
 * 00000001406BD6C9: mov     rcx, gs:188h
 * 00000001406BD6D2: mov     rcx, [rcx+220h]
 * 00000001406BD6D9: mov     r11d, [rcx+754h]
 * 00000001406BD6E0: and     r11d, 0C0F6C000h
 * 00000001406BD6E7: mov     edx, cs:KiUserCetAppcompatOptions
 * 00000001406BD6ED: shl     rdx, 20h
 * 00000001406BD6F1: or      r11, rdx
 * 00000001406BD6F4: mov     edx, 3
 * 00000001406BD6F9: jmp     short loc_1406BD707
 * 00000001406BD6FB: mov     edx, 2
 * 00000001406BD700: mov     r10, [rbp+0D8h+var_80]
 * 00000001406BD704: mov     r10, [r10]
 * 00000001406BD707: mov     r9, 39h ; '9'
 * 00000001406BD70E: mov     ecx, 0C0000409h
 * 00000001406BD713: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406BD71A: call    KiFastFailDispatch
 * 00000001406BD71F: nop
 * 00000001406BD720: mov     edx, 15h
 * 00000001406BD725: mov     ecx, 7Fh
 * 00000001406BD72A: call    KiBugCheckDispatch
 * 00000001406BD72F: mov     ecx, 80000033h
 * 00000001406BD734: xor     edx, edx
 * 00000001406BD736: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406BD73D: call    KiExceptionDispatch
 * 00000001406BD742: nop
 * 00000001406BD743: cli
 * 00000001406BD744: test    [rbp+0D8h+arg_8], 1
 * 00000001406BD74B: jz      loc_1406BDA46
 * 00000001406BD751: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BD758: jz      short loc_1406BD75D
 * 00000001406BD75A: stac
 * 00000001406BD75D: mov     rcx, gs:188h
 * 00000001406BD766: test    byte ptr [rcx+0C2h], 3
 * 00000001406BD76D: jz      short loc_1406BD78A
 * 00000001406BD76F: mov     ecx, 1
 * 00000001406BD774: mov     cr8, rcx
 * 00000001406BD778: sti
 * 00000001406BD779: call    KiInitiateUserApc
 * 00000001406BD77E: cli
 * 00000001406BD77F: mov     ecx, 0
 * 00000001406BD784: mov     cr8, rcx
 * 00000001406BD788: jmp     short loc_1406BD75D
 * 00000001406BD78A: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BD78F: test    eax, eax
 * 00000001406BD791: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BD795: jnz     short loc_1406BD75D
 * 00000001406BD797: test    byte ptr gs:860h, 2
 * 00000001406BD7A0: jz      short loc_1406BD7A9
 * 00000001406BD7A2: xor     ecx, ecx
 * 00000001406BD7A4: call    KiUpdateStibpPairing
 * 00000001406BD7A9: mov     rcx, gs:188h
 * 00000001406BD7B2: test    dword ptr [rcx], 8000000h
 * 00000001406BD7B8: jz      short loc_1406BD7BF
 * 00000001406BD7BA: call    KiRestoreSetContextState
 * 00000001406BD7BF: mov     rcx, gs:188h
 * 00000001406BD7C8: test    dword ptr [rcx], 10000h
 * 00000001406BD7CE: jz      short loc_1406BD7E4
 * 00000001406BD7D0: test    byte ptr [rcx+2], 1
 * 00000001406BD7D4: jz      short loc_1406BD7E4
 * 00000001406BD7D6: call    KiCopyCounters
 * 00000001406BD7DB: mov     rcx, gs:188h
 * 00000001406BD7E4: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406BD7E8: cmp     [rbp+0D8h+var_58], 0
 * 00000001406BD7F0: jz      short loc_1406BD7F7
 * 00000001406BD7F2: call    KiRestoreDebugRegisterState
 * 00000001406BD7F7: mov     rcx, gs:188h
 * 00000001406BD800: bt      dword ptr [rcx+74h], 16h
 * 00000001406BD805: jnb     short loc_1406BD831
 * 00000001406BD807: xor     ecx, ecx
 * 00000001406BD809: rdsspq  rcx
 * 00000001406BD80E: mov     r8, gs:9D28h
 * 00000001406BD817: add     r8, 8
 * 00000001406BD81B: cmp     rcx, r8
 * 00000001406BD81E: jnz     short loc_1406BD831
 * 00000001406BD820: mov     rcx, gs:9D20h
 * 00000001406BD829: rstorssp qword ptr [rcx]
 * 00000001406BD82D: saveprevssp
 * 00000001406BD831: mov     byte ptr gs:85Eh, 0
 * 00000001406BD83A: movzx   eax, word ptr gs:86Ch
 * 00000001406BD843: cmp     gs:866h, ax
 * 00000001406BD84C: jz      short loc_1406BD860
 * 00000001406BD84E: mov     gs:866h, ax
 * 00000001406BD857: mov     ecx, 48h ; 'H'
 * 00000001406BD85C: xor     edx, edx
 * 00000001406BD85E: wrmsr
 * 00000001406BD860: btr     word ptr gs:858h, 2
 * 00000001406BD86B: jnb     short loc_1406BD87B
 * 00000001406BD86D: mov     eax, 1
 * 00000001406BD872: xor     edx, edx
 * 00000001406BD874: mov     ecx, 49h ; 'I'
 * 00000001406BD879: wrmsr
 * 00000001406BD87B: btr     word ptr gs:858h, 5
 * 00000001406BD886: jnb     loc_1406BD9C3
 * 00000001406BD88C: call    loc_1406BD99F
 * 00000001406BD891: add     rsp, 8
 * 00000001406BD895: call    loc_1406BD9A8
 * 00000001406BD89A: add     rsp, 8
 * 00000001406BD89E: call    loc_1406BD891
 * 00000001406BD8A3: add     rsp, 8
 * 00000001406BD8A7: call    loc_1406BD89A
 * 00000001406BD8AC: add     rsp, 8
 * 00000001406BD8B0: call    loc_1406BD8A3
 * 00000001406BD8B5: add     rsp, 8
 * 00000001406BD8B9: call    loc_1406BD8AC
 * 00000001406BD8BE: add     rsp, 8
 * 00000001406BD8C2: call    loc_1406BD8B5
 * 00000001406BD8C7: add     rsp, 8
 * 00000001406BD8CB: call    loc_1406BD8BE
 * 00000001406BD8D0: add     rsp, 8
 * 00000001406BD8D4: call    loc_1406BD8C7
 * 00000001406BD8D9: add     rsp, 8
 * 00000001406BD8DD: call    loc_1406BD8D0
 * 00000001406BD8E2: add     rsp, 8
 * 00000001406BD8E6: call    loc_1406BD8D9
 * 00000001406BD8EB: add     rsp, 8
 * 00000001406BD8EF: call    loc_1406BD8E2
 * 00000001406BD8F4: add     rsp, 8
 * 00000001406BD8F8: call    loc_1406BD8EB
 * 00000001406BD8FD: add     rsp, 8
 * 00000001406BD901: call    loc_1406BD8F4
 * 00000001406BD906: add     rsp, 8
 * 00000001406BD90A: call    loc_1406BD8FD
 * 00000001406BD90F: add     rsp, 8
 * 00000001406BD913: call    loc_1406BD906
 * 00000001406BD918: add     rsp, 8
 * 00000001406BD91C: call    loc_1406BD90F
 * 00000001406BD921: add     rsp, 8
 * 00000001406BD925: call    loc_1406BD918
 * 00000001406BD92A: add     rsp, 8
 * 00000001406BD92E: call    loc_1406BD921
 * 00000001406BD933: add     rsp, 8
 * 00000001406BD937: call    loc_1406BD92A
 * 00000001406BD93C: add     rsp, 8
 * 00000001406BD940: call    loc_1406BD933
 * 00000001406BD945: add     rsp, 8
 * 00000001406BD949: call    loc_1406BD93C
 * 00000001406BD94E: add     rsp, 8
 * 00000001406BD952: call    loc_1406BD945
 * 00000001406BD957: add     rsp, 8
 * 00000001406BD95B: call    loc_1406BD94E
 * 00000001406BD960: add     rsp, 8
 * 00000001406BD964: call    loc_1406BD957
 * 00000001406BD969: add     rsp, 8
 * 00000001406BD96D: call    loc_1406BD960
 * 00000001406BD972: add     rsp, 8
 * 00000001406BD976: call    loc_1406BD969
 * 00000001406BD97B: add     rsp, 8
 * 00000001406BD97F: call    loc_1406BD972
 * 00000001406BD984: add     rsp, 8
 * 00000001406BD988: call    loc_1406BD97B
 * 00000001406BD98D: add     rsp, 8
 * 00000001406BD991: call    loc_1406BD984
 * 00000001406BD996: add     rsp, 8
 * 00000001406BD99A: call    loc_1406BD98D
 * 00000001406BD99F: add     rsp, 8
 * 00000001406BD9A3: call    loc_1406BD996
 * 00000001406BD9A8: add     rsp, 8
 * 00000001406BD9AC: mov     eax, 0DADAh
 * 00000001406BD9B1: test    byte ptr gs:85Ch, 8
 * 00000001406BD9BA: jz      short loc_1406BD9C3
 * 00000001406BD9BC: mov     al, 20h ; ' '
 * 00000001406BD9BE: incsspq rax
 * 00000001406BD9C3: test    word ptr gs:858h, 100h
 * 00000001406BD9CE: jz      short loc_1406BD9DC
 * 00000001406BD9D0: xor     eax, eax
 * 00000001406BD9D2: xor     edx, edx
 * 00000001406BD9D4: mov     ecx, 1
 * 00000001406BD9D9: div     rcx
 * 00000001406BD9DC: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406BD9E0: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406BD9E4: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406BD9E8: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406BD9EC: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406BD9F0: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406BD9F4: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406BD9F8: mov     r10, [rbp+0D8h+var_100]
 * 00000001406BD9FC: mov     r9, [rbp+0D8h+var_108]
 * 00000001406BDA00: mov     r8, [rbp+0D8h+var_110]
 * 00000001406BDA04: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406BDA08: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406BDA0C: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BDA10: mov     rsp, rbp
 * 00000001406BDA13: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406BDA1A: add     rsp, 0E8h
 * 00000001406BDA21: test    cs:KiKvaShadow, 1
 * 00000001406BDA28: jz      short loc_1406BDA2F
 * 00000001406BDA2A: jmp     KiKernelExit
 * 00000001406BDA2F: test    word ptr gs:858h, 200h
 * 00000001406BDA3A: jz      short loc_1406BDA41
 * 00000001406BDA3C: verw    [rsp-10h+arg_20]
 * 00000001406BDA41: swapgs
 * 00000001406BDA44: iretq
 * 00000001406BDA46: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406BDA4A: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406BDA4E: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406BDA52: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406BDA56: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406BDA5A: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406BDA5E: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406BDA62: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406BDA66: mov     r10, [rbp+0D8h+var_100]
 * 00000001406BDA6A: mov     r9, [rbp+0D8h+var_108]
 * 00000001406BDA6E: mov     r8, [rbp+0D8h+var_110]
 * 00000001406BDA72: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406BDA76: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406BDA7A: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BDA7E: mov     rsp, rbp
 * 00000001406BDA81: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406BDA88: add     rsp, 0E8h
 * 00000001406BDA8F: iretq
 * 00000001406BDA91: retn
 */
