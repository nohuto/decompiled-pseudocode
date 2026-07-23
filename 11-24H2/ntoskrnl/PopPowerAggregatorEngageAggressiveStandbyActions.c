/*
 * XREFs of PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1407577FC
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x140757974 (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14075BA58 (PopNetSetConnectivityConstraint.c)
 *     PopPdcEngagePhases @ 0x14075C414 (PopPdcEngagePhases.c)
 *     PopIsRemoteDesktopEnabled @ 0x140AB8684 (PopIsRemoteDesktopEnabled.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1407577FC
 * Reason: Hex-Rays returned no pseudocode for 0x1407577FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407577FC: mov     [rsp+arg_8], rbx
 * 0000000140757801: mov     [rsp+arg_10], rbp
 * 0000000140757806: push    rsi
 * 0000000140757807: push    rdi
 * 0000000140757808: push    r12
 * 000000014075780A: push    r14
 * 000000014075780C: push    r15
 * 000000014075780E: sub     rsp, 20h
 * 0000000140757812: mov     bpl, cl
 * 0000000140757815: mov     esi, 3Ah ; ':'
 * 000000014075781A: call    PopAcquirePolicyLock
 * 000000014075781F: mov     r12b, cs:PopNetBIRequestActive
 * 0000000140757826: call    PopIsRemoteDesktopEnabled
 * 000000014075782B: mov     edi, cs:dword_140F0B3D8
 * 0000000140757831: xor     r14b, r14b
 * 0000000140757834: mov     r15b, al
 * 0000000140757837: test    edi, edi
 * 0000000140757839: jz      short loc_140757894
 * 000000014075783B: test    bpl, bpl
 * 000000014075783E: jnz     short loc_140757894
 * 0000000140757840: cmp     edi, 2
 * 0000000140757843: jnz     loc_1407578D6
 * 0000000140757849: test    r12b, r12b
 * 000000014075784C: lea     ebx, [rsi-39h]
 * 000000014075784F: setnz   al
 * 0000000140757852: test    r15b, r15b
 * 0000000140757855: jz      short loc_14075787C
 * 0000000140757857: cmp     cs:dword_140E678A8, ebx
 * 000000014075785D: movzx   eax, al
 * 0000000140757860: cmovz   eax, ebx
 * 0000000140757863: cmp     cs:dword_140F0B38C, 0
 * 000000014075786A: jnz     short loc_14075787C
 * 000000014075786C: cmp     cs:dword_140E6789C, ebx
 * 0000000140757872: jz      short loc_1407578D6
 * 0000000140757874: cmp     cs:dword_140E678A0, ebx
 * 000000014075787A: jz      short loc_1407578D6
 * 000000014075787C: test    al, al
 * 000000014075787E: jnz     short loc_1407578D6
 * 0000000140757880: mov     ecx, 7
 * 0000000140757885: mov     r14b, bl
 * 0000000140757888: call    PopNetSetConnectivityConstraint
 * 000000014075788D: mov     esi, 32h ; '2'
 * 0000000140757892: jmp     short loc_1407578B7
 * 0000000140757894: mov     ebx, 1
 * 0000000140757899: mov     ecx, ebx
 * 000000014075789B: call    PopNetSetConnectivityConstraint
 * 00000001407578A0: mov     al, bpl
 * 00000001407578A3: mov     r14b, bl
 * 00000001407578A6: neg     al
 * 00000001407578A8: sbb     ecx, ecx
 * 00000001407578AA: and     ecx, 0FFFFFFE0h
 * 00000001407578AD: add     esi, ecx
 * 00000001407578AF: and     esi, 0FFFFFFF7h
 * 00000001407578B2: test    bpl, bpl
 * 00000001407578B5: jnz     short loc_1407578BF
 * 00000001407578B7: cmp     cs:dword_140F0B3DC, ebx
 * 00000001407578BD: jnz     short loc_1407578D6
 * 00000001407578BF: mov     ecx, cs:PopAggressiveStandbyAppliedActions
 * 00000001407578C5: and     esi, 0FFFFFFEDh
 * 00000001407578C8: xor     ecx, cs:PopAggressiveStandbyEnabledActions
 * 00000001407578CE: and     ecx, ebx
 * 00000001407578D0: xor     cs:PopAggressiveStandbyAppliedActions, ecx
 * 00000001407578D6: mov     ecx, cs:PopAggressiveStandbyAppliedActions
 * 00000001407578DC: xor     ecx, cs:PopAggressiveStandbyEnabledActions
 * 00000001407578E2: and     ecx, 4
 * 00000001407578E5: mov     cs:PopIdleWakeSkippingEnabled, 0
 * 00000001407578EC: xor     cs:PopAggressiveStandbyAppliedActions, ecx
 * 00000001407578F2: mov     ecx, cs:PopTimerRebaseThresholdRegValue
 * 00000001407578F8: mov     cs:KeTimerRebaseThresholdOnDripsExit, ecx
 * 00000001407578FE: test    r14b, r14b
 * 0000000140757901: jz      short loc_14075790A
 * 0000000140757903: or      byte ptr cs:word_140E27E18+1, 2
 * 000000014075790A: test    r15b, r15b
 * 000000014075790D: jz      short loc_140757916
 * 000000014075790F: or      byte ptr cs:word_140E27E18+1, 8
 * 0000000140757916: test    r12b, r12b
 * 0000000140757919: jz      short loc_140757922
 * 000000014075791B: or      byte ptr cs:word_140E27E18+1, 10h
 * 0000000140757922: mov     al, byte ptr cs:word_140E27E18+1
 * 0000000140757928: and     dil, 3
 * 000000014075792C: and     cs:dword_140E27E60, 0
 * 0000000140757933: and     al, 9Fh
 * 0000000140757935: shl     dil, 5
 * 0000000140757939: or      dil, al
 * 000000014075793C: mov     cs:dword_140E27D64, ecx
 * 0000000140757942: mov     byte ptr cs:word_140E27E18+1, dil
 * 0000000140757949: call    PopReleasePolicyLock
 * 000000014075794E: mov     ecx, esi
 * 0000000140757950: call    PopPdcEngagePhases
 * 0000000140757955: mov     rbx, [rsp+48h+arg_8]
 * 000000014075795A: mov     rbp, [rsp+48h+arg_10]
 * 000000014075795F: add     rsp, 20h
 * 0000000140757963: pop     r15
 * 0000000140757965: pop     r14
 * 0000000140757967: pop     r12
 * 0000000140757969: pop     rdi
 * 000000014075796A: pop     rsi
 * 000000014075796B: retn
 */
