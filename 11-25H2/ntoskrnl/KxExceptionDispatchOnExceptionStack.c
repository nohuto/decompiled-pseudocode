/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x14069FC10
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x14069FBD0 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x14069FC10
 * Reason: Hex-Rays returned no pseudocode for 0x14069FC10
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014069FC10: test    dword ptr [rbp+0F8h], 200h
 * 000000014069FC1A: jz      short loc_14069FC1D
 * 000000014069FC1C: sti
 * 000000014069FC1D: call    KiDispatchException
 * 000000014069FC22: cli
 * 000000014069FC23: mov     rsp, [rsp+arg_38]
 * 000000014069FC28: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
