/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1801022C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlGetCompressionWorkSpaceSize @ 0x1801022C0
 * Reason: Hex-Rays returned no pseudocode for 0x1801022C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001801022C0: movzx   eax, cx
 * 00000001801022C3: mov     r9d, 0FFh
 * 00000001801022C9: and     ax, r9w
 * 00000001801022CD: cmp     ax, 2
 * 00000001801022D1: jb      short loc_1801022F6
 * 00000001801022D3: cmp     ax, 8; switch with an invalid jump table
 * 00000001801022D7: ja      short def_1801022F1; jumptable 00000001801022F1 default case
 * 00000001801022D9: movzx   eax, ax
 * 00000001801022DC: lea     r10, RtlWorkSpaceProcs
 * 00000001801022E3: mov     r9d, 0FF00h
 * 00000001801022E9: and     cx, r9w
 * 00000001801022ED: mov     rax, ds:(RtlWorkSpaceProcs - 180172FC0h)[r10+rax*8]
 * 00000001801022F1: jmp     _guard_dispatch_icall$thunk$10345483385596137414; switch jump
 * 00000001801022F6: mov     eax, 0C000000Dh
 * 00000001801022FB: retn
 * 00000001801022FD: mov     eax, 0C000025Fh; jumptable 00000001801022F1 default case
 * 0000000180102302: retn
 */
