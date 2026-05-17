/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x180107390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlGetCompressionWorkSpaceSize @ 0x180107390
 * Reason: Hex-Rays returned no pseudocode for 0x180107390
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180107390: movzx   eax, cx
 * 0000000180107393: mov     r9d, 0FFh
 * 0000000180107399: and     ax, r9w
 * 000000018010739D: cmp     ax, 2
 * 00000001801073A1: jb      short loc_1801073C6
 * 00000001801073A3: cmp     ax, 8; switch with an invalid jump table
 * 00000001801073A7: ja      short def_1801073C1; jumptable 00000001801073C1 default case
 * 00000001801073A9: movzx   eax, ax
 * 00000001801073AC: lea     r10, RtlWorkSpaceProcs
 * 00000001801073B3: mov     r9d, 0FF00h
 * 00000001801073B9: and     cx, r9w
 * 00000001801073BD: mov     rax, ds:(RtlWorkSpaceProcs - 180173FC0h)[r10+rax*8]
 * 00000001801073C1: jmp     _guard_dispatch_icall$thunk$10345483385596137414; switch jump
 * 00000001801073C6: mov     eax, 0C000000Dh
 * 00000001801073CB: retn
 * 00000001801073CD: mov     eax, 0C000025Fh; jumptable 00000001801073C1 default case
 * 00000001801073D2: retn
 */
