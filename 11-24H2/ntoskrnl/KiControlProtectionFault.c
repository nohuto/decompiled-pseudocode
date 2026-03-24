/*
 * XREFs of KiControlProtectionFault @ 0x1406BC440
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140BBBBC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiProcessControlProtection @ 0x14043E670 (KiProcessControlProtection.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x1406BC440 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x1406BEC80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1406BF240 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x1406BC440
 * Reason: Hex-Rays returned no pseudocode for 0x1406BC440
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BC440: push    rbp
 * 00000001406BC441: sub     rsp, 158h
 * 00000001406BC448: lea     rbp, [rsp+80h]
 * 00000001406BC450: mov     [rbp+0D8h+var_12D], 1
 * 00000001406BC454: mov     [rbp+0D8h+var_128], rax
 * 00000001406BC458: mov     [rbp+0D8h+var_120], rcx
 * 00000001406BC45C: mov     [rbp+0D8h+var_118], rdx
 * 00000001406BC460: mov     [rbp+0D8h+var_110], r8
 * 00000001406BC464: mov     [rbp+0D8h+var_108], r9
 * 00000001406BC468: mov     [rbp+0D8h+var_100], r10
 * 00000001406BC46C: mov     [rbp+0D8h+var_F8], r11
 * 00000001406BC470: test    [rbp+0D8h+arg_8], 1
 * 00000001406BC477: jnz     short loc_1406BC4B1
 * 00000001406BC479: xor     edx, edx
 * 00000001406BC47B: rdsspq  rdx
 * 00000001406BC480: mov     [rbp+0D8h+var_80], rdx
 * 00000001406BC484: lfence
 * 00000001406BC487: test    byte ptr gs:858h, 1
 * 00000001406BC490: jnz     short loc_1406BC49A
 * 00000001406BC492: lfence
 * 00000001406BC495: jmp     loc_1406BC722
 * 00000001406BC49A: movzx   eax, word ptr gs:866h
 * 00000001406BC4A3: mov     ecx, 48h ; 'H'
 * 00000001406BC4A8: xor     edx, edx
 * 00000001406BC4AA: wrmsr
 * 00000001406BC4AC: jmp     loc_1406BC722
 * 00000001406BC4B1: test    cs:KiKvaShadow, 1
 * 00000001406BC4B8: jnz     short loc_1406BC4BD
 * 00000001406BC4BA: swapgs
 * 00000001406BC4BD: lfence
 * 00000001406BC4C0: mov     rcx, gs:9D28h
 * 00000001406BC4C9: test    rcx, rcx
 * 00000001406BC4CC: jz      short loc_1406BC4ED
 * 00000001406BC4CE: rdsspq  rdx
 * 00000001406BC4D3: mov     r10, gs:9D20h
 * 00000001406BC4DC: add     r10, 8
 * 00000001406BC4E0: cmp     rdx, r10
 * 00000001406BC4E3: jnz     short loc_1406BC4ED
 * 00000001406BC4E5: rstorssp qword ptr [rcx]
 * 00000001406BC4E9: saveprevssp
 * 00000001406BC4ED: mov     r10, gs:188h
 * 00000001406BC4F6: mov     rcx, gs:188h
 * 00000001406BC4FF: mov     rcx, [rcx+220h]
 * 00000001406BC506: mov     rcx, [rcx+760h]
 * 00000001406BC50D: mov     gs:850h, rcx
 * 00000001406BC516: mov     cx, gs:862h
 * 00000001406BC51F: mov     gs:864h, cx
 * 00000001406BC528: mov     cl, gs:858h
 * 00000001406BC530: mov     gs:85Ah, cl
 * 00000001406BC538: movzx   eax, word ptr gs:868h
 * 00000001406BC541: cmp     gs:866h, ax
 * 00000001406BC54A: jz      short loc_1406BC55E
 * 00000001406BC54C: mov     gs:866h, ax
 * 00000001406BC555: mov     ecx, 48h ; 'H'
 * 00000001406BC55A: xor     edx, edx
 * 00000001406BC55C: wrmsr
 * 00000001406BC55E: movzx   edx, byte ptr gs:858h
 * 00000001406BC567: test    edx, 8
 * 00000001406BC56D: jz      short loc_1406BC586
 * 00000001406BC56F: mov     eax, 1
 * 00000001406BC574: xor     edx, edx
 * 00000001406BC576: mov     ecx, 49h ; 'I'
 * 00000001406BC57B: wrmsr
 * 00000001406BC57D: movzx   edx, byte ptr gs:858h
 * 00000001406BC586: test    edx, 2
 * 00000001406BC58C: jz      loc_1406BC6C9
 * 00000001406BC592: call    loc_1406BC6A5
 * 00000001406BC597: add     rsp, 8
 * 00000001406BC59B: call    loc_1406BC6AE
 * 00000001406BC5A0: add     rsp, 8
 * 00000001406BC5A4: call    loc_1406BC597
 * 00000001406BC5A9: add     rsp, 8
 * 00000001406BC5AD: call    loc_1406BC5A0
 * 00000001406BC5B2: add     rsp, 8
 * 00000001406BC5B6: call    loc_1406BC5A9
 * 00000001406BC5BB: add     rsp, 8
 * 00000001406BC5BF: call    loc_1406BC5B2
 * 00000001406BC5C4: add     rsp, 8
 * 00000001406BC5C8: call    loc_1406BC5BB
 * 00000001406BC5CD: add     rsp, 8
 * 00000001406BC5D1: call    loc_1406BC5C4
 * 00000001406BC5D6: add     rsp, 8
 * 00000001406BC5DA: call    loc_1406BC5CD
 * 00000001406BC5DF: add     rsp, 8
 * 00000001406BC5E3: call    loc_1406BC5D6
 * 00000001406BC5E8: add     rsp, 8
 * 00000001406BC5EC: call    loc_1406BC5DF
 * 00000001406BC5F1: add     rsp, 8
 * 00000001406BC5F5: call    loc_1406BC5E8
 * 00000001406BC5FA: add     rsp, 8
 * 00000001406BC5FE: call    loc_1406BC5F1
 * 00000001406BC603: add     rsp, 8
 * 00000001406BC607: call    loc_1406BC5FA
 * 00000001406BC60C: add     rsp, 8
 * 00000001406BC610: call    loc_1406BC603
 * 00000001406BC615: add     rsp, 8
 * 00000001406BC619: call    loc_1406BC60C
 * 00000001406BC61E: add     rsp, 8
 * 00000001406BC622: call    loc_1406BC615
 * 00000001406BC627: add     rsp, 8
 * 00000001406BC62B: call    loc_1406BC61E
 * 00000001406BC630: add     rsp, 8
 * 00000001406BC634: call    loc_1406BC627
 * 00000001406BC639: add     rsp, 8
 * 00000001406BC63D: call    loc_1406BC630
 * 00000001406BC642: add     rsp, 8
 * 00000001406BC646: call    loc_1406BC639
 * 00000001406BC64B: add     rsp, 8
 * 00000001406BC64F: call    loc_1406BC642
 * 00000001406BC654: add     rsp, 8
 * 00000001406BC658: call    loc_1406BC64B
 * 00000001406BC65D: add     rsp, 8
 * 00000001406BC661: call    loc_1406BC654
 * 00000001406BC666: add     rsp, 8
 * 00000001406BC66A: call    loc_1406BC65D
 * 00000001406BC66F: add     rsp, 8
 * 00000001406BC673: call    loc_1406BC666
 * 00000001406BC678: add     rsp, 8
 * 00000001406BC67C: call    loc_1406BC66F
 * 00000001406BC681: add     rsp, 8
 * 00000001406BC685: call    loc_1406BC678
 * 00000001406BC68A: add     rsp, 8
 * 00000001406BC68E: call    loc_1406BC681
 * 00000001406BC693: add     rsp, 8
 * 00000001406BC697: call    loc_1406BC68A
 * 00000001406BC69C: add     rsp, 8
 * 00000001406BC6A0: call    loc_1406BC693
 * 00000001406BC6A5: add     rsp, 8
 * 00000001406BC6A9: call    loc_1406BC69C
 * 00000001406BC6AE: add     rsp, 8
 * 00000001406BC6B2: mov     eax, 0DADAh
 * 00000001406BC6B7: test    byte ptr gs:85Ch, 8
 * 00000001406BC6C0: jz      short loc_1406BC6C9
 * 00000001406BC6C2: mov     al, 20h ; ' '
 * 00000001406BC6C4: incsspq rax
 * 00000001406BC6C9: test    edx, 80h
 * 00000001406BC6CF: jz      short loc_1406BC6D9
 * 00000001406BC6D1: lfence
 * 00000001406BC6D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BC6D9: lfence
 * 00000001406BC6DC: mov     byte ptr gs:85Eh, 0
 * 00000001406BC6E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BC6EC: jz      short loc_1406BC70D
 * 00000001406BC6EE: mov     ecx, 6A7h
 * 00000001406BC6F3: rdmsr
 * 00000001406BC6F5: cmp     edx, 0
 * 00000001406BC6F8: jz      short loc_1406BC70D
 * 00000001406BC6FA: mov     ecx, edx
 * 00000001406BC6FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BC702: cmp     edx, ecx
 * 00000001406BC704: jz      short loc_1406BC70D
 * 00000001406BC706: mov     ecx, 6A7h
 * 00000001406BC70B: wrmsr
 * 00000001406BC70D: test    byte ptr [r10+3], 3
 * 00000001406BC712: mov     [rbp+0D8h+var_58], 0
 * 00000001406BC71B: jz      short loc_1406BC722
 * 00000001406BC71D: call    KiSaveDebugRegisterState
 * 00000001406BC722: cld
 * 00000001406BC723: stmxcsr [rbp+0D8h+var_12C]
 * 00000001406BC727: ldmxcsr dword ptr gs:180h
 * 00000001406BC730: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001406BC734: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001406BC738: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001406BC73C: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001406BC740: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001406BC744: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001406BC748: test    [rbp+0D8h+arg_8], 1
 * 00000001406BC74F: jz      short loc_1406BC756
 * 00000001406BC751: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BC756: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BC75D: jz      short loc_1406BC76B
 * 00000001406BC75F: test    [rbp+0D8h+arg_8], 1
 * 00000001406BC766: jz      short loc_1406BC76B
 * 00000001406BC768: stac
 * 00000001406BC76B: mov     eax, [rbp+0E0h]
 * 00000001406BC771: test    [rbp+0D8h+arg_10], 200h
 * 00000001406BC77B: jz      short loc_1406BC77E
 * 00000001406BC77D: sti
 * 00000001406BC77E: test    byte ptr gs:9125h, 40h
 * 00000001406BC787: jz      loc_1406BC820
 * 00000001406BC78D: lea     rcx, [rbp+0D8h+var_158]
 * 00000001406BC791: call    KiProcessControlProtection
 * 00000001406BC796: cmp     eax, 1
 * 00000001406BC799: jz      loc_1406BC843
 * 00000001406BC79F: cmp     eax, 2
 * 00000001406BC7A2: jz      short loc_1406BC7AF
 * 00000001406BC7A4: cmp     eax, 3
 * 00000001406BC7A7: jz      loc_1406BC82F
 * 00000001406BC7AD: jmp     short loc_1406BC820
 * 00000001406BC7AF: test    [rbp+0D8h+arg_8], 1
 * 00000001406BC7B6: jz      short loc_1406BC7FB
 * 00000001406BC7B8: mov     ecx, 6A7h
 * 00000001406BC7BD: rdmsr
 * 00000001406BC7BF: shl     rdx, 20h
 * 00000001406BC7C3: or      rax, rdx
 * 00000001406BC7C6: mov     r10, rax
 * 00000001406BC7C9: mov     rcx, gs:188h
 * 00000001406BC7D2: mov     rcx, [rcx+220h]
 * 00000001406BC7D9: mov     r11d, [rcx+754h]
 * 00000001406BC7E0: and     r11d, 0C0F6C000h
 * 00000001406BC7E7: mov     edx, cs:KiUserCetAppcompatOptions
 * 00000001406BC7ED: shl     rdx, 20h
 * 00000001406BC7F1: or      r11, rdx
 * 00000001406BC7F4: mov     edx, 3
 * 00000001406BC7F9: jmp     short loc_1406BC807
 * 00000001406BC7FB: mov     edx, 2
 * 00000001406BC800: mov     r10, [rbp+0D8h+var_80]
 * 00000001406BC804: mov     r10, [r10]
 * 00000001406BC807: mov     r9, 39h ; '9'
 * 00000001406BC80E: mov     ecx, 0C0000409h
 * 00000001406BC813: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406BC81A: call    KiFastFailDispatch
 * 00000001406BC81F: nop
 * 00000001406BC820: mov     edx, 15h
 * 00000001406BC825: mov     ecx, 7Fh
 * 00000001406BC82A: call    KiBugCheckDispatch
 * 00000001406BC82F: mov     ecx, 80000033h
 * 00000001406BC834: xor     edx, edx
 * 00000001406BC836: mov     r8, [rbp+0D8h+arg_0]
 * 00000001406BC83D: call    KiExceptionDispatch
 * 00000001406BC842: nop
 * 00000001406BC843: cli
 * 00000001406BC844: test    [rbp+0D8h+arg_8], 1
 * 00000001406BC84B: jz      loc_1406BCB46
 * 00000001406BC851: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BC858: jz      short loc_1406BC85D
 * 00000001406BC85A: stac
 * 00000001406BC85D: mov     rcx, gs:188h
 * 00000001406BC866: test    byte ptr [rcx+0C2h], 3
 * 00000001406BC86D: jz      short loc_1406BC88A
 * 00000001406BC86F: mov     ecx, 1
 * 00000001406BC874: mov     cr8, rcx
 * 00000001406BC878: sti
 * 00000001406BC879: call    KiInitiateUserApc
 * 00000001406BC87E: cli
 * 00000001406BC87F: mov     ecx, 0
 * 00000001406BC884: mov     cr8, rcx
 * 00000001406BC888: jmp     short loc_1406BC85D
 * 00000001406BC88A: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BC88F: test    eax, eax
 * 00000001406BC891: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BC895: jnz     short loc_1406BC85D
 * 00000001406BC897: test    byte ptr gs:860h, 2
 * 00000001406BC8A0: jz      short loc_1406BC8A9
 * 00000001406BC8A2: xor     ecx, ecx
 * 00000001406BC8A4: call    KiUpdateStibpPairing
 * 00000001406BC8A9: mov     rcx, gs:188h
 * 00000001406BC8B2: test    dword ptr [rcx], 8000000h
 * 00000001406BC8B8: jz      short loc_1406BC8BF
 * 00000001406BC8BA: call    KiRestoreSetContextState
 * 00000001406BC8BF: mov     rcx, gs:188h
 * 00000001406BC8C8: test    dword ptr [rcx], 10000h
 * 00000001406BC8CE: jz      short loc_1406BC8E4
 * 00000001406BC8D0: test    byte ptr [rcx+2], 1
 * 00000001406BC8D4: jz      short loc_1406BC8E4
 * 00000001406BC8D6: call    KiCopyCounters
 * 00000001406BC8DB: mov     rcx, gs:188h
 * 00000001406BC8E4: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406BC8E8: cmp     [rbp+0D8h+var_58], 0
 * 00000001406BC8F0: jz      short loc_1406BC8F7
 * 00000001406BC8F2: call    KiRestoreDebugRegisterState
 * 00000001406BC8F7: mov     rcx, gs:188h
 * 00000001406BC900: bt      dword ptr [rcx+74h], 16h
 * 00000001406BC905: jnb     short loc_1406BC931
 * 00000001406BC907: xor     ecx, ecx
 * 00000001406BC909: rdsspq  rcx
 * 00000001406BC90E: mov     r8, gs:9D28h
 * 00000001406BC917: add     r8, 8
 * 00000001406BC91B: cmp     rcx, r8
 * 00000001406BC91E: jnz     short loc_1406BC931
 * 00000001406BC920: mov     rcx, gs:9D20h
 * 00000001406BC929: rstorssp qword ptr [rcx]
 * 00000001406BC92D: saveprevssp
 * 00000001406BC931: mov     byte ptr gs:85Eh, 0
 * 00000001406BC93A: movzx   eax, word ptr gs:86Ch
 * 00000001406BC943: cmp     gs:866h, ax
 * 00000001406BC94C: jz      short loc_1406BC960
 * 00000001406BC94E: mov     gs:866h, ax
 * 00000001406BC957: mov     ecx, 48h ; 'H'
 * 00000001406BC95C: xor     edx, edx
 * 00000001406BC95E: wrmsr
 * 00000001406BC960: btr     word ptr gs:858h, 2
 * 00000001406BC96B: jnb     short loc_1406BC97B
 * 00000001406BC96D: mov     eax, 1
 * 00000001406BC972: xor     edx, edx
 * 00000001406BC974: mov     ecx, 49h ; 'I'
 * 00000001406BC979: wrmsr
 * 00000001406BC97B: btr     word ptr gs:858h, 5
 * 00000001406BC986: jnb     loc_1406BCAC3
 * 00000001406BC98C: call    loc_1406BCA9F
 * 00000001406BC991: add     rsp, 8
 * 00000001406BC995: call    loc_1406BCAA8
 * 00000001406BC99A: add     rsp, 8
 * 00000001406BC99E: call    loc_1406BC991
 * 00000001406BC9A3: add     rsp, 8
 * 00000001406BC9A7: call    loc_1406BC99A
 * 00000001406BC9AC: add     rsp, 8
 * 00000001406BC9B0: call    loc_1406BC9A3
 * 00000001406BC9B5: add     rsp, 8
 * 00000001406BC9B9: call    loc_1406BC9AC
 * 00000001406BC9BE: add     rsp, 8
 * 00000001406BC9C2: call    loc_1406BC9B5
 * 00000001406BC9C7: add     rsp, 8
 * 00000001406BC9CB: call    loc_1406BC9BE
 * 00000001406BC9D0: add     rsp, 8
 * 00000001406BC9D4: call    loc_1406BC9C7
 * 00000001406BC9D9: add     rsp, 8
 * 00000001406BC9DD: call    loc_1406BC9D0
 * 00000001406BC9E2: add     rsp, 8
 * 00000001406BC9E6: call    loc_1406BC9D9
 * 00000001406BC9EB: add     rsp, 8
 * 00000001406BC9EF: call    loc_1406BC9E2
 * 00000001406BC9F4: add     rsp, 8
 * 00000001406BC9F8: call    loc_1406BC9EB
 * 00000001406BC9FD: add     rsp, 8
 * 00000001406BCA01: call    loc_1406BC9F4
 * 00000001406BCA06: add     rsp, 8
 * 00000001406BCA0A: call    loc_1406BC9FD
 * 00000001406BCA0F: add     rsp, 8
 * 00000001406BCA13: call    loc_1406BCA06
 * 00000001406BCA18: add     rsp, 8
 * 00000001406BCA1C: call    loc_1406BCA0F
 * 00000001406BCA21: add     rsp, 8
 * 00000001406BCA25: call    loc_1406BCA18
 * 00000001406BCA2A: add     rsp, 8
 * 00000001406BCA2E: call    loc_1406BCA21
 * 00000001406BCA33: add     rsp, 8
 * 00000001406BCA37: call    loc_1406BCA2A
 * 00000001406BCA3C: add     rsp, 8
 * 00000001406BCA40: call    loc_1406BCA33
 * 00000001406BCA45: add     rsp, 8
 * 00000001406BCA49: call    loc_1406BCA3C
 * 00000001406BCA4E: add     rsp, 8
 * 00000001406BCA52: call    loc_1406BCA45
 * 00000001406BCA57: add     rsp, 8
 * 00000001406BCA5B: call    loc_1406BCA4E
 * 00000001406BCA60: add     rsp, 8
 * 00000001406BCA64: call    loc_1406BCA57
 * 00000001406BCA69: add     rsp, 8
 * 00000001406BCA6D: call    loc_1406BCA60
 * 00000001406BCA72: add     rsp, 8
 * 00000001406BCA76: call    loc_1406BCA69
 * 00000001406BCA7B: add     rsp, 8
 * 00000001406BCA7F: call    loc_1406BCA72
 * 00000001406BCA84: add     rsp, 8
 * 00000001406BCA88: call    loc_1406BCA7B
 * 00000001406BCA8D: add     rsp, 8
 * 00000001406BCA91: call    loc_1406BCA84
 * 00000001406BCA96: add     rsp, 8
 * 00000001406BCA9A: call    loc_1406BCA8D
 * 00000001406BCA9F: add     rsp, 8
 * 00000001406BCAA3: call    loc_1406BCA96
 * 00000001406BCAA8: add     rsp, 8
 * 00000001406BCAAC: mov     eax, 0DADAh
 * 00000001406BCAB1: test    byte ptr gs:85Ch, 8
 * 00000001406BCABA: jz      short loc_1406BCAC3
 * 00000001406BCABC: mov     al, 20h ; ' '
 * 00000001406BCABE: incsspq rax
 * 00000001406BCAC3: test    word ptr gs:858h, 100h
 * 00000001406BCACE: jz      short loc_1406BCADC
 * 00000001406BCAD0: xor     eax, eax
 * 00000001406BCAD2: xor     edx, edx
 * 00000001406BCAD4: mov     ecx, 1
 * 00000001406BCAD9: div     rcx
 * 00000001406BCADC: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406BCAE0: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406BCAE4: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406BCAE8: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406BCAEC: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406BCAF0: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406BCAF4: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406BCAF8: mov     r10, [rbp+0D8h+var_100]
 * 00000001406BCAFC: mov     r9, [rbp+0D8h+var_108]
 * 00000001406BCB00: mov     r8, [rbp+0D8h+var_110]
 * 00000001406BCB04: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406BCB08: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406BCB0C: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BCB10: mov     rsp, rbp
 * 00000001406BCB13: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406BCB1A: add     rsp, 0E8h
 * 00000001406BCB21: test    cs:KiKvaShadow, 1
 * 00000001406BCB28: jz      short loc_1406BCB2F
 * 00000001406BCB2A: jmp     KiKernelExit
 * 00000001406BCB2F: test    word ptr gs:858h, 200h
 * 00000001406BCB3A: jz      short loc_1406BCB41
 * 00000001406BCB3C: verw    [rsp-10h+arg_20]
 * 00000001406BCB41: swapgs
 * 00000001406BCB44: iretq
 * 00000001406BCB46: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001406BCB4A: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001406BCB4E: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001406BCB52: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001406BCB56: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001406BCB5A: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001406BCB5E: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001406BCB62: mov     r11, [rbp+0D8h+var_F8]
 * 00000001406BCB66: mov     r10, [rbp+0D8h+var_100]
 * 00000001406BCB6A: mov     r9, [rbp+0D8h+var_108]
 * 00000001406BCB6E: mov     r8, [rbp+0D8h+var_110]
 * 00000001406BCB72: mov     rdx, [rbp+0D8h+var_118]
 * 00000001406BCB76: mov     rcx, [rbp+0D8h+var_120]
 * 00000001406BCB7A: mov     rax, [rbp+0D8h+var_128]
 * 00000001406BCB7E: mov     rsp, rbp
 * 00000001406BCB81: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001406BCB88: add     rsp, 0E8h
 * 00000001406BCB8F: iretq
 * 00000001406BCB91: retn
 */
