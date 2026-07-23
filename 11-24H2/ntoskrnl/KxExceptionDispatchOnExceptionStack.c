/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x1406ABE80
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x1406ABE40 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x1406ABE80
 * Reason: Hex-Rays returned no pseudocode for 0x1406ABE80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406ABE80: test    dword ptr [rbp+0F8h], 200h
 * 00000001406ABE8A: jz      short loc_1406ABE8D
 * 00000001406ABE8C: sti
 * 00000001406ABE8D: call    KiDispatchException
 * 00000001406ABE92: cli
 * 00000001406ABE93: mov     rsp, [rsp+arg_38]
 * 00000001406ABE98: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
