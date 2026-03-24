/*
 * XREFs of PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14075939C
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x140759514 (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14075CAB8 (PopNetSetConnectivityConstraint.c)
 *     PopPdcEngagePhases @ 0x14075D474 (PopPdcEngagePhases.c)
 *     PopIsRemoteDesktopEnabled @ 0x140ABD614 (PopIsRemoteDesktopEnabled.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14075939C
 * Reason: Hex-Rays returned no pseudocode for 0x14075939C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014075939C: mov     [rsp+arg_8], rbx
 * 00000001407593A1: mov     [rsp+arg_10], rbp
 * 00000001407593A6: push    rsi
 * 00000001407593A7: push    rdi
 * 00000001407593A8: push    r12
 * 00000001407593AA: push    r14
 * 00000001407593AC: push    r15
 * 00000001407593AE: sub     rsp, 20h
 * 00000001407593B2: mov     bpl, cl
 * 00000001407593B5: mov     esi, 3Ah ; ':'
 * 00000001407593BA: call    PopAcquirePolicyLock
 * 00000001407593BF: mov     r12b, cs:PopNetBIRequestActive
 * 00000001407593C6: call    PopIsRemoteDesktopEnabled
 * 00000001407593CB: mov     edi, cs:dword_140F0BA98
 * 00000001407593D1: xor     r14b, r14b
 * 00000001407593D4: mov     r15b, al
 * 00000001407593D7: test    edi, edi
 * 00000001407593D9: jz      short loc_140759434
 * 00000001407593DB: test    bpl, bpl
 * 00000001407593DE: jnz     short loc_140759434
 * 00000001407593E0: cmp     edi, 2
 * 00000001407593E3: jnz     loc_140759476
 * 00000001407593E9: test    r12b, r12b
 * 00000001407593EC: lea     ebx, [rsi-39h]
 * 00000001407593EF: setnz   al
 * 00000001407593F2: test    r15b, r15b
 * 00000001407593F5: jz      short loc_14075941C
 * 00000001407593F7: cmp     cs:dword_140E67720, ebx
 * 00000001407593FD: movzx   eax, al
 * 0000000140759400: cmovz   eax, ebx
 * 0000000140759403: cmp     cs:dword_140F0BA4C, 0
 * 000000014075940A: jnz     short loc_14075941C
 * 000000014075940C: cmp     cs:dword_140E67714, ebx
 * 0000000140759412: jz      short loc_140759476
 * 0000000140759414: cmp     cs:dword_140E67718, ebx
 * 000000014075941A: jz      short loc_140759476
 * 000000014075941C: test    al, al
 * 000000014075941E: jnz     short loc_140759476
 * 0000000140759420: mov     ecx, 7
 * 0000000140759425: mov     r14b, bl
 * 0000000140759428: call    PopNetSetConnectivityConstraint
 * 000000014075942D: mov     esi, 32h ; '2'
 * 0000000140759432: jmp     short loc_140759457
 * 0000000140759434: mov     ebx, 1
 * 0000000140759439: mov     ecx, ebx
 * 000000014075943B: call    PopNetSetConnectivityConstraint
 * 0000000140759440: mov     al, bpl
 * 0000000140759443: mov     r14b, bl
 * 0000000140759446: neg     al
 * 0000000140759448: sbb     ecx, ecx
 * 000000014075944A: and     ecx, 0FFFFFFE0h
 * 000000014075944D: add     esi, ecx
 * 000000014075944F: and     esi, 0FFFFFFF7h
 * 0000000140759452: test    bpl, bpl
 * 0000000140759455: jnz     short loc_14075945F
 * 0000000140759457: cmp     cs:dword_140F0BA9C, ebx
 * 000000014075945D: jnz     short loc_140759476
 * 000000014075945F: mov     ecx, cs:PopAggressiveStandbyAppliedActions
 * 0000000140759465: and     esi, 0FFFFFFEDh
 * 0000000140759468: xor     ecx, cs:PopAggressiveStandbyEnabledActions
 * 000000014075946E: and     ecx, ebx
 * 0000000140759470: xor     cs:PopAggressiveStandbyAppliedActions, ecx
 * 0000000140759476: mov     ecx, cs:PopAggressiveStandbyAppliedActions
 * 000000014075947C: xor     ecx, cs:PopAggressiveStandbyEnabledActions
 * 0000000140759482: and     ecx, 4
 * 0000000140759485: mov     cs:PopIdleWakeSkippingEnabled, 0
 * 000000014075948C: xor     cs:PopAggressiveStandbyAppliedActions, ecx
 * 0000000140759492: mov     ecx, cs:PopTimerRebaseThresholdRegValue
 * 0000000140759498: mov     cs:KeTimerRebaseThresholdOnDripsExit, ecx
 * 000000014075949E: test    r14b, r14b
 * 00000001407594A1: jz      short loc_1407594AA
 * 00000001407594A3: or      byte ptr cs:word_140E27CD8+1, 2
 * 00000001407594AA: test    r15b, r15b
 * 00000001407594AD: jz      short loc_1407594B6
 * 00000001407594AF: or      byte ptr cs:word_140E27CD8+1, 8
 * 00000001407594B6: test    r12b, r12b
 * 00000001407594B9: jz      short loc_1407594C2
 * 00000001407594BB: or      byte ptr cs:word_140E27CD8+1, 10h
 * 00000001407594C2: mov     al, byte ptr cs:word_140E27CD8+1
 * 00000001407594C8: and     dil, 3
 * 00000001407594CC: and     cs:dword_140E27D20, 0
 * 00000001407594D3: and     al, 9Fh
 * 00000001407594D5: shl     dil, 5
 * 00000001407594D9: or      dil, al
 * 00000001407594DC: mov     cs:dword_140E27C24, ecx
 * 00000001407594E2: mov     byte ptr cs:word_140E27CD8+1, dil
 * 00000001407594E9: call    PopReleasePolicyLock
 * 00000001407594EE: mov     ecx, esi
 * 00000001407594F0: call    PopPdcEngagePhases
 * 00000001407594F5: mov     rbx, [rsp+48h+arg_8]
 * 00000001407594FA: mov     rbp, [rsp+48h+arg_10]
 * 00000001407594FF: add     rsp, 20h
 * 0000000140759503: pop     r15
 * 0000000140759505: pop     r14
 * 0000000140759507: pop     r12
 * 0000000140759509: pop     rdi
 * 000000014075950A: pop     rsi
 * 000000014075950B: retn
 */
