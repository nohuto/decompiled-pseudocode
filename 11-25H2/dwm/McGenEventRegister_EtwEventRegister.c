/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x140004B28
 * Callers:
 *     wWinMain @ 0x140002790 (wWinMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x140004B28
 * Reason: Hex-Rays returned no pseudocode for 0x140004B28
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140004B28: sub     rsp, 28h
 * 0000000140004B2C: xor     eax, eax
 * 0000000140004B2E: cmp     [r9], rax
 * 0000000140004B31: jnz     short loc_140004B46
 * 0000000140004B33: lea     rdx, McGenControlCallbackV2
 * 0000000140004B3A: call    cs:__imp_EtwEventRegister
 * 0000000140004B41: nop     dword ptr [rax+rax+00h]
 * 0000000140004B46: add     rsp, 28h
 * 0000000140004B4A: retn
 */
