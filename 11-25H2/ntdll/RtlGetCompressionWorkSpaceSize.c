/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x180109CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for RtlGetCompressionWorkSpaceSize @ 0x180109CA0
 * Reason: Hex-Rays returned no pseudocode for 0x180109CA0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180109CA0: movzx   eax, cx
 * 0000000180109CA3: mov     r9d, 0FFh
 * 0000000180109CA9: and     ax, r9w
 * 0000000180109CAD: cmp     ax, 2
 * 0000000180109CB1: jb      short loc_180109CD6
 * 0000000180109CB3: cmp     ax, 8; switch with an invalid jump table
 * 0000000180109CB7: ja      short def_180109CD1; jumptable 0000000180109CD1 default case
 * 0000000180109CB9: movzx   eax, ax
 * 0000000180109CBC: lea     r10, RtlWorkSpaceProcs
 * 0000000180109CC3: mov     r9d, 0FF00h
 * 0000000180109CC9: and     cx, r9w
 * 0000000180109CCD: mov     rax, ds:(RtlWorkSpaceProcs - 180175FE0h)[r10+rax*8]
 * 0000000180109CD1: jmp     _guard_dispatch_icall$thunk$10345483385596137414; switch jump
 * 0000000180109CD6: mov     eax, 0C000000Dh
 * 0000000180109CDB: retn
 * 0000000180109CDD: mov     eax, 0C000025Fh; jumptable 0000000180109CD1 default case
 * 0000000180109CE2: retn
 */
