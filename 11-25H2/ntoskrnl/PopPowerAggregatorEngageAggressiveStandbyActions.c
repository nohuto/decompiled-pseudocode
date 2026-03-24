/*
 * XREFs of PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14074D0DC
 * Callers:
 *     PopPowerAggregatorEngageModernStandby @ 0x14074D254 (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x140750188 (PopNetSetConnectivityConstraint.c)
 *     PopPdcEngagePhases @ 0x140750B68 (PopPdcEngagePhases.c)
 *     PopIsRemoteDesktopEnabled @ 0x140AB9514 (PopIsRemoteDesktopEnabled.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14074D0DC
 * Reason: Hex-Rays returned no pseudocode for 0x14074D0DC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014074D0DC: mov     [rsp+arg_8], rbx
 * 000000014074D0E1: mov     [rsp+arg_10], rbp
 * 000000014074D0E6: push    rsi
 * 000000014074D0E7: push    rdi
 * 000000014074D0E8: push    r12
 * 000000014074D0EA: push    r14
 * 000000014074D0EC: push    r15
 * 000000014074D0EE: sub     rsp, 20h
 * 000000014074D0F2: mov     bpl, cl
 * 000000014074D0F5: mov     esi, 3Ah ; ':'
 * 000000014074D0FA: call    PopAcquirePolicyLock
 * 000000014074D0FF: mov     r12b, cs:PopNetBIRequestActive
 * 000000014074D106: call    PopIsRemoteDesktopEnabled
 * 000000014074D10B: mov     edi, cs:dword_140F0B758
 * 000000014074D111: xor     r14b, r14b
 * 000000014074D114: mov     r15b, al
 * 000000014074D117: test    edi, edi
 * 000000014074D119: jz      short loc_14074D174
 * 000000014074D11B: test    bpl, bpl
 * 000000014074D11E: jnz     short loc_14074D174
 * 000000014074D120: cmp     edi, 2
 * 000000014074D123: jnz     loc_14074D1B6
 * 000000014074D129: test    r12b, r12b
 * 000000014074D12C: lea     ebx, [rsi-39h]
 * 000000014074D12F: setnz   al
 * 000000014074D132: test    r15b, r15b
 * 000000014074D135: jz      short loc_14074D15C
 * 000000014074D137: cmp     cs:dword_140E67438, ebx
 * 000000014074D13D: movzx   eax, al
 * 000000014074D140: cmovz   eax, ebx
 * 000000014074D143: cmp     cs:dword_140F0B70C, 0
 * 000000014074D14A: jnz     short loc_14074D15C
 * 000000014074D14C: cmp     cs:dword_140E6742C, ebx
 * 000000014074D152: jz      short loc_14074D1B6
 * 000000014074D154: cmp     cs:dword_140E67430, ebx
 * 000000014074D15A: jz      short loc_14074D1B6
 * 000000014074D15C: test    al, al
 * 000000014074D15E: jnz     short loc_14074D1B6
 * 000000014074D160: mov     ecx, 7
 * 000000014074D165: mov     r14b, bl
 * 000000014074D168: call    PopNetSetConnectivityConstraint
 * 000000014074D16D: mov     esi, 32h ; '2'
 * 000000014074D172: jmp     short loc_14074D197
 * 000000014074D174: mov     ebx, 1
 * 000000014074D179: mov     ecx, ebx
 * 000000014074D17B: call    PopNetSetConnectivityConstraint
 * 000000014074D180: mov     al, bpl
 * 000000014074D183: mov     r14b, bl
 * 000000014074D186: neg     al
 * 000000014074D188: sbb     ecx, ecx
 * 000000014074D18A: and     ecx, 0FFFFFFE0h
 * 000000014074D18D: add     esi, ecx
 * 000000014074D18F: and     esi, 0FFFFFFF7h
 * 000000014074D192: test    bpl, bpl
 * 000000014074D195: jnz     short loc_14074D19F
 * 000000014074D197: cmp     cs:dword_140F0B75C, ebx
 * 000000014074D19D: jnz     short loc_14074D1B6
 * 000000014074D19F: mov     ecx, cs:PopAggressiveStandbyAppliedActions
 * 000000014074D1A5: and     esi, 0FFFFFFEDh
 * 000000014074D1A8: xor     ecx, cs:PopAggressiveStandbyEnabledActions
 * 000000014074D1AE: and     ecx, ebx
 * 000000014074D1B0: xor     cs:PopAggressiveStandbyAppliedActions, ecx
 * 000000014074D1B6: mov     ecx, cs:PopAggressiveStandbyAppliedActions
 * 000000014074D1BC: xor     ecx, cs:PopAggressiveStandbyEnabledActions
 * 000000014074D1C2: and     ecx, 4
 * 000000014074D1C5: mov     cs:PopIdleWakeSkippingEnabled, 0
 * 000000014074D1CC: xor     cs:PopAggressiveStandbyAppliedActions, ecx
 * 000000014074D1D2: mov     ecx, cs:PopTimerRebaseThresholdRegValue
 * 000000014074D1D8: mov     cs:KeTimerRebaseThresholdOnDripsExit, ecx
 * 000000014074D1DE: test    r14b, r14b
 * 000000014074D1E1: jz      short loc_14074D1EA
 * 000000014074D1E3: or      byte ptr cs:word_140E27A98+1, 2
 * 000000014074D1EA: test    r15b, r15b
 * 000000014074D1ED: jz      short loc_14074D1F6
 * 000000014074D1EF: or      byte ptr cs:word_140E27A98+1, 8
 * 000000014074D1F6: test    r12b, r12b
 * 000000014074D1F9: jz      short loc_14074D202
 * 000000014074D1FB: or      byte ptr cs:word_140E27A98+1, 10h
 * 000000014074D202: mov     al, byte ptr cs:word_140E27A98+1
 * 000000014074D208: and     dil, 3
 * 000000014074D20C: and     cs:dword_140E27AE0, 0
 * 000000014074D213: and     al, 9Fh
 * 000000014074D215: shl     dil, 5
 * 000000014074D219: or      dil, al
 * 000000014074D21C: mov     cs:dword_140E279E4, ecx
 * 000000014074D222: mov     byte ptr cs:word_140E27A98+1, dil
 * 000000014074D229: call    PopReleasePolicyLock
 * 000000014074D22E: mov     ecx, esi
 * 000000014074D230: call    PopPdcEngagePhases
 * 000000014074D235: mov     rbx, [rsp+48h+arg_8]
 * 000000014074D23A: mov     rbp, [rsp+48h+arg_10]
 * 000000014074D23F: add     rsp, 20h
 * 000000014074D243: pop     r15
 * 000000014074D245: pop     r14
 * 000000014074D247: pop     r12
 * 000000014074D249: pop     rdi
 * 000000014074D24A: pop     rsi
 * 000000014074D24B: retn
 */
