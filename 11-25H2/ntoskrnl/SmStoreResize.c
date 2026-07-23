/*
 * XREFs of SmStoreResize @ 0x1407898EC
 * Callers:
 *     SmcStoreResize @ 0x14078E970 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x14069E8C0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14078978C (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x1407898EC
 * Reason: Hex-Rays returned no pseudocode for 0x1407898EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407898EC: mov     [rsp-8+arg_0], rbx
 * 00000001407898F1: push    rbp
 * 00000001407898F2: mov     rbp, rsp
 * 00000001407898F5: sub     rsp, 60h
 * 00000001407898F9: mov     rbx, [rbp+arg_20]
 * 00000001407898FD: lea     rax, [rbp+var_30]
 * 0000000140789901: xor     r10d, r10d
 * 0000000140789904: mov     [rbp+var_10], rax
 * 0000000140789908: neg     [rbp+arg_28]
 * 000000014078990B: mov     [rbp+arg_18], r10
 * 000000014078990F: sbb     eax, eax
 * 0000000140789911: mov     [rbp+var_8], 18h
 * 0000000140789919: and     eax, 100h
 * 000000014078991E: mov     [rbp+SystemInformation], 1
 * 0000000140789925: add     eax, 6
 * 0000000140789928: mov     [rbp+var_14], 11h
 * 000000014078992F: mov     [rbp+var_30], eax
 * 0000000140789932: lea     r11d, [r10+18h]
 * 0000000140789936: mov     eax, [rbx]
 * 0000000140789938: mov     [rbp+var_28], eax
 * 000000014078993B: mov     [rbp+var_24], r10d
 * 000000014078993F: mov     [rbp+var_2C], r8d
 * 0000000140789943: mov     [rbp+var_20], r9
 * 0000000140789947: test    edx, edx
 * 0000000140789949: jnz     short loc_140789973
 * 000000014078994B: mov     rcx, [rcx+810h]; DeviceObject
 * 0000000140789952: lea     rax, [rbp+arg_18]
 * 0000000140789956: mov     [rsp+60h+var_38], rax; __int64
 * 000000014078995B: lea     r8, [rbp+var_30]
 * 000000014078995F: mov     r9d, r11d
 * 0000000140789962: mov     [rsp+60h+var_40], r11d; int
 * 0000000140789967: mov     edx, 2281CCh
 * 000000014078996C: call    SmStorePhysicalRequestIssue
 * 0000000140789971: jmp     short loc_140789989
 * 0000000140789973: cmp     edx, 1
 * 0000000140789976: jnz     short loc_140789992
 * 0000000140789978: mov     r8d, r11d; SystemInformationLength
 * 000000014078997B: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 000000014078997F: mov     ecx, 6Dh ; 'm'; SystemInformationClass
 * 0000000140789984: call    ZwSetSystemInformation
 * 0000000140789989: mov     ecx, eax
 * 000000014078998B: mov     eax, [rbp+var_28]
 * 000000014078998E: mov     [rbx], eax
 * 0000000140789990: jmp     short loc_140789997
 * 0000000140789992: mov     ecx, 0C000000Dh
 * 0000000140789997: mov     rbx, [rsp+60h+arg_0]
 * 000000014078999C: mov     eax, ecx
 * 000000014078999E: add     rsp, 60h
 * 00000001407899A2: pop     rbp
 * 00000001407899A3: retn
 */
