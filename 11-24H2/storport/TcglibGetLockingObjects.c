/*
 * XREFs of TcglibGetLockingObjects @ 0x14013C208
 * Callers:
 *     RaidGetTcgLockingObjects @ 0x14008CDB4 (RaidGetTcgLockingObjects.c)
 * Callees:
 *     TcglibpCheckContext @ 0x14013D280 (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x14013D2CC (TcglibpCheckError.c)
 *     TcglibpGetLockingObjectInfo @ 0x14013DE10 (TcglibpGetLockingObjectInfo.c)
 */

/*
 * Hex-Rays decompilation failed for TcglibGetLockingObjects @ 0x14013C208
 * Reason: Hex-Rays returned no pseudocode for 0x14013C208
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014013C208: mov     rax, rsp
 * 000000014013C20B: mov     [rax+8], rbx
 * 000000014013C20F: mov     [rax+10h], rbp
 * 000000014013C213: mov     [rax+18h], rsi
 * 000000014013C217: mov     [rax+20h], rdi
 * 000000014013C21B: push    r12
 * 000000014013C21D: push    r14
 * 000000014013C21F: push    r15
 * 000000014013C221: sub     rsp, 20h
 * 000000014013C225: xor     ebx, ebx
 * 000000014013C227: mov     r15, r9
 * 000000014013C22A: mov     r14d, r8d
 * 000000014013C22D: mov     rdi, rdx
 * 000000014013C230: mov     rbp, rcx
 * 000000014013C233: test    r8d, r8d
 * 000000014013C236: jz      short loc_14013C2A4
 * 000000014013C238: test    r9, r9
 * 000000014013C23B: jz      short loc_14013C2A4
 * 000000014013C23D: call    TcglibpCheckContext
 * 000000014013C242: mov     r10d, eax
 * 000000014013C245: test    eax, eax
 * 000000014013C247: jnz     short loc_14013C2AA
 * 000000014013C249: lea     r12d, [rbx+1]
 * 000000014013C24D: lock cmpxchg [rdx+1Ch], r12d
 * 000000014013C253: cmp     eax, r12d
 * 000000014013C256: jnz     short loc_14013C260
 * 000000014013C258: mov     r10d, 80000011h
 * 000000014013C25E: jmp     short loc_14013C2AA
 * 000000014013C260: mov     esi, ebx
 * 000000014013C262: cmp     esi, r14d
 * 000000014013C265: jnb     short loc_14013C29F
 * 000000014013C267: mov     eax, esi
 * 000000014013C269: mov     r8d, esi
 * 000000014013C26C: mov     rdx, rdi
 * 000000014013C26F: mov     rcx, rbp
 * 000000014013C272: lea     r9, [rax+rax*4]
 * 000000014013C276: shl     r9, 4
 * 000000014013C27A: add     r9, r15
 * 000000014013C27D: call    TcglibpGetLockingObjectInfo
 * 000000014013C282: mov     r10d, eax
 * 000000014013C285: test    eax, eax
 * 000000014013C287: js      short loc_14013C28E
 * 000000014013C289: add     esi, r12d
 * 000000014013C28C: jmp     short loc_14013C262
 * 000000014013C28E: mov     r8d, eax
 * 000000014013C291: mov     rdx, rdi
 * 000000014013C294: mov     rcx, rbp
 * 000000014013C297: call    TcglibpCheckError
 * 000000014013C29C: mov     r10d, eax
 * 000000014013C29F: xchg    ebx, [rdi+1Ch]
 * 000000014013C2A2: jmp     short loc_14013C2AA
 * 000000014013C2A4: mov     r10d, 0C000000Dh
 * 000000014013C2AA: mov     rbx, [rsp+38h+arg_0]
 * 000000014013C2AF: mov     eax, r10d
 * 000000014013C2B2: mov     rbp, [rsp+38h+arg_8]
 * 000000014013C2B7: mov     rsi, [rsp+38h+arg_10]
 * 000000014013C2BC: mov     rdi, [rsp+38h+arg_18]
 * 000000014013C2C1: add     rsp, 20h
 * 000000014013C2C5: pop     r15
 * 000000014013C2C7: pop     r14
 * 000000014013C2C9: pop     r12
 * 000000014013C2CB: retn
 */
