/*
 * XREFs of KxDebugTrapOrFault @ 0x1406B6340
 * Callers:
 *     KiDebugTrapOrFault @ 0x1406B6180 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x1406B6340 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x1406B6340
 * Reason: Hex-Rays returned no pseudocode for 0x1406B6340
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B6340: sub     rsp, 8
 * 00000001406B6344: push    rbp
 * 00000001406B6345: sub     rsp, 158h
 * 00000001406B634C: lea     rbp, [rsp+80h]
 * 00000001406B6354: mov     [rbp+0E8h+var_13D], 1
 * 00000001406B6358: mov     [rbp+0E8h+var_138], rax
 * 00000001406B635C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406B6360: mov     [rbp+0E8h+var_128], rdx
 * 00000001406B6364: mov     [rbp+0E8h+var_120], r8
 * 00000001406B6368: mov     [rbp+0E8h+var_118], r9
 * 00000001406B636C: mov     [rbp+0E8h+var_110], r10
 * 00000001406B6370: mov     [rbp+0E8h+var_108], r11
 * 00000001406B6374: test    [rbp+0E8h+arg_0], 1
 * 00000001406B637B: jnz     short loc_1406B63B5
 * 00000001406B637D: xor     edx, edx
 * 00000001406B637F: rdsspq  rdx
 * 00000001406B6384: mov     [rbp+0E8h+var_90], rdx
 * 00000001406B6388: lfence
 * 00000001406B638B: test    byte ptr gs:858h, 1
 * 00000001406B6394: jnz     short loc_1406B639E
 * 00000001406B6396: lfence
 * 00000001406B6399: jmp     loc_1406B6626
 * 00000001406B639E: movzx   eax, word ptr gs:866h
 * 00000001406B63A7: mov     ecx, 48h ; 'H'
 * 00000001406B63AC: xor     edx, edx
 * 00000001406B63AE: wrmsr
 * 00000001406B63B0: jmp     loc_1406B6626
 * 00000001406B63B5: test    cs:KiKvaShadow, 1
 * 00000001406B63BC: jnz     short loc_1406B63C1
 * 00000001406B63BE: swapgs
 * 00000001406B63C1: lfence
 * 00000001406B63C4: mov     rcx, gs:9D28h
 * 00000001406B63CD: test    rcx, rcx
 * 00000001406B63D0: jz      short loc_1406B63F1
 * 00000001406B63D2: rdsspq  rdx
 * 00000001406B63D7: mov     r10, gs:9D20h
 * 00000001406B63E0: add     r10, 8
 * 00000001406B63E4: cmp     rdx, r10
 * 00000001406B63E7: jnz     short loc_1406B63F1
 * 00000001406B63E9: rstorssp qword ptr [rcx]
 * 00000001406B63ED: saveprevssp
 * 00000001406B63F1: mov     r10, gs:188h
 * 00000001406B63FA: mov     rcx, gs:188h
 * 00000001406B6403: mov     rcx, [rcx+220h]
 * 00000001406B640A: mov     rcx, [rcx+760h]
 * 00000001406B6411: mov     gs:850h, rcx
 * 00000001406B641A: mov     cx, gs:862h
 * 00000001406B6423: mov     gs:864h, cx
 * 00000001406B642C: mov     cl, gs:858h
 * 00000001406B6434: mov     gs:85Ah, cl
 * 00000001406B643C: movzx   eax, word ptr gs:868h
 * 00000001406B6445: cmp     gs:866h, ax
 * 00000001406B644E: jz      short loc_1406B6462
 * 00000001406B6450: mov     gs:866h, ax
 * 00000001406B6459: mov     ecx, 48h ; 'H'
 * 00000001406B645E: xor     edx, edx
 * 00000001406B6460: wrmsr
 * 00000001406B6462: movzx   edx, byte ptr gs:858h
 * 00000001406B646B: test    edx, 8
 * 00000001406B6471: jz      short loc_1406B648A
 * 00000001406B6473: mov     eax, 1
 * 00000001406B6478: xor     edx, edx
 * 00000001406B647A: mov     ecx, 49h ; 'I'
 * 00000001406B647F: wrmsr
 * 00000001406B6481: movzx   edx, byte ptr gs:858h
 * 00000001406B648A: test    edx, 2
 * 00000001406B6490: jz      loc_1406B65CD
 * 00000001406B6496: call    loc_1406B65A9
 * 00000001406B649B: add     rsp, 8
 * 00000001406B649F: call    loc_1406B65B2
 * 00000001406B64A4: add     rsp, 8
 * 00000001406B64A8: call    loc_1406B649B
 * 00000001406B64AD: add     rsp, 8
 * 00000001406B64B1: call    loc_1406B64A4
 * 00000001406B64B6: add     rsp, 8
 * 00000001406B64BA: call    loc_1406B64AD
 * 00000001406B64BF: add     rsp, 8
 * 00000001406B64C3: call    loc_1406B64B6
 * 00000001406B64C8: add     rsp, 8
 * 00000001406B64CC: call    loc_1406B64BF
 * 00000001406B64D1: add     rsp, 8
 * 00000001406B64D5: call    loc_1406B64C8
 * 00000001406B64DA: add     rsp, 8
 * 00000001406B64DE: call    loc_1406B64D1
 * 00000001406B64E3: add     rsp, 8
 * 00000001406B64E7: call    loc_1406B64DA
 * 00000001406B64EC: add     rsp, 8
 * 00000001406B64F0: call    loc_1406B64E3
 * 00000001406B64F5: add     rsp, 8
 * 00000001406B64F9: call    loc_1406B64EC
 * 00000001406B64FE: add     rsp, 8
 * 00000001406B6502: call    loc_1406B64F5
 * 00000001406B6507: add     rsp, 8
 * 00000001406B650B: call    loc_1406B64FE
 * 00000001406B6510: add     rsp, 8
 * 00000001406B6514: call    loc_1406B6507
 * 00000001406B6519: add     rsp, 8
 * 00000001406B651D: call    loc_1406B6510
 * 00000001406B6522: add     rsp, 8
 * 00000001406B6526: call    loc_1406B6519
 * 00000001406B652B: add     rsp, 8
 * 00000001406B652F: call    loc_1406B6522
 * 00000001406B6534: add     rsp, 8
 * 00000001406B6538: call    loc_1406B652B
 * 00000001406B653D: add     rsp, 8
 * 00000001406B6541: call    loc_1406B6534
 * 00000001406B6546: add     rsp, 8
 * 00000001406B654A: call    loc_1406B653D
 * 00000001406B654F: add     rsp, 8
 * 00000001406B6553: call    loc_1406B6546
 * 00000001406B6558: add     rsp, 8
 * 00000001406B655C: call    loc_1406B654F
 * 00000001406B6561: add     rsp, 8
 * 00000001406B6565: call    loc_1406B6558
 * 00000001406B656A: add     rsp, 8
 * 00000001406B656E: call    loc_1406B6561
 * 00000001406B6573: add     rsp, 8
 * 00000001406B6577: call    loc_1406B656A
 * 00000001406B657C: add     rsp, 8
 * 00000001406B6580: call    loc_1406B6573
 * 00000001406B6585: add     rsp, 8
 * 00000001406B6589: call    loc_1406B657C
 * 00000001406B658E: add     rsp, 8
 * 00000001406B6592: call    loc_1406B6585
 * 00000001406B6597: add     rsp, 8
 * 00000001406B659B: call    loc_1406B658E
 * 00000001406B65A0: add     rsp, 8
 * 00000001406B65A4: call    loc_1406B6597
 * 00000001406B65A9: add     rsp, 8
 * 00000001406B65AD: call    loc_1406B65A0
 * 00000001406B65B2: add     rsp, 8
 * 00000001406B65B6: mov     eax, 0DADAh
 * 00000001406B65BB: test    byte ptr gs:85Ch, 8
 * 00000001406B65C4: jz      short loc_1406B65CD
 * 00000001406B65C6: mov     al, 20h ; ' '
 * 00000001406B65C8: incsspq rax
 * 00000001406B65CD: test    edx, 80h
 * 00000001406B65D3: jz      short loc_1406B65DD
 * 00000001406B65D5: lfence
 * 00000001406B65D8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B65DD: lfence
 * 00000001406B65E0: mov     byte ptr gs:85Eh, 0
 * 00000001406B65E9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B65F0: jz      short loc_1406B6611
 * 00000001406B65F2: mov     ecx, 6A7h
 * 00000001406B65F7: rdmsr
 * 00000001406B65F9: cmp     edx, 0
 * 00000001406B65FC: jz      short loc_1406B6611
 * 00000001406B65FE: mov     ecx, edx
 * 00000001406B6600: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B6606: cmp     edx, ecx
 * 00000001406B6608: jz      short loc_1406B6611
 * 00000001406B660A: mov     ecx, 6A7h
 * 00000001406B660F: wrmsr
 * 00000001406B6611: test    byte ptr [r10+3], 3
 * 00000001406B6616: mov     [rbp+0E8h+var_68], 0
 * 00000001406B661F: jz      short loc_1406B6626
 * 00000001406B6621: call    KiSaveDebugRegisterState
 * 00000001406B6626: cld
 * 00000001406B6627: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406B662B: ldmxcsr dword ptr gs:180h
 * 00000001406B6634: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406B6638: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406B663C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406B6640: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406B6644: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406B6648: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406B664C: test    [rbp+0E8h+arg_0], 1
 * 00000001406B6653: jz      short loc_1406B665A
 * 00000001406B6655: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B665A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B6661: jz      short loc_1406B666F
 * 00000001406B6663: test    [rbp+0E8h+arg_0], 1
 * 00000001406B666A: jz      short loc_1406B666F
 * 00000001406B666C: stac
 * 00000001406B666F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406B6679: jz      short loc_1406B667C
 * 00000001406B667B: sti
 * 00000001406B667C: test    cs:KiCpuTracingFlags, 2
 * 00000001406B6686: jz      short loc_1406B669B
 * 00000001406B6688: mov     ecx, 1D9h
 * 00000001406B668D: rdmsr
 * 00000001406B668F: or      eax, 1
 * 00000001406B6692: wrmsr
 * 00000001406B6694: xor     edx, edx
 * 00000001406B6696: jmp     loc_1406B676A
 * 00000001406B669B: xor     edx, edx
 * 00000001406B669D: test    [rbp+0E8h+arg_8], 100h
 * 00000001406B66A7: jz      loc_1406B676A
 * 00000001406B66AD: test    byte ptr gs:9122h, 2
 * 00000001406B66B6: jz      loc_1406B676A
 * 00000001406B66BC: test    [rbp+0E8h+arg_0], 1
 * 00000001406B66C3: jnz     short loc_1406B671C
 * 00000001406B66C5: mov     rax, dr7
 * 00000001406B66C8: test    ax, 200h
 * 00000001406B66CC: jz      loc_1406B676A
 * 00000001406B66D2: test    ax, 100h
 * 00000001406B66D6: jz      loc_1406B676A
 * 00000001406B66DC: mov     r8d, cs:KiLastBranchTOSMSR
 * 00000001406B66E3: or      r8d, r8d
 * 00000001406B66E6: jz      short loc_1406B66F0
 * 00000001406B66E8: mov     ecx, r8d
 * 00000001406B66EB: rdmsr
 * 00000001406B66ED: mov     r8d, eax
 * 00000001406B66F0: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 00000001406B66F6: add     ecx, r8d
 * 00000001406B66F9: rdmsr
 * 00000001406B66FB: mov     r9d, eax
 * 00000001406B66FE: shl     rdx, 20h
 * 00000001406B6702: mov     ecx, cs:KiLastBranchToBaseMSR
 * 00000001406B6708: or      r9, rdx
 * 00000001406B670B: add     ecx, r8d
 * 00000001406B670E: rdmsr
 * 00000001406B6710: mov     r10d, eax
 * 00000001406B6713: shl     rdx, 20h
 * 00000001406B6717: or      r10, rdx
 * 00000001406B671A: jmp     short loc_1406B6765
 * 00000001406B671C: test    [rbp+0E8h+var_68], 200h
 * 00000001406B6725: jz      short loc_1406B676A
 * 00000001406B6727: test    [rbp+0E8h+var_68], 100h
 * 00000001406B6730: jz      short loc_1406B676A
 * 00000001406B6732: and     [rbp+0E8h+var_40], 0
 * 00000001406B673A: and     [rbp+0E8h+var_48], 0
 * 00000001406B6742: mov     rcx, cs:MmUserProbeAddress
 * 00000001406B6749: mov     r9, [rbp+0E8h+var_50]
 * 00000001406B6750: cmp     r9, rcx
 * 00000001406B6753: cmovnb  r9, rcx
 * 00000001406B6757: mov     r10, [rbp+0E8h+var_58]
 * 00000001406B675E: cmp     r10, rcx
 * 00000001406B6761: cmovnb  r10, rcx
 * 00000001406B6765: mov     edx, 2
 * 00000001406B676A: mov     ecx, 80000004h
 * 00000001406B676F: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 00000001406B6779: mov     r8, [rbp+0E8h]
 * 00000001406B6780: call    KiExceptionDispatch
 * 00000001406B6785: nop
 * 00000001406B6786: retn
 */
