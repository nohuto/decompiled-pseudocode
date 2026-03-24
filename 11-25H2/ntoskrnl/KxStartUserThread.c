/*
 * XREFs of KxStartUserThread @ 0x1406A0EA0
 * Callers:
 *     KyStartUserThread @ 0x1406A0B40 (KyStartUserThread.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x1406A0EA0 (KxStartUserThread.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

/*
 * Hex-Rays decompilation failed for KxStartUserThread @ 0x1406A0EA0
 * Reason: Hex-Rays returned no pseudocode for 0x1406A0EA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A0EA0: sub     rsp, 138h
 * 00000001406A0EA7: lea     rax, [rsp+138h+var_38]
 * 00000001406A0EAF: movaps  [rsp+138h+var_108], xmm6
 * 00000001406A0EB4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406A0EB9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406A0EBF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406A0EC5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406A0ECB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406A0ED0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406A0ED5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406A0EDA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406A0EDF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406A0EE4: mov     [rax], rbx
 * 00000001406A0EE7: mov     [rax+8], rdi
 * 00000001406A0EEB: mov     [rax+10h], rsi
 * 00000001406A0EEF: mov     [rax+18h], r12
 * 00000001406A0EF3: mov     [rax+20h], r13
 * 00000001406A0EF7: mov     [rax+28h], r14
 * 00000001406A0EFB: mov     [rax+30h], r15
 * 00000001406A0EFF: nop
 * 00000001406A0F00: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A0F07: jz      short loc_1406A0F0C
 * 00000001406A0F09: stac
 * 00000001406A0F0C: mov     ecx, 1
 * 00000001406A0F11: mov     cr8, rcx
 * 00000001406A0F15: mov     rdx, [rsp+138h+var_138]
 * 00000001406A0F19: mov     rcx, [rsp+138h+var_130]
 * 00000001406A0F1E: mov     rax, [rsp+138h+var_128]
 * 00000001406A0F23: call    _guard_dispatch_icall_no_overrides
 * 00000001406A0F28: lea     rcx, [rsp+138h+var_38]
 * 00000001406A0F30: movaps  xmm6, [rsp+138h+var_108]
 * 00000001406A0F35: movaps  xmm7, [rsp+138h+var_F8]
 * 00000001406A0F3A: movaps  xmm8, [rsp+138h+var_E8]
 * 00000001406A0F40: movaps  xmm9, [rsp+138h+var_D8]
 * 00000001406A0F46: movaps  xmm10, [rsp+138h+var_C8]
 * 00000001406A0F4C: movaps  xmm11, xmmword ptr [rcx-80h]
 * 00000001406A0F51: movaps  xmm12, xmmword ptr [rcx-70h]
 * 00000001406A0F56: movaps  xmm13, xmmword ptr [rcx-60h]
 * 00000001406A0F5B: movaps  xmm14, xmmword ptr [rcx-50h]
 * 00000001406A0F60: movaps  xmm15, xmmword ptr [rcx-40h]
 * 00000001406A0F65: mov     rbx, [rcx]
 * 00000001406A0F68: mov     rdi, [rcx+8]
 * 00000001406A0F6C: mov     rsi, [rcx+10h]
 * 00000001406A0F70: mov     r12, [rcx+18h]
 * 00000001406A0F74: mov     r13, [rcx+20h]
 * 00000001406A0F78: mov     r14, [rcx+28h]
 * 00000001406A0F7C: mov     r15, [rcx+30h]
 * 00000001406A0F80: cli
 * 00000001406A0F81: test    byte ptr [rbp+0F0h], 1
 * 00000001406A0F88: jz      loc_1406A1283
 * 00000001406A0F8E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A0F95: jz      short loc_1406A0F9A
 * 00000001406A0F97: stac
 * 00000001406A0F9A: mov     rcx, gs:188h
 * 00000001406A0FA3: test    byte ptr [rcx+0C2h], 3
 * 00000001406A0FAA: jz      short loc_1406A0FC7
 * 00000001406A0FAC: mov     ecx, 1
 * 00000001406A0FB1: mov     cr8, rcx
 * 00000001406A0FB5: sti
 * 00000001406A0FB6: call    KiInitiateUserApc
 * 00000001406A0FBB: cli
 * 00000001406A0FBC: mov     ecx, 0
 * 00000001406A0FC1: mov     cr8, rcx
 * 00000001406A0FC5: jmp     short loc_1406A0F9A
 * 00000001406A0FC7: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A0FCC: test    eax, eax
 * 00000001406A0FCE: mov     rax, [rbp-50h]
 * 00000001406A0FD2: jnz     short loc_1406A0F9A
 * 00000001406A0FD4: test    byte ptr gs:860h, 2
 * 00000001406A0FDD: jz      short loc_1406A0FE6
 * 00000001406A0FDF: xor     ecx, ecx
 * 00000001406A0FE1: call    KiUpdateStibpPairing
 * 00000001406A0FE6: mov     rcx, gs:188h
 * 00000001406A0FEF: test    dword ptr [rcx], 8000000h
 * 00000001406A0FF5: jz      short loc_1406A0FFC
 * 00000001406A0FF7: call    KiRestoreSetContextState
 * 00000001406A0FFC: mov     rcx, gs:188h
 * 00000001406A1005: test    dword ptr [rcx], 10000h
 * 00000001406A100B: jz      short loc_1406A1021
 * 00000001406A100D: test    byte ptr [rcx+2], 1
 * 00000001406A1011: jz      short loc_1406A1021
 * 00000001406A1013: call    KiCopyCounters
 * 00000001406A1018: mov     rcx, gs:188h
 * 00000001406A1021: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A1025: cmp     word ptr [rbp+80h], 0
 * 00000001406A102D: jz      short loc_1406A1034
 * 00000001406A102F: call    KiRestoreDebugRegisterState
 * 00000001406A1034: mov     rcx, gs:188h
 * 00000001406A103D: bt      dword ptr [rcx+74h], 16h
 * 00000001406A1042: jnb     short loc_1406A106E
 * 00000001406A1044: xor     ecx, ecx
 * 00000001406A1046: rdsspq  rcx
 * 00000001406A104B: mov     r8, gs:9D28h
 * 00000001406A1054: add     r8, 8
 * 00000001406A1058: cmp     rcx, r8
 * 00000001406A105B: jnz     short loc_1406A106E
 * 00000001406A105D: mov     rcx, gs:9D20h
 * 00000001406A1066: rstorssp qword ptr [rcx]
 * 00000001406A106A: saveprevssp
 * 00000001406A106E: mov     byte ptr gs:85Eh, 0
 * 00000001406A1077: movzx   eax, word ptr gs:86Ch
 * 00000001406A1080: cmp     gs:866h, ax
 * 00000001406A1089: jz      short loc_1406A109D
 * 00000001406A108B: mov     gs:866h, ax
 * 00000001406A1094: mov     ecx, 48h ; 'H'
 * 00000001406A1099: xor     edx, edx
 * 00000001406A109B: wrmsr
 * 00000001406A109D: btr     word ptr gs:858h, 2
 * 00000001406A10A8: jnb     short loc_1406A10B8
 * 00000001406A10AA: mov     eax, 1
 * 00000001406A10AF: xor     edx, edx
 * 00000001406A10B1: mov     ecx, 49h ; 'I'
 * 00000001406A10B6: wrmsr
 * 00000001406A10B8: btr     word ptr gs:858h, 5
 * 00000001406A10C3: jnb     loc_1406A1200
 * 00000001406A10C9: call    loc_1406A11DC
 * 00000001406A10CE: add     rsp, 8
 * 00000001406A10D2: call    loc_1406A11E5
 * 00000001406A10D7: add     rsp, 8
 * 00000001406A10DB: call    loc_1406A10CE
 * 00000001406A10E0: add     rsp, 8
 * 00000001406A10E4: call    loc_1406A10D7
 * 00000001406A10E9: add     rsp, 8
 * 00000001406A10ED: call    loc_1406A10E0
 * 00000001406A10F2: add     rsp, 8
 * 00000001406A10F6: call    loc_1406A10E9
 * 00000001406A10FB: add     rsp, 8
 * 00000001406A10FF: call    loc_1406A10F2
 * 00000001406A1104: add     rsp, 8
 * 00000001406A1108: call    loc_1406A10FB
 * 00000001406A110D: add     rsp, 8
 * 00000001406A1111: call    loc_1406A1104
 * 00000001406A1116: add     rsp, 8
 * 00000001406A111A: call    loc_1406A110D
 * 00000001406A111F: add     rsp, 8
 * 00000001406A1123: call    loc_1406A1116
 * 00000001406A1128: add     rsp, 8
 * 00000001406A112C: call    loc_1406A111F
 * 00000001406A1131: add     rsp, 8
 * 00000001406A1135: call    loc_1406A1128
 * 00000001406A113A: add     rsp, 8
 * 00000001406A113E: call    loc_1406A1131
 * 00000001406A1143: add     rsp, 8
 * 00000001406A1147: call    loc_1406A113A
 * 00000001406A114C: add     rsp, 8
 * 00000001406A1150: call    loc_1406A1143
 * 00000001406A1155: add     rsp, 8
 * 00000001406A1159: call    loc_1406A114C
 * 00000001406A115E: add     rsp, 8
 * 00000001406A1162: call    loc_1406A1155
 * 00000001406A1167: add     rsp, 8
 * 00000001406A116B: call    loc_1406A115E
 * 00000001406A1170: add     rsp, 8
 * 00000001406A1174: call    loc_1406A1167
 * 00000001406A1179: add     rsp, 8
 * 00000001406A117D: call    loc_1406A1170
 * 00000001406A1182: add     rsp, 8
 * 00000001406A1186: call    loc_1406A1179
 * 00000001406A118B: add     rsp, 8
 * 00000001406A118F: call    loc_1406A1182
 * 00000001406A1194: add     rsp, 8
 * 00000001406A1198: call    loc_1406A118B
 * 00000001406A119D: add     rsp, 8
 * 00000001406A11A1: call    loc_1406A1194
 * 00000001406A11A6: add     rsp, 8
 * 00000001406A11AA: call    loc_1406A119D
 * 00000001406A11AF: add     rsp, 8
 * 00000001406A11B3: call    loc_1406A11A6
 * 00000001406A11B8: add     rsp, 8
 * 00000001406A11BC: call    loc_1406A11AF
 * 00000001406A11C1: add     rsp, 8
 * 00000001406A11C5: call    loc_1406A11B8
 * 00000001406A11CA: add     rsp, 8
 * 00000001406A11CE: call    loc_1406A11C1
 * 00000001406A11D3: add     rsp, 8
 * 00000001406A11D7: call    loc_1406A11CA
 * 00000001406A11DC: add     rsp, 8
 * 00000001406A11E0: call    loc_1406A11D3
 * 00000001406A11E5: add     rsp, 8
 * 00000001406A11E9: mov     eax, 0DADAh
 * 00000001406A11EE: test    byte ptr gs:85Ch, 8
 * 00000001406A11F7: jz      short loc_1406A1200
 * 00000001406A11F9: mov     al, 20h ; ' '
 * 00000001406A11FB: incsspq rax
 * 00000001406A1200: test    word ptr gs:858h, 100h
 * 00000001406A120B: jz      short loc_1406A1219
 * 00000001406A120D: xor     eax, eax
 * 00000001406A120F: xor     edx, edx
 * 00000001406A1211: mov     ecx, 1
 * 00000001406A1216: div     rcx
 * 00000001406A1219: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A121D: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A1221: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A1225: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A1229: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A122D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A1231: mov     r11, [rbp-20h]
 * 00000001406A1235: mov     r10, [rbp-28h]
 * 00000001406A1239: mov     r9, [rbp-30h]
 * 00000001406A123D: mov     r8, [rbp-38h]
 * 00000001406A1241: mov     rdx, [rbp-40h]
 * 00000001406A1245: mov     rcx, [rbp-48h]
 * 00000001406A1249: mov     rax, [rbp-50h]
 * 00000001406A124D: mov     rsp, rbp
 * 00000001406A1250: mov     rbp, [rbp+0D8h]
 * 00000001406A1257: add     rsp, 0E8h
 * 00000001406A125E: test    cs:KiKvaShadow, 1
 * 00000001406A1265: jz      short loc_1406A126C
 * 00000001406A1267: jmp     KiKernelExit
 * 00000001406A126C: test    word ptr gs:858h, 200h
 * 00000001406A1277: jz      short loc_1406A127E
 * 00000001406A1279: verw    [rsp-1E8h+arg_200]
 * 00000001406A127E: swapgs
 * 00000001406A1281: iretq
 * 00000001406A1283: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A1287: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A128B: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A128F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A1293: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A1297: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A129B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A129F: mov     r11, [rbp-20h]
 * 00000001406A12A3: mov     r10, [rbp-28h]
 * 00000001406A12A7: mov     r9, [rbp-30h]
 * 00000001406A12AB: mov     r8, [rbp-38h]
 * 00000001406A12AF: mov     rdx, [rbp-40h]
 * 00000001406A12B3: mov     rcx, [rbp-48h]
 * 00000001406A12B7: mov     rax, [rbp-50h]
 * 00000001406A12BB: mov     rsp, rbp
 * 00000001406A12BE: mov     rbp, [rbp+0D8h]
 * 00000001406A12C5: add     rsp, 0E8h
 * 00000001406A12CC: iretq
 */
