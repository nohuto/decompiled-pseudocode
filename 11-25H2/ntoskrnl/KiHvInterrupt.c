/*
 * XREFs of KiHvInterrupt @ 0x1406A4670
 * Callers:
 *     KiHvInterruptShadow @ 0x140BAAFC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140400C70 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405B8E30 (KeWakeProcessor.c)
 *     KiHvInterrupt @ 0x1406A4670 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x1406A4670
 * Reason: Hex-Rays returned no pseudocode for 0x1406A4670
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A4670: push    0
 * 00000001406A4672: push    rbp
 * 00000001406A4673: push    rsi
 * 00000001406A4674: sub     rsp, 150h
 * 00000001406A467B: lea     rbp, [rsp+168h+var_E8]
 * 00000001406A4683: mov     byte ptr [rbp-55h], 0
 * 00000001406A4687: mov     [rbp-50h], rax
 * 00000001406A468B: mov     [rbp-48h], rcx
 * 00000001406A468F: mov     [rbp-40h], rdx
 * 00000001406A4693: mov     [rbp-38h], r8
 * 00000001406A4697: mov     [rbp-30h], r9
 * 00000001406A469B: mov     [rbp-28h], r10
 * 00000001406A469F: mov     [rbp-20h], r11
 * 00000001406A46A3: test    byte ptr [rbp+0F0h], 1
 * 00000001406A46AA: jnz     short loc_1406A46E4
 * 00000001406A46AC: xor     edx, edx
 * 00000001406A46AE: rdsspq  rdx
 * 00000001406A46B3: mov     [rbp+58h], rdx
 * 00000001406A46B7: lfence
 * 00000001406A46BA: test    byte ptr gs:858h, 1
 * 00000001406A46C3: jnz     short loc_1406A46CD
 * 00000001406A46C5: lfence
 * 00000001406A46C8: jmp     loc_1406A4955
 * 00000001406A46CD: movzx   eax, word ptr gs:866h
 * 00000001406A46D6: mov     ecx, 48h ; 'H'
 * 00000001406A46DB: xor     edx, edx
 * 00000001406A46DD: wrmsr
 * 00000001406A46DF: jmp     loc_1406A4955
 * 00000001406A46E4: test    cs:KiKvaShadow, 1
 * 00000001406A46EB: jnz     short loc_1406A46F0
 * 00000001406A46ED: swapgs
 * 00000001406A46F0: lfence
 * 00000001406A46F3: mov     rcx, gs:9D28h
 * 00000001406A46FC: test    rcx, rcx
 * 00000001406A46FF: jz      short loc_1406A4720
 * 00000001406A4701: rdsspq  rdx
 * 00000001406A4706: mov     r10, gs:9D20h
 * 00000001406A470F: add     r10, 8
 * 00000001406A4713: cmp     rdx, r10
 * 00000001406A4716: jnz     short loc_1406A4720
 * 00000001406A4718: rstorssp qword ptr [rcx]
 * 00000001406A471C: saveprevssp
 * 00000001406A4720: mov     r10, gs:188h
 * 00000001406A4729: mov     rcx, gs:188h
 * 00000001406A4732: mov     rcx, [rcx+220h]
 * 00000001406A4739: mov     rcx, [rcx+760h]
 * 00000001406A4740: mov     gs:850h, rcx
 * 00000001406A4749: mov     cx, gs:862h
 * 00000001406A4752: mov     gs:864h, cx
 * 00000001406A475B: mov     cl, gs:858h
 * 00000001406A4763: mov     gs:85Ah, cl
 * 00000001406A476B: movzx   eax, word ptr gs:868h
 * 00000001406A4774: cmp     gs:866h, ax
 * 00000001406A477D: jz      short loc_1406A4791
 * 00000001406A477F: mov     gs:866h, ax
 * 00000001406A4788: mov     ecx, 48h ; 'H'
 * 00000001406A478D: xor     edx, edx
 * 00000001406A478F: wrmsr
 * 00000001406A4791: movzx   edx, byte ptr gs:858h
 * 00000001406A479A: test    edx, 8
 * 00000001406A47A0: jz      short loc_1406A47B9
 * 00000001406A47A2: mov     eax, 1
 * 00000001406A47A7: xor     edx, edx
 * 00000001406A47A9: mov     ecx, 49h ; 'I'
 * 00000001406A47AE: wrmsr
 * 00000001406A47B0: movzx   edx, byte ptr gs:858h
 * 00000001406A47B9: test    edx, 2
 * 00000001406A47BF: jz      loc_1406A48FC
 * 00000001406A47C5: call    loc_1406A48D8
 * 00000001406A47CA: add     rsp, 8
 * 00000001406A47CE: call    loc_1406A48E1
 * 00000001406A47D3: add     rsp, 8
 * 00000001406A47D7: call    loc_1406A47CA
 * 00000001406A47DC: add     rsp, 8
 * 00000001406A47E0: call    loc_1406A47D3
 * 00000001406A47E5: add     rsp, 8
 * 00000001406A47E9: call    loc_1406A47DC
 * 00000001406A47EE: add     rsp, 8
 * 00000001406A47F2: call    loc_1406A47E5
 * 00000001406A47F7: add     rsp, 8
 * 00000001406A47FB: call    loc_1406A47EE
 * 00000001406A4800: add     rsp, 8
 * 00000001406A4804: call    loc_1406A47F7
 * 00000001406A4809: add     rsp, 8
 * 00000001406A480D: call    loc_1406A4800
 * 00000001406A4812: add     rsp, 8
 * 00000001406A4816: call    loc_1406A4809
 * 00000001406A481B: add     rsp, 8
 * 00000001406A481F: call    loc_1406A4812
 * 00000001406A4824: add     rsp, 8
 * 00000001406A4828: call    loc_1406A481B
 * 00000001406A482D: add     rsp, 8
 * 00000001406A4831: call    loc_1406A4824
 * 00000001406A4836: add     rsp, 8
 * 00000001406A483A: call    loc_1406A482D
 * 00000001406A483F: add     rsp, 8
 * 00000001406A4843: call    loc_1406A4836
 * 00000001406A4848: add     rsp, 8
 * 00000001406A484C: call    loc_1406A483F
 * 00000001406A4851: add     rsp, 8
 * 00000001406A4855: call    loc_1406A4848
 * 00000001406A485A: add     rsp, 8
 * 00000001406A485E: call    loc_1406A4851
 * 00000001406A4863: add     rsp, 8
 * 00000001406A4867: call    loc_1406A485A
 * 00000001406A486C: add     rsp, 8
 * 00000001406A4870: call    loc_1406A4863
 * 00000001406A4875: add     rsp, 8
 * 00000001406A4879: call    loc_1406A486C
 * 00000001406A487E: add     rsp, 8
 * 00000001406A4882: call    loc_1406A4875
 * 00000001406A4887: add     rsp, 8
 * 00000001406A488B: call    loc_1406A487E
 * 00000001406A4890: add     rsp, 8
 * 00000001406A4894: call    loc_1406A4887
 * 00000001406A4899: add     rsp, 8
 * 00000001406A489D: call    loc_1406A4890
 * 00000001406A48A2: add     rsp, 8
 * 00000001406A48A6: call    loc_1406A4899
 * 00000001406A48AB: add     rsp, 8
 * 00000001406A48AF: call    loc_1406A48A2
 * 00000001406A48B4: add     rsp, 8
 * 00000001406A48B8: call    loc_1406A48AB
 * 00000001406A48BD: add     rsp, 8
 * 00000001406A48C1: call    loc_1406A48B4
 * 00000001406A48C6: add     rsp, 8
 * 00000001406A48CA: call    loc_1406A48BD
 * 00000001406A48CF: add     rsp, 8
 * 00000001406A48D3: call    loc_1406A48C6
 * 00000001406A48D8: add     rsp, 8
 * 00000001406A48DC: call    loc_1406A48CF
 * 00000001406A48E1: add     rsp, 8
 * 00000001406A48E5: mov     eax, 0DADAh
 * 00000001406A48EA: test    byte ptr gs:85Ch, 8
 * 00000001406A48F3: jz      short loc_1406A48FC
 * 00000001406A48F5: mov     al, 20h ; ' '
 * 00000001406A48F7: incsspq rax
 * 00000001406A48FC: test    edx, 80h
 * 00000001406A4902: jz      short loc_1406A490C
 * 00000001406A4904: lfence
 * 00000001406A4907: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406A490C: lfence
 * 00000001406A490F: mov     byte ptr gs:85Eh, 0
 * 00000001406A4918: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406A491F: jz      short loc_1406A4940
 * 00000001406A4921: mov     ecx, 6A7h
 * 00000001406A4926: rdmsr
 * 00000001406A4928: cmp     edx, 0
 * 00000001406A492B: jz      short loc_1406A4940
 * 00000001406A492D: mov     ecx, edx
 * 00000001406A492F: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406A4935: cmp     edx, ecx
 * 00000001406A4937: jz      short loc_1406A4940
 * 00000001406A4939: mov     ecx, 6A7h
 * 00000001406A493E: wrmsr
 * 00000001406A4940: test    byte ptr [r10+3], 3
 * 00000001406A4945: mov     word ptr [rbp+80h], 0
 * 00000001406A494E: jz      short loc_1406A4955
 * 00000001406A4950: call    KiSaveDebugRegisterState
 * 00000001406A4955: cld
 * 00000001406A4956: stmxcsr dword ptr [rbp-54h]
 * 00000001406A495A: ldmxcsr dword ptr gs:180h
 * 00000001406A4963: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406A4967: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406A496B: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406A496F: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406A4973: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406A4977: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406A497B: test    byte ptr [rbp+0F0h], 1
 * 00000001406A4982: jz      short loc_1406A4989
 * 00000001406A4984: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406A4989: cmp     byte ptr gs:87DAh, 0
 * 00000001406A4992: jz      short loc_1406A4999
 * 00000001406A4994: call    KeWakeProcessor
 * 00000001406A4999: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001406A49A0: cmp     rax, [rbp+0E8h]
 * 00000001406A49A7: jnb     short loc_1406A49C2
 * 00000001406A49A9: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001406A49B0: cmp     rax, [rbp+0E8h]
 * 00000001406A49B7: jb      short loc_1406A49C2
 * 00000001406A49B9: lea     rcx, [rbp-80h]
 * 00000001406A49BD: call    KiCheckForSListAddress
 * 00000001406A49C2: xor     esi, esi
 * 00000001406A49C4: inc     dword ptr gs:87C0h
 * 00000001406A49CC: jmp     KiHvInterruptDispatch
 */
