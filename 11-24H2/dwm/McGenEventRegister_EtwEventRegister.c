/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x1400045F0
 * Callers:
 *     wWinMain @ 0x1400029B0 (wWinMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x1400045F0
 * Reason: Hex-Rays returned no pseudocode for 0x1400045F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400045F0: sub     rsp, 28h
 * 00000001400045F4: xor     eax, eax
 * 00000001400045F6: cmp     [r9], rax
 * 00000001400045F9: jnz     short loc_14000460E
 * 00000001400045FB: lea     rdx, McGenControlCallbackV2
 * 0000000140004602: call    cs:__imp_EtwEventRegister
 * 0000000140004609: nop     dword ptr [rax+rax+00h]
 * 000000014000460E: add     rsp, 28h
 * 0000000140004612: retn
 */
