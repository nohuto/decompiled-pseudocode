/*
 * XREFs of KxDebugTrapOrFault @ 0x1406AB040
 * Callers:
 *     KiDebugTrapOrFault @ 0x1406AAE80 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x1406AB040 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x1406AB040
 * Reason: Hex-Rays returned no pseudocode for 0x1406AB040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AB040: sub     rsp, 8
 * 00000001406AB044: push    rbp
 * 00000001406AB045: sub     rsp, 158h
 * 00000001406AB04C: lea     rbp, [rsp+80h]
 * 00000001406AB054: mov     [rbp+0E8h+var_13D], 1
 * 00000001406AB058: mov     [rbp+0E8h+var_138], rax
 * 00000001406AB05C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406AB060: mov     [rbp+0E8h+var_128], rdx
 * 00000001406AB064: mov     [rbp+0E8h+var_120], r8
 * 00000001406AB068: mov     [rbp+0E8h+var_118], r9
 * 00000001406AB06C: mov     [rbp+0E8h+var_110], r10
 * 00000001406AB070: mov     [rbp+0E8h+var_108], r11
 * 00000001406AB074: test    [rbp+0E8h+arg_0], 1
 * 00000001406AB07B: jnz     short loc_1406AB0B5
 * 00000001406AB07D: xor     edx, edx
 * 00000001406AB07F: rdsspq  rdx
 * 00000001406AB084: mov     [rbp+0E8h+var_90], rdx
 * 00000001406AB088: lfence
 * 00000001406AB08B: test    byte ptr gs:858h, 1
 * 00000001406AB094: jnz     short loc_1406AB09E
 * 00000001406AB096: lfence
 * 00000001406AB099: jmp     loc_1406AB326
 * 00000001406AB09E: movzx   eax, word ptr gs:866h
 * 00000001406AB0A7: mov     ecx, 48h ; 'H'
 * 00000001406AB0AC: xor     edx, edx
 * 00000001406AB0AE: wrmsr
 * 00000001406AB0B0: jmp     loc_1406AB326
 * 00000001406AB0B5: test    cs:KiKvaShadow, 1
 * 00000001406AB0BC: jnz     short loc_1406AB0C1
 * 00000001406AB0BE: swapgs
 * 00000001406AB0C1: lfence
 * 00000001406AB0C4: mov     rcx, gs:9D28h
 * 00000001406AB0CD: test    rcx, rcx
 * 00000001406AB0D0: jz      short loc_1406AB0F1
 * 00000001406AB0D2: rdsspq  rdx
 * 00000001406AB0D7: mov     r10, gs:9D20h
 * 00000001406AB0E0: add     r10, 8
 * 00000001406AB0E4: cmp     rdx, r10
 * 00000001406AB0E7: jnz     short loc_1406AB0F1
 * 00000001406AB0E9: rstorssp qword ptr [rcx]
 * 00000001406AB0ED: saveprevssp
 * 00000001406AB0F1: mov     r10, gs:188h
 * 00000001406AB0FA: mov     rcx, gs:188h
 * 00000001406AB103: mov     rcx, [rcx+220h]
 * 00000001406AB10A: mov     rcx, [rcx+760h]
 * 00000001406AB111: mov     gs:850h, rcx
 * 00000001406AB11A: mov     cx, gs:862h
 * 00000001406AB123: mov     gs:864h, cx
 * 00000001406AB12C: mov     cl, gs:858h
 * 00000001406AB134: mov     gs:85Ah, cl
 * 00000001406AB13C: movzx   eax, word ptr gs:868h
 * 00000001406AB145: cmp     gs:866h, ax
 * 00000001406AB14E: jz      short loc_1406AB162
 * 00000001406AB150: mov     gs:866h, ax
 * 00000001406AB159: mov     ecx, 48h ; 'H'
 * 00000001406AB15E: xor     edx, edx
 * 00000001406AB160: wrmsr
 * 00000001406AB162: movzx   edx, byte ptr gs:858h
 * 00000001406AB16B: test    edx, 8
 * 00000001406AB171: jz      short loc_1406AB18A
 * 00000001406AB173: mov     eax, 1
 * 00000001406AB178: xor     edx, edx
 * 00000001406AB17A: mov     ecx, 49h ; 'I'
 * 00000001406AB17F: wrmsr
 * 00000001406AB181: movzx   edx, byte ptr gs:858h
 * 00000001406AB18A: test    edx, 2
 * 00000001406AB190: jz      loc_1406AB2CD
 * 00000001406AB196: call    loc_1406AB2A9
 * 00000001406AB19B: add     rsp, 8
 * 00000001406AB19F: call    loc_1406AB2B2
 * 00000001406AB1A4: add     rsp, 8
 * 00000001406AB1A8: call    loc_1406AB19B
 * 00000001406AB1AD: add     rsp, 8
 * 00000001406AB1B1: call    loc_1406AB1A4
 * 00000001406AB1B6: add     rsp, 8
 * 00000001406AB1BA: call    loc_1406AB1AD
 * 00000001406AB1BF: add     rsp, 8
 * 00000001406AB1C3: call    loc_1406AB1B6
 * 00000001406AB1C8: add     rsp, 8
 * 00000001406AB1CC: call    loc_1406AB1BF
 * 00000001406AB1D1: add     rsp, 8
 * 00000001406AB1D5: call    loc_1406AB1C8
 * 00000001406AB1DA: add     rsp, 8
 * 00000001406AB1DE: call    loc_1406AB1D1
 * 00000001406AB1E3: add     rsp, 8
 * 00000001406AB1E7: call    loc_1406AB1DA
 * 00000001406AB1EC: add     rsp, 8
 * 00000001406AB1F0: call    loc_1406AB1E3
 * 00000001406AB1F5: add     rsp, 8
 * 00000001406AB1F9: call    loc_1406AB1EC
 * 00000001406AB1FE: add     rsp, 8
 * 00000001406AB202: call    loc_1406AB1F5
 * 00000001406AB207: add     rsp, 8
 * 00000001406AB20B: call    loc_1406AB1FE
 * 00000001406AB210: add     rsp, 8
 * 00000001406AB214: call    loc_1406AB207
 * 00000001406AB219: add     rsp, 8
 * 00000001406AB21D: call    loc_1406AB210
 * 00000001406AB222: add     rsp, 8
 * 00000001406AB226: call    loc_1406AB219
 * 00000001406AB22B: add     rsp, 8
 * 00000001406AB22F: call    loc_1406AB222
 * 00000001406AB234: add     rsp, 8
 * 00000001406AB238: call    loc_1406AB22B
 * 00000001406AB23D: add     rsp, 8
 * 00000001406AB241: call    loc_1406AB234
 * 00000001406AB246: add     rsp, 8
 * 00000001406AB24A: call    loc_1406AB23D
 * 00000001406AB24F: add     rsp, 8
 * 00000001406AB253: call    loc_1406AB246
 * 00000001406AB258: add     rsp, 8
 * 00000001406AB25C: call    loc_1406AB24F
 * 00000001406AB261: add     rsp, 8
 * 00000001406AB265: call    loc_1406AB258
 * 00000001406AB26A: add     rsp, 8
 * 00000001406AB26E: call    loc_1406AB261
 * 00000001406AB273: add     rsp, 8
 * 00000001406AB277: call    loc_1406AB26A
 * 00000001406AB27C: add     rsp, 8
 * 00000001406AB280: call    loc_1406AB273
 * 00000001406AB285: add     rsp, 8
 * 00000001406AB289: call    loc_1406AB27C
 * 00000001406AB28E: add     rsp, 8
 * 00000001406AB292: call    loc_1406AB285
 * 00000001406AB297: add     rsp, 8
 * 00000001406AB29B: call    loc_1406AB28E
 * 00000001406AB2A0: add     rsp, 8
 * 00000001406AB2A4: call    loc_1406AB297
 * 00000001406AB2A9: add     rsp, 8
 * 00000001406AB2AD: call    loc_1406AB2A0
 * 00000001406AB2B2: add     rsp, 8
 * 00000001406AB2B6: mov     eax, 0DADAh
 * 00000001406AB2BB: test    byte ptr gs:85Ch, 8
 * 00000001406AB2C4: jz      short loc_1406AB2CD
 * 00000001406AB2C6: mov     al, 20h ; ' '
 * 00000001406AB2C8: incsspq rax
 * 00000001406AB2CD: test    edx, 80h
 * 00000001406AB2D3: jz      short loc_1406AB2DD
 * 00000001406AB2D5: lfence
 * 00000001406AB2D8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AB2DD: lfence
 * 00000001406AB2E0: mov     byte ptr gs:85Eh, 0
 * 00000001406AB2E9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AB2F0: jz      short loc_1406AB311
 * 00000001406AB2F2: mov     ecx, 6A7h
 * 00000001406AB2F7: rdmsr
 * 00000001406AB2F9: cmp     edx, 0
 * 00000001406AB2FC: jz      short loc_1406AB311
 * 00000001406AB2FE: mov     ecx, edx
 * 00000001406AB300: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AB306: cmp     edx, ecx
 * 00000001406AB308: jz      short loc_1406AB311
 * 00000001406AB30A: mov     ecx, 6A7h
 * 00000001406AB30F: wrmsr
 * 00000001406AB311: test    byte ptr [r10+3], 3
 * 00000001406AB316: mov     [rbp+0E8h+var_68], 0
 * 00000001406AB31F: jz      short loc_1406AB326
 * 00000001406AB321: call    KiSaveDebugRegisterState
 * 00000001406AB326: cld
 * 00000001406AB327: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406AB32B: ldmxcsr dword ptr gs:180h
 * 00000001406AB334: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406AB338: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406AB33C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406AB340: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406AB344: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406AB348: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406AB34C: test    [rbp+0E8h+arg_0], 1
 * 00000001406AB353: jz      short loc_1406AB35A
 * 00000001406AB355: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AB35A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AB361: jz      short loc_1406AB36F
 * 00000001406AB363: test    [rbp+0E8h+arg_0], 1
 * 00000001406AB36A: jz      short loc_1406AB36F
 * 00000001406AB36C: stac
 * 00000001406AB36F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406AB379: jz      short loc_1406AB37C
 * 00000001406AB37B: sti
 * 00000001406AB37C: test    cs:KiCpuTracingFlags, 2
 * 00000001406AB386: jz      short loc_1406AB39B
 * 00000001406AB388: mov     ecx, 1D9h
 * 00000001406AB38D: rdmsr
 * 00000001406AB38F: or      eax, 1
 * 00000001406AB392: wrmsr
 * 00000001406AB394: xor     edx, edx
 * 00000001406AB396: jmp     loc_1406AB46A
 * 00000001406AB39B: xor     edx, edx
 * 00000001406AB39D: test    [rbp+0E8h+arg_8], 100h
 * 00000001406AB3A7: jz      loc_1406AB46A
 * 00000001406AB3AD: test    byte ptr gs:9122h, 2
 * 00000001406AB3B6: jz      loc_1406AB46A
 * 00000001406AB3BC: test    [rbp+0E8h+arg_0], 1
 * 00000001406AB3C3: jnz     short loc_1406AB41C
 * 00000001406AB3C5: mov     rax, dr7
 * 00000001406AB3C8: test    ax, 200h
 * 00000001406AB3CC: jz      loc_1406AB46A
 * 00000001406AB3D2: test    ax, 100h
 * 00000001406AB3D6: jz      loc_1406AB46A
 * 00000001406AB3DC: mov     r8d, cs:KiLastBranchTOSMSR
 * 00000001406AB3E3: or      r8d, r8d
 * 00000001406AB3E6: jz      short loc_1406AB3F0
 * 00000001406AB3E8: mov     ecx, r8d
 * 00000001406AB3EB: rdmsr
 * 00000001406AB3ED: mov     r8d, eax
 * 00000001406AB3F0: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 00000001406AB3F6: add     ecx, r8d
 * 00000001406AB3F9: rdmsr
 * 00000001406AB3FB: mov     r9d, eax
 * 00000001406AB3FE: shl     rdx, 20h
 * 00000001406AB402: mov     ecx, cs:KiLastBranchToBaseMSR
 * 00000001406AB408: or      r9, rdx
 * 00000001406AB40B: add     ecx, r8d
 * 00000001406AB40E: rdmsr
 * 00000001406AB410: mov     r10d, eax
 * 00000001406AB413: shl     rdx, 20h
 * 00000001406AB417: or      r10, rdx
 * 00000001406AB41A: jmp     short loc_1406AB465
 * 00000001406AB41C: test    [rbp+0E8h+var_68], 200h
 * 00000001406AB425: jz      short loc_1406AB46A
 * 00000001406AB427: test    [rbp+0E8h+var_68], 100h
 * 00000001406AB430: jz      short loc_1406AB46A
 * 00000001406AB432: and     [rbp+0E8h+var_40], 0
 * 00000001406AB43A: and     [rbp+0E8h+var_48], 0
 * 00000001406AB442: mov     rcx, cs:MmUserProbeAddress
 * 00000001406AB449: mov     r9, [rbp+0E8h+var_50]
 * 00000001406AB450: cmp     r9, rcx
 * 00000001406AB453: cmovnb  r9, rcx
 * 00000001406AB457: mov     r10, [rbp+0E8h+var_58]
 * 00000001406AB45E: cmp     r10, rcx
 * 00000001406AB461: cmovnb  r10, rcx
 * 00000001406AB465: mov     edx, 2
 * 00000001406AB46A: mov     ecx, 80000004h
 * 00000001406AB46F: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 00000001406AB479: mov     r8, [rbp+0E8h]
 * 00000001406AB480: call    KiExceptionDispatch
 * 00000001406AB485: nop
 * 00000001406AB486: retn
 */
