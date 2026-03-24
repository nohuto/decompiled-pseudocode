/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x1406B18C0
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140BAAD40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x1406B18C0 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x1406B3F40 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x1406B18C0
 * Reason: Hex-Rays returned no pseudocode for 0x1406B18C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B18C0: sub     qword ptr [rsp+0], 2
 * 00000001406B18C5: cmp     [rsp+arg_0], 23h ; '#'
 * 00000001406B18CB: jnz     short loc_1406B18D2
 * 00000001406B18CD: and     dword ptr [rsp+4], 0
 * 00000001406B18D2: sub     rsp, 8
 * 00000001406B18D6: push    rbp
 * 00000001406B18D7: sub     rsp, 158h
 * 00000001406B18DE: lea     rbp, [rsp+168h+var_E8]
 * 00000001406B18E6: mov     byte ptr [rbp-55h], 1
 * 00000001406B18EA: mov     [rbp-50h], rax
 * 00000001406B18EE: mov     [rbp-48h], rcx
 * 00000001406B18F2: mov     [rbp-40h], rdx
 * 00000001406B18F6: mov     [rbp-38h], r8
 * 00000001406B18FA: mov     [rbp-30h], r9
 * 00000001406B18FE: mov     [rbp-28h], r10
 * 00000001406B1902: mov     [rbp-20h], r11
 * 00000001406B1906: test    byte ptr [rbp+0F0h], 1
 * 00000001406B190D: jnz     short loc_1406B1947
 * 00000001406B190F: xor     edx, edx
 * 00000001406B1911: rdsspq  rdx
 * 00000001406B1916: mov     [rbp+58h], rdx
 * 00000001406B191A: lfence
 * 00000001406B191D: test    byte ptr gs:858h, 1
 * 00000001406B1926: jnz     short loc_1406B1930
 * 00000001406B1928: lfence
 * 00000001406B192B: jmp     loc_1406B1BB8
 * 00000001406B1930: movzx   eax, word ptr gs:866h
 * 00000001406B1939: mov     ecx, 48h ; 'H'
 * 00000001406B193E: xor     edx, edx
 * 00000001406B1940: wrmsr
 * 00000001406B1942: jmp     loc_1406B1BB8
 * 00000001406B1947: test    cs:KiKvaShadow, 1
 * 00000001406B194E: jnz     short loc_1406B1953
 * 00000001406B1950: swapgs
 * 00000001406B1953: lfence
 * 00000001406B1956: mov     rcx, gs:9D28h
 * 00000001406B195F: test    rcx, rcx
 * 00000001406B1962: jz      short loc_1406B1983
 * 00000001406B1964: rdsspq  rdx
 * 00000001406B1969: mov     r10, gs:9D20h
 * 00000001406B1972: add     r10, 8
 * 00000001406B1976: cmp     rdx, r10
 * 00000001406B1979: jnz     short loc_1406B1983
 * 00000001406B197B: rstorssp qword ptr [rcx]
 * 00000001406B197F: saveprevssp
 * 00000001406B1983: mov     r10, gs:188h
 * 00000001406B198C: mov     rcx, gs:188h
 * 00000001406B1995: mov     rcx, [rcx+220h]
 * 00000001406B199C: mov     rcx, [rcx+760h]
 * 00000001406B19A3: mov     gs:850h, rcx
 * 00000001406B19AC: mov     cx, gs:862h
 * 00000001406B19B5: mov     gs:864h, cx
 * 00000001406B19BE: mov     cl, gs:858h
 * 00000001406B19C6: mov     gs:85Ah, cl
 * 00000001406B19CE: movzx   eax, word ptr gs:868h
 * 00000001406B19D7: cmp     gs:866h, ax
 * 00000001406B19E0: jz      short loc_1406B19F4
 * 00000001406B19E2: mov     gs:866h, ax
 * 00000001406B19EB: mov     ecx, 48h ; 'H'
 * 00000001406B19F0: xor     edx, edx
 * 00000001406B19F2: wrmsr
 * 00000001406B19F4: movzx   edx, byte ptr gs:858h
 * 00000001406B19FD: test    edx, 8
 * 00000001406B1A03: jz      short loc_1406B1A1C
 * 00000001406B1A05: mov     eax, 1
 * 00000001406B1A0A: xor     edx, edx
 * 00000001406B1A0C: mov     ecx, 49h ; 'I'
 * 00000001406B1A11: wrmsr
 * 00000001406B1A13: movzx   edx, byte ptr gs:858h
 * 00000001406B1A1C: test    edx, 2
 * 00000001406B1A22: jz      loc_1406B1B5F
 * 00000001406B1A28: call    loc_1406B1B3B
 * 00000001406B1A2D: add     rsp, 8
 * 00000001406B1A31: call    loc_1406B1B44
 * 00000001406B1A36: add     rsp, 8
 * 00000001406B1A3A: call    loc_1406B1A2D
 * 00000001406B1A3F: add     rsp, 8
 * 00000001406B1A43: call    loc_1406B1A36
 * 00000001406B1A48: add     rsp, 8
 * 00000001406B1A4C: call    loc_1406B1A3F
 * 00000001406B1A51: add     rsp, 8
 * 00000001406B1A55: call    loc_1406B1A48
 * 00000001406B1A5A: add     rsp, 8
 * 00000001406B1A5E: call    loc_1406B1A51
 * 00000001406B1A63: add     rsp, 8
 * 00000001406B1A67: call    loc_1406B1A5A
 * 00000001406B1A6C: add     rsp, 8
 * 00000001406B1A70: call    loc_1406B1A63
 * 00000001406B1A75: add     rsp, 8
 * 00000001406B1A79: call    loc_1406B1A6C
 * 00000001406B1A7E: add     rsp, 8
 * 00000001406B1A82: call    loc_1406B1A75
 * 00000001406B1A87: add     rsp, 8
 * 00000001406B1A8B: call    loc_1406B1A7E
 * 00000001406B1A90: add     rsp, 8
 * 00000001406B1A94: call    loc_1406B1A87
 * 00000001406B1A99: add     rsp, 8
 * 00000001406B1A9D: call    loc_1406B1A90
 * 00000001406B1AA2: add     rsp, 8
 * 00000001406B1AA6: call    loc_1406B1A99
 * 00000001406B1AAB: add     rsp, 8
 * 00000001406B1AAF: call    loc_1406B1AA2
 * 00000001406B1AB4: add     rsp, 8
 * 00000001406B1AB8: call    loc_1406B1AAB
 * 00000001406B1ABD: add     rsp, 8
 * 00000001406B1AC1: call    loc_1406B1AB4
 * 00000001406B1AC6: add     rsp, 8
 * 00000001406B1ACA: call    loc_1406B1ABD
 * 00000001406B1ACF: add     rsp, 8
 * 00000001406B1AD3: call    loc_1406B1AC6
 * 00000001406B1AD8: add     rsp, 8
 * 00000001406B1ADC: call    loc_1406B1ACF
 * 00000001406B1AE1: add     rsp, 8
 * 00000001406B1AE5: call    loc_1406B1AD8
 * 00000001406B1AEA: add     rsp, 8
 * 00000001406B1AEE: call    loc_1406B1AE1
 * 00000001406B1AF3: add     rsp, 8
 * 00000001406B1AF7: call    loc_1406B1AEA
 * 00000001406B1AFC: add     rsp, 8
 * 00000001406B1B00: call    loc_1406B1AF3
 * 00000001406B1B05: add     rsp, 8
 * 00000001406B1B09: call    loc_1406B1AFC
 * 00000001406B1B0E: add     rsp, 8
 * 00000001406B1B12: call    loc_1406B1B05
 * 00000001406B1B17: add     rsp, 8
 * 00000001406B1B1B: call    loc_1406B1B0E
 * 00000001406B1B20: add     rsp, 8
 * 00000001406B1B24: call    loc_1406B1B17
 * 00000001406B1B29: add     rsp, 8
 * 00000001406B1B2D: call    loc_1406B1B20
 * 00000001406B1B32: add     rsp, 8
 * 00000001406B1B36: call    loc_1406B1B29
 * 00000001406B1B3B: add     rsp, 8
 * 00000001406B1B3F: call    loc_1406B1B32
 * 00000001406B1B44: add     rsp, 8
 * 00000001406B1B48: mov     eax, 0DADAh
 * 00000001406B1B4D: test    byte ptr gs:85Ch, 8
 * 00000001406B1B56: jz      short loc_1406B1B5F
 * 00000001406B1B58: mov     al, 20h ; ' '
 * 00000001406B1B5A: incsspq rax
 * 00000001406B1B5F: test    edx, 80h
 * 00000001406B1B65: jz      short loc_1406B1B6F
 * 00000001406B1B67: lfence
 * 00000001406B1B6A: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406B1B6F: lfence
 * 00000001406B1B72: mov     byte ptr gs:85Eh, 0
 * 00000001406B1B7B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406B1B82: jz      short loc_1406B1BA3
 * 00000001406B1B84: mov     ecx, 6A7h
 * 00000001406B1B89: rdmsr
 * 00000001406B1B8B: cmp     edx, 0
 * 00000001406B1B8E: jz      short loc_1406B1BA3
 * 00000001406B1B90: mov     ecx, edx
 * 00000001406B1B92: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406B1B98: cmp     edx, ecx
 * 00000001406B1B9A: jz      short loc_1406B1BA3
 * 00000001406B1B9C: mov     ecx, 6A7h
 * 00000001406B1BA1: wrmsr
 * 00000001406B1BA3: test    byte ptr [r10+3], 3
 * 00000001406B1BA8: mov     word ptr [rbp+80h], 0
 * 00000001406B1BB1: jz      short loc_1406B1BB8
 * 00000001406B1BB3: call    KiSaveDebugRegisterState
 * 00000001406B1BB8: cld
 * 00000001406B1BB9: stmxcsr dword ptr [rbp-54h]
 * 00000001406B1BBD: ldmxcsr dword ptr gs:180h
 * 00000001406B1BC6: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B1BCA: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406B1BCE: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406B1BD2: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406B1BD6: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406B1BDA: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406B1BDE: test    byte ptr [rbp+0F0h], 1
 * 00000001406B1BE5: jz      short loc_1406B1BEC
 * 00000001406B1BE7: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406B1BEC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B1BF3: jz      short loc_1406B1C01
 * 00000001406B1BF5: test    byte ptr [rbp+0F0h], 1
 * 00000001406B1BFC: jz      short loc_1406B1C01
 * 00000001406B1BFE: stac
 * 00000001406B1C01: test    dword ptr [rbp+0F8h], 200h
 * 00000001406B1C0B: jz      short loc_1406B1C0E
 * 00000001406B1C0D: sti
 * 00000001406B1C0E: mov     r9, [rbp-48h]
 * 00000001406B1C12: mov     ecx, 0C0000409h
 * 00000001406B1C17: mov     edx, 1
 * 00000001406B1C1C: mov     r8, [rbp+0E8h]
 * 00000001406B1C23: call    KiFastFailDispatch
 * 00000001406B1C28: nop
 * 00000001406B1C29: retn
 */
