/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x1406ADDC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x14034A8A0 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x14034C150 (KiStartInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406ADDC0 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x1406ADDC0
 * Reason: Hex-Rays returned no pseudocode for 0x1406ADDC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406ADDC0: mov     ecx, 0Fh
 * 00000001406ADDC5: cmp     cs:KiIrqlFlags, 0
 * 00000001406ADDCC: jz      short loc_1406ADDD5
 * 00000001406ADDCE: call    KzSetIrqlUnsafe
 * 00000001406ADDD3: jmp     short loc_1406ADDDD
 * 00000001406ADDD5: mov     rax, cr8
 * 00000001406ADDD9: mov     cr8, rcx
 * 00000001406ADDDD: mov     [rbp-57h], al
 * 00000001406ADDE0: mov     rcx, gs:20h
 * 00000001406ADDE9: xor     edx, edx
 * 00000001406ADDEB: call    KiStartInterruptCycleAccumulation
 * 00000001406ADDF0: sti
 * 00000001406ADDF1: inc     dword ptr [rsi+74h]
 * 00000001406ADDF4: cli
 * 00000001406ADDF5: mov     rcx, gs:20h
 * 00000001406ADDFE: movzx   edx, byte ptr [rbp-57h]
 * 00000001406ADE02: call    KiEndInterruptCycleAccumulation
 * 00000001406ADE07: test    al, al
 * 00000001406ADE09: jz      short loc_1406ADE10
 * 00000001406ADE0B: call    KiDpcInterruptBypass
 * 00000001406ADE10: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406ADE14: cmp     cs:KiIrqlFlags, 0
 * 00000001406ADE1B: jz      short loc_1406ADE24
 * 00000001406ADE1D: call    KzSetIrqlUnsafe
 * 00000001406ADE22: jmp     short loc_1406ADE28
 * 00000001406ADE24: mov     cr8, rcx
 * 00000001406ADE28: mov     rsi, [rbp+0D0h]
 * 00000001406ADE2F: cli
 * 00000001406ADE30: test    byte ptr [rbp+0F0h], 1
 * 00000001406ADE37: jz      loc_1406AE132
 * 00000001406ADE3D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406ADE44: jz      short loc_1406ADE49
 * 00000001406ADE46: stac
 * 00000001406ADE49: mov     rcx, gs:188h
 * 00000001406ADE52: test    byte ptr [rcx+0C2h], 3
 * 00000001406ADE59: jz      short loc_1406ADE76
 * 00000001406ADE5B: mov     ecx, 1
 * 00000001406ADE60: mov     cr8, rcx
 * 00000001406ADE64: sti
 * 00000001406ADE65: call    KiInitiateUserApc
 * 00000001406ADE6A: cli
 * 00000001406ADE6B: mov     ecx, 0
 * 00000001406ADE70: mov     cr8, rcx
 * 00000001406ADE74: jmp     short loc_1406ADE49
 * 00000001406ADE76: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406ADE7B: test    eax, eax
 * 00000001406ADE7D: mov     rax, [rbp-50h]
 * 00000001406ADE81: jnz     short loc_1406ADE49
 * 00000001406ADE83: test    byte ptr gs:860h, 2
 * 00000001406ADE8C: jz      short loc_1406ADE95
 * 00000001406ADE8E: xor     ecx, ecx
 * 00000001406ADE90: call    KiUpdateStibpPairing
 * 00000001406ADE95: mov     rcx, gs:188h
 * 00000001406ADE9E: test    dword ptr [rcx], 8000000h
 * 00000001406ADEA4: jz      short loc_1406ADEAB
 * 00000001406ADEA6: call    KiRestoreSetContextState
 * 00000001406ADEAB: mov     rcx, gs:188h
 * 00000001406ADEB4: test    dword ptr [rcx], 10000h
 * 00000001406ADEBA: jz      short loc_1406ADED0
 * 00000001406ADEBC: test    byte ptr [rcx+2], 1
 * 00000001406ADEC0: jz      short loc_1406ADED0
 * 00000001406ADEC2: call    KiCopyCounters
 * 00000001406ADEC7: mov     rcx, gs:188h
 * 00000001406ADED0: ldmxcsr dword ptr [rbp-54h]
 * 00000001406ADED4: cmp     word ptr [rbp+80h], 0
 * 00000001406ADEDC: jz      short loc_1406ADEE3
 * 00000001406ADEDE: call    KiRestoreDebugRegisterState
 * 00000001406ADEE3: mov     rcx, gs:188h
 * 00000001406ADEEC: bt      dword ptr [rcx+74h], 16h
 * 00000001406ADEF1: jnb     short loc_1406ADF1D
 * 00000001406ADEF3: xor     ecx, ecx
 * 00000001406ADEF5: rdsspq  rcx
 * 00000001406ADEFA: mov     r8, gs:9D28h
 * 00000001406ADF03: add     r8, 8
 * 00000001406ADF07: cmp     rcx, r8
 * 00000001406ADF0A: jnz     short loc_1406ADF1D
 * 00000001406ADF0C: mov     rcx, gs:9D20h
 * 00000001406ADF15: rstorssp qword ptr [rcx]
 * 00000001406ADF19: saveprevssp
 * 00000001406ADF1D: mov     byte ptr gs:85Eh, 0
 * 00000001406ADF26: movzx   eax, word ptr gs:86Ch
 * 00000001406ADF2F: cmp     gs:866h, ax
 * 00000001406ADF38: jz      short loc_1406ADF4C
 * 00000001406ADF3A: mov     gs:866h, ax
 * 00000001406ADF43: mov     ecx, 48h ; 'H'
 * 00000001406ADF48: xor     edx, edx
 * 00000001406ADF4A: wrmsr
 * 00000001406ADF4C: btr     word ptr gs:858h, 2
 * 00000001406ADF57: jnb     short loc_1406ADF67
 * 00000001406ADF59: mov     eax, 1
 * 00000001406ADF5E: xor     edx, edx
 * 00000001406ADF60: mov     ecx, 49h ; 'I'
 * 00000001406ADF65: wrmsr
 * 00000001406ADF67: btr     word ptr gs:858h, 5
 * 00000001406ADF72: jnb     loc_1406AE0AF
 * 00000001406ADF78: call    loc_1406AE08B
 * 00000001406ADF7D: add     rsp, 8
 * 00000001406ADF81: call    loc_1406AE094
 * 00000001406ADF86: add     rsp, 8
 * 00000001406ADF8A: call    loc_1406ADF7D
 * 00000001406ADF8F: add     rsp, 8
 * 00000001406ADF93: call    loc_1406ADF86
 * 00000001406ADF98: add     rsp, 8
 * 00000001406ADF9C: call    loc_1406ADF8F
 * 00000001406ADFA1: add     rsp, 8
 * 00000001406ADFA5: call    loc_1406ADF98
 * 00000001406ADFAA: add     rsp, 8
 * 00000001406ADFAE: call    loc_1406ADFA1
 * 00000001406ADFB3: add     rsp, 8
 * 00000001406ADFB7: call    loc_1406ADFAA
 * 00000001406ADFBC: add     rsp, 8
 * 00000001406ADFC0: call    loc_1406ADFB3
 * 00000001406ADFC5: add     rsp, 8
 * 00000001406ADFC9: call    loc_1406ADFBC
 * 00000001406ADFCE: add     rsp, 8
 * 00000001406ADFD2: call    loc_1406ADFC5
 * 00000001406ADFD7: add     rsp, 8
 * 00000001406ADFDB: call    loc_1406ADFCE
 * 00000001406ADFE0: add     rsp, 8
 * 00000001406ADFE4: call    loc_1406ADFD7
 * 00000001406ADFE9: add     rsp, 8
 * 00000001406ADFED: call    loc_1406ADFE0
 * 00000001406ADFF2: add     rsp, 8
 * 00000001406ADFF6: call    loc_1406ADFE9
 * 00000001406ADFFB: add     rsp, 8
 * 00000001406ADFFF: call    loc_1406ADFF2
 * 00000001406AE004: add     rsp, 8
 * 00000001406AE008: call    loc_1406ADFFB
 * 00000001406AE00D: add     rsp, 8
 * 00000001406AE011: call    loc_1406AE004
 * 00000001406AE016: add     rsp, 8
 * 00000001406AE01A: call    loc_1406AE00D
 * 00000001406AE01F: add     rsp, 8
 * 00000001406AE023: call    loc_1406AE016
 * 00000001406AE028: add     rsp, 8
 * 00000001406AE02C: call    loc_1406AE01F
 * 00000001406AE031: add     rsp, 8
 * 00000001406AE035: call    loc_1406AE028
 * 00000001406AE03A: add     rsp, 8
 * 00000001406AE03E: call    loc_1406AE031
 * 00000001406AE043: add     rsp, 8
 * 00000001406AE047: call    loc_1406AE03A
 * 00000001406AE04C: add     rsp, 8
 * 00000001406AE050: call    loc_1406AE043
 * 00000001406AE055: add     rsp, 8
 * 00000001406AE059: call    loc_1406AE04C
 * 00000001406AE05E: add     rsp, 8
 * 00000001406AE062: call    loc_1406AE055
 * 00000001406AE067: add     rsp, 8
 * 00000001406AE06B: call    loc_1406AE05E
 * 00000001406AE070: add     rsp, 8
 * 00000001406AE074: call    loc_1406AE067
 * 00000001406AE079: add     rsp, 8
 * 00000001406AE07D: call    loc_1406AE070
 * 00000001406AE082: add     rsp, 8
 * 00000001406AE086: call    loc_1406AE079
 * 00000001406AE08B: add     rsp, 8
 * 00000001406AE08F: call    loc_1406AE082
 * 00000001406AE094: add     rsp, 8
 * 00000001406AE098: mov     eax, 0DADAh
 * 00000001406AE09D: test    byte ptr gs:85Ch, 8
 * 00000001406AE0A6: jz      short loc_1406AE0AF
 * 00000001406AE0A8: mov     al, 20h ; ' '
 * 00000001406AE0AA: incsspq rax
 * 00000001406AE0AF: test    word ptr gs:858h, 100h
 * 00000001406AE0BA: jz      short loc_1406AE0C8
 * 00000001406AE0BC: xor     eax, eax
 * 00000001406AE0BE: xor     edx, edx
 * 00000001406AE0C0: mov     ecx, 1
 * 00000001406AE0C5: div     rcx
 * 00000001406AE0C8: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AE0CC: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AE0D0: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AE0D4: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AE0D8: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AE0DC: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AE0E0: mov     r11, [rbp-20h]
 * 00000001406AE0E4: mov     r10, [rbp-28h]
 * 00000001406AE0E8: mov     r9, [rbp-30h]
 * 00000001406AE0EC: mov     r8, [rbp-38h]
 * 00000001406AE0F0: mov     rdx, [rbp-40h]
 * 00000001406AE0F4: mov     rcx, [rbp-48h]
 * 00000001406AE0F8: mov     rax, [rbp-50h]
 * 00000001406AE0FC: mov     rsp, rbp
 * 00000001406AE0FF: mov     rbp, [rbp+0D8h]
 * 00000001406AE106: add     rsp, 0E8h
 * 00000001406AE10D: test    cs:KiKvaShadow, 1
 * 00000001406AE114: jz      short loc_1406AE11B
 * 00000001406AE116: jmp     KiKernelExit
 * 00000001406AE11B: test    word ptr gs:858h, 200h
 * 00000001406AE126: jz      short loc_1406AE12D
 * 00000001406AE128: verw    [rsp-1E8h+arg_200]
 * 00000001406AE12D: swapgs
 * 00000001406AE130: iretq
 * 00000001406AE132: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AE136: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AE13A: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AE13E: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AE142: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AE146: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AE14A: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AE14E: mov     r11, [rbp-20h]
 * 00000001406AE152: mov     r10, [rbp-28h]
 * 00000001406AE156: mov     r9, [rbp-30h]
 * 00000001406AE15A: mov     r8, [rbp-38h]
 * 00000001406AE15E: mov     rdx, [rbp-40h]
 * 00000001406AE162: mov     rcx, [rbp-48h]
 * 00000001406AE166: mov     rax, [rbp-50h]
 * 00000001406AE16A: mov     rsp, rbp
 * 00000001406AE16D: mov     rbp, [rbp+0D8h]
 * 00000001406AE174: add     rsp, 0E8h
 * 00000001406AE17B: iretq
 */
