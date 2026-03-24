/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x1406AAEE0
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x1406AAEA0 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x1406AAEE0
 * Reason: Hex-Rays returned no pseudocode for 0x1406AAEE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AAEE0: test    dword ptr [rbp+0F8h], 200h
 * 00000001406AAEEA: jz      short loc_1406AAEED
 * 00000001406AAEEC: sti
 * 00000001406AAEED: call    KiDispatchException
 * 00000001406AAEF2: cli
 * 00000001406AAEF3: mov     rsp, [rsp+arg_38]
 * 00000001406AAEF8: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
