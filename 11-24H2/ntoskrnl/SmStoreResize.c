/*
 * XREFs of SmStoreResize @ 0x140798CBC
 * Callers:
 *     SmcStoreResize @ 0x14079DD30 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1406A9B90 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x140798B5C (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x140798CBC
 * Reason: Hex-Rays returned no pseudocode for 0x140798CBC
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140798CBC: mov     [rsp-8+arg_0], rbx
 * 0000000140798CC1: push    rbp
 * 0000000140798CC2: mov     rbp, rsp
 * 0000000140798CC5: sub     rsp, 60h
 * 0000000140798CC9: mov     rbx, [rbp+arg_20]
 * 0000000140798CCD: lea     rax, [rbp+var_30]
 * 0000000140798CD1: xor     r10d, r10d
 * 0000000140798CD4: mov     [rbp+var_10], rax
 * 0000000140798CD8: neg     [rbp+arg_28]
 * 0000000140798CDB: mov     [rbp+arg_18], r10
 * 0000000140798CDF: sbb     eax, eax
 * 0000000140798CE1: mov     [rbp+var_8], 18h
 * 0000000140798CE9: and     eax, 100h
 * 0000000140798CEE: mov     [rbp+var_18], 1
 * 0000000140798CF5: add     eax, 6
 * 0000000140798CF8: mov     [rbp+var_14], 11h
 * 0000000140798CFF: mov     [rbp+var_30], eax
 * 0000000140798D02: lea     r11d, [r10+18h]
 * 0000000140798D06: mov     eax, [rbx]
 * 0000000140798D08: mov     [rbp+var_28], eax
 * 0000000140798D0B: mov     [rbp+var_24], r10d
 * 0000000140798D0F: mov     [rbp+var_2C], r8d
 * 0000000140798D13: mov     [rbp+var_20], r9
 * 0000000140798D17: test    edx, edx
 * 0000000140798D19: jnz     short loc_140798D43
 * 0000000140798D1B: mov     rcx, [rcx+810h]; DeviceObject
 * 0000000140798D22: lea     rax, [rbp+arg_18]
 * 0000000140798D26: mov     [rsp+60h+var_38], rax; __int64
 * 0000000140798D2B: lea     r8, [rbp+var_30]
 * 0000000140798D2F: mov     r9d, r11d
 * 0000000140798D32: mov     [rsp+60h+var_40], r11d; int
 * 0000000140798D37: mov     edx, 2281CCh
 * 0000000140798D3C: call    SmStorePhysicalRequestIssue
 * 0000000140798D41: jmp     short loc_140798D59
 * 0000000140798D43: cmp     edx, 1
 * 0000000140798D46: jnz     short loc_140798D62
 * 0000000140798D48: mov     r8d, r11d
 * 0000000140798D4B: lea     rdx, [rbp+var_18]
 * 0000000140798D4F: mov     ecx, 6Dh ; 'm'
 * 0000000140798D54: call    ZwSetSystemInformation
 * 0000000140798D59: mov     ecx, eax
 * 0000000140798D5B: mov     eax, [rbp+var_28]
 * 0000000140798D5E: mov     [rbx], eax
 * 0000000140798D60: jmp     short loc_140798D67
 * 0000000140798D62: mov     ecx, 0C000000Dh
 * 0000000140798D67: mov     rbx, [rsp+60h+arg_0]
 * 0000000140798D6C: mov     eax, ecx
 * 0000000140798D6E: add     rsp, 60h
 * 0000000140798D72: pop     rbp
 * 0000000140798D73: retn
 */
