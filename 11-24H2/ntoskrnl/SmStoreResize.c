/*
 * XREFs of SmStoreResize @ 0x140798DCC
 * Callers:
 *     SmcStoreResize @ 0x14079DE40 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1406AAB30 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x140798C6C (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x140798DCC
 * Reason: Hex-Rays returned no pseudocode for 0x140798DCC
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140798DCC: mov     [rsp-8+arg_0], rbx
 * 0000000140798DD1: push    rbp
 * 0000000140798DD2: mov     rbp, rsp
 * 0000000140798DD5: sub     rsp, 60h
 * 0000000140798DD9: mov     rbx, [rbp+arg_20]
 * 0000000140798DDD: lea     rax, [rbp+var_30]
 * 0000000140798DE1: xor     r10d, r10d
 * 0000000140798DE4: mov     [rbp+var_10], rax
 * 0000000140798DE8: neg     [rbp+arg_28]
 * 0000000140798DEB: mov     [rbp+arg_18], r10
 * 0000000140798DEF: sbb     eax, eax
 * 0000000140798DF1: mov     [rbp+var_8], 18h
 * 0000000140798DF9: and     eax, 100h
 * 0000000140798DFE: mov     [rbp+SystemInformation], 1
 * 0000000140798E05: add     eax, 6
 * 0000000140798E08: mov     [rbp+var_14], 11h
 * 0000000140798E0F: mov     [rbp+var_30], eax
 * 0000000140798E12: lea     r11d, [r10+18h]
 * 0000000140798E16: mov     eax, [rbx]
 * 0000000140798E18: mov     [rbp+var_28], eax
 * 0000000140798E1B: mov     [rbp+var_24], r10d
 * 0000000140798E1F: mov     [rbp+var_2C], r8d
 * 0000000140798E23: mov     [rbp+var_20], r9
 * 0000000140798E27: test    edx, edx
 * 0000000140798E29: jnz     short loc_140798E53
 * 0000000140798E2B: mov     rcx, [rcx+810h]; DeviceObject
 * 0000000140798E32: lea     rax, [rbp+arg_18]
 * 0000000140798E36: mov     [rsp+60h+var_38], rax; __int64
 * 0000000140798E3B: lea     r8, [rbp+var_30]
 * 0000000140798E3F: mov     r9d, r11d
 * 0000000140798E42: mov     [rsp+60h+var_40], r11d; int
 * 0000000140798E47: mov     edx, 2281CCh
 * 0000000140798E4C: call    SmStorePhysicalRequestIssue
 * 0000000140798E51: jmp     short loc_140798E69
 * 0000000140798E53: cmp     edx, 1
 * 0000000140798E56: jnz     short loc_140798E72
 * 0000000140798E58: mov     r8d, r11d; SystemInformationLength
 * 0000000140798E5B: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 0000000140798E5F: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 0000000140798E64: call    ZwSetSystemInformation
 * 0000000140798E69: mov     ecx, eax
 * 0000000140798E6B: mov     eax, [rbp+var_28]
 * 0000000140798E6E: mov     [rbx], eax
 * 0000000140798E70: jmp     short loc_140798E77
 * 0000000140798E72: mov     ecx, 0C000000Dh
 * 0000000140798E77: mov     rbx, [rsp+60h+arg_0]
 * 0000000140798E7C: mov     eax, ecx
 * 0000000140798E7E: add     rsp, 60h
 * 0000000140798E82: pop     rbp
 * 0000000140798E83: retn
 */
